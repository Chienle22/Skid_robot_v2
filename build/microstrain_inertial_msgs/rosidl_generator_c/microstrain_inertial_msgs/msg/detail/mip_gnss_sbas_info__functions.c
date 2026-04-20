// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/MipGnssSbasInfo.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "microstrain_inertial_msgs/msg/detail/mip_header__functions.h"
// Member `sbas_status`
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info_sbas_status__functions.h"

bool
microstrain_inertial_msgs__msg__MipGnssSbasInfo__init(microstrain_inertial_msgs__msg__MipGnssSbasInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!microstrain_inertial_msgs__msg__MipHeader__init(&msg->header)) {
    microstrain_inertial_msgs__msg__MipGnssSbasInfo__fini(msg);
    return false;
  }
  // time_of_week
  // week_number
  // sbas_system
  // sbas_id
  // count
  // sbas_status
  if (!microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__init(&msg->sbas_status)) {
    microstrain_inertial_msgs__msg__MipGnssSbasInfo__fini(msg);
    return false;
  }
  return true;
}

void
microstrain_inertial_msgs__msg__MipGnssSbasInfo__fini(microstrain_inertial_msgs__msg__MipGnssSbasInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  microstrain_inertial_msgs__msg__MipHeader__fini(&msg->header);
  // time_of_week
  // week_number
  // sbas_system
  // sbas_id
  // count
  // sbas_status
  microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__fini(&msg->sbas_status);
}

bool
microstrain_inertial_msgs__msg__MipGnssSbasInfo__are_equal(const microstrain_inertial_msgs__msg__MipGnssSbasInfo * lhs, const microstrain_inertial_msgs__msg__MipGnssSbasInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!microstrain_inertial_msgs__msg__MipHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // time_of_week
  if (lhs->time_of_week != rhs->time_of_week) {
    return false;
  }
  // week_number
  if (lhs->week_number != rhs->week_number) {
    return false;
  }
  // sbas_system
  if (lhs->sbas_system != rhs->sbas_system) {
    return false;
  }
  // sbas_id
  if (lhs->sbas_id != rhs->sbas_id) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  // sbas_status
  if (!microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__are_equal(
      &(lhs->sbas_status), &(rhs->sbas_status)))
  {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipGnssSbasInfo__copy(
  const microstrain_inertial_msgs__msg__MipGnssSbasInfo * input,
  microstrain_inertial_msgs__msg__MipGnssSbasInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!microstrain_inertial_msgs__msg__MipHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // time_of_week
  output->time_of_week = input->time_of_week;
  // week_number
  output->week_number = input->week_number;
  // sbas_system
  output->sbas_system = input->sbas_system;
  // sbas_id
  output->sbas_id = input->sbas_id;
  // count
  output->count = input->count;
  // sbas_status
  if (!microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__copy(
      &(input->sbas_status), &(output->sbas_status)))
  {
    return false;
  }
  return true;
}

microstrain_inertial_msgs__msg__MipGnssSbasInfo *
microstrain_inertial_msgs__msg__MipGnssSbasInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipGnssSbasInfo * msg = (microstrain_inertial_msgs__msg__MipGnssSbasInfo *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipGnssSbasInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__MipGnssSbasInfo));
  bool success = microstrain_inertial_msgs__msg__MipGnssSbasInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__MipGnssSbasInfo__destroy(microstrain_inertial_msgs__msg__MipGnssSbasInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__MipGnssSbasInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__init(microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipGnssSbasInfo * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__MipGnssSbasInfo *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__MipGnssSbasInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__MipGnssSbasInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__MipGnssSbasInfo__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__fini(microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * array)
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
      microstrain_inertial_msgs__msg__MipGnssSbasInfo__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence *
microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * array = (microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__destroy(microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * lhs, const microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipGnssSbasInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * input,
  microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__MipGnssSbasInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__MipGnssSbasInfo * data =
      (microstrain_inertial_msgs__msg__MipGnssSbasInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__MipGnssSbasInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__MipGnssSbasInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipGnssSbasInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
