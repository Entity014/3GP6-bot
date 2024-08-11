#!/bin/bash
# Basic entrypoint for ROS / Colcon Docker containers

# Source ROS 2
source /opt/ros/${ROS_DISTRO}/setup.bash
echo "Sourced ROS 2 ${ROS_DISTRO}"

# Source Behaviortree Workspaces
source /home/robot_ws/install/setup.bash

# Execute the command passed into this entrypoint
exec "$@"
