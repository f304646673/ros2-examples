// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_service:srv/NavSatPoseBool.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_service/srv/nav_sat_pose_bool.hpp"


#ifndef CUSTOM_SERVICE__SRV__DETAIL__NAV_SAT_POSE_BOOL__STRUCT_HPP_
#define CUSTOM_SERVICE__SRV__DETAIL__NAV_SAT_POSE_BOOL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'nav'
#include "sensor_msgs/msg/detail/nav_sat_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_service__srv__NavSatPoseBool_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_service__srv__NavSatPoseBool_Request __declspec(deprecated)
#endif

namespace custom_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NavSatPoseBool_Request_
{
  using Type = NavSatPoseBool_Request_<ContainerAllocator>;

  explicit NavSatPoseBool_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nav(_init)
  {
    (void)_init;
  }

  explicit NavSatPoseBool_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nav(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _nav_type =
    sensor_msgs::msg::NavSatStatus_<ContainerAllocator>;
  _nav_type nav;

  // setters for named parameter idiom
  Type & set__nav(
    const sensor_msgs::msg::NavSatStatus_<ContainerAllocator> & _arg)
  {
    this->nav = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_service__srv__NavSatPoseBool_Request
    std::shared_ptr<custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_service__srv__NavSatPoseBool_Request
    std::shared_ptr<custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavSatPoseBool_Request_ & other) const
  {
    if (this->nav != other.nav) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavSatPoseBool_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavSatPoseBool_Request_

// alias to use template instance with default allocator
using NavSatPoseBool_Request =
  custom_service::srv::NavSatPoseBool_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_service


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
// Member 'boolvalue'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_service__srv__NavSatPoseBool_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_service__srv__NavSatPoseBool_Response __declspec(deprecated)
#endif

namespace custom_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NavSatPoseBool_Response_
{
  using Type = NavSatPoseBool_Response_<ContainerAllocator>;

  explicit NavSatPoseBool_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    boolvalue(_init)
  {
    (void)_init;
  }

  explicit NavSatPoseBool_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    boolvalue(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_type pose;
  using _boolvalue_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _boolvalue_type boolvalue;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__boolvalue(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->boolvalue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_service__srv__NavSatPoseBool_Response
    std::shared_ptr<custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_service__srv__NavSatPoseBool_Response
    std::shared_ptr<custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavSatPoseBool_Response_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->boolvalue != other.boolvalue) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavSatPoseBool_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavSatPoseBool_Response_

// alias to use template instance with default allocator
using NavSatPoseBool_Response =
  custom_service::srv::NavSatPoseBool_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_service


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_service__srv__NavSatPoseBool_Event __attribute__((deprecated))
#else
# define DEPRECATED__custom_service__srv__NavSatPoseBool_Event __declspec(deprecated)
#endif

namespace custom_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NavSatPoseBool_Event_
{
  using Type = NavSatPoseBool_Event_<ContainerAllocator>;

  explicit NavSatPoseBool_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit NavSatPoseBool_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_service::srv::NavSatPoseBool_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_service::srv::NavSatPoseBool_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_service::srv::NavSatPoseBool_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_service::srv::NavSatPoseBool_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_service::srv::NavSatPoseBool_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_service::srv::NavSatPoseBool_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_service::srv::NavSatPoseBool_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_service::srv::NavSatPoseBool_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_service::srv::NavSatPoseBool_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_service::srv::NavSatPoseBool_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_service::srv::NavSatPoseBool_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_service::srv::NavSatPoseBool_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_service__srv__NavSatPoseBool_Event
    std::shared_ptr<custom_service::srv::NavSatPoseBool_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_service__srv__NavSatPoseBool_Event
    std::shared_ptr<custom_service::srv::NavSatPoseBool_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavSatPoseBool_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavSatPoseBool_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavSatPoseBool_Event_

// alias to use template instance with default allocator
using NavSatPoseBool_Event =
  custom_service::srv::NavSatPoseBool_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_service

namespace custom_service
{

namespace srv
{

struct NavSatPoseBool
{
  using Request = custom_service::srv::NavSatPoseBool_Request;
  using Response = custom_service::srv::NavSatPoseBool_Response;
  using Event = custom_service::srv::NavSatPoseBool_Event;
};

}  // namespace srv

}  // namespace custom_service

#endif  // CUSTOM_SERVICE__SRV__DETAIL__NAV_SAT_POSE_BOOL__STRUCT_HPP_
