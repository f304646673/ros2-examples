// Copyright 2014 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "rclcpp/rclcpp.hpp"

#include "std_msgs/msg/string.hpp"

#include "custom_msg/msg/nav_sat_pose_bool.hpp"
#include <sstream>
#include <string>

class Listener : public rclcpp::Node
{
public:
  explicit Listener() : Node("listener")
  {
    // Create a callback function for when messages are received.
    // Variations of this function also exist using, for example UniquePtr for zero-copy transport.
    setvbuf(stdout, NULL, _IONBF, BUFSIZ);
    auto callback =
      [this](custom_msg::msg::NavSatPoseBool::ConstSharedPtr msg) -> void
      {
        RCLCPP_INFO(this->get_logger(), "I heard: [%s]", serializeNavSatPoseBool(*msg).c_str());
      };
    // Create a subscription to the topic which can be matched with one or more compatible ROS
    // publishers.
    // Note that not all publishers on the same topic with the same type will be compatible:
    // they must have compatible Quality of Service policies.
    sub_ = create_subscription<custom_msg::msg::NavSatPoseBool>("chatter", 10, callback);
  }

  private :std::string serializeNavSatPoseBool(const custom_msg::msg::NavSatPoseBool &msg) {
    std::ostringstream oss;
    oss << msg.nav.service << " " 
        << msg.nav.status << " " 
        << msg.pose.pose.position.x << " " 
        << msg.pose.pose.position.y << " " 
        << msg.pose.pose.position.z << " " 
        << msg.pose.pose.orientation.x << " " 
        << msg.pose.pose.orientation.y << " " 
        << msg.pose.pose.orientation.z << " " 
        << msg.pose.pose.orientation.w << " " 
        << msg.boolvalue.data;

    return oss.str();
  }

private:
  rclcpp::Subscription<custom_msg::msg::NavSatPoseBool>::SharedPtr sub_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Listener>());
  rclcpp::shutdown();
  return 0;
}
