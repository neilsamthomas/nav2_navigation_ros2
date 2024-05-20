from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='project_localization',
            executable='spots_to_file',
            output='screen'),
    ])