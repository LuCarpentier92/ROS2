import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
from rclpy.qos import ReliabilityPolicy, QoSProfile

class Exercise_31(Node):

    def __init__(self):
        super().__init__('simple_publisher')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.subscriber = self.create_subscription(LaserScan, "/scan", self.laser_callback, QoSProfile(depth = 10, reliability = ReliabilityPolicy.RELIABLE))
        self.timer_period = 0.5
        self.laser = 0
        self.timer = self.create_timer(self.timer_period, self.move)
        self.cmd = Twist()

    def laser_callback(self, msg):
        self.laser = msg.ranges[-1]
        
    def move(self):
        self.get_logger().info('J ai recu: "%s"' % str(self.laser))
        
        # logique de deplacement 

        if self.laser > 5:
            self.cmd.linear.x = 0.5
            self.cmd.angular.z = 0.5
        elif self.laser >= 0.50:
            self.cmd.linear.x = 0.1
            self.cmd.angular.z = 0.0
        else :
            self.cmd.linear.x = 0.0
            self.angular.z = 0.0

        self.publisher_.publish(self.cmd)

def main(args=None):
    
    rclpy.init(args=args)
    exercise_31 = Exercise_31()
    rclpy.spin(exercise_31)
    exercise_31.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
