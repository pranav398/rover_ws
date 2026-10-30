import rclpy
import yaml
from ament_index_python.packages import get_package_share_directory
from action_msgs.msg import GoalStatus
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.parameter import Parameter
from mars_msgs.action import DriveTo
import os


class MissionClient(Node):
    def __init__(self, parameter_overrides):
        super().__init__('mission_client', parameter_overrides=parameter_overrides)
        self.client = ActionClient(self, DriveTo, 'rover/drive_to')
        self.declare_parameter('shelter_x', 5.0)
        self.declare_parameter('shelter_y', 2.0)
        self.declare_parameter('tolerance', 0.3)

    def send_goal(self):
        if not self.client.wait_for_server(timeout_sec=10.0):
            self.get_logger().error('DriveTo action server unavailable')
            return

        goal = DriveTo.Goal()
        goal.x = self.get_parameter('shelter_x').value
        goal.y = self.get_parameter('shelter_y').value
        goal.tolerance = self.get_parameter('tolerance').value

        future = self.client.send_goal_async(goal, feedback_callback=self.feedback)
        rclpy.spin_until_future_complete(self, future)
        self.goal_handle = future.result()
        if not self.goal_handle.accepted:
            self.get_logger().error('Goal rejected')
            return

        self.get_logger().info('Goal accepted')
        result_future = self.goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        response = result_future.result()
        if response.status != GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().warning(f'Goal finished with status {response.status}')
        self.get_logger().info(
            f'Result: status={response.status}, reached={response.result.reached}, '
            f'final_error={response.result.final_error:.2f} m, '
            f'battery_used={response.result.battery_used:.2f}%'
        )

    def feedback(self, msg):
        self.get_logger().info(f'Remaining: {msg.feedback.distance_remaining:.2f} m')

    def cancel(self):
        if hasattr(self, 'goal_handle') and self.goal_handle.accepted:
            future = self.goal_handle.cancel_goal_async()
            rclpy.spin_until_future_complete(self, future, timeout_sec=2.0)
            if future.done() and future.result().goals_canceling:
                self.get_logger().info('Goal cancellation accepted')
            else:
                self.get_logger().warning('Goal cancellation was not confirmed')


def main(args=None):
    rclpy.init(args=args)
    config_path = os.path.join(get_package_share_directory('rover_nav'), 'config','rover.params.yaml',)
    with open(config_path, encoding='utf-8') as config_file:
        config = yaml.safe_load(config_file)
    client_parameters = config['mission_client']['ros__parameters']
    parameter_overrides = [
        Parameter(name=name, value=value)
        for name, value in client_parameters.items()
    ]

    node = MissionClient(parameter_overrides)
    try:
        node.send_goal()
    except KeyboardInterrupt:
        node.cancel()
    finally:
        node.destroy_node()
        rclpy.try_shutdown()
    
