// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummaryIndicator.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__init(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * msg)
{
  if (!msg) {
    return false;
  }
  // enabled
  // used
  // residual_high_warning
  // sample_time_warning
  // configuration_error
  // max_num_meas_exceeded
  return true;
}

void
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__fini(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * msg)
{
  if (!msg) {
    return;
  }
  // enabled
  // used
  // residual_high_warning
  // sample_time_warning
  // configuration_error
  // max_num_meas_exceeded
}

bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__are_equal(const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * lhs, const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // used
  if (lhs->used != rhs->used) {
    return false;
  }
  // residual_high_warning
  if (lhs->residual_high_warning != rhs->residual_high_warning) {
    return false;
  }
  // sample_time_warning
  if (lhs->sample_time_warning != rhs->sample_time_warning) {
    return false;
  }
  // configuration_error
  if (lhs->configuration_error != rhs->configuration_error) {
    return false;
  }
  // max_num_meas_exceeded
  if (lhs->max_num_meas_exceeded != rhs->max_num_meas_exceeded) {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__copy(
  const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * input,
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * output)
{
  if (!input || !output) {
    return false;
  }
  // enabled
  output->enabled = input->enabled;
  // used
  output->used = input->used;
  // residual_high_warning
  output->residual_high_warning = input->residual_high_warning;
  // sample_time_warning
  output->sample_time_warning = input->sample_time_warning;
  // configuration_error
  output->configuration_error = input->configuration_error;
  // max_num_meas_exceeded
  output->max_num_meas_exceeded = input->max_num_meas_exceeded;
  return true;
}

microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator *
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * msg = (microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator));
  bool success = microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__destroy(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__init(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__fini(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence * array)
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
      microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence *
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence * array = (microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__destroy(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence * lhs, const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence * input,
  microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator * data =
      (microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
