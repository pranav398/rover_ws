// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mars_msgs:action/DriveTo.idl
// generated code does not contain a copyright notice
#include "mars_msgs/action/detail/drive_to__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mars_msgs__action__DriveTo_Goal__init(mars_msgs__action__DriveTo_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // tolerance
  return true;
}

void
mars_msgs__action__DriveTo_Goal__fini(mars_msgs__action__DriveTo_Goal * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // tolerance
}

bool
mars_msgs__action__DriveTo_Goal__are_equal(const mars_msgs__action__DriveTo_Goal * lhs, const mars_msgs__action__DriveTo_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // tolerance
  if (lhs->tolerance != rhs->tolerance) {
    return false;
  }
  return true;
}

bool
mars_msgs__action__DriveTo_Goal__copy(
  const mars_msgs__action__DriveTo_Goal * input,
  mars_msgs__action__DriveTo_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // tolerance
  output->tolerance = input->tolerance;
  return true;
}

mars_msgs__action__DriveTo_Goal *
mars_msgs__action__DriveTo_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_Goal * msg = (mars_msgs__action__DriveTo_Goal *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__action__DriveTo_Goal));
  bool success = mars_msgs__action__DriveTo_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__action__DriveTo_Goal__destroy(mars_msgs__action__DriveTo_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__action__DriveTo_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__action__DriveTo_Goal__Sequence__init(mars_msgs__action__DriveTo_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_Goal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_Goal)) {
      return false;
    }
    data = (mars_msgs__action__DriveTo_Goal *)allocator.zero_allocate(size, sizeof(mars_msgs__action__DriveTo_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__action__DriveTo_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__action__DriveTo_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mars_msgs__action__DriveTo_Goal__Sequence__fini(mars_msgs__action__DriveTo_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mars_msgs__action__DriveTo_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mars_msgs__action__DriveTo_Goal__Sequence *
mars_msgs__action__DriveTo_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_Goal__Sequence * array = (mars_msgs__action__DriveTo_Goal__Sequence *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__action__DriveTo_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__action__DriveTo_Goal__Sequence__destroy(mars_msgs__action__DriveTo_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__action__DriveTo_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__action__DriveTo_Goal__Sequence__are_equal(const mars_msgs__action__DriveTo_Goal__Sequence * lhs, const mars_msgs__action__DriveTo_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__action__DriveTo_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__action__DriveTo_Goal__Sequence__copy(
  const mars_msgs__action__DriveTo_Goal__Sequence * input,
  mars_msgs__action__DriveTo_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_Goal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__action__DriveTo_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__action__DriveTo_Goal * data =
      (mars_msgs__action__DriveTo_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__action__DriveTo_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__action__DriveTo_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__action__DriveTo_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mars_msgs__action__DriveTo_Result__init(mars_msgs__action__DriveTo_Result * msg)
{
  if (!msg) {
    return false;
  }
  // reached
  // final_error
  // battery_used
  return true;
}

void
mars_msgs__action__DriveTo_Result__fini(mars_msgs__action__DriveTo_Result * msg)
{
  if (!msg) {
    return;
  }
  // reached
  // final_error
  // battery_used
}

bool
mars_msgs__action__DriveTo_Result__are_equal(const mars_msgs__action__DriveTo_Result * lhs, const mars_msgs__action__DriveTo_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reached
  if (lhs->reached != rhs->reached) {
    return false;
  }
  // final_error
  if (lhs->final_error != rhs->final_error) {
    return false;
  }
  // battery_used
  if (lhs->battery_used != rhs->battery_used) {
    return false;
  }
  return true;
}

bool
mars_msgs__action__DriveTo_Result__copy(
  const mars_msgs__action__DriveTo_Result * input,
  mars_msgs__action__DriveTo_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // reached
  output->reached = input->reached;
  // final_error
  output->final_error = input->final_error;
  // battery_used
  output->battery_used = input->battery_used;
  return true;
}

mars_msgs__action__DriveTo_Result *
mars_msgs__action__DriveTo_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_Result * msg = (mars_msgs__action__DriveTo_Result *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__action__DriveTo_Result));
  bool success = mars_msgs__action__DriveTo_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__action__DriveTo_Result__destroy(mars_msgs__action__DriveTo_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__action__DriveTo_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__action__DriveTo_Result__Sequence__init(mars_msgs__action__DriveTo_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_Result * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_Result)) {
      return false;
    }
    data = (mars_msgs__action__DriveTo_Result *)allocator.zero_allocate(size, sizeof(mars_msgs__action__DriveTo_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__action__DriveTo_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__action__DriveTo_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mars_msgs__action__DriveTo_Result__Sequence__fini(mars_msgs__action__DriveTo_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mars_msgs__action__DriveTo_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mars_msgs__action__DriveTo_Result__Sequence *
mars_msgs__action__DriveTo_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_Result__Sequence * array = (mars_msgs__action__DriveTo_Result__Sequence *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__action__DriveTo_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__action__DriveTo_Result__Sequence__destroy(mars_msgs__action__DriveTo_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__action__DriveTo_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__action__DriveTo_Result__Sequence__are_equal(const mars_msgs__action__DriveTo_Result__Sequence * lhs, const mars_msgs__action__DriveTo_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__action__DriveTo_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__action__DriveTo_Result__Sequence__copy(
  const mars_msgs__action__DriveTo_Result__Sequence * input,
  mars_msgs__action__DriveTo_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_Result)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__action__DriveTo_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__action__DriveTo_Result * data =
      (mars_msgs__action__DriveTo_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__action__DriveTo_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__action__DriveTo_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__action__DriveTo_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mars_msgs__action__DriveTo_Feedback__init(mars_msgs__action__DriveTo_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance_remaining
  // battery_pct
  return true;
}

void
mars_msgs__action__DriveTo_Feedback__fini(mars_msgs__action__DriveTo_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance_remaining
  // battery_pct
}

bool
mars_msgs__action__DriveTo_Feedback__are_equal(const mars_msgs__action__DriveTo_Feedback * lhs, const mars_msgs__action__DriveTo_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance_remaining
  if (lhs->distance_remaining != rhs->distance_remaining) {
    return false;
  }
  // battery_pct
  if (lhs->battery_pct != rhs->battery_pct) {
    return false;
  }
  return true;
}

bool
mars_msgs__action__DriveTo_Feedback__copy(
  const mars_msgs__action__DriveTo_Feedback * input,
  mars_msgs__action__DriveTo_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // distance_remaining
  output->distance_remaining = input->distance_remaining;
  // battery_pct
  output->battery_pct = input->battery_pct;
  return true;
}

mars_msgs__action__DriveTo_Feedback *
mars_msgs__action__DriveTo_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_Feedback * msg = (mars_msgs__action__DriveTo_Feedback *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__action__DriveTo_Feedback));
  bool success = mars_msgs__action__DriveTo_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__action__DriveTo_Feedback__destroy(mars_msgs__action__DriveTo_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__action__DriveTo_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__action__DriveTo_Feedback__Sequence__init(mars_msgs__action__DriveTo_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_Feedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_Feedback)) {
      return false;
    }
    data = (mars_msgs__action__DriveTo_Feedback *)allocator.zero_allocate(size, sizeof(mars_msgs__action__DriveTo_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__action__DriveTo_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__action__DriveTo_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mars_msgs__action__DriveTo_Feedback__Sequence__fini(mars_msgs__action__DriveTo_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mars_msgs__action__DriveTo_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mars_msgs__action__DriveTo_Feedback__Sequence *
mars_msgs__action__DriveTo_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_Feedback__Sequence * array = (mars_msgs__action__DriveTo_Feedback__Sequence *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__action__DriveTo_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__action__DriveTo_Feedback__Sequence__destroy(mars_msgs__action__DriveTo_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__action__DriveTo_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__action__DriveTo_Feedback__Sequence__are_equal(const mars_msgs__action__DriveTo_Feedback__Sequence * lhs, const mars_msgs__action__DriveTo_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__action__DriveTo_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__action__DriveTo_Feedback__Sequence__copy(
  const mars_msgs__action__DriveTo_Feedback__Sequence * input,
  mars_msgs__action__DriveTo_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_Feedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__action__DriveTo_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__action__DriveTo_Feedback * data =
      (mars_msgs__action__DriveTo_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__action__DriveTo_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__action__DriveTo_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__action__DriveTo_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"

bool
mars_msgs__action__DriveTo_SendGoal_Request__init(mars_msgs__action__DriveTo_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mars_msgs__action__DriveTo_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!mars_msgs__action__DriveTo_Goal__init(&msg->goal)) {
    mars_msgs__action__DriveTo_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
mars_msgs__action__DriveTo_SendGoal_Request__fini(mars_msgs__action__DriveTo_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  mars_msgs__action__DriveTo_Goal__fini(&msg->goal);
}

bool
mars_msgs__action__DriveTo_SendGoal_Request__are_equal(const mars_msgs__action__DriveTo_SendGoal_Request * lhs, const mars_msgs__action__DriveTo_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!mars_msgs__action__DriveTo_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
mars_msgs__action__DriveTo_SendGoal_Request__copy(
  const mars_msgs__action__DriveTo_SendGoal_Request * input,
  mars_msgs__action__DriveTo_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!mars_msgs__action__DriveTo_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

mars_msgs__action__DriveTo_SendGoal_Request *
mars_msgs__action__DriveTo_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_SendGoal_Request * msg = (mars_msgs__action__DriveTo_SendGoal_Request *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__action__DriveTo_SendGoal_Request));
  bool success = mars_msgs__action__DriveTo_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__action__DriveTo_SendGoal_Request__destroy(mars_msgs__action__DriveTo_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__action__DriveTo_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__action__DriveTo_SendGoal_Request__Sequence__init(mars_msgs__action__DriveTo_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_SendGoal_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_SendGoal_Request)) {
      return false;
    }
    data = (mars_msgs__action__DriveTo_SendGoal_Request *)allocator.zero_allocate(size, sizeof(mars_msgs__action__DriveTo_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__action__DriveTo_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__action__DriveTo_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mars_msgs__action__DriveTo_SendGoal_Request__Sequence__fini(mars_msgs__action__DriveTo_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mars_msgs__action__DriveTo_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mars_msgs__action__DriveTo_SendGoal_Request__Sequence *
mars_msgs__action__DriveTo_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_SendGoal_Request__Sequence * array = (mars_msgs__action__DriveTo_SendGoal_Request__Sequence *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__action__DriveTo_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__action__DriveTo_SendGoal_Request__Sequence__destroy(mars_msgs__action__DriveTo_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__action__DriveTo_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__action__DriveTo_SendGoal_Request__Sequence__are_equal(const mars_msgs__action__DriveTo_SendGoal_Request__Sequence * lhs, const mars_msgs__action__DriveTo_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__action__DriveTo_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__action__DriveTo_SendGoal_Request__Sequence__copy(
  const mars_msgs__action__DriveTo_SendGoal_Request__Sequence * input,
  mars_msgs__action__DriveTo_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_SendGoal_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__action__DriveTo_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__action__DriveTo_SendGoal_Request * data =
      (mars_msgs__action__DriveTo_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__action__DriveTo_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__action__DriveTo_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__action__DriveTo_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mars_msgs__action__DriveTo_SendGoal_Response__init(mars_msgs__action__DriveTo_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mars_msgs__action__DriveTo_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
mars_msgs__action__DriveTo_SendGoal_Response__fini(mars_msgs__action__DriveTo_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
mars_msgs__action__DriveTo_SendGoal_Response__are_equal(const mars_msgs__action__DriveTo_SendGoal_Response * lhs, const mars_msgs__action__DriveTo_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
mars_msgs__action__DriveTo_SendGoal_Response__copy(
  const mars_msgs__action__DriveTo_SendGoal_Response * input,
  mars_msgs__action__DriveTo_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

mars_msgs__action__DriveTo_SendGoal_Response *
mars_msgs__action__DriveTo_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_SendGoal_Response * msg = (mars_msgs__action__DriveTo_SendGoal_Response *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__action__DriveTo_SendGoal_Response));
  bool success = mars_msgs__action__DriveTo_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__action__DriveTo_SendGoal_Response__destroy(mars_msgs__action__DriveTo_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__action__DriveTo_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__action__DriveTo_SendGoal_Response__Sequence__init(mars_msgs__action__DriveTo_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_SendGoal_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_SendGoal_Response)) {
      return false;
    }
    data = (mars_msgs__action__DriveTo_SendGoal_Response *)allocator.zero_allocate(size, sizeof(mars_msgs__action__DriveTo_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__action__DriveTo_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__action__DriveTo_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mars_msgs__action__DriveTo_SendGoal_Response__Sequence__fini(mars_msgs__action__DriveTo_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mars_msgs__action__DriveTo_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mars_msgs__action__DriveTo_SendGoal_Response__Sequence *
mars_msgs__action__DriveTo_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_SendGoal_Response__Sequence * array = (mars_msgs__action__DriveTo_SendGoal_Response__Sequence *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__action__DriveTo_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__action__DriveTo_SendGoal_Response__Sequence__destroy(mars_msgs__action__DriveTo_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__action__DriveTo_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__action__DriveTo_SendGoal_Response__Sequence__are_equal(const mars_msgs__action__DriveTo_SendGoal_Response__Sequence * lhs, const mars_msgs__action__DriveTo_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__action__DriveTo_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__action__DriveTo_SendGoal_Response__Sequence__copy(
  const mars_msgs__action__DriveTo_SendGoal_Response__Sequence * input,
  mars_msgs__action__DriveTo_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_SendGoal_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__action__DriveTo_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__action__DriveTo_SendGoal_Response * data =
      (mars_msgs__action__DriveTo_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__action__DriveTo_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__action__DriveTo_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__action__DriveTo_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"

bool
mars_msgs__action__DriveTo_SendGoal_Event__init(mars_msgs__action__DriveTo_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mars_msgs__action__DriveTo_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!mars_msgs__action__DriveTo_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    mars_msgs__action__DriveTo_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!mars_msgs__action__DriveTo_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    mars_msgs__action__DriveTo_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
mars_msgs__action__DriveTo_SendGoal_Event__fini(mars_msgs__action__DriveTo_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mars_msgs__action__DriveTo_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  mars_msgs__action__DriveTo_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
mars_msgs__action__DriveTo_SendGoal_Event__are_equal(const mars_msgs__action__DriveTo_SendGoal_Event * lhs, const mars_msgs__action__DriveTo_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!mars_msgs__action__DriveTo_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mars_msgs__action__DriveTo_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mars_msgs__action__DriveTo_SendGoal_Event__copy(
  const mars_msgs__action__DriveTo_SendGoal_Event * input,
  mars_msgs__action__DriveTo_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!mars_msgs__action__DriveTo_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mars_msgs__action__DriveTo_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mars_msgs__action__DriveTo_SendGoal_Event *
mars_msgs__action__DriveTo_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_SendGoal_Event * msg = (mars_msgs__action__DriveTo_SendGoal_Event *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__action__DriveTo_SendGoal_Event));
  bool success = mars_msgs__action__DriveTo_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__action__DriveTo_SendGoal_Event__destroy(mars_msgs__action__DriveTo_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__action__DriveTo_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__action__DriveTo_SendGoal_Event__Sequence__init(mars_msgs__action__DriveTo_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_SendGoal_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_SendGoal_Event)) {
      return false;
    }
    data = (mars_msgs__action__DriveTo_SendGoal_Event *)allocator.zero_allocate(size, sizeof(mars_msgs__action__DriveTo_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__action__DriveTo_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__action__DriveTo_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mars_msgs__action__DriveTo_SendGoal_Event__Sequence__fini(mars_msgs__action__DriveTo_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mars_msgs__action__DriveTo_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mars_msgs__action__DriveTo_SendGoal_Event__Sequence *
mars_msgs__action__DriveTo_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_SendGoal_Event__Sequence * array = (mars_msgs__action__DriveTo_SendGoal_Event__Sequence *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__action__DriveTo_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__action__DriveTo_SendGoal_Event__Sequence__destroy(mars_msgs__action__DriveTo_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__action__DriveTo_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__action__DriveTo_SendGoal_Event__Sequence__are_equal(const mars_msgs__action__DriveTo_SendGoal_Event__Sequence * lhs, const mars_msgs__action__DriveTo_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__action__DriveTo_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__action__DriveTo_SendGoal_Event__Sequence__copy(
  const mars_msgs__action__DriveTo_SendGoal_Event__Sequence * input,
  mars_msgs__action__DriveTo_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_SendGoal_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__action__DriveTo_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__action__DriveTo_SendGoal_Event * data =
      (mars_msgs__action__DriveTo_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__action__DriveTo_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__action__DriveTo_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__action__DriveTo_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
mars_msgs__action__DriveTo_GetResult_Request__init(mars_msgs__action__DriveTo_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mars_msgs__action__DriveTo_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
mars_msgs__action__DriveTo_GetResult_Request__fini(mars_msgs__action__DriveTo_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
mars_msgs__action__DriveTo_GetResult_Request__are_equal(const mars_msgs__action__DriveTo_GetResult_Request * lhs, const mars_msgs__action__DriveTo_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
mars_msgs__action__DriveTo_GetResult_Request__copy(
  const mars_msgs__action__DriveTo_GetResult_Request * input,
  mars_msgs__action__DriveTo_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

mars_msgs__action__DriveTo_GetResult_Request *
mars_msgs__action__DriveTo_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_GetResult_Request * msg = (mars_msgs__action__DriveTo_GetResult_Request *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__action__DriveTo_GetResult_Request));
  bool success = mars_msgs__action__DriveTo_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__action__DriveTo_GetResult_Request__destroy(mars_msgs__action__DriveTo_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__action__DriveTo_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__action__DriveTo_GetResult_Request__Sequence__init(mars_msgs__action__DriveTo_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_GetResult_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_GetResult_Request)) {
      return false;
    }
    data = (mars_msgs__action__DriveTo_GetResult_Request *)allocator.zero_allocate(size, sizeof(mars_msgs__action__DriveTo_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__action__DriveTo_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__action__DriveTo_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mars_msgs__action__DriveTo_GetResult_Request__Sequence__fini(mars_msgs__action__DriveTo_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mars_msgs__action__DriveTo_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mars_msgs__action__DriveTo_GetResult_Request__Sequence *
mars_msgs__action__DriveTo_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_GetResult_Request__Sequence * array = (mars_msgs__action__DriveTo_GetResult_Request__Sequence *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__action__DriveTo_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__action__DriveTo_GetResult_Request__Sequence__destroy(mars_msgs__action__DriveTo_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__action__DriveTo_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__action__DriveTo_GetResult_Request__Sequence__are_equal(const mars_msgs__action__DriveTo_GetResult_Request__Sequence * lhs, const mars_msgs__action__DriveTo_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__action__DriveTo_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__action__DriveTo_GetResult_Request__Sequence__copy(
  const mars_msgs__action__DriveTo_GetResult_Request__Sequence * input,
  mars_msgs__action__DriveTo_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_GetResult_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__action__DriveTo_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__action__DriveTo_GetResult_Request * data =
      (mars_msgs__action__DriveTo_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__action__DriveTo_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__action__DriveTo_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__action__DriveTo_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"

bool
mars_msgs__action__DriveTo_GetResult_Response__init(mars_msgs__action__DriveTo_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!mars_msgs__action__DriveTo_Result__init(&msg->result)) {
    mars_msgs__action__DriveTo_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
mars_msgs__action__DriveTo_GetResult_Response__fini(mars_msgs__action__DriveTo_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  mars_msgs__action__DriveTo_Result__fini(&msg->result);
}

bool
mars_msgs__action__DriveTo_GetResult_Response__are_equal(const mars_msgs__action__DriveTo_GetResult_Response * lhs, const mars_msgs__action__DriveTo_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!mars_msgs__action__DriveTo_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
mars_msgs__action__DriveTo_GetResult_Response__copy(
  const mars_msgs__action__DriveTo_GetResult_Response * input,
  mars_msgs__action__DriveTo_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!mars_msgs__action__DriveTo_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

mars_msgs__action__DriveTo_GetResult_Response *
mars_msgs__action__DriveTo_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_GetResult_Response * msg = (mars_msgs__action__DriveTo_GetResult_Response *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__action__DriveTo_GetResult_Response));
  bool success = mars_msgs__action__DriveTo_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__action__DriveTo_GetResult_Response__destroy(mars_msgs__action__DriveTo_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__action__DriveTo_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__action__DriveTo_GetResult_Response__Sequence__init(mars_msgs__action__DriveTo_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_GetResult_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_GetResult_Response)) {
      return false;
    }
    data = (mars_msgs__action__DriveTo_GetResult_Response *)allocator.zero_allocate(size, sizeof(mars_msgs__action__DriveTo_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__action__DriveTo_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__action__DriveTo_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mars_msgs__action__DriveTo_GetResult_Response__Sequence__fini(mars_msgs__action__DriveTo_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mars_msgs__action__DriveTo_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mars_msgs__action__DriveTo_GetResult_Response__Sequence *
mars_msgs__action__DriveTo_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_GetResult_Response__Sequence * array = (mars_msgs__action__DriveTo_GetResult_Response__Sequence *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__action__DriveTo_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__action__DriveTo_GetResult_Response__Sequence__destroy(mars_msgs__action__DriveTo_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__action__DriveTo_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__action__DriveTo_GetResult_Response__Sequence__are_equal(const mars_msgs__action__DriveTo_GetResult_Response__Sequence * lhs, const mars_msgs__action__DriveTo_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__action__DriveTo_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__action__DriveTo_GetResult_Response__Sequence__copy(
  const mars_msgs__action__DriveTo_GetResult_Response__Sequence * input,
  mars_msgs__action__DriveTo_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_GetResult_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__action__DriveTo_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__action__DriveTo_GetResult_Response * data =
      (mars_msgs__action__DriveTo_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__action__DriveTo_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__action__DriveTo_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__action__DriveTo_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"

bool
mars_msgs__action__DriveTo_GetResult_Event__init(mars_msgs__action__DriveTo_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mars_msgs__action__DriveTo_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!mars_msgs__action__DriveTo_GetResult_Request__Sequence__init(&msg->request, 0)) {
    mars_msgs__action__DriveTo_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!mars_msgs__action__DriveTo_GetResult_Response__Sequence__init(&msg->response, 0)) {
    mars_msgs__action__DriveTo_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
mars_msgs__action__DriveTo_GetResult_Event__fini(mars_msgs__action__DriveTo_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mars_msgs__action__DriveTo_GetResult_Request__Sequence__fini(&msg->request);
  // response
  mars_msgs__action__DriveTo_GetResult_Response__Sequence__fini(&msg->response);
}

bool
mars_msgs__action__DriveTo_GetResult_Event__are_equal(const mars_msgs__action__DriveTo_GetResult_Event * lhs, const mars_msgs__action__DriveTo_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!mars_msgs__action__DriveTo_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mars_msgs__action__DriveTo_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mars_msgs__action__DriveTo_GetResult_Event__copy(
  const mars_msgs__action__DriveTo_GetResult_Event * input,
  mars_msgs__action__DriveTo_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!mars_msgs__action__DriveTo_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mars_msgs__action__DriveTo_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mars_msgs__action__DriveTo_GetResult_Event *
mars_msgs__action__DriveTo_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_GetResult_Event * msg = (mars_msgs__action__DriveTo_GetResult_Event *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__action__DriveTo_GetResult_Event));
  bool success = mars_msgs__action__DriveTo_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__action__DriveTo_GetResult_Event__destroy(mars_msgs__action__DriveTo_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__action__DriveTo_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__action__DriveTo_GetResult_Event__Sequence__init(mars_msgs__action__DriveTo_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_GetResult_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_GetResult_Event)) {
      return false;
    }
    data = (mars_msgs__action__DriveTo_GetResult_Event *)allocator.zero_allocate(size, sizeof(mars_msgs__action__DriveTo_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__action__DriveTo_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__action__DriveTo_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mars_msgs__action__DriveTo_GetResult_Event__Sequence__fini(mars_msgs__action__DriveTo_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mars_msgs__action__DriveTo_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mars_msgs__action__DriveTo_GetResult_Event__Sequence *
mars_msgs__action__DriveTo_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_GetResult_Event__Sequence * array = (mars_msgs__action__DriveTo_GetResult_Event__Sequence *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__action__DriveTo_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__action__DriveTo_GetResult_Event__Sequence__destroy(mars_msgs__action__DriveTo_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__action__DriveTo_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__action__DriveTo_GetResult_Event__Sequence__are_equal(const mars_msgs__action__DriveTo_GetResult_Event__Sequence * lhs, const mars_msgs__action__DriveTo_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__action__DriveTo_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__action__DriveTo_GetResult_Event__Sequence__copy(
  const mars_msgs__action__DriveTo_GetResult_Event__Sequence * input,
  mars_msgs__action__DriveTo_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_GetResult_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__action__DriveTo_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__action__DriveTo_GetResult_Event * data =
      (mars_msgs__action__DriveTo_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__action__DriveTo_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__action__DriveTo_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__action__DriveTo_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "mars_msgs/action/detail/drive_to__functions.h"

bool
mars_msgs__action__DriveTo_FeedbackMessage__init(mars_msgs__action__DriveTo_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mars_msgs__action__DriveTo_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!mars_msgs__action__DriveTo_Feedback__init(&msg->feedback)) {
    mars_msgs__action__DriveTo_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
mars_msgs__action__DriveTo_FeedbackMessage__fini(mars_msgs__action__DriveTo_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  mars_msgs__action__DriveTo_Feedback__fini(&msg->feedback);
}

bool
mars_msgs__action__DriveTo_FeedbackMessage__are_equal(const mars_msgs__action__DriveTo_FeedbackMessage * lhs, const mars_msgs__action__DriveTo_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mars_msgs__action__DriveTo_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
mars_msgs__action__DriveTo_FeedbackMessage__copy(
  const mars_msgs__action__DriveTo_FeedbackMessage * input,
  mars_msgs__action__DriveTo_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mars_msgs__action__DriveTo_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

mars_msgs__action__DriveTo_FeedbackMessage *
mars_msgs__action__DriveTo_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_FeedbackMessage * msg = (mars_msgs__action__DriveTo_FeedbackMessage *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__action__DriveTo_FeedbackMessage));
  bool success = mars_msgs__action__DriveTo_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__action__DriveTo_FeedbackMessage__destroy(mars_msgs__action__DriveTo_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__action__DriveTo_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__action__DriveTo_FeedbackMessage__Sequence__init(mars_msgs__action__DriveTo_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_FeedbackMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_FeedbackMessage)) {
      return false;
    }
    data = (mars_msgs__action__DriveTo_FeedbackMessage *)allocator.zero_allocate(size, sizeof(mars_msgs__action__DriveTo_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__action__DriveTo_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__action__DriveTo_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mars_msgs__action__DriveTo_FeedbackMessage__Sequence__fini(mars_msgs__action__DriveTo_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mars_msgs__action__DriveTo_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mars_msgs__action__DriveTo_FeedbackMessage__Sequence *
mars_msgs__action__DriveTo_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__action__DriveTo_FeedbackMessage__Sequence * array = (mars_msgs__action__DriveTo_FeedbackMessage__Sequence *)allocator.allocate(sizeof(mars_msgs__action__DriveTo_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__action__DriveTo_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__action__DriveTo_FeedbackMessage__Sequence__destroy(mars_msgs__action__DriveTo_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__action__DriveTo_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__action__DriveTo_FeedbackMessage__Sequence__are_equal(const mars_msgs__action__DriveTo_FeedbackMessage__Sequence * lhs, const mars_msgs__action__DriveTo_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__action__DriveTo_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__action__DriveTo_FeedbackMessage__Sequence__copy(
  const mars_msgs__action__DriveTo_FeedbackMessage__Sequence * input,
  mars_msgs__action__DriveTo_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__action__DriveTo_FeedbackMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__action__DriveTo_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__action__DriveTo_FeedbackMessage * data =
      (mars_msgs__action__DriveTo_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__action__DriveTo_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__action__DriveTo_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__action__DriveTo_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
