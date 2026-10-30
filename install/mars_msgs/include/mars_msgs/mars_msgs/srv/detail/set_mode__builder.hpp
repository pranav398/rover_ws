// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mars_msgs:srv/SetMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mars_msgs/srv/set_mode.hpp"


#ifndef MARS_MSGS__SRV__DETAIL__SET_MODE__BUILDER_HPP_
#define MARS_MSGS__SRV__DETAIL__SET_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mars_msgs/srv/detail/set_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mars_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMode_Request_mode
{
public:
  Init_SetMode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mars_msgs::srv::SetMode_Request mode(::mars_msgs::srv::SetMode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::srv::SetMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::srv::SetMode_Request>()
{
  return mars_msgs::srv::builder::Init_SetMode_Request_mode();
}

}  // namespace mars_msgs


namespace mars_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMode_Response_reason
{
public:
  explicit Init_SetMode_Response_reason(::mars_msgs::srv::SetMode_Response & msg)
  : msg_(msg)
  {}
  ::mars_msgs::srv::SetMode_Response reason(::mars_msgs::srv::SetMode_Response::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::srv::SetMode_Response msg_;
};

class Init_SetMode_Response_accepted
{
public:
  Init_SetMode_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMode_Response_reason accepted(::mars_msgs::srv::SetMode_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SetMode_Response_reason(msg_);
  }

private:
  ::mars_msgs::srv::SetMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::srv::SetMode_Response>()
{
  return mars_msgs::srv::builder::Init_SetMode_Response_accepted();
}

}  // namespace mars_msgs


namespace mars_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMode_Event_response
{
public:
  explicit Init_SetMode_Event_response(::mars_msgs::srv::SetMode_Event & msg)
  : msg_(msg)
  {}
  ::mars_msgs::srv::SetMode_Event response(::mars_msgs::srv::SetMode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::srv::SetMode_Event msg_;
};

class Init_SetMode_Event_request
{
public:
  explicit Init_SetMode_Event_request(::mars_msgs::srv::SetMode_Event & msg)
  : msg_(msg)
  {}
  Init_SetMode_Event_response request(::mars_msgs::srv::SetMode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetMode_Event_response(msg_);
  }

private:
  ::mars_msgs::srv::SetMode_Event msg_;
};

class Init_SetMode_Event_info
{
public:
  Init_SetMode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMode_Event_request info(::mars_msgs::srv::SetMode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetMode_Event_request(msg_);
  }

private:
  ::mars_msgs::srv::SetMode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::srv::SetMode_Event>()
{
  return mars_msgs::srv::builder::Init_SetMode_Event_info();
}

}  // namespace mars_msgs

#endif  // MARS_MSGS__SRV__DETAIL__SET_MODE__BUILDER_HPP_
