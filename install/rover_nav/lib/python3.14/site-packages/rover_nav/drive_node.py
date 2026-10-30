import rclpy
import random
from rclpy.node import Node
from std_msgs.msg import String
from mars_msgs.msg import RoverOdometry
from mars_msgs.srv import SetMode

class DriveNode(Node):
    def __init__(self):
        super().__init__('drive_node')
        self.pub = self.create_publisher(RoverOdometry, 'cmd_vel', 10)
        self.sub = self.create_subscription(String, 'rover/health', self.updateHealth, 10)
        self.timer1 = self.create_timer(3,self.genRandom)
        self.timer1on = True
        self.timer2 = self.create_timer(0.1, self.publish)
        self.timer2on = True
        self.msg = RoverOdometry()
        self.declare_parameter('max_speed', 3)
        self.max_speed = self.get_parameter('max_speed').value
        self.srv = self.create_service(SetMode, 'rover/set_mode', self.setmode)
        self.healthdata = None

    def publish(self):
        self.pub.publish(self.msg)
        self.get_logger().info(f'Published v_x={self.msg.velocity.linear.x} | w_z={self.msg.velocity.angular.z}')

    def genRandom(self):
        self.msg.velocity.linear.x = random.uniform(0,self.max_speed)
        self.msg.velocity.angular.z = random.uniform(-0.5, 0.5)

    def updateHealth(self, msg):
        if msg.data == 'HEALTHY':
            self.max_speed = self.get_parameter('max_speed').value
        elif msg.data == "WARNING":
            self.max_speed = self.get_parameter('max_speed').value / 2
        else:
            self.max_speed = 0.0
        self.healthdata = msg.data

    def setmode(self, request, response):
        if request.mode == "AUTO":
            if not self.timer1on:
                self.timer1 = self.create_timer(3,self.genRandom)
                self.timer1on = True
            if not self.timer2on:
                self.timer2 = self.create_timer(0.1, self.publish)
                self.timer2on = True
            
            response.accepted = True
        elif request.mode == "HOLD":
            if not self.timer2on:
                self.timer2 = self.create_timer(0.1, self.publish)
                self.timer2on = True
            if self.timer1on:
                self.destroy_timer(self.timer1)
                self.timer1on = False
            self.msg.velocity.linear.x = 0.0
            self.msg.velocity.angular.z = 0.0
            response.accepted = True

        elif request.mode == "MISSION":
            if self.healthdata in ["CRITICAL", "OVERHEAT"]:
                response.accepted = False
                response.reason = f"Battery Status - {self.healthdata}"
            else:
                if self.timer1on:
                    self.destroy_timer(self.timer1)
                    self.timer1on = False

                if self.timer2on:
                    self.destroy_timer(self.timer2)
                    self.timer2on = False
                response.accepted = True
        else:
            response.accepted = False
            response.reason = f"Unknown Command - {request.mode}"

        return response

def main():
    rclpy.init()
    node = DriveNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()