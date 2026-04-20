// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGx5StatusFlags.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__init(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * msg)
{
  if (!msg) {
    return false;
  }
  // init_no_attitude
  // init_no_position_velocity
  // run_imu_unavailable
  // run_gps_unavailable
  // run_matrix_singularity
  // run_position_covariance_warning
  // run_velocity_covariance_warning
  // run_attitude_covariance_warning
  // run_nan_in_solution_warning
  // run_gyro_bias_est_high_warning
  // run_accel_bias_est_high_warning
  // run_gyro_scale_factor_est_high_warning
  // run_accel_scale_factor_est_high_warning
  // run_mag_bias_est_high_warning
  // run_ant_offset_correction_est_high_warning
  // run_mag_hard_iron_est_high_warning
  // run_mag_soft_iron_est_high_warning
  return true;
}

void
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__fini(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * msg)
{
  if (!msg) {
    return;
  }
  // init_no_attitude
  // init_no_position_velocity
  // run_imu_unavailable
  // run_gps_unavailable
  // run_matrix_singularity
  // run_position_covariance_warning
  // run_velocity_covariance_warning
  // run_attitude_covariance_warning
  // run_nan_in_solution_warning
  // run_gyro_bias_est_high_warning
  // run_accel_bias_est_high_warning
  // run_gyro_scale_factor_est_high_warning
  // run_accel_scale_factor_est_high_warning
  // run_mag_bias_est_high_warning
  // run_ant_offset_correction_est_high_warning
  // run_mag_hard_iron_est_high_warning
  // run_mag_soft_iron_est_high_warning
}

bool
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__are_equal(const microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * lhs, const microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // init_no_attitude
  if (lhs->init_no_attitude != rhs->init_no_attitude) {
    return false;
  }
  // init_no_position_velocity
  if (lhs->init_no_position_velocity != rhs->init_no_position_velocity) {
    return false;
  }
  // run_imu_unavailable
  if (lhs->run_imu_unavailable != rhs->run_imu_unavailable) {
    return false;
  }
  // run_gps_unavailable
  if (lhs->run_gps_unavailable != rhs->run_gps_unavailable) {
    return false;
  }
  // run_matrix_singularity
  if (lhs->run_matrix_singularity != rhs->run_matrix_singularity) {
    return false;
  }
  // run_position_covariance_warning
  if (lhs->run_position_covariance_warning != rhs->run_position_covariance_warning) {
    return false;
  }
  // run_velocity_covariance_warning
  if (lhs->run_velocity_covariance_warning != rhs->run_velocity_covariance_warning) {
    return false;
  }
  // run_attitude_covariance_warning
  if (lhs->run_attitude_covariance_warning != rhs->run_attitude_covariance_warning) {
    return false;
  }
  // run_nan_in_solution_warning
  if (lhs->run_nan_in_solution_warning != rhs->run_nan_in_solution_warning) {
    return false;
  }
  // run_gyro_bias_est_high_warning
  if (lhs->run_gyro_bias_est_high_warning != rhs->run_gyro_bias_est_high_warning) {
    return false;
  }
  // run_accel_bias_est_high_warning
  if (lhs->run_accel_bias_est_high_warning != rhs->run_accel_bias_est_high_warning) {
    return false;
  }
  // run_gyro_scale_factor_est_high_warning
  if (lhs->run_gyro_scale_factor_est_high_warning != rhs->run_gyro_scale_factor_est_high_warning) {
    return false;
  }
  // run_accel_scale_factor_est_high_warning
  if (lhs->run_accel_scale_factor_est_high_warning != rhs->run_accel_scale_factor_est_high_warning) {
    return false;
  }
  // run_mag_bias_est_high_warning
  if (lhs->run_mag_bias_est_high_warning != rhs->run_mag_bias_est_high_warning) {
    return false;
  }
  // run_ant_offset_correction_est_high_warning
  if (lhs->run_ant_offset_correction_est_high_warning != rhs->run_ant_offset_correction_est_high_warning) {
    return false;
  }
  // run_mag_hard_iron_est_high_warning
  if (lhs->run_mag_hard_iron_est_high_warning != rhs->run_mag_hard_iron_est_high_warning) {
    return false;
  }
  // run_mag_soft_iron_est_high_warning
  if (lhs->run_mag_soft_iron_est_high_warning != rhs->run_mag_soft_iron_est_high_warning) {
    return false;
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__copy(
  const microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * input,
  microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * output)
{
  if (!input || !output) {
    return false;
  }
  // init_no_attitude
  output->init_no_attitude = input->init_no_attitude;
  // init_no_position_velocity
  output->init_no_position_velocity = input->init_no_position_velocity;
  // run_imu_unavailable
  output->run_imu_unavailable = input->run_imu_unavailable;
  // run_gps_unavailable
  output->run_gps_unavailable = input->run_gps_unavailable;
  // run_matrix_singularity
  output->run_matrix_singularity = input->run_matrix_singularity;
  // run_position_covariance_warning
  output->run_position_covariance_warning = input->run_position_covariance_warning;
  // run_velocity_covariance_warning
  output->run_velocity_covariance_warning = input->run_velocity_covariance_warning;
  // run_attitude_covariance_warning
  output->run_attitude_covariance_warning = input->run_attitude_covariance_warning;
  // run_nan_in_solution_warning
  output->run_nan_in_solution_warning = input->run_nan_in_solution_warning;
  // run_gyro_bias_est_high_warning
  output->run_gyro_bias_est_high_warning = input->run_gyro_bias_est_high_warning;
  // run_accel_bias_est_high_warning
  output->run_accel_bias_est_high_warning = input->run_accel_bias_est_high_warning;
  // run_gyro_scale_factor_est_high_warning
  output->run_gyro_scale_factor_est_high_warning = input->run_gyro_scale_factor_est_high_warning;
  // run_accel_scale_factor_est_high_warning
  output->run_accel_scale_factor_est_high_warning = input->run_accel_scale_factor_est_high_warning;
  // run_mag_bias_est_high_warning
  output->run_mag_bias_est_high_warning = input->run_mag_bias_est_high_warning;
  // run_ant_offset_correction_est_high_warning
  output->run_ant_offset_correction_est_high_warning = input->run_ant_offset_correction_est_high_warning;
  // run_mag_hard_iron_est_high_warning
  output->run_mag_hard_iron_est_high_warning = input->run_mag_hard_iron_est_high_warning;
  // run_mag_soft_iron_est_high_warning
  output->run_mag_soft_iron_est_high_warning = input->run_mag_soft_iron_est_high_warning;
  return true;
}

microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags *
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * msg = (microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags));
  bool success = microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__destroy(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__init(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * data = NULL;

  if (size) {
    data = (microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags *)allocator.zero_allocate(size, sizeof(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__fini(&data[i - 1]);
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
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__fini(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * array)
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
      microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__fini(&array->data[i]);
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

microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence *
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * array = (microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence *)allocator.allocate(sizeof(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__destroy(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__are_equal(const microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * lhs, const microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__copy(
  const microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * input,
  microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags * data =
      (microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
