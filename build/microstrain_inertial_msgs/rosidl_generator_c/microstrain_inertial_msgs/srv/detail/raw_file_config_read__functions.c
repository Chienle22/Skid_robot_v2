// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:srv/RawFileConfigRead.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/srv/detail/raw_file_config_read__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
microstrain_inertial_msgs__srv__RawFileConfigRead_Request__init(microstrain_inertial_msgs__srv__RawFileConfigRead_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
microstrain_inertial_msgs__srv__RawFileConfigRead_Request__fini(microstrain_inertial_msgs__srv__RawFileConfigRead_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
microstrain_inertial_msgs__srv__RawFileConfigRead_Request__are_equal(const microstrain_inertial_msgs__srv__RawFileConfigRead_Request * lhs, const microstrain_inertial_msgs__srv__RawFileConfigRead_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__srv__RawFileConfigRead_Request__copy(
  const microstrain_inertial_msgs__srv__RawFileConfigRead_Request * input,
  microstrain_inertial_msgs__srv__RawFileConfigRead_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

microstrain_inertial_msgs__srv__RawFileConfigRead_Request *
microstrain_inertial_msgs__srv__RawFileConfigRead_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__srv__RawFileConfigRead_Request * msg = (microstrain_inertial_msgs__srv__RawFileConfigRead_Request *)allocator.allocate(sizeof(microstrain_inertial_msgs__srv__RawFileConfigRead_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__srv__RawFileConfigRead_Request));
  bool success = microstrain_inertial_msgs__srv__RawFileConfigRead_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__srv__RawFileConfigRead_Request__destroy(microstrain_inertial_msgs__srv__RawFileConfigRead_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__srv__RawFileConfigRead_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__init(microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__srv__RawFileConfigRead_Request * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__srv__RawFileConfigRead_Request *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__srv__RawFileConfigRead_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__srv__RawFileConfigRead_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__srv__RawFileConfigRead_Request__fini(&data[i - 1]);
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
microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__fini(microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence * array)
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
      microstrain_inertial_msgs__srv__RawFileConfigRead_Request__fini(&array->data[i]);
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

microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence *
microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence * array = (microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__destroy(microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__are_equal(const microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence * lhs, const microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__srv__RawFileConfigRead_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence__copy(
  const microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence * input,
  microstrain_inertial_msgs__srv__RawFileConfigRead_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__srv__RawFileConfigRead_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__srv__RawFileConfigRead_Request * data =
      (microstrain_inertial_msgs__srv__RawFileConfigRead_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__srv__RawFileConfigRead_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__srv__RawFileConfigRead_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__srv__RawFileConfigRead_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `file_path`
#include "rosidl_runtime_c/string_functions.h"

bool
microstrain_inertial_msgs__srv__RawFileConfigRead_Response__init(microstrain_inertial_msgs__srv__RawFileConfigRead_Response * msg)
{
  if (!msg) {
    return false;
  }
  // enable
  // file_path
  if (!rosidl_runtime_c__String__init(&msg->file_path)) {
    microstrain_inertial_msgs__srv__RawFileConfigRead_Response__fini(msg);
    return false;
  }
  return true;
}

void
microstrain_inertial_msgs__srv__RawFileConfigRead_Response__fini(microstrain_inertial_msgs__srv__RawFileConfigRead_Response * msg)
{
  if (!msg) {
    return;
  }
  // enable
  // file_path
  rosidl_runtime_c__String__fini(&msg->file_path);
}

bool
microstrain_inertial_msgs__srv__RawFileConfigRead_Response__are_equal(const microstrain_inertial_msgs__srv__RawFileConfigRead_Response * lhs, const microstrain_inertial_msgs__srv__RawFileConfigRead_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file_path), &(rhs->file_path)))
  {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__srv__RawFileConfigRead_Response__copy(
  const microstrain_inertial_msgs__srv__RawFileConfigRead_Response * input,
  microstrain_inertial_msgs__srv__RawFileConfigRead_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // enable
  output->enable = input->enable;
  // file_path
  if (!rosidl_runtime_c__String__copy(
      &(input->file_path), &(output->file_path)))
  {
    return false;
  }
  return true;
}

microstrain_inertial_msgs__srv__RawFileConfigRead_Response *
microstrain_inertial_msgs__srv__RawFileConfigRead_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__srv__RawFileConfigRead_Response * msg = (microstrain_inertial_msgs__srv__RawFileConfigRead_Response *)allocator.allocate(sizeof(microstrain_inertial_msgs__srv__RawFileConfigRead_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__srv__RawFileConfigRead_Response));
  bool success = microstrain_inertial_msgs__srv__RawFileConfigRead_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__srv__RawFileConfigRead_Response__destroy(microstrain_inertial_msgs__srv__RawFileConfigRead_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__srv__RawFileConfigRead_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__init(microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__srv__RawFileConfigRead_Response * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__srv__RawFileConfigRead_Response *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__srv__RawFileConfigRead_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__srv__RawFileConfigRead_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__srv__RawFileConfigRead_Response__fini(&data[i - 1]);
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
microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__fini(microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence * array)
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
      microstrain_inertial_msgs__srv__RawFileConfigRead_Response__fini(&array->data[i]);
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

microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence *
microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence * array = (microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__destroy(microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__are_equal(const microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence * lhs, const microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__srv__RawFileConfigRead_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence__copy(
  const microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence * input,
  microstrain_inertial_msgs__srv__RawFileConfigRead_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__srv__RawFileConfigRead_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__srv__RawFileConfigRead_Response * data =
      (microstrain_inertial_msgs__srv__RawFileConfigRead_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__srv__RawFileConfigRead_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__srv__RawFileConfigRead_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__srv__RawFileConfigRead_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
