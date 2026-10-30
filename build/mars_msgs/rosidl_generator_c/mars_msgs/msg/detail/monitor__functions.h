// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mars_msgs:msg/Monitor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mars_msgs/msg/monitor.h"


#ifndef MARS_MSGS__MSG__DETAIL__MONITOR__FUNCTIONS_H_
#define MARS_MSGS__MSG__DETAIL__MONITOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "mars_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mars_msgs/msg/detail/monitor__struct.h"

/// Initialize msg/Monitor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mars_msgs__msg__Monitor
 * )) before or use
 * mars_msgs__msg__Monitor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
bool
mars_msgs__msg__Monitor__init(mars_msgs__msg__Monitor * msg);

/// Finalize msg/Monitor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
void
mars_msgs__msg__Monitor__fini(mars_msgs__msg__Monitor * msg);

/// Create msg/Monitor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mars_msgs__msg__Monitor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
mars_msgs__msg__Monitor *
mars_msgs__msg__Monitor__create(void);

/// Destroy msg/Monitor message.
/**
 * It calls
 * mars_msgs__msg__Monitor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
void
mars_msgs__msg__Monitor__destroy(mars_msgs__msg__Monitor * msg);

/// Check for msg/Monitor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
bool
mars_msgs__msg__Monitor__are_equal(const mars_msgs__msg__Monitor * lhs, const mars_msgs__msg__Monitor * rhs);

/// Copy a msg/Monitor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
bool
mars_msgs__msg__Monitor__copy(
  const mars_msgs__msg__Monitor * input,
  mars_msgs__msg__Monitor * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
const rosidl_type_hash_t *
mars_msgs__msg__Monitor__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
const rosidl_runtime_c__type_description__TypeDescription *
mars_msgs__msg__Monitor__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
const rosidl_runtime_c__type_description__TypeSource *
mars_msgs__msg__Monitor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mars_msgs__msg__Monitor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Monitor messages.
/**
 * It allocates the memory for the number of elements and calls
 * mars_msgs__msg__Monitor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
bool
mars_msgs__msg__Monitor__Sequence__init(mars_msgs__msg__Monitor__Sequence * array, size_t size);

/// Finalize array of msg/Monitor messages.
/**
 * It calls
 * mars_msgs__msg__Monitor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
void
mars_msgs__msg__Monitor__Sequence__fini(mars_msgs__msg__Monitor__Sequence * array);

/// Create array of msg/Monitor messages.
/**
 * It allocates the memory for the array and calls
 * mars_msgs__msg__Monitor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
mars_msgs__msg__Monitor__Sequence *
mars_msgs__msg__Monitor__Sequence__create(size_t size);

/// Destroy array of msg/Monitor messages.
/**
 * It calls
 * mars_msgs__msg__Monitor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
void
mars_msgs__msg__Monitor__Sequence__destroy(mars_msgs__msg__Monitor__Sequence * array);

/// Check for msg/Monitor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
bool
mars_msgs__msg__Monitor__Sequence__are_equal(const mars_msgs__msg__Monitor__Sequence * lhs, const mars_msgs__msg__Monitor__Sequence * rhs);

/// Copy an array of msg/Monitor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mars_msgs
bool
mars_msgs__msg__Monitor__Sequence__copy(
  const mars_msgs__msg__Monitor__Sequence * input,
  mars_msgs__msg__Monitor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MARS_MSGS__MSG__DETAIL__MONITOR__FUNCTIONS_H_
