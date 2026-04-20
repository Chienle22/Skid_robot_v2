// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "microstrain_inertial_msgs/msg/detail/mip_header__functions.h"
// Member `epoch_status`
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__functions.h"
// Member `dongle_status`
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__functions.h"

bool
microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__init(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!microstrain_inertial_msgs__msg__MipHeader__init(&msg->header)) {
    microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__fini(msg);
    return false;
  }
  // time_of_week
  // week_number
  // epoch_status
  if (!microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__init(&msg->epoch_status)) {
    microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__fini(msg);
    return false;
  }
  // dongle_status
  if (!microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__init(&msg->dongle_status)) {
    microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__fini(msg);
    return false;
  }
  // gps_correction_latency
  // glonass_correction_latency
  // galileo_correction_latency
  // beidou_correction_latency
  return true;
}

void
microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__fini(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  microstrain_inertial_msgs__msg__MipHeader__fini(&msg->header);
  // time_of_week
  // week_number
  // epoch_status
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__fini(&msg->epoch_status);
  // dongle_status
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__fini(&msg->dongle_status);
  // gps_correction_latency
  // glonass_correction_latency
  // galileo_correction_latency
  // beidou_correction_latency
}

bool
microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__are_equal(const microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus * lhs, const microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus * rhs)
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
  // epoch_status
  if (!microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__are_equal(
      &(lhs->epoch_status), &(rhs->epoch_status)))
  {
    return false;
  }
  // dongle_status
  if (!microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__are_equal(
      &(lhs->dongle_status), &(rhs->dongle_status)))
  {
    return false;
  }
  // gps_correction_latency
  if (lhs->gps_correction_latency != rhs->gps_correction_latency) {
    return false;
  }
  // glonass_correction_latency
  if (lhs->glonass_correction_latency != rhs->glonass_correction_latency) {
    return false;
  }
  // galileo_correction_latency
  if (lhs->galileo_correction_latency != rhs->galileo_correction_latency) {
    return false;
  }
  // beidou_correction_latency
  if (lhs->beidou_correction_latency != rhs->beidou_correction_latency) {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__copy(
  const microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus * input,
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus * output)
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
  // epoch_status
  if (!microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__copy(
      &(input->epoch_status), &(output->epoch_status)))
  {
    return false;
  }
  // dongle_status
  if (!microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__copy(
      &(input->dongle_status), &(output->dongle_status)))
  {
    return false;
  }
  // gps_correction_latency
  output->gps_correction_latency = input->gps_correction_latency;
  // glonass_correction_latency
  output->glonass_correction_latency = input->glonass_correction_latency;
  // galileo_correction_latency
  output->galileo_correction_latency = input->galileo_correction_latency;
  // beidou_correction_latency
  output->beidou_correction_latency = input->beidou_correction_latency;
  return true;
}

microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus *
microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus * msg = (microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus));
  bool success = microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__destroy(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__init(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__fini(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence * array)
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
      microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence *
microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence * array = (microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__destroy(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence * lhs, const microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence * input,
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus * data =
      (microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
