
import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    namespace = LaunchConfiguration('namespace')
    params_file = LaunchConfiguration('params_file')

    default_params = os.path.join(get_package_share_directory('rover_nav'), 'config', 'rover.params.yaml')

    return LaunchDescription([
        DeclareLaunchArgument('namespace', default_value='', description='Namespace for rover navigation nodes'),
        DeclareLaunchArgument('params_file', default_value=default_params, description='Common rover parameters YAML file'),

        Node(package='rover_nav', executable='drive_node', name='drive_node', namespace=namespace, parameters=[params_file]),
        Node(package='rover_nav', executable='odom_node', name='odom_node', namespace=namespace, output='screen', parameters=[params_file]),
        Node(package='rover_nav', executable='navigator_node', name='navigator_node', namespace=namespace, parameters=[params_file]),
    ])
