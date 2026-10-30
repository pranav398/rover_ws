
import os
from launch import LaunchDescription
from launch.actions import (DeclareLaunchArgument, IncludeLaunchDescription)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    namespace = LaunchConfiguration('namespace')
    params_file = LaunchConfiguration('params_file')

    default_params = os.path.join(get_package_share_directory('rover_nav'), 'config','rover.params.yaml')
    nav_launch_file = os.path.join(get_package_share_directory('rover_nav'), 'launch', 'nav.launch.py')
    power_launch_file = os.path.join(get_package_share_directory('rover_power'), 'launch', 'power.launch.py')

    return LaunchDescription([
        DeclareLaunchArgument('namespace', default_value='', description='Namespace for all rover nodes'),
        DeclareLaunchArgument('params_file', default_value=default_params, description='Common rover parameters YAML file'),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(nav_launch_file),
            launch_arguments={'namespace': namespace, 'params_file': params_file}.items()
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(power_launch_file),
            launch_arguments={'namespace': namespace, 'params_file': params_file}.items()
        ),
    ])
