import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from nav2_msgs.action import NavigateToPose
from action_msgs.msg import GoalStatus
from geometry_msgs.msg import PointStamped
import yaml

class ToGoalActionClient(Node):
    def __init__(self):
        super().__init__('move_to_spot')
        self._action_client = ActionClient(self, NavigateToPose, '/navigate_to_pose')
        #self.declare_parameter('spot_name', rclpy.Parameter.Type.STRING)
        self.declare_parameters(
            namespace='',
            parameters=[
                ('spot_name', rclpy.Parameter.Type.STRING),
                ('corner1.position.x', rclpy.Parameter.Type.DOUBLE),
                ('corner1.position.y', rclpy.Parameter.Type.DOUBLE),
                ('corner1.position.z', rclpy.Parameter.Type.DOUBLE),
                ('corner2.position.x', rclpy.Parameter.Type.DOUBLE),
                ('corner2.position.y', rclpy.Parameter.Type.DOUBLE),
                ('corner2.position.z', rclpy.Parameter.Type.DOUBLE),
                ('pedestrian.position.x', rclpy.Parameter.Type.DOUBLE),
                ('pedestrian.position.y', rclpy.Parameter.Type.DOUBLE),
                ('pedestrian.position.z', rclpy.Parameter.Type.DOUBLE),
            ])
        param_spot_name = self.get_parameter('spot_name').value
        # self.declare_parameter('corner1.position.x', rclpy.Parameter.Type.D)
        # self.declare_parameter('corner1.position.y', None)
        # self.declare_parameter('corner1.position.z', None)

        # file_path = '/home/user/ros2_ws/src/project_localization/config/spots.yaml'
        # with open(file_path, 'r') as file:
        #     spot_data = yaml.safe_load(file)

        if param_spot_name == "corner1":
            spot_pos_x = self.get_parameter('corner1.position.x').value
            spot_pos_y = self.get_parameter('corner1.position.y').value
            spot_pos_z = self.get_parameter('corner1.position.z').value
        
        elif param_spot_name == "corner2":
            spot_pos_x = self.get_parameter('corner2.position.x').value
            spot_pos_y = self.get_parameter('corner2.position.y').value
            spot_pos_z = self.get_parameter('corner2.position.z').value
        
        elif param_spot_name == "pedestrian":
            spot_pos_x = self.get_parameter('pedestrian.position.x').value
            spot_pos_y = self.get_parameter('pedestrian.position.y').value
            spot_pos_z = self.get_parameter('pedestrian.position.z').value
        
        else:
            self.get_logger().info('Invalid label')

        self.send_goal(spot_pos_x, spot_pos_y, spot_pos_z)

    def send_goal(self, x, y, z):
        goal_msg= NavigateToPose.Goal()
        goal_msg.pose.header.frame_id = 'map'
        goal_msg.pose.pose.position.x = x
        goal_msg.pose.pose.position.y = y
        goal_msg.pose.pose.position.z = z

        self.get_logger().info('Waiting for action server')
        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self.get_logger().info('Goal Sent')
        self._send_goal_future.add_done_callback(self.goal_response_callback)
    
    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal Rejected')
            return
        self.get_logger().info('Goal accepted')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)


    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result))
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: {0}'.format(feedback))


def main(args=None):
    rclpy.init(args=args)
    action_client = ToGoalActionClient()
    rclpy.spin(action_client)



