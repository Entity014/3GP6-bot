import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    ld = LaunchDescription()
    joystick_config_path = PathJoinSubstitution(
        [FindPackageShare("robot_core"), "config", "joystick.yaml"]
    )
    joy = Node(
        package="robot_core", executable="joy.py", parameters=[joystick_config_path]
    )
    ps4_driver = Node(
        package="ds4_driver",
        executable="ds4_driver_node.py",
    )

    ld.add_action(ps4_driver)
    ld.add_action(joy)

    return ld
