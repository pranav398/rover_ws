// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mars_msgs:msg/Monitor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mars_msgs/msg/monitor.hpp"


#ifndef MARS_MSGS__MSG__DETAIL__MONITOR__BUILDER_HPP_
#define MARS_MSGS__MSG__DETAIL__MONITOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mars_msgs/msg/detail/monitor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mars_msgs
{

namespace msg
{

namespace builder
{

class Init_Monitor_health
{
public:
  explicit Init_Monitor_health(::mars_msgs::msg::Monitor & msg)
  : msg_(msg)
  {}
  ::mars_msgs::msg::Monitor health(::mars_msgs::msg::Monitor::_health_type arg)
  {
    msg_.health = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::msg::Monitor msg_;
};

class Init_Monitor_temp
{
public:
  explicit Init_Monitor_temp(::mars_msgs::msg::Monitor & msg)
  : msg_(msg)
  {}
  Init_Monitor_health temp(::mars_msgs::msg::Monitor::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_Monitor_health(msg_);
  }

private:
  ::mars_msgs::msg::Monitor msg_;
};

class Init_Monitor_battery
{
public:
  Init_Monitor_battery()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Monitor_temp battery(::mars_msgs::msg::Monitor::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_Monitor_temp(msg_);
  }

private:
  ::mars_msgs::msg::Monitor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::msg::Monitor>()
{
  return mars_msgs::msg::builder::Init_Monitor_battery();
}

}  // namespace mars_msgs

#endif  // MARS_MSGS__MSG__DETAIL__MONITOR__BUILDER_HPP_
