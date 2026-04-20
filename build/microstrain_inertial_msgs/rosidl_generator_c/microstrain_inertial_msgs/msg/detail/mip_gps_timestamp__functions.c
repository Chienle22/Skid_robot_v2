// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/MipGpsTimestamp.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `valid_flags`
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp_valid_flags__functions.h"

bool
microstrain_inertial_msgs__msg__MipGpsTimestamp__init(microstrain_inertial_msgs__msg__MipGpsTimestamp * msg)
{
  if (!msg) {
    return false;
  }
  // tow
  // week_number
  // valid_flags
  if (!microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__init(&msg->valid_flags)) {
    microstrain_inertial_msgs__msg__MipGpsTimestamp__fini(msg);
    return false;
  }
  return true;
}

void
microstrain_inertial_msgs__msg__MipGpsTimestamp__fini(microstrain_inertial_msgs__msg__MipGpsTimestamp * msg)
{
  if (!msg) {
    return;
  }
  // tow
  // week_number
  // valid_flags
  microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__fini(&msg->valid_flags);
}

bool
microstrain_inertial_msgs__msg__MipGpsTimestamp__are_equal(const microstrain_inertial_msgs__msg__MipGpsTimestamp * lhs, const microstrain_inertial_msgs__msg__MipGpsTimestamp * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tow
  if (lhs->tow != rhs->tow) {
    return false;
  }
  // week_number
  if (lhs->week_number != rhs->week_number) {
    return false;
  }
  // valid_flags
  if (!microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__are_equal(
      &(lhs->valid_flags), &(rhs->valid_flags)))
  {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipGpsTimestamp__copy(
  const microstrain_inertial_msgs__msg__MipGpsTimestamp * input,
  microstrain_inertial_msgs__msg__MipGpsTimestamp * output)
{
  if (!input || !output) {
    return false;
  }
  // tow
  output->tow = input->tow;
  // week_number
  output->week_number = input->week_number;
  // valid_flags
  if (!microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__copy(
      &(input->valid_flags), &(output->valid_flags)))
  {
    return false;
  }
  return true;
}

microstrain_inertial_msgs__msg__MipGpsTimestamp *
microstrain_inertial_msgs__msg__MipGpsTimestamp__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipGpsTimestamp * msg = (microstrain_inertial_msgs__msg__MipGpsTimestamp *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipGpsTimestamp), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__MipGpsTimestamp));
  bool success = microstrain_inertial_msgs__msg__MipGpsTimestamp__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__MipGpsTimestamp__destroy(microstrain_inertial_msgs__msg__MipGpsTimestamp * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__MipGpsTimestamp__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__init(microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipGpsTimestamp * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__MipGpsTimestamp *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__MipGpsTimestamp), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__MipGpsTimestamp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__MipGpsTimestamp__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__fini(microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence * array)
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
      microstrain_inertial_msgs__msg__MipGpsTimestamp__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence *
microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence * array = (microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__destroy(microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence * lhs, const microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipGpsTimestamp__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence * input,
  microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__MipGpsTimestamp);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__MipGpsTimestamp * data =
      (microstrain_inertial_msgs__msg__MipGpsTimestamp *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__MipGpsTimestamp__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__MipGpsTimestamp__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipGpsTimestamp__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
