// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carla_msgs:srv/DestroyObject.idl
// generated code does not contain a copyright notice
#include "carla_msgs/srv/detail/destroy_object__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carla_msgs/srv/detail/destroy_object__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace carla_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
cdr_serialize(
  const carla_msgs::srv::DestroyObject_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carla_msgs::srv::DestroyObject_Request & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
get_serialized_size(
  const carla_msgs::srv::DestroyObject_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
max_serialized_size_DestroyObject_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _DestroyObject_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carla_msgs::srv::DestroyObject_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DestroyObject_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carla_msgs::srv::DestroyObject_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DestroyObject_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carla_msgs::srv::DestroyObject_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DestroyObject_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DestroyObject_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _DestroyObject_Request__callbacks = {
  "carla_msgs::srv",
  "DestroyObject_Request",
  _DestroyObject_Request__cdr_serialize,
  _DestroyObject_Request__cdr_deserialize,
  _DestroyObject_Request__get_serialized_size,
  _DestroyObject_Request__max_serialized_size
};

static rosidl_message_type_support_t _DestroyObject_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DestroyObject_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carla_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carla_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carla_msgs::srv::DestroyObject_Request>()
{
  return &carla_msgs::srv::typesupport_fastrtps_cpp::_DestroyObject_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_msgs, srv, DestroyObject_Request)() {
  return &carla_msgs::srv::typesupport_fastrtps_cpp::_DestroyObject_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace carla_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
cdr_serialize(
  const carla_msgs::srv::DestroyObject_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carla_msgs::srv::DestroyObject_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
get_serialized_size(
  const carla_msgs::srv::DestroyObject_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carla_msgs
max_serialized_size_DestroyObject_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _DestroyObject_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carla_msgs::srv::DestroyObject_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DestroyObject_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carla_msgs::srv::DestroyObject_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DestroyObject_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carla_msgs::srv::DestroyObject_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DestroyObject_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DestroyObject_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _DestroyObject_Response__callbacks = {
  "carla_msgs::srv",
  "DestroyObject_Response",
  _DestroyObject_Response__cdr_serialize,
  _DestroyObject_Response__cdr_deserialize,
  _DestroyObject_Response__get_serialized_size,
  _DestroyObject_Response__max_serialized_size
};

static rosidl_message_type_support_t _DestroyObject_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DestroyObject_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carla_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carla_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carla_msgs::srv::DestroyObject_Response>()
{
  return &carla_msgs::srv::typesupport_fastrtps_cpp::_DestroyObject_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_msgs, srv, DestroyObject_Response)() {
  return &carla_msgs::srv::typesupport_fastrtps_cpp::_DestroyObject_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace carla_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _DestroyObject__callbacks = {
  "carla_msgs::srv",
  "DestroyObject",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_msgs, srv, DestroyObject_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_msgs, srv, DestroyObject_Response)(),
};

static rosidl_service_type_support_t _DestroyObject__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DestroyObject__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carla_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carla_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<carla_msgs::srv::DestroyObject>()
{
  return &carla_msgs::srv::typesupport_fastrtps_cpp::_DestroyObject__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carla_msgs, srv, DestroyObject)() {
  return &carla_msgs::srv::typesupport_fastrtps_cpp::_DestroyObject__handle;
}

#ifdef __cplusplus
}
#endif
