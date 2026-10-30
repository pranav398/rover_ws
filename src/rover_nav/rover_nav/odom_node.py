import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import SetParametersResult
from mars_msgs.msg import RoverOdometry
import math

class OdomNode(Node):
    def __init__(self):
        super().__init__('odom_node')
        self.msg = RoverOdometry()
        self.msg.x = 0.0
        self.msg.y = 0.0
        self.msg.heading = 0.0
        self.dt = 0.05 # 20 Hertz
        self.declare_parameter('speed_limit', 2.0)
        self.declare_parameter('odom_hz', 1)
        self.pub = self.create_publisher(RoverOdometry, 'rover/odom', 10)
        self.sub = self.create_subscription(RoverOdometry, 'cmd_vel', self.updateVel, 10)
        self.timer1 = self.create_timer(self.dt, self.publish)
        self.timer2 = self.create_timer(self.dt, self.updatePos)
        self.add_on_set_parameters_callback(self.updateParams)

    def updateVel(self, msg):
        self.msg.velocity.linear.x = msg.velocity.linear.x
        self.msg.velocity.angular.z = msg.velocity.angular.z
        if self.msg.velocity.linear.x > self.get_parameter('speed_limit').value :
            self.get_logger().warning(f'VELOCITY MORE THAN {self.get_parameter('speed_limit').value} - {self.msg.velocity.linear.x:.1f}')

    def updatePos(self):
        v = self.msg.velocity.linear.x
        w = self.msg.velocity.angular.z

        if abs(w) == 0:
            self.msg.x += v * math.cos(self.msg.heading) * self.dt
            self.msg.y += v * math.sin(self.msg.heading) * self.dt
        else:
            self.msg.x += (v / w) * (math.sin(self.msg.heading + w * self.dt) - math.sin(self.msg.heading))
            self.msg.y -= (v / w) * (math.cos(self.msg.heading + w * self.dt) - math.cos(self.msg.heading))

        self.msg.heading += w * self.dt
        while self.msg.heading <= -math.pi:
            self.msg.heading += 2*math.pi
        while self.msg.heading > math.pi:
            self.msg.heading -= 2*math.pi
        self.msg.header.stamp = self.get_clock().now().to_msg()
        self.msg.header.frame_id = 'odom'

    def publish(self):
        self.pub.publish(self.msg)
        self.get_logger().info(f'x:{self.msg.x:.1f} | y:{self.msg.y:.1f} | heading:{self.msg.heading}')

    def updateParams(self, params):
        for param in params:
            if param.name == 'speed_limmsit':
                if param.value <= 0:
                    return SetParametersResult(successful=False, reason='speed_limit must be greater than 0')

            elif param.name == 'odom_hz':
                if param.value <= 0:
                    return SetParametersResult(successful=False,reason='odom_hz must be greater than 0')

        return SetParametersResult(successful=True)


def main():
    rclpy.init()
    node = OdomNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()