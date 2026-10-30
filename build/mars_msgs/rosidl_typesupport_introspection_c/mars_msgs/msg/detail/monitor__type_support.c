// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mars_msgs:msg/Monitor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mars_msgs/msg/detail/monitor__rosidl_typesupport_introspection_c.h"
#include "mars_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mars_msgs/msg/detail/monitor__functions.h"
#include "mars_msgs/msg/detail/monitor__struct.h"


// Include directives for member types
// Member `health`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mars_msgs__msg__Monitor__rosidl_typesupport_introspection_c__Monitor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mars_msgs__msg__Monitor__init(message_memory);
}

void mars_msgs__msg__Monitor__rosidl_typesupport_introspection_c__Monitor_fini_function(void * message_memory)
{
  mars_msgs__msg__Monitor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mars_msgs__msg__Monitor__rosidl_typesupport_introspection_c__Monitor_message_member_array[3] = {
  {
    "battery",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mars_msgs__msg__Monitor, battery),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mars_msgs__msg__Monitor, temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "health",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mars_msgs__msg__Monitor, health),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mars_msgs__msg__Monitor__rosidl_typesupport_introspection_c__Monitor_message_members = {
  "mars_msgs__msg",  // message namespace
  "Monitor",  // message name
  3,  // number of fields
  sizeof(mars_msgs__msg__Monitor),
  false,  // has_any_key_member_
  mars_msgs__msg__Monitor__rosidl_typesupport_introspection_c__Monitor_message_member_array,  // message members
  mars_msgs__msg__Monitor__rosidl_typesupport_introspection_c__Monitor_init_function,  // function to initialize message memory (memory has to be allocated)
  mars_msgs__msg__Monitor__rosidl_typesupport_introspection_c__Monitor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mars_msgs__msg__Monitor__rosidl_typesupport_introspection_c__Monitor_message_type_support_handle = {
  0,
  &mars_msgs__msg__Monitor__rosidl_typesupport_introspection_c__Monitor_message_members,
  get_message_typesupport_handle_function,
  &mars_msgs__msg__Monitor__get_type_hash,
  &mars_msgs__msg__Monitor__get_type_description,
  &mars_msgs__msg__Monitor__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mars_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mars_msgs, msg, Monitor)() {
  if (!mars_msgs__msg__Monitor__rosidl_typesupport_introspection_c__Monitor_message_type_support_handle.typesupport_identifier) {
    mars_msgs__msg__Monitor__rosidl_typesupport_introspection_c__Monitor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mars_msgs__msg__Monitor__rosidl_typesupport_introspection_c__Monitor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
