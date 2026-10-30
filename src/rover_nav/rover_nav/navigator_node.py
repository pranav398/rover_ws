import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse
from rclpy.task import Future
from mars_msgs.action import DriveTo
from mars_msgs.srv import SetMode
from mars_msgs.msg import RoverOdometry
from mars_msgs.msg import Monitor
import math

class NavigatorNode(Node):
    def __init__(self):
        super().__init__('navigator_node')
        self.actionServer = ActionServer(self, DriveTo, 'rover/drive_to', execute_callback=self.actionExec, cancel_callback=self.actionCan)
        self.sub1 = self.create_subscription(RoverOdometry, 'rover/odom', self.updatePos, 10)
        self.sub2 = self.create_subscription(Monitor, 'rover/monitor', self.updateMonitor, 10)
        self.pos = RoverOdometry()
        self.vel = RoverOdometry()
        self.monitor = Monitor()
        self.service_client = self.create_client(SetMode, 'rover/set_mode')
        self.pub = self.create_publisher(RoverOdometry, 'cmd_vel', 10)
        self.declare_parameter('odom_hz', 1)
        self.declare_parameter('speed_limit', 2.0)
        self.speed = float(self.get_parameter('speed_limit').value)

    async def sendServiceRequest(self, mode):
        if not self.service_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().error('SetMode service unavailable')
            return None

        request = SetMode.Request()
        request.mode = mode

        return await self.service_client.call_async(request)

    def updatePos(self, msg):
        self.pos.x = msg.x
        self.pos.y = msg.y
        self.pos.heading = msg.heading

    def updateMonitor(self, msg):
        self.monitor.battery = msg.battery
        self.monitor.temp = msg.temp
        self.monitor.health = msg.health

    def actionCan(self, goal_handle):
        self.get_logger().info("Cancellation Requested")
        return CancelResponse.ACCEPT

    def velPub(self):
        self.pub.publish(self.vel)

    async def stop_and_hold(self):
        self.vel.velocity.linear.x = 0.0
        self.vel.velocity.angular.z = 0.0
        self.velPub()
        response = await self.sendServiceRequest("HOLD")
        if response is None or not response.accepted:
            self.get_logger().error("Failed to restore HOLD mode")

    async def sleep_for(self, duration):
        future = Future(executor=self.executor)
        timer = self.create_timer(duration, lambda: future.set_result(None))
        try:
            await future
        finally:
            self.destroy_timer(timer)

    def sign(self, x):
        return float((x > 0) - (x < 0))

    async def actionExec(self, goal_handle):
        target_x = goal_handle.request.x
        target_y = goal_handle.request.y
        tolerance = goal_handle.request.tolerance

        result = DriveTo.Result()
        feedback = DriveTo.Feedback()

        initial_battery = self.monitor.battery
        updateModeMsg = await self.sendServiceRequest("MISSION")
        left = math.sqrt((self.pos.x-target_x)**2 + (self.pos.y-target_y)**2)

        if updateModeMsg is None or not updateModeMsg.accepted:
            result.reached = False
            result.final_error = left
            result.battery_used = initial_battery - self.monitor.battery

            goal_handle.abort()
            return result

        period = 1.0/self.get_parameter('odom_hz').value

        while left >= tolerance:
            if goal_handle.is_cancel_requested:
                await self.stop_and_hold()

                result.reached = False
                result.final_error = left
                result.battery_used = initial_battery - self.monitor.battery

                goal_handle.canceled()
                return result

            if self.monitor.health in ("CRITICAL", "OVERHEAT"):
                await self.stop_and_hold()
                result.reached = False
                result.final_error = left
                result.battery_used = initial_battery - self.monitor.battery

                goal_handle.abort()
                return result

            target_heading = math.atan2(target_y - self.pos.y, target_x - self.pos.x)
            diff = (target_heading - self.pos.heading + math.pi) % (2.0 * math.pi) - math.pi
            if abs(diff) >= 0.05:
                self.vel.velocity.linear.x = 0.0
                self.vel.velocity.angular.z = self.sign(diff)
                self.velPub()
                await self.sleep_for(abs(diff))
                self.vel.velocity.angular.z = 0.0
                self.velPub()

            max_speed = self.get_parameter('speed_limit').value
            self.speed = float(min(max_speed, left / period))
            
            self.vel.velocity.linear.x = self.speed
            self.velPub()

            await self.sleep_for(period)

            self.vel.velocity.linear.x = 0.0
            self.velPub()

            left = math.sqrt((self.pos.x-target_x)**2 + (self.pos.y-target_y)**2)
            feedback.distance_remaining = left
            feedback.battery_pct = self.monitor.battery

            goal_handle.publish_feedback(feedback)

        await self.stop_and_hold()
        goal_handle.succeed()
        result.reached = True
        result.final_error = left
        result.battery_used = initial_battery - self.monitor.battery
        return result
 
def main():
    rclpy.init()
    node = NavigatorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()
