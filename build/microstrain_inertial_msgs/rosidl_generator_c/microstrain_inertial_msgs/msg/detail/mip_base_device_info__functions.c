// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/MipBaseDeviceInfo.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `firmware_version`
// Member `model_name`
// Member `model_number`
// Member `serial_number`
// Member `lot_number`
// Member `device_options`
#include "rosidl_runtime_c/string_functions.h"

bool
microstrain_inertial_msgs__msg__MipBaseDeviceInfo__init(microstrain_inertial_msgs__msg__MipBaseDeviceInfo * msg)
{
  if (!msg) {
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__init(&msg->firmware_version)) {
    microstrain_inertial_msgs__msg__MipBaseDeviceInfo__fini(msg);
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    microstrain_inertial_msgs__msg__MipBaseDeviceInfo__fini(msg);
    return false;
  }
  // model_number
  if (!rosidl_runtime_c__String__init(&msg->model_number)) {
    microstrain_inertial_msgs__msg__MipBaseDeviceInfo__fini(msg);
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    microstrain_inertial_msgs__msg__MipBaseDeviceInfo__fini(msg);
    return false;
  }
  // lot_number
  if (!rosidl_runtime_c__String__init(&msg->lot_number)) {
    microstrain_inertial_msgs__msg__MipBaseDeviceInfo__fini(msg);
    return false;
  }
  // device_options
  if (!rosidl_runtime_c__String__init(&msg->device_options)) {
    microstrain_inertial_msgs__msg__MipBaseDeviceInfo__fini(msg);
    return false;
  }
  return true;
}

void
microstrain_inertial_msgs__msg__MipBaseDeviceInfo__fini(microstrain_inertial_msgs__msg__MipBaseDeviceInfo * msg)
{
  if (!msg) {
    return;
  }
  // firmware_version
  rosidl_runtime_c__String__fini(&msg->firmware_version);
  // model_name
  rosidl_runtime_c__String__fini(&msg->model_name);
  // model_number
  rosidl_runtime_c__String__fini(&msg->model_number);
  // serial_number
  rosidl_runtime_c__String__fini(&msg->serial_number);
  // lot_number
  rosidl_runtime_c__String__fini(&msg->lot_number);
  // device_options
  rosidl_runtime_c__String__fini(&msg->device_options);
}

bool
microstrain_inertial_msgs__msg__MipBaseDeviceInfo__are_equal(const microstrain_inertial_msgs__msg__MipBaseDeviceInfo * lhs, const microstrain_inertial_msgs__msg__MipBaseDeviceInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_version), &(rhs->firmware_version)))
  {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_name), &(rhs->model_name)))
  {
    return false;
  }
  // model_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_number), &(rhs->model_number)))
  {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial_number), &(rhs->serial_number)))
  {
    return false;
  }
  // lot_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lot_number), &(rhs->lot_number)))
  {
    return false;
  }
  // device_options
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_options), &(rhs->device_options)))
  {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipBaseDeviceInfo__copy(
  const microstrain_inertial_msgs__msg__MipBaseDeviceInfo * input,
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_version), &(output->firmware_version)))
  {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__copy(
      &(input->model_name), &(output->model_name)))
  {
    return false;
  }
  // model_number
  if (!rosidl_runtime_c__String__copy(
      &(input->model_number), &(output->model_number)))
  {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->serial_number), &(output->serial_number)))
  {
    return false;
  }
  // lot_number
  if (!rosidl_runtime_c__String__copy(
      &(input->lot_number), &(output->lot_number)))
  {
    return false;
  }
  // device_options
  if (!rosidl_runtime_c__String__copy(
      &(input->device_options), &(output->device_options)))
  {
    return false;
  }
  return true;
}

microstrain_inertial_msgs__msg__MipBaseDeviceInfo *
microstrain_inertial_msgs__msg__MipBaseDeviceInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo * msg = (microstrain_inertial_msgs__msg__MipBaseDeviceInfo *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipBaseDeviceInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__MipBaseDeviceInfo));
  bool success = microstrain_inertial_msgs__msg__MipBaseDeviceInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__MipBaseDeviceInfo__destroy(microstrain_inertial_msgs__msg__MipBaseDeviceInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__MipBaseDeviceInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__init(microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__MipBaseDeviceInfo *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__MipBaseDeviceInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__MipBaseDeviceInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__MipBaseDeviceInfo__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__fini(microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence * array)
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
      microstrain_inertial_msgs__msg__MipBaseDeviceInfo__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence *
microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence * array = (microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__destroy(microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence * lhs, const microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipBaseDeviceInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence * input,
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__MipBaseDeviceInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__MipBaseDeviceInfo * data =
      (microstrain_inertial_msgs__msg__MipBaseDeviceInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__MipBaseDeviceInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__MipBaseDeviceInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipBaseDeviceInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
