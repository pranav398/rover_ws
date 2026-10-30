// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mars_msgs:msg/Monitor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mars_msgs/msg/monitor.hpp"


#ifndef MARS_MSGS__MSG__DETAIL__MONITOR__STRUCT_HPP_
#define MARS_MSGS__MSG__DETAIL__MONITOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_buffer/buffer.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mars_msgs__msg__Monitor __attribute__((deprecated))
#else
# define DEPRECATED__mars_msgs__msg__Monitor __declspec(deprecated)
#endif

namespace mars_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Monitor_
{
  using Type = Monitor_<ContainerAllocator>;

  explicit Monitor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery = 0.0f;
      this->temp = 0.0f;
      this->health = "";
    }
  }

  explicit Monitor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : health(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery = 0.0f;
      this->temp = 0.0f;
      this->health = "";
    }
  }

  // field types and members
  using _battery_type =
    float;
  _battery_type battery;
  using _temp_type =
    float;
  _temp_type temp;
  using _health_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _health_type health;

  // setters for named parameter idiom
  Type & set__battery(
    const float & _arg)
  {
    this->battery = _arg;
    return *this;
  }
  Type & set__temp(
    const float & _arg)
  {
    this->temp = _arg;
    return *this;
  }
  Type & set__health(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->health = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mars_msgs::msg::Monitor_<ContainerAllocator> *;
  using ConstRawPtr =
    const mars_msgs::msg::Monitor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mars_msgs::msg::Monitor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mars_msgs::msg::Monitor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mars_msgs::msg::Monitor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mars_msgs::msg::Monitor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mars_msgs::msg::Monitor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mars_msgs::msg::Monitor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mars_msgs::msg::Monitor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mars_msgs::msg::Monitor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mars_msgs__msg__Monitor
    std::shared_ptr<mars_msgs::msg::Monitor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mars_msgs__msg__Monitor
    std::shared_ptr<mars_msgs::msg::Monitor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Monitor_ & other) const
  {
    if (this->battery != other.battery) {
      return false;
    }
    if (this->temp != other.temp) {
      return false;
    }
    if (this->health != other.health) {
      return false;
    }
    return true;
  }
  bool operator!=(const Monitor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Monitor_

// alias to use template instance with default allocator
using Monitor =
  mars_msgs::msg::Monitor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mars_msgs

#endif  // MARS_MSGS__MSG__DETAIL__MONITOR__STRUCT_HPP_
