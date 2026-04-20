// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatusStatusFlags.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status_status_flags__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__init(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags * msg)
{
  if (!msg) {
    return false;
  }
  // rcv_1_data_valid
  // rcv_2_data_valid
  // antenna_offsets_valid
  return true;
}

void
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__fini(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags * msg)
{
  if (!msg) {
    return;
  }
  // rcv_1_data_valid
  // rcv_2_data_valid
  // antenna_offsets_valid
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__are_equal(const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags * lhs, const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rcv_1_data_valid
  if (lhs->rcv_1_data_valid != rhs->rcv_1_data_valid) {
    return false;
  }
  // rcv_2_data_valid
  if (lhs->rcv_2_data_valid != rhs->rcv_2_data_valid) {
    return false;
  }
  // antenna_offsets_valid
  if (lhs->antenna_offsets_valid != rhs->antenna_offsets_valid) {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__copy(
  const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags * input,
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags * output)
{
  if (!input || !output) {
    return false;
  }
  // rcv_1_data_valid
  output->rcv_1_data_valid = input->rcv_1_data_valid;
  // rcv_2_data_valid
  output->rcv_2_data_valid = input->rcv_2_data_valid;
  // antenna_offsets_valid
  output->antenna_offsets_valid = input->antenna_offsets_valid;
  return true;
}

microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags *
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags * msg = (microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags));
  bool success = microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__destroy(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__init(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__fini(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence * array)
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
      microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence *
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence * array = (microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__destroy(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence * lhs, const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence * input,
  microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags * data =
      (microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
