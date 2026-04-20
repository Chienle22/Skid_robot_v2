// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGx5StatusFlags.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__rosidl_typesupport_fastrtps_cpp.hpp"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace microstrain_inertial_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_serialize(
  const microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: init_no_attitude
  cdr << (ros_message.init_no_attitude ? true : false);
  // Member: init_no_position_velocity
  cdr << (ros_message.init_no_position_velocity ? true : false);
  // Member: run_imu_unavailable
  cdr << (ros_message.run_imu_unavailable ? true : false);
  // Member: run_gps_unavailable
  cdr << (ros_message.run_gps_unavailable ? true : false);
  // Member: run_matrix_singularity
  cdr << (ros_message.run_matrix_singularity ? true : false);
  // Member: run_position_covariance_warning
  cdr << (ros_message.run_position_covariance_warning ? true : false);
  // Member: run_velocity_covariance_warning
  cdr << (ros_message.run_velocity_covariance_warning ? true : false);
  // Member: run_attitude_covariance_warning
  cdr << (ros_message.run_attitude_covariance_warning ? true : false);
  // Member: run_nan_in_solution_warning
  cdr << (ros_message.run_nan_in_solution_warning ? true : false);
  // Member: run_gyro_bias_est_high_warning
  cdr << (ros_message.run_gyro_bias_est_high_warning ? true : false);
  // Member: run_accel_bias_est_high_warning
  cdr << (ros_message.run_accel_bias_est_high_warning ? true : false);
  // Member: run_gyro_scale_factor_est_high_warning
  cdr << (ros_message.run_gyro_scale_factor_est_high_warning ? true : false);
  // Member: run_accel_scale_factor_est_high_warning
  cdr << (ros_message.run_accel_scale_factor_est_high_warning ? true : false);
  // Member: run_mag_bias_est_high_warning
  cdr << (ros_message.run_mag_bias_est_high_warning ? true : false);
  // Member: run_ant_offset_correction_est_high_warning
  cdr << (ros_message.run_ant_offset_correction_est_high_warning ? true : false);
  // Member: run_mag_hard_iron_est_high_warning
  cdr << (ros_message.run_mag_hard_iron_est_high_warning ? true : false);
  // Member: run_mag_soft_iron_est_high_warning
  cdr << (ros_message.run_mag_soft_iron_est_high_warning ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & ros_message)
{
  // Member: init_no_attitude
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.init_no_attitude = tmp ? true : false;
  }

  // Member: init_no_position_velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.init_no_position_velocity = tmp ? true : false;
  }

  // Member: run_imu_unavailable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_imu_unavailable = tmp ? true : false;
  }

  // Member: run_gps_unavailable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_gps_unavailable = tmp ? true : false;
  }

  // Member: run_matrix_singularity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_matrix_singularity = tmp ? true : false;
  }

  // Member: run_position_covariance_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_position_covariance_warning = tmp ? true : false;
  }

  // Member: run_velocity_covariance_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_velocity_covariance_warning = tmp ? true : false;
  }

  // Member: run_attitude_covariance_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_attitude_covariance_warning = tmp ? true : false;
  }

  // Member: run_nan_in_solution_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_nan_in_solution_warning = tmp ? true : false;
  }

  // Member: run_gyro_bias_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_gyro_bias_est_high_warning = tmp ? true : false;
  }

  // Member: run_accel_bias_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_accel_bias_est_high_warning = tmp ? true : false;
  }

  // Member: run_gyro_scale_factor_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_gyro_scale_factor_est_high_warning = tmp ? true : false;
  }

  // Member: run_accel_scale_factor_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_accel_scale_factor_est_high_warning = tmp ? true : false;
  }

  // Member: run_mag_bias_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_mag_bias_est_high_warning = tmp ? true : false;
  }

  // Member: run_ant_offset_correction_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_ant_offset_correction_est_high_warning = tmp ? true : false;
  }

  // Member: run_mag_hard_iron_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_mag_hard_iron_est_high_warning = tmp ? true : false;
  }

  // Member: run_mag_soft_iron_est_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.run_mag_soft_iron_est_high_warning = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
