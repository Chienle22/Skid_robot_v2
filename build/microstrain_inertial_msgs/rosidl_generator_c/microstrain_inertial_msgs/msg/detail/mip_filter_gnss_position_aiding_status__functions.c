// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssPositionAidingStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "microstrain_inertial_msgs/msg/detail/mip_header__functions.h"
// Member `status`
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__functions.h"

bool
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__init(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!microstrain_inertial_msgs__msg__MipHeader__init(&msg->header)) {
    microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__fini(msg);
    return false;
  }
  // receiver_id
  // time_of_week
  // status
  if (!microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__init(&msg->status)) {
    microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__fini(msg);
    return false;
  }
  return true;
}

void
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__fini(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  microstrain_inertial_msgs__msg__MipHeader__fini(&msg->header);
  // receiver_id
  // time_of_week
  // status
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__fini(&msg->status);
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__are_equal(const microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus * lhs, const microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus * rhs)
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
  // receiver_id
  if (lhs->receiver_id != rhs->receiver_id) {
    return false;
  }
  // time_of_week
  if (lhs->time_of_week != rhs->time_of_week) {
    return false;
  }
  // status
  if (!microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__copy(
  const microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus * input,
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus * output)
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
  // receiver_id
  output->receiver_id = input->receiver_id;
  // time_of_week
  output->time_of_week = input->time_of_week;
  // status
  if (!microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus *
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus * msg = (microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus));
  bool success = microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__destroy(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__init(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__fini(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence * array)
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
      microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence *
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence * array = (microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__destroy(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence * lhs, const microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence * input,
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus * data =
      (microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
