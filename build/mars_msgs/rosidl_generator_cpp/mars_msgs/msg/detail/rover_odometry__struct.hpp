// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mars_msgs:msg/RoverOdometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mars_msgs/msg/rover_odometry.hpp"


#ifndef MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__STRUCT_HPP_
#define MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_buffer/buffer.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mars_msgs__msg__RoverOdometry __attribute__((deprecated))
#else
# define DEPRECATED__mars_msgs__msg__RoverOdometry __declspec(deprecated)
#endif

namespace mars_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverOdometry_
{
  using Type = RoverOdometry_<ContainerAllocator>;

  explicit RoverOdometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rover_id = 0l;
      this->x = 0.0f;
      this->y = 0.0f;
      this->heading = 0.0f;
    }
  }

  explicit RoverOdometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rover_id = 0l;
      this->x = 0.0f;
      this->y = 0.0f;
      this->heading = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rover_id_type =
    int32_t;
  _rover_id_type rover_id;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _heading_type =
    float;
  _heading_type heading;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rover_id(
    const int32_t & _arg)
  {
    this->rover_id = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mars_msgs::msg::RoverOdometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const mars_msgs::msg::RoverOdometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mars_msgs::msg::RoverOdometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mars_msgs::msg::RoverOdometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mars_msgs::msg::RoverOdometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mars_msgs::msg::RoverOdometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mars_msgs::msg::RoverOdometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mars_msgs::msg::RoverOdometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mars_msgs::msg::RoverOdometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mars_msgs::msg::RoverOdometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mars_msgs__msg__RoverOdometry
    std::shared_ptr<mars_msgs::msg::RoverOdometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mars_msgs__msg__RoverOdometry
    std::shared_ptr<mars_msgs::msg::RoverOdometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverOdometry_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rover_id != other.rover_id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverOdometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverOdometry_

// alias to use template instance with default allocator
using RoverOdometry =
  mars_msgs::msg::RoverOdometry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mars_msgs

#endif  // MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__STRUCT_HPP_
