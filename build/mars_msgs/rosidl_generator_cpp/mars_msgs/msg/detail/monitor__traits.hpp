// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mars_msgs:msg/Monitor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mars_msgs/msg/monitor.hpp"


#ifndef MARS_MSGS__MSG__DETAIL__MONITOR__TRAITS_HPP_
#define MARS_MSGS__MSG__DETAIL__MONITOR__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "mars_msgs/msg/detail/monitor__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mars_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Monitor & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery
  {
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << ", ";
  }

  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << ", ";
  }

  // member: health
  {
    out << "health: ";
    rosidl_generator_traits::value_to_yaml(msg.health, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Monitor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << "\n";
  }

  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }

  // member: health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health: ";
    rosidl_generator_traits::value_to_yaml(msg.health, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Monitor & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, mars_msgs::msg::Monitor>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).battery,
    std::forward<T>(msg).temp,
    std::forward<T>(msg).health);
}

}  // namespace msg

}  // namespace mars_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<mars_msgs::msg::Monitor>()
{
  return "mars_msgs::msg::Monitor";
}

template<>
constexpr const char * name<mars_msgs::msg::Monitor>()
{
  return "mars_msgs/msg/Monitor";
}

template<>
struct has_fixed_size<mars_msgs::msg::Monitor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mars_msgs::msg::Monitor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mars_msgs::msg::Monitor>
  : std::true_type {};

template<>
struct MessageTraits<mars_msgs::msg::Monitor>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "battery",
    "temp",
    "health",
  };
};

}  // namespace rosidl_generator_traits

#endif  // MARS_MSGS__MSG__DETAIL__MONITOR__TRAITS_HPP_
