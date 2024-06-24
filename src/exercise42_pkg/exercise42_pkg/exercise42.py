# import the SetBool module from std_servs Service interface
from std_srvs.srv import SetBool
# import the Twist module from geometry_msgs messages interface
from geometry_msgs.msg import Twist
# import the ROS2 Python client libraries
import rclpy
from rclpy.node import Node


class Service(Node):

    def __init__(self):
        super().__init__('service_moving_right')
        self.srv = self.create_service(SetBool, 'moving_right', self.SetBool_callback)
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.cmd = Twist()    
        

    def SetBool_callback(self, request, response):

        if request.data == True:
            
            self.cmd.linear.x = 0.3
            self.cmd.angular.z =-0.3
            self.publisher_.publish(self.cmd)
            response.success = True
            response.message = 'MOVING TO THE RIGHT RIGHT RIGHT!'

        else:

            self.cmd.linear.x = 0.0
            self.cmd.angular.z =0.0
            
            self.publisher_.publish(self.cmd)
            response.success = False

            response.message = 'It is time to stop!'       
            
        return response


def main(args=None):
    # initialize the ROS communication
    rclpy.init(args=args)
    # declare the node constructor
    moving_right_service = Service()
    # pause the program execution, waits for a request to kill the node (ctrl+c)
    rclpy.spin(moving_right_service)
    # shutdown the ROS communication
    rclpy.shutdown()


if __name__ == '__main__':
    main()
