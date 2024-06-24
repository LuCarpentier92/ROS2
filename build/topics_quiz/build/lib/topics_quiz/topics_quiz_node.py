import rclpy
import numpy as np
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Quaternion
from rclpy.qos import ReliabilityPolicy, QoSProfile


class Topics_quiz_node(Node):

    def __init__(self):
        super().__init__('topics_quiz_node')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.subscriber = self.create_subscription(Odometry, 'odom',self.odom_callback, 10)
        self.timer = 0.5
        self.first_yaw = None
        self.rotated = False

    def odom_callback(self, msg):
        orientation = msg.pose.pose.orientation
        quaternion = (orientation.x, orientation.y, orientation.z, orientation.w)
        _, _, yaw = self.euler_from_quaternion(quaternion)

        if self.first_yaw is None:
            self.first_yaw = yaw
            self.target_yaw = self.first_yaw + 1.57

        if not self.rotated:
            distance = abs(yaw - self.target_yaw)
            if distance > 0.1:
                self.do_rotate()
            else:
                self.stop_rotation()
            
    def go_forward(self):
        twist = Twist()
        twist.linear.x = 0.5
        self.publisher_.publish(twist)

    def do_rotate(self):
        twist = Twist()
        twist.angular.z = self.target_yaw
        self.publisher_.publish(twist)
        self.rotated = True

    def stop_rotation(self):
        twist = Twist()
        twist.angular.z = 0
        self.publisher_.publish(twist)

    def euler_from_quaternion(self, quaternion):
        x = quaternion[0]
        y = quaternion[1]
        z = quaternion[2]
        w = quaternion[3]

        sinr_cosp = 2 * (w * x + y * z)
        cosr_cosp = 1 - 2 * (x * x + y * y)
        roll = np.arctan2(sinr_cosp, cosr_cosp)

        sinp = 2 * (w * y - z * x)
        pitch = np.arcsin(sinp)

        siny_cosp = 2 * (w * z + x * y)
        cosy_cosp = 1 - 2 * (y * y + z * z)
        yaw = np.arctan2(siny_cosp, cosy_cosp)

        return roll, pitch, yaw
            
def main(args=None):
    rclpy.init(args=args)
    topics_quiz_node = Topics_quiz_node()       
    rclpy.spin(topics_quiz_node)
    topics_quiz_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()