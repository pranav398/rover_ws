// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mars_msgs:msg/RoverOdometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mars_msgs/msg/rover_odometry.hpp"


#ifndef MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__BUILDER_HPP_
#define MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mars_msgs/msg/detail/rover_odometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mars_msgs
{

namespace msg
{

namespace builder
{

class Init_RoverOdometry_velocity
{
public:
  explicit Init_RoverOdometry_velocity(::mars_msgs::msg::RoverOdometry & msg)
  : msg_(msg)
  {}
  ::mars_msgs::msg::RoverOdometry velocity(::mars_msgs::msg::RoverOdometry::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::msg::RoverOdometry msg_;
};

class Init_RoverOdometry_heading
{
public:
  explicit Init_RoverOdometry_heading(::mars_msgs::msg::RoverOdometry & msg)
  : msg_(msg)
  {}
  Init_RoverOdometry_velocity heading(::mars_msgs::msg::RoverOdometry::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_RoverOdometry_velocity(msg_);
  }

private:
  ::mars_msgs::msg::RoverOdometry msg_;
};

class Init_RoverOdometry_y
{
public:
  explicit Init_RoverOdometry_y(::mars_msgs::msg::RoverOdometry & msg)
  : msg_(msg)
  {}
  Init_RoverOdometry_heading y(::mars_msgs::msg::RoverOdometry::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RoverOdometry_heading(msg_);
  }

private:
  ::mars_msgs::msg::RoverOdometry msg_;
};

class Init_RoverOdometry_x
{
public:
  explicit Init_RoverOdometry_x(::mars_msgs::msg::RoverOdometry & msg)
  : msg_(msg)
  {}
  Init_RoverOdometry_y x(::mars_msgs::msg::RoverOdometry::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RoverOdometry_y(msg_);
  }

private:
  ::mars_msgs::msg::RoverOdometry msg_;
};

class Init_RoverOdometry_rover_id
{
public:
  explicit Init_RoverOdometry_rover_id(::mars_msgs::msg::RoverOdometry & msg)
  : msg_(msg)
  {}
  Init_RoverOdometry_x rover_id(::mars_msgs::msg::RoverOdometry::_rover_id_type arg)
  {
    msg_.rover_id = std::move(arg);
    return Init_RoverOdometry_x(msg_);
  }

private:
  ::mars_msgs::msg::RoverOdometry msg_;
};

class Init_RoverOdometry_header
{
public:
  Init_RoverOdometry_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverOdometry_rover_id header(::mars_msgs::msg::RoverOdometry::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RoverOdometry_rover_id(msg_);
  }

private:
  ::mars_msgs::msg::RoverOdometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::msg::RoverOdometry>()
{
  return mars_msgs::msg::builder::Init_RoverOdometry_header();
}

}  // namespace mars_msgs

#endif  // MARS_MSGS__MSG__DETAIL__ROVER_ODOMETRY__BUILDER_HPP_