get_serialized_size(
  const microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: init_no_attitude
  {
    size_t item_size = sizeof(ros_message.init_no_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: init_no_position_velocity
  {
    size_t item_size = sizeof(ros_message.init_no_position_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_imu_unavailable
  {
    size_t item_size = sizeof(ros_message.run_imu_unavailable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_gps_unavailable
  {
    size_t item_size = sizeof(ros_message.run_gps_unavailable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_matrix_singularity
  {
    size_t item_size = sizeof(ros_message.run_matrix_singularity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_position_covariance_warning
  {
    size_t item_size = sizeof(ros_message.run_position_covariance_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_velocity_covariance_warning
  {
    size_t item_size = sizeof(ros_message.run_velocity_covariance_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_attitude_covariance_warning
  {
    size_t item_size = sizeof(ros_message.run_attitude_covariance_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_nan_in_solution_warning
  {
    size_t item_size = sizeof(ros_message.run_nan_in_solution_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_gyro_bias_est_high_warning
  {
    size_t item_size = sizeof(ros_message.run_gyro_bias_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_accel_bias_est_high_warning
  {
    size_t item_size = sizeof(ros_message.run_accel_bias_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_gyro_scale_factor_est_high_warning
  {
    size_t item_size = sizeof(ros_message.run_gyro_scale_factor_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_accel_scale_factor_est_high_warning
  {
    size_t item_size = sizeof(ros_message.run_accel_scale_factor_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_mag_bias_est_high_warning
  {
    size_t item_size = sizeof(ros_message.run_mag_bias_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_ant_offset_correction_est_high_warning
  {
    size_t item_size = sizeof(ros_message.run_ant_offset_correction_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_mag_hard_iron_est_high_warning
  {
    size_t item_size = sizeof(ros_message.run_mag_hard_iron_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: run_mag_soft_iron_est_high_warning
  {
    size_t item_size = sizeof(ros_message.run_mag_soft_iron_est_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
max_serialized_size_MipFilterStatusGx5StatusFlags(
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


  // Member: init_no_attitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: init_no_position_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_imu_unavailable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_gps_unavailable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_matrix_singularity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_position_covariance_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_velocity_covariance_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_attitude_covariance_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_nan_in_solution_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_gyro_bias_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_accel_bias_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_gyro_scale_factor_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_accel_scale_factor_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_mag_bias_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_ant_offset_correction_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_mag_hard_iron_est_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: run_mag_soft_iron_est_high_warning
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
    using DataType = microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags;
    is_plain =
      (
      offsetof(DataType, run_mag_soft_iron_est_high_warning) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MipFilterStatusGx5StatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MipFilterStatusGx5StatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MipFilterStatusGx5StatusFlags__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MipFilterStatusGx5StatusFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MipFilterStatusGx5StatusFlags(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MipFilterStatusGx5StatusFlags__callbacks = {
  "microstrain_inertial_msgs::msg",
  "MipFilterStatusGx5StatusFlags",
  _MipFilterStatusGx5StatusFlags__cdr_serialize,
  _MipFilterStatusGx5StatusFlags__cdr_deserialize,
  _MipFilterStatusGx5StatusFlags__get_serialized_size,
  _MipFilterStatusGx5StatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _MipFilterStatusGx5StatusFlags__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MipFilterStatusGx5StatusFlags__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace microstrain_inertial_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_microstrain_inertial_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags>()
{
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipFilterStatusGx5StatusFlags__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, microstrain_inertial_msgs, msg, MipFilterStatusGx5StatusFlags)() {
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipFilterStatusGx5StatusFlags__handle;
}

#ifdef __cplusplus
}
#endif
