# Project Overview: Implementing Nav2 Stack in ROS2 Humble

This project demonstrates the implementation of the Nav2 stack in ROS2 Humble, consisting of three main components: mapping, localization, and path planning.

## Components

### 1. `project_mapping`
- **Description:** This module is responsible for creating a detailed map of the environment.
- **Features:**
  - Utilizes advanced SLAM techniques to generate accurate maps.
  - Essential for robot navigation and environment understanding.

### 2. `project_localization`
- **Description:** This module handles the localization of the robot within the mapped environment.
- **Features:**
  - Implements AMCL (Adaptive Monte Carlo Localization) to determine the robot's position.
  - Includes a Python script to record the `amcl_pose` of the robot and store it in a `.yaml` file for future reference.

### 3. `project_path_planning`
- **Description:** This module assigns goal positions to the robot based on data stored in a `.yaml` file.
- **Features:**
  - Integrates with the ROS2 Navigation Stack to create optimal paths.
  - Use this to give the robot a goal position labeled as corner1: ros2 run project_path_planning go_to_pose --ros-args --params-file /home/user/ros2_ws/src/project_localization/config/spots.yaml -p spot_name:=corner1
