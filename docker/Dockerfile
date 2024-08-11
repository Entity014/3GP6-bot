# ROS distribution to use
ARG ROS_DISTRO=humble

# Use the official ROS2 Docker image as the base image
FROM osrf/ros:${ROS_DISTRO}-desktop as base
ENV ROS_DISTRO=${ROS_DISTRO}
ENV HOME=/home
SHELL ["/bin/bash", "-c"]

# Install basic apt packages
RUN apt-get update && apt-get install -y --no-install-recommends \
    git libcanberra-gtk-module libcanberra-gtk3-module fuse3 libfuse2 libqt5svg5-dev \
    python3-pip python3-opencv python3-tk python3-pyqt5.qtwebengine nano gedit tree

# Install Cartographer packages
RUN apt install -y ros-${ROS_DISTRO}-cartographer ros-${ROS_DISTRO}-cartographer-ros

# Install Nav2 packages
RUN apt install -y ros-${ROS_DISTRO}-navigation2 ros-${ROS_DISTRO}-nav2-bringup 

# Install Gazebo Simulation packages
RUN apt install -y ros-${ROS_DISTRO}-turtlebot3-gazebo

# Install Robot Localization packages
RUN apt install -y ros-${ROS_DISTRO}-robot-localization

# Install additional Python modules
RUN pip3 install matplotlib transforms3d numpy evdev

# Use Cyclone DDS as middleware
RUN apt-get update && apt-get install -y --no-install-recommends \
    ros-${ROS_DISTRO}-rmw-cyclonedds-cpp
ENV RMW_IMPLEMENTATION=rmw_cyclonedds_cpp

RUN touch /home/.bashrc
RUN echo 'source /opt/ros/$ROS_DISTRO/setup.bash' >> /home/.bashrc \
    && echo 'source /home/robot_ws/install/setup.bash' >> /home/.bashrc

RUN apt-get install -y ros-${ROS_DISTRO}-xacro ros-${ROS_DISTRO}-controller-manager ros-${ROS_DISTRO}-ros2-control \ 
    ros-${ROS_DISTRO}-ros2-controllers ros-${ROS_DISTRO}-gazebo-ros2-control ros-${ROS_DISTRO}-joint-state-publisher \
    ros-${ROS_DISTRO}-tf-transformations ros-${ROS_DISTRO}-imu-tools ros-${ROS_DISTRO}-joy
RUN apt-get upgrade -y

# Remove display warnings
RUN mkdir /tmp/runtime-root
ENV XDG_RUNTIME_DIR "/tmp/runtime-root"
RUN chmod -R 0700 /tmp/runtime-root
ENV NO_AT_BRIDGE 1

WORKDIR /opt
RUN git clone https://github.com/naoki-mizuno/ds4drv --branch devel \
    && cd ds4drv \
    && python3 setup.py install

WORKDIR /home/robot_ws
