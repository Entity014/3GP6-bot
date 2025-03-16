import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    ld = LaunchDescription()
    node_webcam_ai = Node(
        package="robot_core",
        executable="webcam_ai.py",
    )
    node_webcam_line = Node(
        package="robot_core",
        executable="webcam_line.py",
    )
    node_microros = Node(
        package="micro_ros_agent",
        executable="micro_ros_agent",
        output="screen",
        arguments=["serial", "--dev", "/dev/ttyACM0"],
    )

    ld.add_action(node_webcam_ai)
    ld.add_action(node_webcam_line)
    ld.add_action(node_microros)

    return ld
