// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_control_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
#define AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
// Member 'control_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'lateral'
#include "autoware_control_msgs/msg/detail/lateral__struct.hpp"
// Member 'longitudinal'
#include "autoware_control_msgs/msg/detail/longitudinal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_control_msgs__msg__Control __attribute__((deprecated))
#else
# define DEPRECATED__autoware_control_msgs__msg__Control __declspec(deprecated)
#endif

namespace autoware_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Control_
{
  using Type = Control_<ContainerAllocator>;

  explicit Control_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    control_time(_init),
    lateral(_init),
    longitudinal(_init)
  {
    (void)_init;
  }

  explicit Control_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    control_time(_alloc, _init),
    lateral(_alloc, _init),
    longitudinal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _control_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _control_time_type control_time;
  using _lateral_type =
    autoware_control_msgs::msg::Lateral_<ContainerAllocator>;
  _lateral_type lateral;
  using _longitudinal_type =
    autoware_control_msgs::msg::Longitudinal_<ContainerAllocator>;
  _longitudinal_type longitudinal;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__control_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->control_time = _arg;
    return *this;
  }
  Type & set__lateral(
    const autoware_control_msgs::msg::Lateral_<ContainerAllocator> & _arg)
  {
    this->lateral = _arg;
    return *this;
  }
  Type & set__longitudinal(
    const autoware_control_msgs::msg::Longitudinal_<ContainerAllocator> & _arg)
  {
    this->longitudinal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_control_msgs::msg::Control_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_control_msgs::msg::Control_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_control_msgs::msg::Control_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_control_msgs::msg::Control_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_control_msgs::msg::Control_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_control_msgs::msg::Control_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_control_msgs::msg::Control_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_control_msgs::msg::Control_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_control_msgs::msg::Control_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_control_msgs::msg::Control_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_control_msgs__msg__Control
    std::shared_ptr<autoware_control_msgs::msg::Control_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_control_msgs__msg__Control
    std::shared_ptr<autoware_control_msgs::msg::Control_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->control_time != other.control_time) {
      return false;
    }
    if (this->lateral != other.lateral) {
      return false;
    }
    if (this->longitudinal != other.longitudinal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_

// alias to use template instance with default allocator
using Control =
  autoware_control_msgs::msg::Control_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_control_msgs

#endif  // AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
