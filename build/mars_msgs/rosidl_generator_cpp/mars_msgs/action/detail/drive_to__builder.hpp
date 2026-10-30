// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mars_msgs:action/DriveTo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mars_msgs/action/drive_to.hpp"


#ifndef MARS_MSGS__ACTION__DETAIL__DRIVE_TO__BUILDER_HPP_
#define MARS_MSGS__ACTION__DETAIL__DRIVE_TO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mars_msgs/action/detail/drive_to__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mars_msgs
{

namespace action
{

namespace builder
{

class Init_DriveTo_Goal_tolerance
{
public:
  explicit Init_DriveTo_Goal_tolerance(::mars_msgs::action::DriveTo_Goal & msg)
  : msg_(msg)
  {}
  ::mars_msgs::action::DriveTo_Goal tolerance(::mars_msgs::action::DriveTo_Goal::_tolerance_type arg)
  {
    msg_.tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_Goal msg_;
};

class Init_DriveTo_Goal_y
{
public:
  explicit Init_DriveTo_Goal_y(::mars_msgs::action::DriveTo_Goal & msg)
  : msg_(msg)
  {}
  Init_DriveTo_Goal_tolerance y(::mars_msgs::action::DriveTo_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_DriveTo_Goal_tolerance(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_Goal msg_;
};

class Init_DriveTo_Goal_x
{
public:
  Init_DriveTo_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveTo_Goal_y x(::mars_msgs::action::DriveTo_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DriveTo_Goal_y(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::action::DriveTo_Goal>()
{
  return mars_msgs::action::builder::Init_DriveTo_Goal_x();
}

}  // namespace mars_msgs


namespace mars_msgs
{

namespace action
{

namespace builder
{

class Init_DriveTo_Result_battery_used
{
public:
  explicit Init_DriveTo_Result_battery_used(::mars_msgs::action::DriveTo_Result & msg)
  : msg_(msg)
  {}
  ::mars_msgs::action::DriveTo_Result battery_used(::mars_msgs::action::DriveTo_Result::_battery_used_type arg)
  {
    msg_.battery_used = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_Result msg_;
};

class Init_DriveTo_Result_final_error
{
public:
  explicit Init_DriveTo_Result_final_error(::mars_msgs::action::DriveTo_Result & msg)
  : msg_(msg)
  {}
  Init_DriveTo_Result_battery_used final_error(::mars_msgs::action::DriveTo_Result::_final_error_type arg)
  {
    msg_.final_error = std::move(arg);
    return Init_DriveTo_Result_battery_used(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_Result msg_;
};

class Init_DriveTo_Result_reached
{
public:
  Init_DriveTo_Result_reached()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveTo_Result_final_error reached(::mars_msgs::action::DriveTo_Result::_reached_type arg)
  {
    msg_.reached = std::move(arg);
    return Init_DriveTo_Result_final_error(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::action::DriveTo_Result>()
{
  return mars_msgs::action::builder::Init_DriveTo_Result_reached();
}

}  // namespace mars_msgs


namespace mars_msgs
{

namespace action
{

namespace builder
{

class Init_DriveTo_Feedback_battery_pct
{
public:
  explicit Init_DriveTo_Feedback_battery_pct(::mars_msgs::action::DriveTo_Feedback & msg)
  : msg_(msg)
  {}
  ::mars_msgs::action::DriveTo_Feedback battery_pct(::mars_msgs::action::DriveTo_Feedback::_battery_pct_type arg)
  {
    msg_.battery_pct = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_Feedback msg_;
};

class Init_DriveTo_Feedback_distance_remaining
{
public:
  Init_DriveTo_Feedback_distance_remaining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveTo_Feedback_battery_pct distance_remaining(::mars_msgs::action::DriveTo_Feedback::_distance_remaining_type arg)
  {
    msg_.distance_remaining = std::move(arg);
    return Init_DriveTo_Feedback_battery_pct(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::action::DriveTo_Feedback>()
{
  return mars_msgs::action::builder::Init_DriveTo_Feedback_distance_remaining();
}

}  // namespace mars_msgs


namespace mars_msgs
{

namespace action
{

namespace builder
{

class Init_DriveTo_SendGoal_Request_goal
{
public:
  explicit Init_DriveTo_SendGoal_Request_goal(::mars_msgs::action::DriveTo_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::mars_msgs::action::DriveTo_SendGoal_Request goal(::mars_msgs::action::DriveTo_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_SendGoal_Request msg_;
};

class Init_DriveTo_SendGoal_Request_goal_id
{
public:
  Init_DriveTo_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveTo_SendGoal_Request_goal goal_id(::mars_msgs::action::DriveTo_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DriveTo_SendGoal_Request_goal(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::action::DriveTo_SendGoal_Request>()
{
  return mars_msgs::action::builder::Init_DriveTo_SendGoal_Request_goal_id();
}

}  // namespace mars_msgs


namespace mars_msgs
{

namespace action
{

namespace builder
{

class Init_DriveTo_SendGoal_Response_stamp
{
public:
  explicit Init_DriveTo_SendGoal_Response_stamp(::mars_msgs::action::DriveTo_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::mars_msgs::action::DriveTo_SendGoal_Response stamp(::mars_msgs::action::DriveTo_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_SendGoal_Response msg_;
};

class Init_DriveTo_SendGoal_Response_accepted
{
public:
  Init_DriveTo_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveTo_SendGoal_Response_stamp accepted(::mars_msgs::action::DriveTo_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DriveTo_SendGoal_Response_stamp(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::action::DriveTo_SendGoal_Response>()
{
  return mars_msgs::action::builder::Init_DriveTo_SendGoal_Response_accepted();
}

}  // namespace mars_msgs


namespace mars_msgs
{

namespace action
{

namespace builder
{

class Init_DriveTo_SendGoal_Event_response
{
public:
  explicit Init_DriveTo_SendGoal_Event_response(::mars_msgs::action::DriveTo_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::mars_msgs::action::DriveTo_SendGoal_Event response(::mars_msgs::action::DriveTo_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_SendGoal_Event msg_;
};

class Init_DriveTo_SendGoal_Event_request
{
public:
  explicit Init_DriveTo_SendGoal_Event_request(::mars_msgs::action::DriveTo_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_DriveTo_SendGoal_Event_response request(::mars_msgs::action::DriveTo_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DriveTo_SendGoal_Event_response(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_SendGoal_Event msg_;
};

class Init_DriveTo_SendGoal_Event_info
{
public:
  Init_DriveTo_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveTo_SendGoal_Event_request info(::mars_msgs::action::DriveTo_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DriveTo_SendGoal_Event_request(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::action::DriveTo_SendGoal_Event>()
{
  return mars_msgs::action::builder::Init_DriveTo_SendGoal_Event_info();
}

}  // namespace mars_msgs


namespace mars_msgs
{

namespace action
{

namespace builder
{

class Init_DriveTo_GetResult_Request_goal_id
{
public:
  Init_DriveTo_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mars_msgs::action::DriveTo_GetResult_Request goal_id(::mars_msgs::action::DriveTo_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::action::DriveTo_GetResult_Request>()
{
  return mars_msgs::action::builder::Init_DriveTo_GetResult_Request_goal_id();
}

}  // namespace mars_msgs


namespace mars_msgs
{

namespace action
{

namespace builder
{

class Init_DriveTo_GetResult_Response_result
{
public:
  explicit Init_DriveTo_GetResult_Response_result(::mars_msgs::action::DriveTo_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::mars_msgs::action::DriveTo_GetResult_Response result(::mars_msgs::action::DriveTo_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_GetResult_Response msg_;
};

class Init_DriveTo_GetResult_Response_status
{
public:
  Init_DriveTo_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveTo_GetResult_Response_result status(::mars_msgs::action::DriveTo_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DriveTo_GetResult_Response_result(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::action::DriveTo_GetResult_Response>()
{
  return mars_msgs::action::builder::Init_DriveTo_GetResult_Response_status();
}

}  // namespace mars_msgs


namespace mars_msgs
{

namespace action
{

namespace builder
{

class Init_DriveTo_GetResult_Event_response
{
public:
  explicit Init_DriveTo_GetResult_Event_response(::mars_msgs::action::DriveTo_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::mars_msgs::action::DriveTo_GetResult_Event response(::mars_msgs::action::DriveTo_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_GetResult_Event msg_;
};

class Init_DriveTo_GetResult_Event_request
{
public:
  explicit Init_DriveTo_GetResult_Event_request(::mars_msgs::action::DriveTo_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_DriveTo_GetResult_Event_response request(::mars_msgs::action::DriveTo_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DriveTo_GetResult_Event_response(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_GetResult_Event msg_;
};

class Init_DriveTo_GetResult_Event_info
{
public:
  Init_DriveTo_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveTo_GetResult_Event_request info(::mars_msgs::action::DriveTo_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DriveTo_GetResult_Event_request(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::action::DriveTo_GetResult_Event>()
{
  return mars_msgs::action::builder::Init_DriveTo_GetResult_Event_info();
}

}  // namespace mars_msgs


namespace mars_msgs
{

namespace action
{

namespace builder
{

class Init_DriveTo_FeedbackMessage_feedback
{
public:
  explicit Init_DriveTo_FeedbackMessage_feedback(::mars_msgs::action::DriveTo_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::mars_msgs::action::DriveTo_FeedbackMessage feedback(::mars_msgs::action::DriveTo_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_FeedbackMessage msg_;
};

class Init_DriveTo_FeedbackMessage_goal_id
{
public:
  Init_DriveTo_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveTo_FeedbackMessage_feedback goal_id(::mars_msgs::action::DriveTo_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DriveTo_FeedbackMessage_feedback(msg_);
  }

private:
  ::mars_msgs::action::DriveTo_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::mars_msgs::action::DriveTo_FeedbackMessage>()
{
  return mars_msgs::action::builder::Init_DriveTo_FeedbackMessage_goal_id();
}

}  // namespace mars_msgs

#endif  // MARS_MSGS__ACTION__DETAIL__DRIVE_TO__BUILDER_HPP_
