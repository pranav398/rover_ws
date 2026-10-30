import random 
import rclpy 
from rclpy.node import Node 
from std_msgs.msg import Float32MultiArray 
from mars_msgs.msg import RoverOdometry

class PowerNode(Node): 
    def __init__(self): 
        super().__init__('power_node') 
        self.declare_parameter('publish_hz', 2)
        self.declare_parameter('drain_coeff', 0.6)
        self.vel = 0
        self.currentDrain = 0

        self.sub = self.create_subscription(RoverOdometry, 'cmd_vel', self.updateVelocity, 10)
        self.pub = self.create_publisher(Float32MultiArray, 'rover/power', 10)
        self.timer=self.create_timer(1.0/self.get_parameter('publish_hz').value ,self.tick) #2Hzfornow
        self.timer2 = self.create_timer(1, self.changeBattery)
        self.battery=100.0 
        self.temperature=20.0 
        
    def tick(self): 
        changeTemp = random.uniform(-0.5,0.5)
        if self.temperature + changeTemp > 80 or self.temperature + changeTemp < -20:
            self.temperature -= changeTemp
        else:
            self.temperature += changeTemp
        msg = Float32MultiArray() 
        msg.data=[self.battery, self.temperature, self.currentDrain] 
        self.pub.publish(msg) 
        self.get_logger().info(f'battery={self.battery:.1f}% temp={self.temperature:.1f}C current drain={self.currentDrain}%/sec') 

    def updateVelocity(self, msg):
        self.vel = msg.velocity.linear.x

    def changeBattery(self):
        deduction =  0.05 + self.get_parameter('drain_coeff').value*self.vel
        if 0<= self.temperature <= 60:
            self.currentDrain = deduction
        else:
            self.currentDrain = 1.5*deduction
        if(self.battery - self.currentDrain >=0):
            self.battery -= self.currentDrain
        
def main(): 
    rclpy.init() 
    node=PowerNode() 
    try: 
        rclpy.spin(node) 
    except KeyboardInterrupt: 
        pass 
    finally: 
        node.destroy_node() 
        rclpy.try_shutdown()