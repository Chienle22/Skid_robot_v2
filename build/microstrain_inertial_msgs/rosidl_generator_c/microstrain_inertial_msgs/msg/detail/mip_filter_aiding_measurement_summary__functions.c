// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummary.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "microstrain_inertial_msgs/msg/detail/mip_header__functions.h"
// Member `indicator`
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__functions.h"

bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__init(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!microstrain_inertial_msgs__msg__MipHeader__init(&msg->header)) {
    microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__fini(msg);
    return false;
  }
  // time_of_week
  // source
  // type
  // indicator
  if (!microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__init(&msg->indicator)) {
    microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__fini(msg);
    return false;
  }
  return true;
}

void
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__fini(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * msg)
{
  if (!msg) {
    return;
  }
  // header
  microstrain_inertial_msgs__msg__MipHeader__fini(&msg->header);
  // time_of_week
  // source
  // type
  // indicator
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__fini(&msg->indicator);
}

bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__are_equal(const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * lhs, const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * rhs)
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
  // source
  if (lhs->source != rhs->source) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // indicator
  if (!microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__are_equal(
      &(lhs->indicator), &(rhs->indicator)))
  {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__copy(
  const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * input,
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * output)
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
  // source
  output->source = input->source;
  // type
  output->type = input->type;
  // indicator
  if (!microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__copy(
      &(input->indicator), &(output->indicator)))
  {
    return false;
  }
  return true;
}

microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary *
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * msg = (microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary));
  bool success = microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__destroy(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__init(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__fini(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * array)
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
      microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence *
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * array = (microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__destroy(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * lhs, const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * input,
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary * data =
      (microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
