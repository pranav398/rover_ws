// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mars_msgs:action/DriveTo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mars_msgs/action/drive_to.hpp"


#ifndef MARS_MSGS__ACTION__DETAIL__DRIVE_TO__TRAITS_HPP_
#define MARS_MSGS__ACTION__DETAIL__DRIVE_TO__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "mars_msgs/action/detail/drive_to__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mars_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveTo_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: tolerance
  {
    out << "tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveTo_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveTo_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::action::DriveTo_Goal>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).x,
    std::forward<T>(msg).y,
    std::forward<T>(msg).tolerance);
}

}  // namespace action

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::action::DriveTo_Goal>()
{
  return "mars_msgs::action::DriveTo_Goal";
}

template<>
constexpr const char * name<mars_msgs::action::DriveTo_Goal>()
{
  return "mars_msgs/action/DriveTo_Goal";
}

template<>
struct has_fixed_size<mars_msgs::action::DriveTo_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mars_msgs::action::DriveTo_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mars_msgs::action::DriveTo_Goal>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::action::DriveTo_Goal>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "x",
    "y",
    "tolerance",
  };
};

}  // namespace rosidl_generator_traits

namespace mars_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveTo_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: reached
  {
    out << "reached: ";
    rosidl_generator_traits::value_to_yaml(msg.reached, out);
    out << ", ";
  }

  // member: final_error
  {
    out << "final_error: ";
    rosidl_generator_traits::value_to_yaml(msg.final_error, out);
    out << ", ";
  }

  // member: battery_used
  {
    out << "battery_used: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_used, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveTo_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached: ";
    rosidl_generator_traits::value_to_yaml(msg.reached, out);
    out << "\n";
  }

  // member: final_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_error: ";
    rosidl_generator_traits::value_to_yaml(msg.final_error, out);
    out << "\n";
  }

  // member: battery_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_used: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_used, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveTo_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::action::DriveTo_Result>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).reached,
    std::forward<T>(msg).final_error,
    std::forward<T>(msg).battery_used);
}

}  // namespace action

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::action::DriveTo_Result>()
{
  return "mars_msgs::action::DriveTo_Result";
}

template<>
constexpr const char * name<mars_msgs::action::DriveTo_Result>()
{
  return "mars_msgs/action/DriveTo_Result";
}

template<>
struct has_fixed_size<mars_msgs::action::DriveTo_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mars_msgs::action::DriveTo_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mars_msgs::action::DriveTo_Result>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::action::DriveTo_Result>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "reached",
    "final_error",
    "battery_used",
  };
};

}  // namespace rosidl_generator_traits

namespace mars_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveTo_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance_remaining
  {
    out << "distance_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_remaining, out);
    out << ", ";
  }

  // member: battery_pct
  {
    out << "battery_pct: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_pct, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveTo_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_remaining, out);
    out << "\n";
  }

  // member: battery_pct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_pct: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_pct, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveTo_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::action::DriveTo_Feedback>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).distance_remaining,
    std::forward<T>(msg).battery_pct);
}

}  // namespace action

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::action::DriveTo_Feedback>()
{
  return "mars_msgs::action::DriveTo_Feedback";
}

template<>
constexpr const char * name<mars_msgs::action::DriveTo_Feedback>()
{
  return "mars_msgs/action/DriveTo_Feedback";
}

template<>
struct has_fixed_size<mars_msgs::action::DriveTo_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mars_msgs::action::DriveTo_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mars_msgs::action::DriveTo_Feedback>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::action::DriveTo_Feedback>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "distance_remaining",
    "battery_pct",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "mars_msgs/action/detail/drive_to__traits.hpp"

namespace mars_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveTo_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveTo_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveTo_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::action::DriveTo_SendGoal_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).goal_id,
    std::forward<T>(msg).goal);
}

}  // namespace action

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::action::DriveTo_SendGoal_Request>()
{
  return "mars_msgs::action::DriveTo_SendGoal_Request";
}

