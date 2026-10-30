// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from mars_msgs:action/DriveTo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mars_msgs/action/detail/drive_to__struct.h"
#include "mars_msgs/action/detail/drive_to__type_support.h"
#include "mars_msgs/action/detail/drive_to__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mars_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DriveTo_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveTo_Goal_type_support_ids_t;

static const _DriveTo_Goal_type_support_ids_t _DriveTo_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveTo_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveTo_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveTo_Goal_type_support_symbol_names_t _DriveTo_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mars_msgs, action, DriveTo_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mars_msgs, action, DriveTo_Goal)),
  }
};

typedef struct _DriveTo_Goal_type_support_data_t
{
  void * data[2];
} _DriveTo_Goal_type_support_data_t;

static _DriveTo_Goal_type_support_data_t _DriveTo_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveTo_Goal_message_typesupport_map = {
  2,
  "mars_msgs",
  &_DriveTo_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_DriveTo_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_DriveTo_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveTo_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveTo_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mars_msgs__action__DriveTo_Goal__get_type_hash,
  &mars_msgs__action__DriveTo_Goal__get_type_description,
  &mars_msgs__action__DriveTo_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mars_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mars_msgs, action, DriveTo_Goal)() {
  return &::mars_msgs::action::rosidl_typesupport_c::DriveTo_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__type_support.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mars_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DriveTo_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveTo_Result_type_support_ids_t;

static const _DriveTo_Result_type_support_ids_t _DriveTo_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveTo_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveTo_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveTo_Result_type_support_symbol_names_t _DriveTo_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mars_msgs, action, DriveTo_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mars_msgs, action, DriveTo_Result)),
  }
};

typedef struct _DriveTo_Result_type_support_data_t
{
  void * data[2];
} _DriveTo_Result_type_support_data_t;

static _DriveTo_Result_type_support_data_t _DriveTo_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveTo_Result_message_typesupport_map = {
  2,
  "mars_msgs",
  &_DriveTo_Result_message_typesupport_ids.typesupport_identifier[0],
  &_DriveTo_Result_message_typesupport_symbol_names.symbol_name[0],
  &_DriveTo_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveTo_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveTo_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mars_msgs__action__DriveTo_Result__get_type_hash,
  &mars_msgs__action__DriveTo_Result__get_type_description,
  &mars_msgs__action__DriveTo_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mars_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mars_msgs, action, DriveTo_Result)() {
  return &::mars_msgs::action::rosidl_typesupport_c::DriveTo_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__type_support.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mars_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DriveTo_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveTo_Feedback_type_support_ids_t;

static const _DriveTo_Feedback_type_support_ids_t _DriveTo_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveTo_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveTo_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveTo_Feedback_type_support_symbol_names_t _DriveTo_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mars_msgs, action, DriveTo_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mars_msgs, action, DriveTo_Feedback)),
  }
};

typedef struct _DriveTo_Feedback_type_support_data_t
{
  void * data[2];
} _DriveTo_Feedback_type_support_data_t;

static _DriveTo_Feedback_type_support_data_t _DriveTo_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveTo_Feedback_message_typesupport_map = {
  2,
  "mars_msgs",
  &_DriveTo_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_DriveTo_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_DriveTo_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveTo_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveTo_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mars_msgs__action__DriveTo_Feedback__get_type_hash,
  &mars_msgs__action__DriveTo_Feedback__get_type_description,
  &mars_msgs__action__DriveTo_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mars_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mars_msgs, action, DriveTo_Feedback)() {
  return &::mars_msgs::action::rosidl_typesupport_c::DriveTo_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__type_support.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mars_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DriveTo_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveTo_SendGoal_Request_type_support_ids_t;

static const _DriveTo_SendGoal_Request_type_support_ids_t _DriveTo_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveTo_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveTo_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveTo_SendGoal_Request_type_support_symbol_names_t _DriveTo_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mars_msgs, action, DriveTo_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mars_msgs, action, DriveTo_SendGoal_Request)),
  }
};

typedef struct _DriveTo_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _DriveTo_SendGoal_Request_type_support_data_t;

static _DriveTo_SendGoal_Request_type_support_data_t _DriveTo_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveTo_SendGoal_Request_message_typesupport_map = {
  2,
  "mars_msgs",
  &_DriveTo_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DriveTo_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DriveTo_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveTo_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveTo_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mars_msgs__action__DriveTo_SendGoal_Request__get_type_hash,
  &mars_msgs__action__DriveTo_SendGoal_Request__get_type_description,
  &mars_msgs__action__DriveTo_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mars_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mars_msgs, action, DriveTo_SendGoal_Request)() {
  return &::mars_msgs::action::rosidl_typesupport_c::DriveTo_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__type_support.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mars_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DriveTo_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveTo_SendGoal_Response_type_support_ids_t;

static const _DriveTo_SendGoal_Response_type_support_ids_t _DriveTo_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveTo_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveTo_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveTo_SendGoal_Response_type_support_symbol_names_t _DriveTo_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mars_msgs, action, DriveTo_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mars_msgs, action, DriveTo_SendGoal_Response)),
  }
};

