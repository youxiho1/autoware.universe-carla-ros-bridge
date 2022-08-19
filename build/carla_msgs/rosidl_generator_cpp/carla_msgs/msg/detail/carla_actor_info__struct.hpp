// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carla_msgs:msg/CarlaActorInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_INFO__STRUCT_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carla_msgs__msg__CarlaActorInfo __attribute__((deprecated))
#else
# define DEPRECATED__carla_msgs__msg__CarlaActorInfo __declspec(deprecated)
#endif

namespace carla_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarlaActorInfo_
{
  using Type = CarlaActorInfo_<ContainerAllocator>;

  explicit CarlaActorInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->parent_id = 0ul;
      this->type = "";
      this->rolename = "";
    }
  }

  explicit CarlaActorInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    rolename(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->parent_id = 0ul;
      this->type = "";
      this->rolename = "";
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _parent_id_type =
    uint32_t;
  _parent_id_type parent_id;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _rolename_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rolename_type rolename;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__parent_id(
    const uint32_t & _arg)
  {
    this->parent_id = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__rolename(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->rolename = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carla_msgs::msg::CarlaActorInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const carla_msgs::msg::CarlaActorInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaActorInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carla_msgs::msg::CarlaActorInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaActorInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaActorInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carla_msgs::msg::CarlaActorInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carla_msgs::msg::CarlaActorInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaActorInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carla_msgs::msg::CarlaActorInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carla_msgs__msg__CarlaActorInfo
    std::shared_ptr<carla_msgs::msg::CarlaActorInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carla_msgs__msg__CarlaActorInfo
    std::shared_ptr<carla_msgs::msg::CarlaActorInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarlaActorInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->parent_id != other.parent_id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->rolename != other.rolename) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarlaActorInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarlaActorInfo_

// alias to use template instance with default allocator
using CarlaActorInfo =
  carla_msgs::msg::CarlaActorInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_INFO__STRUCT_HPP_