template<>
constexpr const char * name<mars_msgs::action::DriveTo_SendGoal_Request>()
{
  return "mars_msgs/action/DriveTo_SendGoal_Request";
}

template<>
struct has_fixed_size<mars_msgs::action::DriveTo_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<mars_msgs::action::DriveTo_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mars_msgs::action::DriveTo_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<mars_msgs::action::DriveTo_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mars_msgs::action::DriveTo_SendGoal_Request>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::action::DriveTo_SendGoal_Request>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "goal_id",
    "goal",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace mars_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveTo_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveTo_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveTo_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::action::DriveTo_SendGoal_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).accepted,
    std::forward<T>(msg).stamp);
}

}  // namespace action

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::action::DriveTo_SendGoal_Response>()
{
  return "mars_msgs::action::DriveTo_SendGoal_Response";
}

template<>
constexpr const char * name<mars_msgs::action::DriveTo_SendGoal_Response>()
{
  return "mars_msgs/action/DriveTo_SendGoal_Response";
}

template<>
struct has_fixed_size<mars_msgs::action::DriveTo_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<mars_msgs::action::DriveTo_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<mars_msgs::action::DriveTo_SendGoal_Response>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::action::DriveTo_SendGoal_Response>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "accepted",
    "stamp",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace mars_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveTo_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveTo_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveTo_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::action::DriveTo_SendGoal_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace action

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::action::DriveTo_SendGoal_Event>()
{
  return "mars_msgs::action::DriveTo_SendGoal_Event";
}

template<>
constexpr const char * name<mars_msgs::action::DriveTo_SendGoal_Event>()
{
  return "mars_msgs/action/DriveTo_SendGoal_Event";
}

template<>
struct has_fixed_size<mars_msgs::action::DriveTo_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mars_msgs::action::DriveTo_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<mars_msgs::action::DriveTo_SendGoal_Request>::value && has_bounded_size<mars_msgs::action::DriveTo_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mars_msgs::action::DriveTo_SendGoal_Event>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::action::DriveTo_SendGoal_Event>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "info",
    "request",
    "response",
  };
};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::action::DriveTo_SendGoal>()
{
  return "mars_msgs::action::DriveTo_SendGoal";
}

template<>
constexpr const char * name<mars_msgs::action::DriveTo_SendGoal>()
{
  return "mars_msgs/action/DriveTo_SendGoal";
}

template<>
struct has_fixed_size<mars_msgs::action::DriveTo_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<mars_msgs::action::DriveTo_SendGoal_Request>::value &&
    has_fixed_size<mars_msgs::action::DriveTo_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<mars_msgs::action::DriveTo_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<mars_msgs::action::DriveTo_SendGoal_Request>::value &&
    has_bounded_size<mars_msgs::action::DriveTo_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<mars_msgs::action::DriveTo_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<mars_msgs::action::DriveTo_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mars_msgs::action::DriveTo_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace mars_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveTo_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveTo_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveTo_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::action::DriveTo_GetResult_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).goal_id);
}

}  // namespace action

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::action::DriveTo_GetResult_Request>()
{
  return "mars_msgs::action::DriveTo_GetResult_Request";
}

template<>
constexpr const char * name<mars_msgs::action::DriveTo_GetResult_Request>()
{
  return "mars_msgs/action/DriveTo_GetResult_Request";
}

template<>
struct has_fixed_size<mars_msgs::action::DriveTo_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mars_msgs::action::DriveTo_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mars_msgs::action::DriveTo_GetResult_Request>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::action::DriveTo_GetResult_Request>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "goal_id",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "mars_msgs/action/detail/drive_to__traits.hpp"

namespace mars_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveTo_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveTo_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveTo_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::action::DriveTo_GetResult_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).status,
    std::forward<T>(msg).result);
}

}  // namespace action

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::action::DriveTo_GetResult_Response>()
{
  return "mars_msgs::action::DriveTo_GetResult_Response";
}

