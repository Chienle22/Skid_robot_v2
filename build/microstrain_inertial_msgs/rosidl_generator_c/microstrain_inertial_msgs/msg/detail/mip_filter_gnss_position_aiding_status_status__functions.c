// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssPositionAidingStatusStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__init(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus * msg)
{
  if (!msg) {
    return false;
  }
  // tight_coupling
  // differential
  // integer_fix
  // gps_l1
  // gps_l2
  // gps_l5
  // glo_l1
  // glo_l2
  // gal_e1
  // gal_e5
  // gal_e6
  // bei_b1
  // bei_b2
  // bei_b3
  // no_fix
  // config_error
  return true;
}

void
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__fini(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus * msg)
{
  if (!msg) {
    return;
  }
  // tight_coupling
  // differential
  // integer_fix
  // gps_l1
  // gps_l2
  // gps_l5
  // glo_l1
  // glo_l2
  // gal_e1
  // gal_e5
  // gal_e6
  // bei_b1
  // bei_b2
  // bei_b3
  // no_fix
  // config_error
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__are_equal(const microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus * lhs, const microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tight_coupling
  if (lhs->tight_coupling != rhs->tight_coupling) {
    return false;
  }
  // differential
  if (lhs->differential != rhs->differential) {
    return false;
  }
  // integer_fix
  if (lhs->integer_fix != rhs->integer_fix) {
    return false;
  }
  // gps_l1
  if (lhs->gps_l1 != rhs->gps_l1) {
    return false;
  }
  // gps_l2
  if (lhs->gps_l2 != rhs->gps_l2) {
    return false;
  }
  // gps_l5
  if (lhs->gps_l5 != rhs->gps_l5) {
    return false;
  }
  // glo_l1
  if (lhs->glo_l1 != rhs->glo_l1) {
    return false;
  }
  // glo_l2
  if (lhs->glo_l2 != rhs->glo_l2) {
    return false;
  }
  // gal_e1
  if (lhs->gal_e1 != rhs->gal_e1) {
    return false;
  }
  // gal_e5
  if (lhs->gal_e5 != rhs->gal_e5) {
    return false;
  }
  // gal_e6
  if (lhs->gal_e6 != rhs->gal_e6) {
    return false;
  }
  // bei_b1
  if (lhs->bei_b1 != rhs->bei_b1) {
    return false;
  }
  // bei_b2
  if (lhs->bei_b2 != rhs->bei_b2) {
    return false;
  }
  // bei_b3
  if (lhs->bei_b3 != rhs->bei_b3) {
    return false;
  }
  // no_fix
  if (lhs->no_fix != rhs->no_fix) {
    return false;
  }
  // config_error
  if (lhs->config_error != rhs->config_error) {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__copy(
  const microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus * input,
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // tight_coupling
  output->tight_coupling = input->tight_coupling;
  // differential
  output->differential = input->differential;
  // integer_fix
  output->integer_fix = input->integer_fix;
  // gps_l1
  output->gps_l1 = input->gps_l1;
  // gps_l2
  output->gps_l2 = input->gps_l2;
  // gps_l5
  output->gps_l5 = input->gps_l5;
  // glo_l1
  output->glo_l1 = input->glo_l1;
  // glo_l2
  output->glo_l2 = input->glo_l2;
  // gal_e1
  output->gal_e1 = input->gal_e1;
  // gal_e5
  output->gal_e5 = input->gal_e5;
  // gal_e6
  output->gal_e6 = input->gal_e6;
  // bei_b1
  output->bei_b1 = input->bei_b1;
  // bei_b2
  output->bei_b2 = input->bei_b2;
  // bei_b3
  output->bei_b3 = input->bei_b3;
  // no_fix
  output->no_fix = input->no_fix;
  // config_error
  output->config_error = input->config_error;
  return true;
}

microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus *
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus * msg = (microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus));
  bool success = microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__destroy(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__init(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__fini(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence * array)
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
      microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence *
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence * array = (microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__destroy(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence * lhs, const microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence * input,
  microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus * data =
      (microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
