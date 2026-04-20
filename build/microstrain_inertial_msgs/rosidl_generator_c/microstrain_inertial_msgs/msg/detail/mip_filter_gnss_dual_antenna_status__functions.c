// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "microstrain_inertial_msgs/msg/detail/mip_header__functions.h"
// Member `status_flags`
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status_status_flags__functions.h"

bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__init(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!microstrain_inertial_msgs__msg__MipHeader__init(&msg->header)) {
    microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__fini(msg);
    return false;
  }
  // time_of_week
  // heading
  // heading_unc
  // fix_type
  // status_flags
  if (!microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__init(&msg->status_flags)) {
    microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__fini(msg);
    return false;
  }
  // valid_flags
  return true;
}

void
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__fini(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  microstrain_inertial_msgs__msg__MipHeader__fini(&msg->header);
  // time_of_week
  // heading
  // heading_unc
  // fix_type
  // status_flags
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__fini(&msg->status_flags);
  // valid_flags
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__are_equal(const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * lhs, const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * rhs)
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
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // heading_unc
  if (lhs->heading_unc != rhs->heading_unc) {
    return false;
  }
  // fix_type
  if (lhs->fix_type != rhs->fix_type) {
    return false;
  }
  // status_flags
  if (!microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__are_equal(
      &(lhs->status_flags), &(rhs->status_flags)))
  {
    return false;
  }
  // valid_flags
  if (lhs->valid_flags != rhs->valid_flags) {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__copy(
  const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * input,
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * output)
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
  // heading
  output->heading = input->heading;
  // heading_unc
  output->heading_unc = input->heading_unc;
  // fix_type
  output->fix_type = input->fix_type;
  // status_flags
  if (!microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__copy(
      &(input->status_flags), &(output->status_flags)))
  {
    return false;
  }
  // valid_flags
  output->valid_flags = input->valid_flags;
  return true;
}

microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus *
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * msg = (microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus));
  bool success = microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__destroy(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__init(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__fini(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * array)
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
      microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence *
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * array = (microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__destroy(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * lhs, const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * input,
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus * data =
      (microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