typedef struct _DriveTo_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _DriveTo_SendGoal_Response_type_support_data_t;

static _DriveTo_SendGoal_Response_type_support_data_t _DriveTo_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveTo_SendGoal_Response_message_typesupport_map = {
  2,
  "mars_msgs",
  &_DriveTo_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DriveTo_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DriveTo_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveTo_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveTo_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mars_msgs__action__DriveTo_SendGoal_Response__get_type_hash,
  &mars_msgs__action__DriveTo_SendGoal_Response__get_type_description,
  &mars_msgs__action__DriveTo_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mars_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mars_msgs, action, DriveTo_SendGoal_Response)() {
  return &::mars_msgs::action::rosidl_typesupport_c::DriveTo_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__type_support.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mars_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DriveTo_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveTo_SendGoal_Event_type_support_ids_t;

static const _DriveTo_SendGoal_Event_type_support_ids_t _DriveTo_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveTo_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveTo_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveTo_SendGoal_Event_type_support_symbol_names_t _DriveTo_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mars_msgs, action, DriveTo_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mars_msgs, action, DriveTo_SendGoal_Event)),
  }
};

typedef struct _DriveTo_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _DriveTo_SendGoal_Event_type_support_data_t;

static _DriveTo_SendGoal_Event_type_support_data_t _DriveTo_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveTo_SendGoal_Event_message_typesupport_map = {
  2,
  "mars_msgs",
  &_DriveTo_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DriveTo_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DriveTo_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveTo_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveTo_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mars_msgs__action__DriveTo_SendGoal_Event__get_type_hash,
  &mars_msgs__action__DriveTo_SendGoal_Event__get_type_description,
  &mars_msgs__action__DriveTo_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mars_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mars_msgs, action, DriveTo_SendGoal_Event)() {
  return &::mars_msgs::action::rosidl_typesupport_c::DriveTo_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace mars_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _DriveTo_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveTo_SendGoal_type_support_ids_t;

static const _DriveTo_SendGoal_type_support_ids_t _DriveTo_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveTo_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveTo_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveTo_SendGoal_type_support_symbol_names_t _DriveTo_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mars_msgs, action, DriveTo_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mars_msgs, action, DriveTo_SendGoal)),
  }
};

typedef struct _DriveTo_SendGoal_type_support_data_t
{
  void * data[2];
} _DriveTo_SendGoal_type_support_data_t;

static _DriveTo_SendGoal_type_support_data_t _DriveTo_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveTo_SendGoal_service_typesupport_map = {
  2,
  "mars_msgs",
  &_DriveTo_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_DriveTo_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_DriveTo_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DriveTo_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveTo_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &DriveTo_SendGoal_Request_message_type_support_handle,
  &DriveTo_SendGoal_Response_message_type_support_handle,
  &DriveTo_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mars_msgs,
    action,
    DriveTo_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mars_msgs,
    action,
    DriveTo_SendGoal
  ),
  &mars_msgs__action__DriveTo_SendGoal__get_type_hash,
  &mars_msgs__action__DriveTo_SendGoal__get_type_description,
  &mars_msgs__action__DriveTo_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mars_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mars_msgs, action, DriveTo_SendGoal)() {
  return &::mars_msgs::action::rosidl_typesupport_c::DriveTo_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__type_support.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mars_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DriveTo_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveTo_GetResult_Request_type_support_ids_t;

static const _DriveTo_GetResult_Request_type_support_ids_t _DriveTo_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveTo_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveTo_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveTo_GetResult_Request_type_support_symbol_names_t _DriveTo_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mars_msgs, action, DriveTo_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mars_msgs, action, DriveTo_GetResult_Request)),
  }
};

typedef struct _DriveTo_GetResult_Request_type_support_data_t
{
  void * data[2];
} _DriveTo_GetResult_Request_type_support_data_t;

static _DriveTo_GetResult_Request_type_support_data_t _DriveTo_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveTo_GetResult_Request_message_typesupport_map = {
  2,
  "mars_msgs",
  &_DriveTo_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DriveTo_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DriveTo_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveTo_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveTo_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mars_msgs__action__DriveTo_GetResult_Request__get_type_hash,
  &mars_msgs__action__DriveTo_GetResult_Request__get_type_description,
  &mars_msgs__action__DriveTo_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mars_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mars_msgs, action, DriveTo_GetResult_Request)() {
  return &::mars_msgs::action::rosidl_typesupport_c::DriveTo_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__type_support.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mars_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DriveTo_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveTo_GetResult_Response_type_support_ids_t;

static const _DriveTo_GetResult_Response_type_support_ids_t _DriveTo_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveTo_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveTo_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveTo_GetResult_Response_type_support_symbol_names_t _DriveTo_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mars_msgs, action, DriveTo_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mars_msgs, action, DriveTo_GetResult_Response)),
  }
};

typedef struct _DriveTo_GetResult_Response_type_support_data_t
{
  void * data[2];
} _DriveTo_GetResult_Response_type_support_data_t;