template<>
constexpr const char * name<mars_msgs::action::DriveTo_GetResult_Response>()
{
  return "mars_msgs/action/DriveTo_GetResult_Response";
}

template<>
struct has_fixed_size<mars_msgs::action::DriveTo_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<mars_msgs::action::DriveTo_Result>::value> {};

template<>
struct has_bounded_size<mars_msgs::action::DriveTo_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<mars_msgs::action::DriveTo_Result>::value> {};

template<>
struct is_message<mars_msgs::action::DriveTo_GetResult_Response>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::action::DriveTo_GetResult_Response>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "status",
    "result",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace mars_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveTo_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveTo_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveTo_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::action::DriveTo_GetResult_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace action

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::action::DriveTo_GetResult_Event>()
{
  return "mars_msgs::action::DriveTo_GetResult_Event";
}

template<>
constexpr const char * name<mars_msgs::action::DriveTo_GetResult_Event>()
{
  return "mars_msgs/action/DriveTo_GetResult_Event";
}

template<>
struct has_fixed_size<mars_msgs::action::DriveTo_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mars_msgs::action::DriveTo_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<mars_msgs::action::DriveTo_GetResult_Request>::value && has_bounded_size<mars_msgs::action::DriveTo_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mars_msgs::action::DriveTo_GetResult_Event>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::action::DriveTo_GetResult_Event>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "info",
    "request",
    "response",
  };
};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::action::DriveTo_GetResult>()
{
  return "mars_msgs::action::DriveTo_GetResult";
}

template<>
constexpr const char * name<mars_msgs::action::DriveTo_GetResult>()
{
  return "mars_msgs/action/DriveTo_GetResult";
}

template<>
struct has_fixed_size<mars_msgs::action::DriveTo_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<mars_msgs::action::DriveTo_GetResult_Request>::value &&
    has_fixed_size<mars_msgs::action::DriveTo_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<mars_msgs::action::DriveTo_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<mars_msgs::action::DriveTo_GetResult_Request>::value &&
    has_bounded_size<mars_msgs::action::DriveTo_GetResult_Response>::value
  >
{
};

template<>
struct is_service<mars_msgs::action::DriveTo_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<mars_msgs::action::DriveTo_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mars_msgs::action::DriveTo_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "mars_msgs/action/detail/drive_to__traits.hpp"

namespace mars_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveTo_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveTo_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveTo_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::action::DriveTo_FeedbackMessage>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).goal_id,
    std::forward<T>(msg).feedback);
}

}  // namespace action

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::action::DriveTo_FeedbackMessage>()
{
  return "mars_msgs::action::DriveTo_FeedbackMessage";
}

template<>
constexpr const char * name<mars_msgs::action::DriveTo_FeedbackMessage>()
{
  return "mars_msgs/action/DriveTo_FeedbackMessage";
}

template<>
struct has_fixed_size<mars_msgs::action::DriveTo_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<mars_msgs::action::DriveTo_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<mars_msgs::action::DriveTo_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<mars_msgs::action::DriveTo_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<mars_msgs::action::DriveTo_FeedbackMessage>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::action::DriveTo_FeedbackMessage>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "goal_id",
    "feedback",
  };
};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::action::DriveTo>()
{
  return "mars_msgs::action::DriveTo";
}

template<>
constexpr const char * name<mars_msgs::action::DriveTo>()
{
  return "mars_msgs/action/DriveTo";
}

template<>
struct is_action<mars_msgs::action::DriveTo>
  : std::true_type
{
};

template<>
struct is_action_goal<mars_msgs::action::DriveTo_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<mars_msgs::action::DriveTo_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<mars_msgs::action::DriveTo_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MARS_MSGS__ACTION__DETAIL__DRIVE_TO__TRAITS_HPP_
