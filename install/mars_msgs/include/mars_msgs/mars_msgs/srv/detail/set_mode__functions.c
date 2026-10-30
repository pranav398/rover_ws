// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mars_msgs:srv/SetMode.idl
// generated code does not contain a copyright notice
#include "mars_msgs/srv/detail/set_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

bool
mars_msgs__srv__SetMode_Request__init(mars_msgs__srv__SetMode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    mars_msgs__srv__SetMode_Request__fini(msg);
    return false;
  }
  return true;
}

void
mars_msgs__srv__SetMode_Request__fini(mars_msgs__srv__SetMode_Request * msg)
{
  if (!msg) {
    return;
  }
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
}

bool
mars_msgs__srv__SetMode_Request__are_equal(const mars_msgs__srv__SetMode_Request * lhs, const mars_msgs__srv__SetMode_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  return true;
}

bool
mars_msgs__srv__SetMode_Request__copy(
  const mars_msgs__srv__SetMode_Request * input,
  mars_msgs__srv__SetMode_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  return true;
}

mars_msgs__srv__SetMode_Request *
mars_msgs__srv__SetMode_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__srv__SetMode_Request * msg = (mars_msgs__srv__SetMode_Request *)allocator.allocate(sizeof(mars_msgs__srv__SetMode_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__srv__SetMode_Request));
  bool success = mars_msgs__srv__SetMode_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__srv__SetMode_Request__destroy(mars_msgs__srv__SetMode_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__srv__SetMode_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__srv__SetMode_Request__Sequence__init(mars_msgs__srv__SetMode_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__srv__SetMode_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__srv__SetMode_Request)) {
      return false;
    }
    data = (mars_msgs__srv__SetMode_Request *)allocator.zero_allocate(size, sizeof(mars_msgs__srv__SetMode_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__srv__SetMode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__srv__SetMode_Request__fini(&data[i - 1]);
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
mars_msgs__srv__SetMode_Request__Sequence__fini(mars_msgs__srv__SetMode_Request__Sequence * array)
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
      mars_msgs__srv__SetMode_Request__fini(&array->data[i]);
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

mars_msgs__srv__SetMode_Request__Sequence *
mars_msgs__srv__SetMode_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__srv__SetMode_Request__Sequence * array = (mars_msgs__srv__SetMode_Request__Sequence *)allocator.allocate(sizeof(mars_msgs__srv__SetMode_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__srv__SetMode_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__srv__SetMode_Request__Sequence__destroy(mars_msgs__srv__SetMode_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__srv__SetMode_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__srv__SetMode_Request__Sequence__are_equal(const mars_msgs__srv__SetMode_Request__Sequence * lhs, const mars_msgs__srv__SetMode_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__srv__SetMode_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__srv__SetMode_Request__Sequence__copy(
  const mars_msgs__srv__SetMode_Request__Sequence * input,
  mars_msgs__srv__SetMode_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__srv__SetMode_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__srv__SetMode_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__srv__SetMode_Request * data =
      (mars_msgs__srv__SetMode_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__srv__SetMode_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__srv__SetMode_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__srv__SetMode_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `reason`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
mars_msgs__srv__SetMode_Response__init(mars_msgs__srv__SetMode_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    mars_msgs__srv__SetMode_Response__fini(msg);
    return false;
  }
  return true;
}

void
mars_msgs__srv__SetMode_Response__fini(mars_msgs__srv__SetMode_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

bool
mars_msgs__srv__SetMode_Response__are_equal(const mars_msgs__srv__SetMode_Response * lhs, const mars_msgs__srv__SetMode_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  return true;
}

bool
mars_msgs__srv__SetMode_Response__copy(
  const mars_msgs__srv__SetMode_Response * input,
  mars_msgs__srv__SetMode_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

mars_msgs__srv__SetMode_Response *
mars_msgs__srv__SetMode_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__srv__SetMode_Response * msg = (mars_msgs__srv__SetMode_Response *)allocator.allocate(sizeof(mars_msgs__srv__SetMode_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__srv__SetMode_Response));
  bool success = mars_msgs__srv__SetMode_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__srv__SetMode_Response__destroy(mars_msgs__srv__SetMode_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__srv__SetMode_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__srv__SetMode_Response__Sequence__init(mars_msgs__srv__SetMode_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__srv__SetMode_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__srv__SetMode_Response)) {
      return false;
    }
    data = (mars_msgs__srv__SetMode_Response *)allocator.zero_allocate(size, sizeof(mars_msgs__srv__SetMode_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__srv__SetMode_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__srv__SetMode_Response__fini(&data[i - 1]);
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
mars_msgs__srv__SetMode_Response__Sequence__fini(mars_msgs__srv__SetMode_Response__Sequence * array)
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
      mars_msgs__srv__SetMode_Response__fini(&array->data[i]);
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

mars_msgs__srv__SetMode_Response__Sequence *
mars_msgs__srv__SetMode_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__srv__SetMode_Response__Sequence * array = (mars_msgs__srv__SetMode_Response__Sequence *)allocator.allocate(sizeof(mars_msgs__srv__SetMode_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__srv__SetMode_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__srv__SetMode_Response__Sequence__destroy(mars_msgs__srv__SetMode_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__srv__SetMode_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__srv__SetMode_Response__Sequence__are_equal(const mars_msgs__srv__SetMode_Response__Sequence * lhs, const mars_msgs__srv__SetMode_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__srv__SetMode_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__srv__SetMode_Response__Sequence__copy(
  const mars_msgs__srv__SetMode_Response__Sequence * input,
  mars_msgs__srv__SetMode_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__srv__SetMode_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__srv__SetMode_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__srv__SetMode_Response * data =
      (mars_msgs__srv__SetMode_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__srv__SetMode_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__srv__SetMode_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__srv__SetMode_Response__copy(
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
// #include "mars_msgs/srv/detail/set_mode__functions.h"

bool
mars_msgs__srv__SetMode_Event__init(mars_msgs__srv__SetMode_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mars_msgs__srv__SetMode_Event__fini(msg);
    return false;
  }
  // request
  if (!mars_msgs__srv__SetMode_Request__Sequence__init(&msg->request, 0)) {
    mars_msgs__srv__SetMode_Event__fini(msg);
    return false;
  }
  // response
  if (!mars_msgs__srv__SetMode_Response__Sequence__init(&msg->response, 0)) {
    mars_msgs__srv__SetMode_Event__fini(msg);
    return false;
  }
  return true;
}

void
mars_msgs__srv__SetMode_Event__fini(mars_msgs__srv__SetMode_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mars_msgs__srv__SetMode_Request__Sequence__fini(&msg->request);
  // response
  mars_msgs__srv__SetMode_Response__Sequence__fini(&msg->response);
}

bool
mars_msgs__srv__SetMode_Event__are_equal(const mars_msgs__srv__SetMode_Event * lhs, const mars_msgs__srv__SetMode_Event * rhs)
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
  if (!mars_msgs__srv__SetMode_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mars_msgs__srv__SetMode_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mars_msgs__srv__SetMode_Event__copy(
  const mars_msgs__srv__SetMode_Event * input,
  mars_msgs__srv__SetMode_Event * output)
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
  if (!mars_msgs__srv__SetMode_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mars_msgs__srv__SetMode_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mars_msgs__srv__SetMode_Event *
mars_msgs__srv__SetMode_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__srv__SetMode_Event * msg = (mars_msgs__srv__SetMode_Event *)allocator.allocate(sizeof(mars_msgs__srv__SetMode_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mars_msgs__srv__SetMode_Event));
  bool success = mars_msgs__srv__SetMode_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mars_msgs__srv__SetMode_Event__destroy(mars_msgs__srv__SetMode_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mars_msgs__srv__SetMode_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mars_msgs__srv__SetMode_Event__Sequence__init(mars_msgs__srv__SetMode_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__srv__SetMode_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mars_msgs__srv__SetMode_Event)) {
      return false;
    }
    data = (mars_msgs__srv__SetMode_Event *)allocator.zero_allocate(size, sizeof(mars_msgs__srv__SetMode_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mars_msgs__srv__SetMode_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mars_msgs__srv__SetMode_Event__fini(&data[i - 1]);
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
mars_msgs__srv__SetMode_Event__Sequence__fini(mars_msgs__srv__SetMode_Event__Sequence * array)
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
      mars_msgs__srv__SetMode_Event__fini(&array->data[i]);
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

mars_msgs__srv__SetMode_Event__Sequence *
mars_msgs__srv__SetMode_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mars_msgs__srv__SetMode_Event__Sequence * array = (mars_msgs__srv__SetMode_Event__Sequence *)allocator.allocate(sizeof(mars_msgs__srv__SetMode_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mars_msgs__srv__SetMode_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mars_msgs__srv__SetMode_Event__Sequence__destroy(mars_msgs__srv__SetMode_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mars_msgs__srv__SetMode_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mars_msgs__srv__SetMode_Event__Sequence__are_equal(const mars_msgs__srv__SetMode_Event__Sequence * lhs, const mars_msgs__srv__SetMode_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mars_msgs__srv__SetMode_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mars_msgs__srv__SetMode_Event__Sequence__copy(
  const mars_msgs__srv__SetMode_Event__Sequence * input,
  mars_msgs__srv__SetMode_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mars_msgs__srv__SetMode_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mars_msgs__srv__SetMode_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mars_msgs__srv__SetMode_Event * data =
      (mars_msgs__srv__SetMode_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mars_msgs__srv__SetMode_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mars_msgs__srv__SetMode_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mars_msgs__srv__SetMode_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
