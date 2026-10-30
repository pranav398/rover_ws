// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mars_msgs:msg/Monitor.idl
// generated code does not contain a copyright notice
#include "mars_msgs/msg/detail/monitor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `health`
#include "rosidl_runtime_c/string_functions.h"

bool
mars_msgs__msg__Monitor__init(mars_msgs__msg__Monitor * msg)
{
  if (!msg) {
    return false;
  }
  // battery
  // temp
  // health
  if (!rosidl_runtime_c__String__init(&msg->health)) {
    mars_msgs__msg__Monitor__fini(msg);
    return false;
  }
  return true;
}

void
mars_msgs__msg__Monitor__fini(mars_msgs__msg__Monitor * msg)
{
  if (!msg) {
    return;
  }
  // battery
  // temp
  // health
  rosidl_runtime_c__String__fini(&msg->health);
}

bool
mars_msgs__msg__Monitor__are_equal(const mars_msgs__msg__Monitor * lhs, const mars_msgs__msg__Monitor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // battery
  if (lhs->battery != rhs->battery) {
    return false;
  }
  // temp
  if (lhs->temp != rhs->temp) {
    return false;
  }
  // health
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->health), &(rhs->health)))
  {
    return false;
  }
  return true;
}

bool
mars_msgs__msg__Monitor__copy(
  const mars_msgs__msg__Monitor * input,
  mars_msgs__msg__Monitor * output)
{
  if (!input || !output) {
    return false;
  }
  // battery
  output->battery = input->battery;
  // temp
  output->temp = input->temp;
  // health
  if (!rosidl_runtime_c__String__copy(
      &(input->health), &(output->health)))
  {
    return false;
  }
  return true;
}

mars_msgs__msg__Monitor *
mars_msgs__msg__Monitor__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__msg__Monitor * msg = (mars_msgs__msg__Monitor *)allocator.allocate(sizeof(mars_msgs__msg__Monitor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__msg__Monitor));
  bool success = mars_msgs__msg__Monitor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__msg__Monitor__destroy(mars_msgs__msg__Monitor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__msg__Monitor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__msg__Monitor__Sequence__init(mars_msgs__msg__Monitor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__msg__Monitor * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__msg__Monitor)) {
      return false;
    }
    data = (mars_msgs__msg__Monitor *)allocator.zero_allocate(size, sizeof(mars_msgs__msg__Monitor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__msg__Monitor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__msg__Monitor__fini(&data[i - 1]);
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
mars_msgs__msg__Monitor__Sequence__fini(mars_msgs__msg__Monitor__Sequence * array)
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
      mars_msgs__msg__Monitor__fini(&array->data[i]);
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

mars_msgs__msg__Monitor__Sequence *
mars_msgs__msg__Monitor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__msg__Monitor__Sequence * array = (mars_msgs__msg__Monitor__Sequence *)allocator.allocate(sizeof(mars_msgs__msg__Monitor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__msg__Monitor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__msg__Monitor__Sequence__destroy(mars_msgs__msg__Monitor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__msg__Monitor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__msg__Monitor__Sequence__are_equal(const mars_msgs__msg__Monitor__Sequence * lhs, const mars_msgs__msg__Monitor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__msg__Monitor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__msg__Monitor__Sequence__copy(
  const mars_msgs__msg__Monitor__Sequence * input,
  mars_msgs__msg__Monitor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__msg__Monitor)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__msg__Monitor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__msg__Monitor * data =
      (mars_msgs__msg__Monitor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__msg__Monitor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__msg__Monitor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__msg__Monitor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
