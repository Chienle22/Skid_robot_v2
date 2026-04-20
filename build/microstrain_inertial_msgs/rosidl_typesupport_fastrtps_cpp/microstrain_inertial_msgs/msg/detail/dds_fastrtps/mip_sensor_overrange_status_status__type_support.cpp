// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from microstrain_inertial_msgs:msg/MipSensorOverrangeStatusStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__struct.hpp"

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
  const microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accel_x
  cdr << (ros_message.accel_x ? true : false);
  // Member: accel_y
  cdr << (ros_message.accel_y ? true : false);
  // Member: accel_z
  cdr << (ros_message.accel_z ? true : false);
  // Member: gyro_x
  cdr << (ros_message.gyro_x ? true : false);
  // Member: gyro_y
  cdr << (ros_message.gyro_y ? true : false);
  // Member: gyro_z
  cdr << (ros_message.gyro_z ? true : false);
  // Member: mag_x
  cdr << (ros_message.mag_x ? true : false);
  // Member: mag_y
  cdr << (ros_message.mag_y ? true : false);
  // Member: mag_z
  cdr << (ros_message.mag_z ? true : false);
  // Member: press
  cdr << (ros_message.press ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & ros_message)
{
  // Member: accel_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accel_x = tmp ? true : false;
  }

  // Member: accel_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accel_y = tmp ? true : false;
  }

  // Member: accel_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accel_z = tmp ? true : false;
  }

  // Member: gyro_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gyro_x = tmp ? true : false;
  }

  // Member: gyro_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gyro_y = tmp ? true : false;
  }

  // Member: gyro_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gyro_z = tmp ? true : false;
  }

  // Member: mag_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mag_x = tmp ? true : false;
  }

  // Member: mag_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mag_y = tmp ? true : false;
  }

  // Member: mag_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mag_z = tmp ? true : false;
  }

  // Member: press
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.press = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
get_serialized_size(
  const microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accel_x
  {
    size_t item_size = sizeof(ros_message.accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_y
  {
    size_t item_size = sizeof(ros_message.accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_z
  {
    size_t item_size = sizeof(ros_message.accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_x
  {
    size_t item_size = sizeof(ros_message.gyro_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_y
  {
    size_t item_size = sizeof(ros_message.gyro_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_z
  {
    size_t item_size = sizeof(ros_message.gyro_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_x
  {
    size_t item_size = sizeof(ros_message.mag_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_y
  {
    size_t item_size = sizeof(ros_message.mag_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_z
  {
    size_t item_size = sizeof(ros_message.mag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: press
  {
    size_t item_size = sizeof(ros_message.press);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
max_serialized_size_MipSensorOverrangeStatusStatus(
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


  // Member: accel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gyro_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gyro_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gyro_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: press
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
    using DataType = microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus;
    is_plain =
      (
      offsetof(DataType, press) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MipSensorOverrangeStatusStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MipSensorOverrangeStatusStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MipSensorOverrangeStatusStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MipSensorOverrangeStatusStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MipSensorOverrangeStatusStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MipSensorOverrangeStatusStatus__callbacks = {
  "microstrain_inertial_msgs::msg",
  "MipSensorOverrangeStatusStatus",
  _MipSensorOverrangeStatusStatus__cdr_serialize,
  _MipSensorOverrangeStatusStatus__cdr_deserialize,
  _MipSensorOverrangeStatusStatus__get_serialized_size,
  _MipSensorOverrangeStatusStatus__max_serialized_size
};

static rosidl_message_type_support_t _MipSensorOverrangeStatusStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MipSensorOverrangeStatusStatus__callbacks,
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
get_message_type_support_handle<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus>()
{
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipSensorOverrangeStatusStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, microstrain_inertial_msgs, msg, MipSensorOverrangeStatusStatus)() {
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipSensorOverrangeStatusStatus__handle;
}

#ifdef __cplusplus
}
#endif
