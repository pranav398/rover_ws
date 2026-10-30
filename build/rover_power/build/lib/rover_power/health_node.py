from std_msgs.msg import Float32MultiArray, String
import rclpy
from rclpy.node import Node
from rclpy.qos import (QoSProfile, HistoryPolicy, ReliabilityPolicy, DurabilityPolicy)

class HealthNode(Node):
    def __init__(self):
        super().__init__('health_node')
        qos= QoSProfile(history=HistoryPolicy.KEEP_LAST, depth=1, reliability=ReliabilityPolicy.RELIABLE, durability=DurabilityPolicy.TRANSIENT_LOCAL)
        self.sub = self.create_subscription(Float32MultiArray, 'rover/power', self.on_power, 10)
        self.pub = self.create_publisher(String, 'rover/health', qos)
        self.prevMessage = None

    def on_power(self, msg):
        battery  = msg.data[0]
        temp = msg.data[1]
        if battery>40:
            msg = "HEALTHY"
        elif battery>15:
            msg = "WARNING"
        else:
            msg = "CRITICAL"

        if self.prevMessage=="WARNING" and 40<battery<=43:
            msg = "WARNING"
        if temp > 70:
            msg = "OVERHEAT"

        health = String()
        health.data = msg

        self.pub.publish(health)
        self.get_logger().info(f'health={msg}')
        self.prevMessage = msg

def main(): 
    rclpy.init() 
    node=HealthNode() 
    try: 
        rclpy.spin(node) 
    except KeyboardInterrupt: 
        pass 
    finally: 
        node.destroy_node() 
        rclpy.try_shutdown() 
        
