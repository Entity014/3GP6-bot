import os
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    ExecuteProcess,
    IncludeLaunchDescription,
)
from launch.substitutions import LaunchConfiguration, Command, PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    use_sim_time = True

    ekf_config_path = PathJoinSubstitution(
        [FindPackageShare("robot_description"), "config", "ekf.yaml"]
    )

    world_path = PathJoinSubstitution(
        [FindPackageShare("robot_description"), "worlds", "world.world"]
    )

    description_launch_path = PathJoinSubstitution(
        [FindPackageShare("robot_description"), "launch", "description.launch.py"]
    )

    return LaunchDescription(
        [
            DeclareLaunchArgument(
                name="world", default_value=world_path, description="Gazebo world"
            ),
            ExecuteProcess(
                cmd=[
                    "gazebo",
                    "--verbose",
                    "-s",
                    "libgazebo_ros_factory.so",
                    "-s",
                    "libgazebo_ros_init.so",
                    LaunchConfiguration("world"),
                ],
                output="screen",
            ),
            Node(
                package="gazebo_ros",
                executable="spawn_entity.py",
                name="urdf_spawner",
                output="screen",
                arguments=[
                    "-topic",
                    "robot_description",
                    "-entity",
                    "3gp6_bot",
                    "-x",
                    "-0.47",
                    "-y",
                    "-1.48",
                    "-z",
                    "0.1",
                    "-Y",
                    "-1.57",
                ],
            ),
            Node(
                package="robot_localization",
                executable="ekf_node",
                name="ekf_filter_node",
                output="screen",
                parameters=[{"use_sim_time": use_sim_time}, ekf_config_path],
                remappings=[("odometry/filtered", "odom")],
            ),
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(description_launch_path),
                launch_arguments={
                    "use_sim_time": str(use_sim_time),
                    "publish_joints": "true",
                }.items(),
            ),
        ]
    )
