#include "rclcpp/rclcpp.hpp"
#include "custom_service/srv/nav_sat_pose_bool.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

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

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("custom_client");  
  rclcpp::Client<custom_service::srv::NavSatPoseBool>::SharedPtr client =                
    node->create_client<custom_service::srv::NavSatPoseBool>("handle");          

  auto request = std::make_shared<custom_service::srv::NavSatPoseBool::Request>();
  request->nav.service = 1;
  request->nav.status = 2;                                                         

  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending request: [%s]", serializeRequest(*request).c_str());
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "receiving back response: [%s]", serializeResponse(*result.get()).c_str());
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service custom_server");    
  }

  rclcpp::shutdown();
  return 0;
}