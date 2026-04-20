// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from microstrain_inertial_msgs:msg/MipSensorOverrangeStatusStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__functions.h"
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


using _MipSensorOverrangeStatusStatus__ros_msg_type = microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus;

static bool _MipSensorOverrangeStatusStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MipSensorOverrangeStatusStatus__ros_msg_type * ros_message = static_cast<const _MipSensorOverrangeStatusStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: accel_x
  {
    cdr << (ros_message->accel_x ? true : false);
  }

  // Field name: accel_y
  {
    cdr << (ros_message->accel_y ? true : false);
  }

  // Field name: accel_z
  {
    cdr << (ros_message->accel_z ? true : false);
  }

  // Field name: gyro_x
  {
    cdr << (ros_message->gyro_x ? true : false);
  }

  // Field name: gyro_y
  {
    cdr << (ros_message->gyro_y ? true : false);
  }

  // Field name: gyro_z
  {
    cdr << (ros_message->gyro_z ? true : false);
  }

  // Field name: mag_x
  {
    cdr << (ros_message->mag_x ? true : false);
  }

  // Field name: mag_y
  {
    cdr << (ros_message->mag_y ? true : false);
  }

  // Field name: mag_z
  {
    cdr << (ros_message->mag_z ? true : false);
  }

  // Field name: press
  {
    cdr << (ros_message->press ? true : false);
  }

  return true;
}

static bool _MipSensorOverrangeStatusStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MipSensorOverrangeStatusStatus__ros_msg_type * ros_message = static_cast<_MipSensorOverrangeStatusStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: accel_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accel_x = tmp ? true : false;
  }

  // Field name: accel_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accel_y = tmp ? true : false;
  }

  // Field name: accel_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accel_z = tmp ? true : false;
  }

  // Field name: gyro_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gyro_x = tmp ? true : false;
  }

  // Field name: gyro_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gyro_y = tmp ? true : false;
  }

  // Field name: gyro_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gyro_z = tmp ? true : false;
  }

  // Field name: mag_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mag_x = tmp ? true : false;
  }

  // Field name: mag_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mag_y = tmp ? true : false;
  }

  // Field name: mag_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mag_z = tmp ? true : false;
  }

  // Field name: press
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->press = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MipSensorOverrangeStatusStatus__ros_msg_type * ros_message = static_cast<const _MipSensorOverrangeStatusStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accel_x
  {
    size_t item_size = sizeof(ros_message->accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_y
  {
    size_t item_size = sizeof(ros_message->accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_z
  {
    size_t item_size = sizeof(ros_message->accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_x
  {
    size_t item_size = sizeof(ros_message->gyro_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_y
  {
    size_t item_size = sizeof(ros_message->gyro_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_z
  {
    size_t item_size = sizeof(ros_message->gyro_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_x
  {
    size_t item_size = sizeof(ros_message->mag_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_y
  {
    size_t item_size = sizeof(ros_message->mag_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_z
  {
    size_t item_size = sizeof(ros_message->mag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name press
  {
    size_t item_size = sizeof(ros_message->press);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MipSensorOverrangeStatusStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t max_serialized_size_microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus(
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

  // member: accel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gyro_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gyro_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gyro_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mag_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mag_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: press
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
    using DataType = microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus;
    is_plain =
      (
      offsetof(DataType, press) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MipSensorOverrangeStatusStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MipSensorOverrangeStatusStatus = {
  "microstrain_inertial_msgs::msg",
  "MipSensorOverrangeStatusStatus",
  _MipSensorOverrangeStatusStatus__cdr_serialize,
  _MipSensorOverrangeStatusStatus__cdr_deserialize,
  _MipSensorOverrangeStatusStatus__get_serialized_size,
  _MipSensorOverrangeStatusStatus__max_serialized_size
};

static rosidl_message_type_support_t _MipSensorOverrangeStatusStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MipSensorOverrangeStatusStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipSensorOverrangeStatusStatus)() {
  return &_MipSensorOverrangeStatusStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
