// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mars_msgs:action/DriveTo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mars_msgs/action/drive_to.h"


#ifndef MARS_MSGS__ACTION__DETAIL__DRIVE_TO__STRUCT_H_
#define MARS_MSGS__ACTION__DETAIL__DRIVE_TO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/DriveTo in the package mars_msgs.
typedef struct mars_msgs__action__DriveTo_Goal
{
  float x;
  float y;
  float tolerance;
} mars_msgs__action__DriveTo_Goal;

// Struct for a sequence of mars_msgs__action__DriveTo_Goal.
typedef struct mars_msgs__action__DriveTo_Goal__Sequence
{
  mars_msgs__action__DriveTo_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mars_msgs__action__DriveTo_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/DriveTo in the package mars_msgs.
typedef struct mars_msgs__action__DriveTo_Result
{
  bool reached;
  float final_error;
  float battery_used;
} mars_msgs__action__DriveTo_Result;

// Struct for a sequence of mars_msgs__action__DriveTo_Result.
typedef struct mars_msgs__action__DriveTo_Result__Sequence
{
  mars_msgs__action__DriveTo_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mars_msgs__action__DriveTo_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/DriveTo in the package mars_msgs.
typedef struct mars_msgs__action__DriveTo_Feedback
{
  float distance_remaining;
  float battery_pct;
} mars_msgs__action__DriveTo_Feedback;

// Struct for a sequence of mars_msgs__action__DriveTo_Feedback.
typedef struct mars_msgs__action__DriveTo_Feedback__Sequence
{
  mars_msgs__action__DriveTo_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mars_msgs__action__DriveTo_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mars_msgs/action/detail/drive_to__struct.h"

/// Struct defined in action/DriveTo in the package mars_msgs.
typedef struct mars_msgs__action__DriveTo_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mars_msgs__action__DriveTo_Goal goal;
} mars_msgs__action__DriveTo_SendGoal_Request;

// Struct for a sequence of mars_msgs__action__DriveTo_SendGoal_Request.
typedef struct mars_msgs__action__DriveTo_SendGoal_Request__Sequence
{
  mars_msgs__action__DriveTo_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mars_msgs__action__DriveTo_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DriveTo in the package mars_msgs.
typedef struct mars_msgs__action__DriveTo_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mars_msgs__action__DriveTo_SendGoal_Response;

// Struct for a sequence of mars_msgs__action__DriveTo_SendGoal_Response.
typedef struct mars_msgs__action__DriveTo_SendGoal_Response__Sequence
{
  mars_msgs__action__DriveTo_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mars_msgs__action__DriveTo_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mars_msgs__action__DriveTo_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mars_msgs__action__DriveTo_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DriveTo in the package mars_msgs.
typedef struct mars_msgs__action__DriveTo_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mars_msgs__action__DriveTo_SendGoal_Request__Sequence request;
  mars_msgs__action__DriveTo_SendGoal_Response__Sequence response;
} mars_msgs__action__DriveTo_SendGoal_Event;

// Struct for a sequence of mars_msgs__action__DriveTo_SendGoal_Event.
typedef struct mars_msgs__action__DriveTo_SendGoal_Event__Sequence
{
  mars_msgs__action__DriveTo_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mars_msgs__action__DriveTo_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DriveTo in the package mars_msgs.
typedef struct mars_msgs__action__DriveTo_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mars_msgs__action__DriveTo_GetResult_Request;

// Struct for a sequence of mars_msgs__action__DriveTo_GetResult_Request.
typedef struct mars_msgs__action__DriveTo_GetResult_Request__Sequence
{
  mars_msgs__action__DriveTo_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mars_msgs__action__DriveTo_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mars_msgs/action/detail/drive_to__struct.h"

/// Struct defined in action/DriveTo in the package mars_msgs.
typedef struct mars_msgs__action__DriveTo_GetResult_Response
{
  int8_t status;
  mars_msgs__action__DriveTo_Result result;
} mars_msgs__action__DriveTo_GetResult_Response;

// Struct for a sequence of mars_msgs__action__DriveTo_GetResult_Response.
typedef struct mars_msgs__action__DriveTo_GetResult_Response__Sequence
{
  mars_msgs__action__DriveTo_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mars_msgs__action__DriveTo_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mars_msgs__action__DriveTo_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mars_msgs__action__DriveTo_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DriveTo in the package mars_msgs.
typedef struct mars_msgs__action__DriveTo_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mars_msgs__action__DriveTo_GetResult_Request__Sequence request;
  mars_msgs__action__DriveTo_GetResult_Response__Sequence response;
} mars_msgs__action__DriveTo_GetResult_Event;

// Struct for a sequence of mars_msgs__action__DriveTo_GetResult_Event.
typedef struct mars_msgs__action__DriveTo_GetResult_Event__Sequence
{
  mars_msgs__action__DriveTo_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mars_msgs__action__DriveTo_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mars_msgs/action/detail/drive_to__struct.h"

/// Struct defined in action/DriveTo in the package mars_msgs.
typedef struct mars_msgs__action__DriveTo_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mars_msgs__action__DriveTo_Feedback feedback;
} mars_msgs__action__DriveTo_FeedbackMessage;

// Struct for a sequence of mars_msgs__action__DriveTo_FeedbackMessage.
typedef struct mars_msgs__action__DriveTo_FeedbackMessage__Sequence
{
  mars_msgs__action__DriveTo_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mars_msgs__action__DriveTo_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARS_MSGS__ACTION__DETAIL__DRIVE_TO__STRUCT_H_
