// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_service:srv/NavSatPoseBool.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_service/srv/nav_sat_pose_bool.hpp"


#ifndef CUSTOM_SERVICE__SRV__DETAIL__NAV_SAT_POSE_BOOL__BUILDER_HPP_
#define CUSTOM_SERVICE__SRV__DETAIL__NAV_SAT_POSE_BOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_service/srv/detail/nav_sat_pose_bool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_service
{

namespace srv
{

namespace builder
{

class Init_NavSatPoseBool_Request_nav
{
public:
  Init_NavSatPoseBool_Request_nav()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_service::srv::NavSatPoseBool_Request nav(::custom_service::srv::NavSatPoseBool_Request::_nav_type arg)
  {
    msg_.nav = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_service::srv::NavSatPoseBool_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_service::srv::NavSatPoseBool_Request>()
{
  return custom_service::srv::builder::Init_NavSatPoseBool_Request_nav();
}

}  // namespace custom_service


namespace custom_service
{

namespace srv
{

namespace builder
{

class Init_NavSatPoseBool_Response_boolvalue
{
public:
  explicit Init_NavSatPoseBool_Response_boolvalue(::custom_service::srv::NavSatPoseBool_Response & msg)
  : msg_(msg)
  {}
  ::custom_service::srv::NavSatPoseBool_Response boolvalue(::custom_service::srv::NavSatPoseBool_Response::_boolvalue_type arg)
  {
    msg_.boolvalue = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_service::srv::NavSatPoseBool_Response msg_;
};

class Init_NavSatPoseBool_Response_pose
{
public:
  Init_NavSatPoseBool_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavSatPoseBool_Response_boolvalue pose(::custom_service::srv::NavSatPoseBool_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_NavSatPoseBool_Response_boolvalue(msg_);
  }

private:
  ::custom_service::srv::NavSatPoseBool_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_service::srv::NavSatPoseBool_Response>()
{
  return custom_service::srv::builder::Init_NavSatPoseBool_Response_pose();
}

}  // namespace custom_service


namespace custom_service
{

namespace srv
{

namespace builder
{

class Init_NavSatPoseBool_Event_response
{
public:
  explicit Init_NavSatPoseBool_Event_response(::custom_service::srv::NavSatPoseBool_Event & msg)
  : msg_(msg)
  {}
  ::custom_service::srv::NavSatPoseBool_Event response(::custom_service::srv::NavSatPoseBool_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_service::srv::NavSatPoseBool_Event msg_;
};

class Init_NavSatPoseBool_Event_request
{
public:
  explicit Init_NavSatPoseBool_Event_request(::custom_service::srv::NavSatPoseBool_Event & msg)
  : msg_(msg)
  {}
  Init_NavSatPoseBool_Event_response request(::custom_service::srv::NavSatPoseBool_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_NavSatPoseBool_Event_response(msg_);
  }

private:
  ::custom_service::srv::NavSatPoseBool_Event msg_;
};

class Init_NavSatPoseBool_Event_info
{
public:
  Init_NavSatPoseBool_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavSatPoseBool_Event_request info(::custom_service::srv::NavSatPoseBool_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_NavSatPoseBool_Event_request(msg_);
  }

private:
  ::custom_service::srv::NavSatPoseBool_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_service::srv::NavSatPoseBool_Event>()
{
  return custom_service::srv::builder::Init_NavSatPoseBool_Event_info();
}

}  // namespace custom_service

#endif  // CUSTOM_SERVICE__SRV__DETAIL__NAV_SAT_POSE_BOOL__BUILDER_HPP_
