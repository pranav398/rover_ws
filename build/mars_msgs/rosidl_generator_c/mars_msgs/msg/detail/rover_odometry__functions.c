// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mars_msgs:msg/RoverOdometry.idl
// generated code does not contain a copyright notice
#include "mars_msgs/msg/detail/rover_odometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
mars_msgs__msg__RoverOdometry__init(mars_msgs__msg__RoverOdometry * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mars_msgs__msg__RoverOdometry__fini(msg);
    return false;
  }
  // rover_id
  // x
  // y
  // heading
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    mars_msgs__msg__RoverOdometry__fini(msg);
    return false;
  }
  return true;
}

void
mars_msgs__msg__RoverOdometry__fini(mars_msgs__msg__RoverOdometry * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // rover_id
  // x
  // y
  // heading
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
}

bool
mars_msgs__msg__RoverOdometry__are_equal(const mars_msgs__msg__RoverOdometry * lhs, const mars_msgs__msg__RoverOdometry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // rover_id
  if (lhs->rover_id != rhs->rover_id) {
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
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  return true;
}

bool
mars_msgs__msg__RoverOdometry__copy(
  const mars_msgs__msg__RoverOdometry * input,
  mars_msgs__msg__RoverOdometry * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // rover_id
  output->rover_id = input->rover_id;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // heading
  output->heading = input->heading;
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  return true;
}

mars_msgs__msg__RoverOdometry *
mars_msgs__msg__RoverOdometry__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__msg__RoverOdometry * msg = (mars_msgs__msg__RoverOdometry *)allocator.allocate(sizeof(mars_msgs__msg__RoverOdometry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__msg__RoverOdometry));
  bool success = mars_msgs__msg__RoverOdometry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__msg__RoverOdometry__destroy(mars_msgs__msg__RoverOdometry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__msg__RoverOdometry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__msg__RoverOdometry__Sequence__init(mars_msgs__msg__RoverOdometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__msg__RoverOdometry * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__msg__RoverOdometry)) {
      return false;
    }
    data = (mars_msgs__msg__RoverOdometry *)allocator.zero_allocate(size, sizeof(mars_msgs__msg__RoverOdometry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__msg__RoverOdometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__msg__RoverOdometry__fini(&data[i - 1]);
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
mars_msgs__msg__RoverOdometry__Sequence__fini(mars_msgs__msg__RoverOdometry__Sequence * array)
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
      mars_msgs__msg__RoverOdometry__fini(&array->data[i]);
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

mars_msgs__msg__RoverOdometry__Sequence *
mars_msgs__msg__RoverOdometry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__msg__RoverOdometry__Sequence * array = (mars_msgs__msg__RoverOdometry__Sequence *)allocator.allocate(sizeof(mars_msgs__msg__RoverOdometry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__msg__RoverOdometry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__msg__RoverOdometry__Sequence__destroy(mars_msgs__msg__RoverOdometry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__msg__RoverOdometry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__msg__RoverOdometry__Sequence__are_equal(const mars_msgs__msg__RoverOdometry__Sequence * lhs, const mars_msgs__msg__RoverOdometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__msg__RoverOdometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__msg__RoverOdometry__Sequence__copy(
  const mars_msgs__msg__RoverOdometry__Sequence * input,
  mars_msgs__msg__RoverOdometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__msg__RoverOdometry)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__msg__RoverOdometry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__msg__RoverOdometry * data =
      (mars_msgs__msg__RoverOdometry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__msg__RoverOdometry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__msg__RoverOdometry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__msg__RoverOdometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
