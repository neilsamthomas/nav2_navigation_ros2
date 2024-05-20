import rclpy
from rclpy.node import Node
from custom_interface.srv import MyServiceMessage
from geometry_msgs.msg import PoseWithCovarianceStamped
import os

class SpotRecorderNode(Node):
    def __init__(self):
        super().__init__('spot_recorder')
        self.recorder_srv = self.create_service(MyServiceMessage, 'save_spot', self.spot_saver_callback)
        self.subscriber_ = self.create_subscription(PoseWithCovarianceStamped, '/amcl_pose', self.pose_callback, 10)
        self.subscriber_ #prevent unused variable warning
        self.pose_recieved = 0
        self.text_data = str()

    def pose_callback(self, msg):
        self.robot_pose= msg.pose.pose
        self.pose_recieved += 1
        self.get_logger().info('I captured pose with x: "%s"' %self.robot_pose.position.x)
    
    def spot_saver_callback(self, request, response):

        file_path = '/home/user/ros2_ws/src/project_localization/config/spots.yaml'
        if self.pose_recieved == 0:
            self.get_logger().info('No pose was received')
            response.navigation_successful = False
            response.message = 'No pose was received'
            return response
        
        if request.label == 'end':
            
            with open(file_path, 'w') as file:
                file.write('move_to_spot:\n  ros__parameters:\n')
                file.write(self.text_data)
            response.navigation_successful = True
            response.message = 'Spots saved successfully'
        else:
            self.text_data += '    {}:\n'.format(request.label)
            self.text_data += '      spot_name: "{}"\n'.format(request.label)
            self.text_data += '      position: \n'
            self.text_data += '        x: {}\n'.format(self.robot_pose.position.x)
            self.text_data += '        y: {}\n'.format(self.robot_pose.position.y)
            self.text_data += '        z: {}\n'.format(self.robot_pose.position.z)
            self.text_data += '      orientation: \n'
            self.text_data += '        x: {}\n'.format(self.robot_pose.orientation.x)
            self.text_data += '        y: {}\n'.format(self.robot_pose.orientation.y)
            self.text_data += '        z: {}\n'.format(self.robot_pose.orientation.z)
            self.text_data += '        w: {}\n\n'.format(self.robot_pose.orientation.w)
            response.navigation_successful = True
            response.message = 'Spots added'
           

        return response
    
def main(args=None):
    rclpy.init(args=args)
    record_spot = SpotRecorderNode()
    rclpy.spin(record_spot)
    record_spot.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
