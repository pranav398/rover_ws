import rclpy
from rclpy.node import Node
from mars_msgs.msg import RoverOdometry
import math

class SqaureScript(Node):
    def __init__(self):
        super().__init__('square_script')
        self.i = 0
        self.pub = self.create_publisher(RoverOdometry, 'cmd_vel', 10)
        self.msg = RoverOdometry()
        self.msg.velocity.linear.x = 0.0
        self.msg.velocity.angular.z = 0.0
        self.sqaureTimer = self.create_timer(1, self.square1)
        self.timer = self.create_timer(0.1, self.publish)

    def publish(self):
            self.pub.publish(self.msg)
            self.get_logger().info(f'Published v_x={self.msg.velocity.linear.x} | w_z={self.msg.velocity.angular.z}')

    def square1(self):
        self.msg.velocity.linear.x = 0.5
        self.msg.velocity.angular.z = 0.0
        self.destroy_timer(self.sqaureTimer)
        self.i += 1
        self.sqaureTimer = self.create_timer(4, self.square2)

    def square2(self):
        self.msg.velocity.linear.x = 0.0
        self.destroy_timer(self.sqaureTimer)
        if self.i<4:
            self.msg.velocity.angular.z = math.pi/4
            self.sqaureTimer = self.create_timer(2, self.square1)

def main():
    rclpy.init()
    node = SqaureScript()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()
