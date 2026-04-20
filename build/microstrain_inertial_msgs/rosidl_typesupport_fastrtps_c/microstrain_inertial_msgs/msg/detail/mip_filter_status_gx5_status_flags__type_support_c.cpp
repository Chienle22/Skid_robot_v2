// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGx5StatusFlags.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MipFilterStatusGx5StatusFlags__ros_msg_type = microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags;

static bool _MipFilterStatusGx5StatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MipFilterStatusGx5StatusFlags__ros_msg_type * ros_message = static_cast<const _MipFilterStatusGx5StatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: init_no_attitude
  {
    cdr << (ros_message->init_no_attitude ? true : false);
  }

  // Field name: init_no_position_velocity
  {
    cdr << (ros_message->init_no_position_velocity ? true : false);
  }

  // Field name: run_imu_unavailable
  {
    cdr << (ros_message->run_imu_unavailable ? true : false);
  }

  // Field name: run_gps_unavailable
  {
    cdr << (ros_message->run_gps_unavailable ? true : false);
  }

  // Field name: run_matrix_singularity
  {
    cdr << (ros_message->run_matrix_singularity ? true : false);
  }

  // Field name: run_position_covariance_warning
  {
    cdr << (ros_message->run_position_covariance_warning ? true : false);
  }

  // Field name: run_velocity_covariance_warning
  {
    cdr << (ros_message->run_velocity_covariance_warning ? true : false);
  }

  // Field name: run_attitude_covariance_warning
  {
    cdr << (ros_message->run_attitude_covariance_warning ? true : false);
  }

  // Field name: run_nan_in_solution_warning
  {
    cdr << (ros_message->run_nan_in_solution_warning ? true : false);
  }

  // Field name: run_gyro_bias_est_high_warning
  {
    cdr << (ros_message->run_gyro_bias_est_high_warning ? true : false);
  }

  // Field name: run_accel_bias_est_high_warning
  {
    cdr << (ros_message->run_accel_bias_est_high_warning ? true : false);
  }

  // Field name: run_gyro_scale_factor_est_high_warning
  {
    cdr << (ros_message->run_gyro_scale_factor_est_high_warning ? true : false);
  }

  // Field name: run_accel_scale_factor_est_high_warning
  {
    cdr << (ros_message->run_accel_scale_factor_est_high_warning ? true : false);
  }

  // Field name: run_mag_bias_est_high_warning
  {
    cdr << (ros_message->run_mag_bias_est_high_warning ? true : false);
  }

  // Field name: run_ant_offset_correction_est_high_warning
  {
    cdr << (ros_message->run_ant_offset_correction_est_high_warning ? true : false);
  }

  // Field name: run_mag_hard_iron_est_high_warning
  {
    cdr << (ros_message->run_mag_hard_iron_est_high_warning ? true : false);
  }

  // Field name: run_mag_soft_iron_est_high_warning
  {
    cdr << (ros_message->run_mag_soft_iron_est_high_warning ? true : false);
  }

  return true;
}