static _DriveTo_GetResult_Response_type_support_data_t _DriveTo_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveTo_GetResult_Response_message_typesupport_map = {
  2,
  "mars_msgs",
  &_DriveTo_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DriveTo_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DriveTo_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveTo_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveTo_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mars_msgs__action__DriveTo_GetResult_Response__get_type_hash,
  &mars_msgs__action__DriveTo_GetResult_Response__get_type_description,
  &mars_msgs__action__DriveTo_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mars_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mars_msgs, action, DriveTo_GetResult_Response)() {
  return &::mars_msgs::action::rosidl_typesupport_c::DriveTo_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__type_support.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mars_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DriveTo_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveTo_GetResult_Event_type_support_ids_t;

static const _DriveTo_GetResult_Event_type_support_ids_t _DriveTo_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveTo_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveTo_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveTo_GetResult_Event_type_support_symbol_names_t _DriveTo_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mars_msgs, action, DriveTo_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mars_msgs, action, DriveTo_GetResult_Event)),
  }
};

typedef struct _DriveTo_GetResult_Event_type_support_data_t
{
  void * data[2];
} _DriveTo_GetResult_Event_type_support_data_t;

static _DriveTo_GetResult_Event_type_support_data_t _DriveTo_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveTo_GetResult_Event_message_typesupport_map = {
  2,
  "mars_msgs",
  &_DriveTo_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DriveTo_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DriveTo_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveTo_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveTo_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mars_msgs__action__DriveTo_GetResult_Event__get_type_hash,
  &mars_msgs__action__DriveTo_GetResult_Event__get_type_description,
  &mars_msgs__action__DriveTo_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mars_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mars_msgs, action, DriveTo_GetResult_Event)() {
  return &::mars_msgs::action::rosidl_typesupport_c::DriveTo_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace mars_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _DriveTo_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveTo_GetResult_type_support_ids_t;

static const _DriveTo_GetResult_type_support_ids_t _DriveTo_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveTo_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveTo_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveTo_GetResult_type_support_symbol_names_t _DriveTo_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mars_msgs, action, DriveTo_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mars_msgs, action, DriveTo_GetResult)),
  }
};

typedef struct _DriveTo_GetResult_type_support_data_t
{
  void * data[2];
} _DriveTo_GetResult_type_support_data_t;

static _DriveTo_GetResult_type_support_data_t _DriveTo_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveTo_GetResult_service_typesupport_map = {
  2,
  "mars_msgs",
  &_DriveTo_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_DriveTo_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_DriveTo_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DriveTo_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveTo_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &DriveTo_GetResult_Request_message_type_support_handle,
  &DriveTo_GetResult_Response_message_type_support_handle,
  &DriveTo_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mars_msgs,
    action,
    DriveTo_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mars_msgs,
    action,
    DriveTo_GetResult
  ),
  &mars_msgs__action__DriveTo_GetResult__get_type_hash,
  &mars_msgs__action__DriveTo_GetResult__get_type_description,
  &mars_msgs__action__DriveTo_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mars_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mars_msgs, action, DriveTo_GetResult)() {
  return &::mars_msgs::action::rosidl_typesupport_c::DriveTo_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__struct.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__type_support.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mars_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DriveTo_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveTo_FeedbackMessage_type_support_ids_t;

static const _DriveTo_FeedbackMessage_type_support_ids_t _DriveTo_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveTo_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveTo_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveTo_FeedbackMessage_type_support_symbol_names_t _DriveTo_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mars_msgs, action, DriveTo_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mars_msgs, action, DriveTo_FeedbackMessage)),
  }
};

typedef struct _DriveTo_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _DriveTo_FeedbackMessage_type_support_data_t;

static _DriveTo_FeedbackMessage_type_support_data_t _DriveTo_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveTo_FeedbackMessage_message_typesupport_map = {
  2,
  "mars_msgs",
  &_DriveTo_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_DriveTo_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_DriveTo_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveTo_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveTo_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mars_msgs__action__DriveTo_FeedbackMessage__get_type_hash,
  &mars_msgs__action__DriveTo_FeedbackMessage__get_type_description,
  &mars_msgs__action__DriveTo_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mars_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mars_msgs, action, DriveTo_FeedbackMessage)() {
  return &::mars_msgs::action::rosidl_typesupport_c::DriveTo_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "mars_msgs/action/drive_to.h"
// already included above
// #include "mars_msgs/action/detail/drive_to__type_support.h"

static rosidl_action_type_support_t _mars_msgs__action__DriveTo__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &mars_msgs__action__DriveTo__get_type_hash,
  &mars_msgs__action__DriveTo__get_type_description,
  &mars_msgs__action__DriveTo__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, mars_msgs, action, DriveTo)()
{
  // Thread-safe by always writing the same values to the static struct
  _mars_msgs__action__DriveTo__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, mars_msgs, action, DriveTo_SendGoal)();
  _mars_msgs__action__DriveTo__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, mars_msgs, action, DriveTo_GetResult)();
  _mars_msgs__action__DriveTo__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _mars_msgs__action__DriveTo__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, mars_msgs, action, DriveTo_FeedbackMessage)();
  _mars_msgs__action__DriveTo__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_mars_msgs__action__DriveTo__typesupport_c;
}

#ifdef __cplusplus
}
#endif
