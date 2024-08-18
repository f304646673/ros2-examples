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

#include <chrono>
#include <cstdio>
#include <memory>
#include <utility>

#include "rclcpp/rclcpp.hpp"

#include "std_msgs/msg/string.hpp"

#include "custom_msg/msg/nav_sat_pose_bool.hpp"

using namespace std::chrono_literals;

class Talker : public rclcpp::Node
{
public:
  explicit Talker() : Node("talker")
  {
    // Create a function for when messages are to be sent.
    setvbuf(stdout, NULL, _IONBF, BUFSIZ);
    auto publish_message =
      [this]() -> void
      {
        msg_ = std::make_unique<custom_msg::msg::NavSatPoseBool>();
        msg_->nav.service = 1;
        msg_->nav.status = 2;
        msg_->pose.pose.position.x = 1.0;
        msg_->pose.pose.position.y = 2.0;
        msg_->pose.pose.position.z = 3.0;
        msg_->pose.pose.orientation.x = 0.0;
        msg_->pose.pose.orientation.y = 0.0;
        msg_->pose.pose.orientation.z = 0.0;
        msg_->pose.pose.orientation.w = 1.0;
        msg_->boolvalue.data = false;

        RCLCPP_INFO(this->get_logger(), "Publishing: [%s]", serializeNavSatPoseBool(*msg_).c_str());

        // Put the message into a queue to be processed by the middleware.
        // This call is non-blocking.
        pub_->publish(std::move(msg_));
      };
    // Create a publisher with a custom Quality of Service profile.
    // Uniform initialization is suggested so it can be trivially changed to
    // rclcpp::KeepAll{} if the user wishes.
    // (rclcpp::KeepLast(7) -> rclcpp::KeepAll() fails to compile)
    rclcpp::QoS qos(rclcpp::KeepLast{7});
    pub_ = this->create_publisher<custom_msg::msg::NavSatPoseBool>("chatter", qos);

    // Use a timer to schedule periodic message publishing.
    timer_ = this->create_wall_timer(1s, publish_message);
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
  size_t count_ = 1;
  
  std::unique_ptr<custom_msg::msg::NavSatPoseBool> msg_;
  rclcpp::Publisher<custom_msg::msg::NavSatPoseBool>::SharedPtr pub_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Talker>());
  rclcpp::shutdown();
  return 0;
}
