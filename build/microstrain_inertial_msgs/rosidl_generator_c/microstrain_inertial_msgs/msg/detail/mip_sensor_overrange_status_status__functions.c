// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/MipSensorOverrangeStatusStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__init(microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * msg)
{
  if (!msg) {
    return false;
  }
  // accel_x
  // accel_y
  // accel_z
  // gyro_x
  // gyro_y
  // gyro_z
  // mag_x
  // mag_y
  // mag_z
  // press
  return true;
}

void
microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__fini(microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * msg)
{
  if (!msg) {
    return;
  }
  // accel_x
  // accel_y
  // accel_z
  // gyro_x
  // gyro_y
  // gyro_z
  // mag_x
  // mag_y
  // mag_z
  // press
}

bool
microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__are_equal(const microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * lhs, const microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accel_x
  if (lhs->accel_x != rhs->accel_x) {
    return false;
  }
  // accel_y
  if (lhs->accel_y != rhs->accel_y) {
    return false;
  }
  // accel_z
  if (lhs->accel_z != rhs->accel_z) {
    return false;
  }
  // gyro_x
  if (lhs->gyro_x != rhs->gyro_x) {
    return false;
  }
  // gyro_y
  if (lhs->gyro_y != rhs->gyro_y) {
    return false;
  }
  // gyro_z
  if (lhs->gyro_z != rhs->gyro_z) {
    return false;
  }
  // mag_x
  if (lhs->mag_x != rhs->mag_x) {
    return false;
  }
  // mag_y
  if (lhs->mag_y != rhs->mag_y) {
    return false;
  }
  // mag_z
  if (lhs->mag_z != rhs->mag_z) {
    return false;
  }
  // press
  if (lhs->press != rhs->press) {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__copy(
  const microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * input,
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // accel_x
  output->accel_x = input->accel_x;
  // accel_y
  output->accel_y = input->accel_y;
  // accel_z
  output->accel_z = input->accel_z;
  // gyro_x
  output->gyro_x = input->gyro_x;
  // gyro_y
  output->gyro_y = input->gyro_y;
  // gyro_z
  output->gyro_z = input->gyro_z;
  // mag_x
  output->mag_x = input->mag_x;
  // mag_y
  output->mag_y = input->mag_y;
  // mag_z
  output->mag_z = input->mag_z;
  // press
  output->press = input->press;
  return true;
}

microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus *
microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * msg = (microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus));
  bool success = microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__destroy(microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__init(microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__fini(microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence * array)
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
      microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence *
microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence * array = (microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__destroy(microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence * lhs, const microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence * input,
  microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus * data =
      (microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
