import rclpy
from rclpy.node import Node

class LogDemo(Node):
    def __init__(self):
        # call super() in the constructor in order to initialize the Node object
        # the parameter we pass is the node name
        super().__init__('logger_example')
        # Logger level configuration
    
        #rclpy.logging.set_logger_level('logger_example', rclpy.logging.LoggingSeverity.DEBUG)
        #rclpy.logging.set_logger_level('logger_example', rclpy.logging.LoggingSeverity.INFO)
        #rclpy.logging.set_logger_level('logger_example', rclpy.logging.LoggingSeverity.WARN)
        #rclpy.logging.set_logger_level('logger_example', rclpy.logging.LoggingSeverity.ERROR)
        rclpy.logging.set_logger_level('logger_example', rclpy.logging.LoggingSeverity.FATAL)
        # create a timer sending two parameters:
        # - the duration between 2 callbacks (0.2 seeconds)
        # - the timer function (timer_callback)
        self.create_timer(0.2, self.timer_callback)
        
    def timer_callback(self):
        # print a ROS2 log debugging
        self.get_logger().debug("No shinobi nearby!")
        # print a ROS2 log info
        self.get_logger().info("Moe yo Byakugan! Kore ga watashi no nindō yo")
        # print a ROS2 log warning
        self.get_logger().warn("Pain attacked the village!")
        # print a ROS2 log error
        self.get_logger().error("I have no more chakra!")
        # print a ROS2 log fatal
        self.get_logger().fatal("Don't die naruto-kun!")
        
def main(args=None):
    # initialize the ROS communication
    rclpy.init(args=args)
    # declare the node constructor
    log_demo = LogDemo()
    # pause the program execution, waits for a request to kill the node (ctrl+c)
    rclpy.spin(log_demo)
    # shutdown the ROS communication
    rclpy.shutdown()

if __name__ == '__main__':
    main()
