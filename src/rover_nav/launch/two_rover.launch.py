
import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    rover_launch_file = PathJoinSubstitution([FindPackageShare('rover_nav'), 'launch', 'rover.launch.py'])

    return LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(rover_launch_file),
            launch_arguments={'namespace': 'r1',}.items()
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(rover_launch_file),
            launch_arguments={'namespace': 'r2',}.items()
        ),
    ])
