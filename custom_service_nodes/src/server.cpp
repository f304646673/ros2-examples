#include "rclcpp/rclcpp.hpp"
#include "custom_service/srv/nav_sat_pose_bool.hpp"

#include <memory>
#include <string>
#include <sstream>


std::string serializeRequest(const custom_service::srv::NavSatPoseBool::Request &request) {
    std::ostringstream oss;
    oss << request.nav.service << " " 
        << request.nav.status << " ";

    return oss.str();
}

std::string serializeResponse(const custom_service::srv::NavSatPoseBool::Response &response) {
    std::ostringstream oss;
    oss << response.pose.pose.position.x << " " 
        << response.pose.pose.position.y << " " 
        << response.pose.pose.position.z << " " 
        << response.pose.pose.orientation.x << " " 
        << response.pose.pose.orientation.y << " " 
        << response.pose.pose.orientation.z << " " 
        << response.pose.pose.orientation.w << " " 
        << response.boolvalue.data;

    return oss.str();
}

void handle(const std::shared_ptr<custom_service::srv::NavSatPoseBool::Request> request,     
          std::shared_ptr<custom_service::srv::NavSatPoseBool::Response> response)  
{
  response->pose.pose.position.x = 1.0;
  response->pose.pose.position.y = 2.0;
  response->pose.pose.position.z = 3.0;
  response->pose.pose.orientation.x = 4.0;
  response->pose.pose.orientation.y = 5.0;
  response->pose.pose.orientation.z = 6.0;
  response->pose.pose.orientation.w = 7.0;
  response->boolvalue.data = true;

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %s", serializeRequest(*request).c_str()); 
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%s]", serializeResponse(*response).c_str());
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("custom_server");   

  rclcpp::Service<custom_service::srv::NavSatPoseBool>::SharedPtr service =               
    node->create_service<custom_service::srv::NavSatPoseBool>("handle",  &handle);   

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to start service.");                     

  rclcpp::spin(node);
  rclcpp::shutdown();
}