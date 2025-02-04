#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
from std_srvs.srv import Trigger
from ament_index_python.packages import get_package_share_directory
import os
from geometry_msgs.msg import Twist  # Import for velocity commands
from rclpy.duration import Duration
import time
from rclpy.executors import MultiThreadedExecutor

class FaceDetectorNode(Node):
    def __init__(self, image_topic_name = "/deepmind_robot1/deepmind_robot1_camera/image_raw"):
        super().__init__('face_detector_node')
        self._image_topic_name = image_topic_name
        self.subscription = self.create_subscription(
            Image,
            self._image_topic_name,
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.srv = self.create_service(Trigger, 'detect_faces', self.detect_faces_callback)
        self.bridge = CvBridge()
        self.last_image = None

        # Publisher for cmd_vel
        self.cmd_vel_publisher = self.create_publisher(Twist, '/cmd_vel', 10)

        package_name = 'basics_ros2_multithreading'  # Replace with your package name
        package_path = get_package_share_directory(package_name)
        haar_cascade_file_path = os.path.join(package_path,"scripts/haarcascade_frontalface.xml")
        print(f"Package Path: {haar_cascade_file_path}")


        self.face_cascade = cv2.CascadeClassifier(haar_cascade_file_path)

    def listener_callback(self, data):
        self.get_logger().info('Receiving video frame')
        self.last_image = self.bridge.imgmsg_to_cv2(data, 'bgr8')

    def detect_faces_callback(self, request, response):
        start_time = self.get_clock().now()
        duration_10_sec = Duration(seconds=10)
        

        face_found = False

        # We start moving the robot
        self.publish_velocity(linear=0.0, angular=-0.5)
        delta_time = self.get_clock().now() - start_time
        self.get_logger().info('Delta Time='+str(delta_time))

        while delta_time < duration_10_sec and not face_found:
            delta_time = self.get_clock().now() - start_time
            self.get_logger().info('Delta Time='+str(delta_time))

            if self.last_image is not None:
                self.get_logger().info("Image....")
                gray = cv2.cvtColor(self.last_image, cv2.COLOR_BGR2GRAY)
                self.get_logger().info("Faces Processing....")
                faces = self.face_cascade.detectMultiScale(gray, 1.1, 4)
                
                if len(faces) > 0:
                    self.publish_velocity(linear=0.0, angular=0.0)
                    self.get_logger().info("Face Found....")
                    face_found = True
                    self.get_logger().info('face_found='+str(face_found))
                    for (x, y, w, h) in faces:
                        cv2.rectangle(self.last_image, (x, y), (x+w, y+h), (255, 0, 0), 2)
                    
                    cv2.imshow("Faces", self.last_image)
                    cv2.waitKey(0)

                    break  # Exit the loop as a face is found
            self.get_logger().info("Sleep....")
            time.sleep(0.1)
            self.get_logger().info("End Sleep....")

        # We stop the robot
        self.publish_velocity(linear=0.0, angular=0.0)
        self.get_logger().info("End...")
        response.success = face_found
        response.message = 'Processed latest image'
        return response
    
    def publish_velocity(self, linear, angular):
        # Create Twist message
        vel_msg = Twist()
        vel_msg.linear.x = linear
        vel_msg.angular.z = angular
        # Publish the message
        self.cmd_vel_publisher.publish(vel_msg)




# REST OF THE CODE IS IDENTICAL


def main(args=None):
    rclpy.init(args=args)
    face_detector_node = FaceDetectorNode()
    
    # Use MultiThreadedExecutor
    executor = MultiThreadedExecutor(num_threads=2)
    executor.add_node(face_detector_node)
    
    try:
        executor.spin()
    finally:
        face_detector_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
