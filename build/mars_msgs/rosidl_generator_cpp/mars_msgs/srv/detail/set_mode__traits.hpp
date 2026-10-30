// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mars_msgs:srv/SetMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mars_msgs/srv/set_mode.hpp"


#ifndef MARS_MSGS__SRV__DETAIL__SET_MODE__TRAITS_HPP_
#define MARS_MSGS__SRV__DETAIL__SET_MODE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "mars_msgs/srv/detail/set_mode__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mars_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMode_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::srv::SetMode_Request>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).mode);
}

}  // namespace srv

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::srv::SetMode_Request>()
{
  return "mars_msgs::srv::SetMode_Request";
}

template<>
constexpr const char * name<mars_msgs::srv::SetMode_Request>()
{
  return "mars_msgs/srv/SetMode_Request";
}

template<>
struct has_fixed_size<mars_msgs::srv::SetMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mars_msgs::srv::SetMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mars_msgs::srv::SetMode_Request>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::srv::SetMode_Request>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "mode",
  };
};

}  // namespace rosidl_generator_traits

namespace mars_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMode_Response & msg,
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

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMode_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::srv::SetMode_Response>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).accepted,
    std::forward<T>(msg).reason);
}

}  // namespace srv

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::srv::SetMode_Response>()
{
  return "mars_msgs::srv::SetMode_Response";
}

template<>
constexpr const char * name<mars_msgs::srv::SetMode_Response>()
{
  return "mars_msgs/srv/SetMode_Response";
}

template<>
struct has_fixed_size<mars_msgs::srv::SetMode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mars_msgs::srv::SetMode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mars_msgs::srv::SetMode_Response>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::srv::SetMode_Response>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "accepted",
    "reason",
  };
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace mars_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMode_Event & msg,
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
  const SetMode_Event & msg,
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

inline std::string to_yaml(const SetMode_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::srv::SetMode_Event>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).info,
    std::forward<T>(msg).request,
    std::forward<T>(msg).response);
}

}  // namespace srv

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::srv::SetMode_Event>()
{
  return "mars_msgs::srv::SetMode_Event";
}

template<>
constexpr const char * name<mars_msgs::srv::SetMode_Event>()
{
  return "mars_msgs/srv/SetMode_Event";
}

template<>
struct has_fixed_size<mars_msgs::srv::SetMode_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mars_msgs::srv::SetMode_Event>
  : std::integral_constant<bool, has_bounded_size<mars_msgs::srv::SetMode_Request>::value && has_bounded_size<mars_msgs::srv::SetMode_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mars_msgs::srv::SetMode_Event>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::srv::SetMode_Event>
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
constexpr const char * data_type<mars_msgs::srv::SetMode>()
{
  return "mars_msgs::srv::SetMode";
}

template<>
constexpr const char * name<mars_msgs::srv::SetMode>()
{
  return "mars_msgs/srv/SetMode";
}

template<>
struct has_fixed_size<mars_msgs::srv::SetMode>
  : std::integral_constant<
    bool,
    has_fixed_size<mars_msgs::srv::SetMode_Request>::value &&
    has_fixed_size<mars_msgs::srv::SetMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<mars_msgs::srv::SetMode>
  : std::integral_constant<
    bool,
    has_bounded_size<mars_msgs::srv::SetMode_Request>::value &&
    has_bounded_size<mars_msgs::srv::SetMode_Response>::value
  >
{
};

template<>
struct is_service<mars_msgs::srv::SetMode>
  : std::true_type
{
};

template<>
struct is_service_request<mars_msgs::srv::SetMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mars_msgs::srv::SetMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MARS_MSGS__SRV__DETAIL__SET_MODE__TRAITS_HPP_