static bool _MipFilterStatusGx5StatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MipFilterStatusGx5StatusFlags__ros_msg_type * ros_message = static_cast<_MipFilterStatusGx5StatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: init_no_attitude
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->init_no_attitude = tmp ? true : false;
  }

  // Field name: init_no_position_velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->init_no_position_velocity = tmp ? true : false;
  }

  // Field name: run_imu_unavailable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_imu_unavailable = tmp ? true : false;
  }

  // Field name: run_gps_unavailable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_gps_unavailable = tmp ? true : false;
  }

  // Field name: run_matrix_singularity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_matrix_singularity = tmp ? true : false;
  }

  // Field name: run_position_covariance_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_position_covariance_warning = tmp ? true : false;
  }

  // Field name: run_velocity_covariance_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_velocity_covariance_warning = tmp ? true : false;
  }

  // Field name: run_attitude_covariance_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_attitude_covariance_warning = tmp ? true : false;
  }

  // Field name: run_nan_in_solution_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_nan_in_solution_warning = tmp ? true : false;
  }

  // Field name: run_gyro_bias_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_gyro_bias_est_high_warning = tmp ? true : false;
  }

  // Field name: run_accel_bias_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_accel_bias_est_high_warning = tmp ? true : false;
  }

  // Field name: run_gyro_scale_factor_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_gyro_scale_factor_est_high_warning = tmp ? true : false;
  }

  // Field name: run_accel_scale_factor_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_accel_scale_factor_est_high_warning = tmp ? true : false;
  }

  // Field name: run_mag_bias_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_mag_bias_est_high_warning = tmp ? true : false;
  }

  // Field name: run_ant_offset_correction_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_ant_offset_correction_est_high_warning = tmp ? true : false;
  }

  // Field name: run_mag_hard_iron_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_mag_hard_iron_est_high_warning = tmp ? true : false;
  }

  // Field name: run_mag_soft_iron_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->run_mag_soft_iron_est_high_warning = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MipFilterStatusGx5StatusFlags__ros_msg_type * ros_message = static_cast<const _MipFilterStatusGx5StatusFlags__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name init_no_attitude
  {
    size_t item_size = sizeof(ros_message->init_no_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name init_no_position_velocity
  {
    size_t item_size = sizeof(ros_message->init_no_position_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_imu_unavailable
  {
    size_t item_size = sizeof(ros_message->run_imu_unavailable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_gps_unavailable
  {
    size_t item_size = sizeof(ros_message->run_gps_unavailable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_matrix_singularity
  {
    size_t item_size = sizeof(ros_message->run_matrix_singularity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_position_covariance_warning
  {
    size_t item_size = sizeof(ros_message->run_position_covariance_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_velocity_covariance_warning
  {
    size_t item_size = sizeof(ros_message->run_velocity_covariance_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_attitude_covariance_warning
  {
    size_t item_size = sizeof(ros_message->run_attitude_covariance_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_nan_in_solution_warning
  {
    size_t item_size = sizeof(ros_message->run_nan_in_solution_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_gyro_bias_est_high_warning
  {
    size_t item_size = sizeof(ros_message->run_gyro_bias_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_accel_bias_est_high_warning
  {
    size_t item_size = sizeof(ros_message->run_accel_bias_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_gyro_scale_factor_est_high_warning
  {
    size_t item_size = sizeof(ros_message->run_gyro_scale_factor_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_accel_scale_factor_est_high_warning
  {
    size_t item_size = sizeof(ros_message->run_accel_scale_factor_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_mag_bias_est_high_warning
  {
    size_t item_size = sizeof(ros_message->run_mag_bias_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_ant_offset_correction_est_high_warning
  {
    size_t item_size = sizeof(ros_message->run_ant_offset_correction_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_mag_hard_iron_est_high_warning
  {
    size_t item_size = sizeof(ros_message->run_mag_hard_iron_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_mag_soft_iron_est_high_warning
  {
    size_t item_size = sizeof(ros_message->run_mag_soft_iron_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MipFilterStatusGx5StatusFlags__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t max_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: init_no_attitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: init_no_position_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_imu_unavailable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_gps_unavailable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_matrix_singularity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_position_covariance_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_velocity_covariance_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_attitude_covariance_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_nan_in_solution_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_gyro_bias_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_accel_bias_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_gyro_scale_factor_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_accel_scale_factor_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_mag_bias_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_ant_offset_correction_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_mag_hard_iron_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_mag_soft_iron_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags;
    is_plain =
      (
      offsetof(DataType, run_mag_soft_iron_est_high_warning) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MipFilterStatusGx5StatusFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MipFilterStatusGx5StatusFlags = {
  "microstrain_inertial_msgs::msg",
  "MipFilterStatusGx5StatusFlags",
  _MipFilterStatusGx5StatusFlags__cdr_serialize,
  _MipFilterStatusGx5StatusFlags__cdr_deserialize,
  _MipFilterStatusGx5StatusFlags__get_serialized_size,
  _MipFilterStatusGx5StatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _MipFilterStatusGx5StatusFlags__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MipFilterStatusGx5StatusFlags,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterStatusGx5StatusFlags)() {
  return &_MipFilterStatusGx5StatusFlags__type_support;
}

#if defined(__cplusplus)
}
#endif
