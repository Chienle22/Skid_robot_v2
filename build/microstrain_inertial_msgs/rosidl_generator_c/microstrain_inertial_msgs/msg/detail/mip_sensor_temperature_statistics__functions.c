// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/MipSensorTemperatureStatistics.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_temperature_statistics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "microstrain_inertial_msgs/msg/detail/mip_header__functions.h"

bool
microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__init(microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!microstrain_inertial_msgs__msg__MipHeader__init(&msg->header)) {
    microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__fini(msg);
    return false;
  }
  // min_temp
  // max_temp
  // mean_temp
  return true;
}

void
microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__fini(microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics * msg)
{
  if (!msg) {
    return;
  }
  // header
  microstrain_inertial_msgs__msg__MipHeader__fini(&msg->header);
  // min_temp
  // max_temp
  // mean_temp
}

bool
microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__are_equal(const microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics * lhs, const microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics * rhs)
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
  // min_temp
  if (lhs->min_temp != rhs->min_temp) {
    return false;
  }
  // max_temp
  if (lhs->max_temp != rhs->max_temp) {
    return false;
  }
  // mean_temp
  if (lhs->mean_temp != rhs->mean_temp) {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__copy(
  const microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics * input,
  microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics * output)
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
  // min_temp
  output->min_temp = input->min_temp;
  // max_temp
  output->max_temp = input->max_temp;
  // mean_temp
  output->mean_temp = input->mean_temp;
  return true;
}

microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics *
microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics * msg = (microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics));
  bool success = microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__destroy(microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__init(microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__fini(microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence * array)
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
      microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence *
microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence * array = (microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__destroy(microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence * lhs, const microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence * input,
  microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics * data =
      (microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
