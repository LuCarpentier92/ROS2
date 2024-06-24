from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='logs_test',
            executable='logger_example',
            output='screen',
            emulate_tty=True
),
    ])