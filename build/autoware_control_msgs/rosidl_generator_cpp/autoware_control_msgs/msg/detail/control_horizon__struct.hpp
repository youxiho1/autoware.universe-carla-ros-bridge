// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_control_msgs:msg/ControlHorizon.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__STRUCT_HPP_
#define AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__STRUCT_HPP_

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
// Member 'controls'
#include "autoware_control_msgs/msg/detail/control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_control_msgs__msg__ControlHorizon __attribute__((deprecated))
#else
# define DEPRECATED__autoware_control_msgs__msg__ControlHorizon __declspec(deprecated)
#endif

namespace autoware_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlHorizon_
{
  using Type = ControlHorizon_<ContainerAllocator>;

  explicit ControlHorizon_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    control_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_step_ms = 0.0f;
    }
  }

  explicit ControlHorizon_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    control_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_step_ms = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _control_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _control_time_type control_time;
  using _time_step_ms_type =
    float;
  _time_step_ms_type time_step_ms;
  using _controls_type =
    std::vector<autoware_control_msgs::msg::Control_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_control_msgs::msg::Control_<ContainerAllocator>>>;
  _controls_type controls;

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
  Type & set__time_step_ms(
    const float & _arg)
  {
    this->time_step_ms = _arg;
    return *this;
  }
  Type & set__controls(
    const std::vector<autoware_control_msgs::msg::Control_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_control_msgs::msg::Control_<ContainerAllocator>>> & _arg)
  {
    this->controls = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_control_msgs::msg::ControlHorizon_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_control_msgs::msg::ControlHorizon_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_control_msgs::msg::ControlHorizon_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_control_msgs::msg::ControlHorizon_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_control_msgs::msg::ControlHorizon_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_control_msgs::msg::ControlHorizon_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_control_msgs::msg::ControlHorizon_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_control_msgs::msg::ControlHorizon_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_control_msgs::msg::ControlHorizon_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_control_msgs::msg::ControlHorizon_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_control_msgs__msg__ControlHorizon
    std::shared_ptr<autoware_control_msgs::msg::ControlHorizon_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_control_msgs__msg__ControlHorizon
    std::shared_ptr<autoware_control_msgs::msg::ControlHorizon_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlHorizon_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->control_time != other.control_time) {
      return false;
    }
    if (this->time_step_ms != other.time_step_ms) {
      return false;
    }
    if (this->controls != other.controls) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlHorizon_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlHorizon_

// alias to use template instance with default allocator
using ControlHorizon =
  autoware_control_msgs::msg::ControlHorizon_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_control_msgs

#endif  // AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__STRUCT_HPP_
