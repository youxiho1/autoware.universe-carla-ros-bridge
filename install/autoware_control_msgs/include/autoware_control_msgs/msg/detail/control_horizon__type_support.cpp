// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_control_msgs:msg/ControlHorizon.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_control_msgs/msg/detail/control_horizon__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ControlHorizon_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_control_msgs::msg::ControlHorizon(_init);
}

void ControlHorizon_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_control_msgs::msg::ControlHorizon *>(message_memory);
  typed_message->~ControlHorizon();
}

size_t size_function__ControlHorizon__controls(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoware_control_msgs::msg::Control> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ControlHorizon__controls(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoware_control_msgs::msg::Control> *>(untyped_member);
  return &member[index];
}

void * get_function__ControlHorizon__controls(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoware_control_msgs::msg::Control> *>(untyped_member);
  return &member[index];
}

void resize_function__ControlHorizon__controls(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoware_control_msgs::msg::Control> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControlHorizon_message_member_array[4] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_control_msgs::msg::ControlHorizon, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "control_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_control_msgs::msg::ControlHorizon, control_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_step_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_control_msgs::msg::ControlHorizon, time_step_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "controls",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_control_msgs::msg::Control>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_control_msgs::msg::ControlHorizon, controls),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControlHorizon__controls,  // size() function pointer
    get_const_function__ControlHorizon__controls,  // get_const(index) function pointer
    get_function__ControlHorizon__controls,  // get(index) function pointer
    resize_function__ControlHorizon__controls  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControlHorizon_message_members = {
  "autoware_control_msgs::msg",  // message namespace
  "ControlHorizon",  // message name
  4,  // number of fields
  sizeof(autoware_control_msgs::msg::ControlHorizon),
  ControlHorizon_message_member_array,  // message members
  ControlHorizon_init_function,  // function to initialize message memory (memory has to be allocated)
  ControlHorizon_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControlHorizon_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControlHorizon_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_control_msgs::msg::ControlHorizon>()
{
  return &::autoware_control_msgs::msg::rosidl_typesupport_introspection_cpp::ControlHorizon_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_control_msgs, msg, ControlHorizon)() {
  return &::autoware_control_msgs::msg::rosidl_typesupport_introspection_cpp::ControlHorizon_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
