// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_service:srv/NavSatPoseBool.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_service/srv/nav_sat_pose_bool.hpp"


#ifndef CUSTOM_SERVICE__SRV__DETAIL__NAV_SAT_POSE_BOOL__TRAITS_HPP_
#define CUSTOM_SERVICE__SRV__DETAIL__NAV_SAT_POSE_BOOL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_service/srv/detail/nav_sat_pose_bool__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'nav'
#include "sensor_msgs/msg/detail/nav_sat_status__traits.hpp"

namespace custom_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const NavSatPoseBool_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: nav
  {
    out << "nav: ";
    to_flow_style_yaml(msg.nav, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavSatPoseBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nav
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav:\n";
    to_block_style_yaml(msg.nav, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavSatPoseBool_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_service

namespace rosidl_generator_traits
{

[[deprecated("use custom_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_service::srv::NavSatPoseBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_service::srv::NavSatPoseBool_Request & msg)
{
  return custom_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_service::srv::NavSatPoseBool_Request>()
{
  return "custom_service::srv::NavSatPoseBool_Request";
}

template<>
inline const char * name<custom_service::srv::NavSatPoseBool_Request>()
{
  return "custom_service/srv/NavSatPoseBool_Request";
}

template<>
struct has_fixed_size<custom_service::srv::NavSatPoseBool_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::NavSatStatus>::value> {};

template<>
struct has_bounded_size<custom_service::srv::NavSatPoseBool_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::NavSatStatus>::value> {};

template<>
struct is_message<custom_service::srv::NavSatPoseBool_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'boolvalue'
#include "std_msgs/msg/detail/bool__traits.hpp"

namespace custom_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const NavSatPoseBool_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: boolvalue
  {
    out << "boolvalue: ";
    to_flow_style_yaml(msg.boolvalue, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavSatPoseBool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: boolvalue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boolvalue:\n";
    to_block_style_yaml(msg.boolvalue, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavSatPoseBool_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_service

namespace rosidl_generator_traits
{

[[deprecated("use custom_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_service::srv::NavSatPoseBool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_service::srv::NavSatPoseBool_Response & msg)
{
  return custom_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_service::srv::NavSatPoseBool_Response>()
{
  return "custom_service::srv::NavSatPoseBool_Response";
}

template<>
inline const char * name<custom_service::srv::NavSatPoseBool_Response>()
{
  return "custom_service/srv/NavSatPoseBool_Response";
}

template<>
struct has_fixed_size<custom_service::srv::NavSatPoseBool_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value && has_fixed_size<std_msgs::msg::Bool>::value> {};

template<>
struct has_bounded_size<custom_service::srv::NavSatPoseBool_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value && has_bounded_size<std_msgs::msg::Bool>::value> {};

template<>
struct is_message<custom_service::srv::NavSatPoseBool_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace custom_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const NavSatPoseBool_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavSatPoseBool_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavSatPoseBool_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_service

namespace rosidl_generator_traits
{

[[deprecated("use custom_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_service::srv::NavSatPoseBool_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_service::srv::NavSatPoseBool_Event & msg)
{
  return custom_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_service::srv::NavSatPoseBool_Event>()
{
  return "custom_service::srv::NavSatPoseBool_Event";
}

template<>
inline const char * name<custom_service::srv::NavSatPoseBool_Event>()
{
  return "custom_service/srv/NavSatPoseBool_Event";
}

template<>
struct has_fixed_size<custom_service::srv::NavSatPoseBool_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_service::srv::NavSatPoseBool_Event>
  : std::integral_constant<bool, has_bounded_size<custom_service::srv::NavSatPoseBool_Request>::value && has_bounded_size<custom_service::srv::NavSatPoseBool_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<custom_service::srv::NavSatPoseBool_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_service::srv::NavSatPoseBool>()
{
  return "custom_service::srv::NavSatPoseBool";
}

template<>
inline const char * name<custom_service::srv::NavSatPoseBool>()
{
  return "custom_service/srv/NavSatPoseBool";
}

template<>
struct has_fixed_size<custom_service::srv::NavSatPoseBool>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_service::srv::NavSatPoseBool_Request>::value &&
    has_fixed_size<custom_service::srv::NavSatPoseBool_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_service::srv::NavSatPoseBool>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_service::srv::NavSatPoseBool_Request>::value &&
    has_bounded_size<custom_service::srv::NavSatPoseBool_Response>::value
  >
{
};

template<>
struct is_service<custom_service::srv::NavSatPoseBool>
  : std::true_type
{
};

template<>
struct is_service_request<custom_service::srv::NavSatPoseBool_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_service::srv::NavSatPoseBool_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_SERVICE__SRV__DETAIL__NAV_SAT_POSE_BOOL__TRAITS_HPP_
