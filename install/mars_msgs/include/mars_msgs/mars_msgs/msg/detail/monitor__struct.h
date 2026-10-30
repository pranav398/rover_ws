// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mars_msgs:msg/Monitor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mars_msgs/msg/monitor.h"


#ifndef MARS_MSGS__MSG__DETAIL__MONITOR__STRUCT_H_
#define MARS_MSGS__MSG__DETAIL__MONITOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'health'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Monitor in the package mars_msgs.
typedef struct mars_msgs__msg__Monitor
{
  float battery;
  float temp;
  rosidl_runtime_c__String health;
} mars_msgs__msg__Monitor;

// Struct for a sequence of mars_msgs__msg__Monitor.
typedef struct mars_msgs__msg__Monitor__Sequence
{
  mars_msgs__msg__Monitor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mars_msgs__msg__Monitor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARS_MSGS__MSG__DETAIL__MONITOR__STRUCT_H_
