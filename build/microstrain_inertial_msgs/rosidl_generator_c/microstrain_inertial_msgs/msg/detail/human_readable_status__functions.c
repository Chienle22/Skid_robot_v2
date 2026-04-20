// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/HumanReadableStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/human_readable_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `device_info`
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__functions.h"
// Member `gnss_state`
// Member `dual_antenna_fix_type`
// Member `filter_state`
// Member `status_flags`
// Member `continuous_bit_flags`
#include "rosidl_runtime_c/string_functions.h"

bool
microstrain_inertial_msgs__msg__HumanReadableStatus__init(microstrain_inertial_msgs__msg__HumanReadableStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    microstrain_inertial_msgs__msg__HumanReadableStatus__fini(msg);
    return false;
  }
  // device_info
  if (!microstrain_inertial_msgs__msg__MipBaseDeviceInfo__init(&msg->device_info)) {
    microstrain_inertial_msgs__msg__HumanReadableStatus__fini(msg);
    return false;
  }
  // gnss_state
  if (!rosidl_runtime_c__String__init(&msg->gnss_state)) {
    microstrain_inertial_msgs__msg__HumanReadableStatus__fini(msg);
    return false;
  }
  // dual_antenna_fix_type
  if (!rosidl_runtime_c__String__init(&msg->dual_antenna_fix_type)) {
    microstrain_inertial_msgs__msg__HumanReadableStatus__fini(msg);
    return false;
  }
  // filter_state
  if (!rosidl_runtime_c__String__init(&msg->filter_state)) {
    microstrain_inertial_msgs__msg__HumanReadableStatus__fini(msg);
    return false;
  }
  // status_flags
  if (!rosidl_runtime_c__String__Sequence__init(&msg->status_flags, 0)) {
    microstrain_inertial_msgs__msg__HumanReadableStatus__fini(msg);
    return false;
  }
  // continuous_bit_flags
  if (!rosidl_runtime_c__String__Sequence__init(&msg->continuous_bit_flags, 0)) {
    microstrain_inertial_msgs__msg__HumanReadableStatus__fini(msg);
    return false;
  }
  return true;
}

void
microstrain_inertial_msgs__msg__HumanReadableStatus__fini(microstrain_inertial_msgs__msg__HumanReadableStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // device_info
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo__fini(&msg->device_info);
  // gnss_state
  rosidl_runtime_c__String__fini(&msg->gnss_state);
  // dual_antenna_fix_type
  rosidl_runtime_c__String__fini(&msg->dual_antenna_fix_type);
  // filter_state
  rosidl_runtime_c__String__fini(&msg->filter_state);
  // status_flags
  rosidl_runtime_c__String__Sequence__fini(&msg->status_flags);
  // continuous_bit_flags
  rosidl_runtime_c__String__Sequence__fini(&msg->continuous_bit_flags);
}

bool
microstrain_inertial_msgs__msg__HumanReadableStatus__are_equal(const microstrain_inertial_msgs__msg__HumanReadableStatus * lhs, const microstrain_inertial_msgs__msg__HumanReadableStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // device_info
  if (!microstrain_inertial_msgs__msg__MipBaseDeviceInfo__are_equal(
      &(lhs->device_info), &(rhs->device_info)))
  {
    return false;
  }
  // gnss_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gnss_state), &(rhs->gnss_state)))
  {
    return false;
  }
  // dual_antenna_fix_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dual_antenna_fix_type), &(rhs->dual_antenna_fix_type)))
  {
    return false;
  }
  // filter_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->filter_state), &(rhs->filter_state)))
  {
    return false;
  }
  // status_flags
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->status_flags), &(rhs->status_flags)))
  {
    return false;
  }
  // continuous_bit_flags
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->continuous_bit_flags), &(rhs->continuous_bit_flags)))
  {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__HumanReadableStatus__copy(
  const microstrain_inertial_msgs__msg__HumanReadableStatus * input,
  microstrain_inertial_msgs__msg__HumanReadableStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // device_info
  if (!microstrain_inertial_msgs__msg__MipBaseDeviceInfo__copy(
      &(input->device_info), &(output->device_info)))
  {
    return false;
  }
  // gnss_state
  if (!rosidl_runtime_c__String__copy(
      &(input->gnss_state), &(output->gnss_state)))
  {
    return false;
  }
  // dual_antenna_fix_type
  if (!rosidl_runtime_c__String__copy(
      &(input->dual_antenna_fix_type), &(output->dual_antenna_fix_type)))
  {
    return false;
  }
  // filter_state
  if (!rosidl_runtime_c__String__copy(
      &(input->filter_state), &(output->filter_state)))
  {
    return false;
  }
  // status_flags
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->status_flags), &(output->status_flags)))
  {
    return false;
  }
  // continuous_bit_flags
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->continuous_bit_flags), &(output->continuous_bit_flags)))
  {
    return false;
  }
  return true;
}

microstrain_inertial_msgs__msg__HumanReadableStatus *
microstrain_inertial_msgs__msg__HumanReadableStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__HumanReadableStatus * msg = (microstrain_inertial_msgs__msg__HumanReadableStatus *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__HumanReadableStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__HumanReadableStatus));
  bool success = microstrain_inertial_msgs__msg__HumanReadableStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__HumanReadableStatus__destroy(microstrain_inertial_msgs__msg__HumanReadableStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__HumanReadableStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__init(microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__HumanReadableStatus * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__HumanReadableStatus *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__HumanReadableStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__HumanReadableStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__HumanReadableStatus__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__fini(microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence * array)
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
      microstrain_inertial_msgs__msg__HumanReadableStatus__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence *
microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence * array = (microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__destroy(microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__are_equal(const microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence * lhs, const microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__HumanReadableStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__copy(
  const microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence * input,
  microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__HumanReadableStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__HumanReadableStatus * data =
      (microstrain_inertial_msgs__msg__HumanReadableStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__HumanReadableStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__HumanReadableStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__HumanReadableStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
