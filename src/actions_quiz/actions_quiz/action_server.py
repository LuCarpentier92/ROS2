import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from actions_quiz_msg.msg import String
from action_quiz_msg.action import Distance

from geometry_msgs.msg import Twist
import time
class MyActionServer(Node):

    def __init__(self):
        super().__init__('my_action_server')
        self._action_server = ActionServer(self, Distance, 'distance_as',self.execute_callback) 
        self.cmd = Twist()
        self.publisher_ = self.create_publisher(String, '/total_distance', 10)
    
    
    
    async def execute_callback(self, goal_handle):
        
        self.get_logger().info('Executing goal...')

        feedback_msg = Distance.Feedback()
        feedback_msg.feedback = "Moving to the left left left..."
        distance = 0.0

        for i in range(1, goal_handle.request.secs):
            # Update distance and publish feedback
            distance += 0.1  # Simulated distance increment
            feedback_msg.current_distance = distance
            self._total_distance_publisher.publish(String(data=str(distance)))
            goal_handle.publish_feedback(feedback_msg)
            await self._action_server.publish_feedback(feedback_msg)
            # Sleep for 1 second
            await self._action_server.wait_for_goal(rclpy.duration.Duration(seconds=1))

        result = Distance.Result()
        result.total_distance = distance
        result.success = True
        return result

def main(args=None):
    rclpy.init(args=args)

    my_action_server = MyActionServer()

    rclpy.spin(my_action_server)


if __name__ == '__main__':
    main()
