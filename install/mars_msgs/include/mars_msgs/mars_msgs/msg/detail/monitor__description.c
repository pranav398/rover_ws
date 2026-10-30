// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mars_msgs:msg/Monitor.idl
// generated code does not contain a copyright notice

#include "mars_msgs/msg/detail/monitor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
const rosidl_type_hash_t *
mars_msgs__msg__Monitor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0xba, 0xca, 0xb2, 0xde, 0xed, 0x12, 0x59,
      0xf0, 0xe9, 0x0f, 0x94, 0xcd, 0xe4, 0x37, 0xef,
      0xe9, 0x50, 0x3f, 0xcb, 0x37, 0xce, 0x1b, 0xbd,
      0x53, 0xc4, 0x85, 0x52, 0x7b, 0x44, 0xa5, 0xb2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mars_msgs__msg__Monitor__TYPE_NAME[] = "mars_msgs/msg/Monitor";

// Define type names, field names, and default values
static char mars_msgs__msg__Monitor__FIELD_NAME__battery[] = "battery";
static char mars_msgs__msg__Monitor__FIELD_NAME__temp[] = "temp";
static char mars_msgs__msg__Monitor__FIELD_NAME__health[] = "health";

static rosidl_runtime_c__type_description__Field mars_msgs__msg__Monitor__FIELDS[] = {
  {
    {mars_msgs__msg__Monitor__FIELD_NAME__battery, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mars_msgs__msg__Monitor__FIELD_NAME__temp, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mars_msgs__msg__Monitor__FIELD_NAME__health, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mars_msgs__msg__Monitor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mars_msgs__msg__Monitor__TYPE_NAME, 21, 21},
      {mars_msgs__msg__Monitor__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 battery\n"
  "float32 temp\n"
  "string health";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mars_msgs__msg__Monitor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mars_msgs__msg__Monitor__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 42, 42},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mars_msgs__msg__Monitor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mars_msgs__msg__Monitor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
