from std_msgs.msg import Float32MultiArray, String
import rclpy
from rclpy.node import Node
from mars_msgs.msg import Monitor

class MonitorNode(Node):
    def __init__(self):
        super().__init__('monitor_node')
        self.sub1 = self.create_subscription(Float32MultiArray, 'rover/power', self.callback_power, 10)
        self.sub2 = self.create_subscription(String, 'rover/health', self.callback_health, 10)
        self.lastHealthTime = self.get_clock().now()
        self.lastPowerTime = self.get_clock().now()
        self.declare_parameter('publish_hz', 2)
        self.timer = self.create_timer(1.0/self.get_parameter('publish_hz').value, self.slate)

        self.prevMsg = Monitor()
        self.prevMsg.battery = None
        self.prevMsg.temp = None
        self.prevMsg.health = None

        self.currMsg = Monitor()
        self.currMsg.battery = None
        self.currMsg.temp = None
        self.currMsg.health = None

        self.pub = self.create_publisher(Monitor, 'rover/monitor', 10)

    def callback_power(self, msg):
        self.currMsg.battery = msg.data[0]
        self.currMsg.temp = msg.data[1]

        self.lastPowerTime = self.get_clock().now()
        if self.currMsg.battery != self.prevMsg.battery or self.currMsg.temp != self.prevMsg.temp:
            self.printlog()
            self.prevMsg.battery = self.currMsg.battery
            self.prevMsg.temp = self.currMsg.temp

    def callback_health(self, msg):
        self.currMsg.health = msg.data
        self.lastHealthTime = self.get_clock().now()
        if self.prevMsg.health != self.currMsg.health:
            self.printlog()
            self.prevMsg.health = self.currMsg.health

    def printlog(self):
        if (self.get_clock().now() - self.lastHealthTime).nanoseconds/1e9 <= 3.0/self.get_parameter('publish_hz').value and (self.get_clock().now() - self.lastPowerTime).nanoseconds/1e9 <= 3.0/self.get_parameter('publish_hz').value:
            if self.currMsg.health != None and self.currMsg.temp != None and self.currMsg.health != None:
                self.get_logger().info(f"[ROVER] battery {self.currMsg.battery:.1f}% | temp {self.currMsg.temp:.1f} C | health {self.currMsg.temp}")
                self.pub.publish(self.currMsg)

    def slate(self):
        if (self.get_clock().now() - self.lastHealthTime).nanoseconds/1e9 > 3.0/self.get_parameter('publish_hz').value and (self.get_clock().now() - self.lastPowerTime).nanoseconds/1e9 > 3.0/self.get_parameter('publish_hz').value:
            self.get_logger().error("STALE")

def main():
    rclpy.init()
    node=MonitorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()
