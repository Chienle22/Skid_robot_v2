// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__functions.h"
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


using _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__ros_msg_type = microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus;

static bool _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__ros_msg_type * ros_message = static_cast<const _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: modem_state
  {
    cdr << ros_message->modem_state;
  }

  // Field name: connection_type
  {
    cdr << ros_message->connection_type;
  }

  // Field name: rssi
  {
    cdr << ros_message->rssi;
  }

  // Field name: signal_quality
  {
    cdr << ros_message->signal_quality;
  }

  // Field name: tower_change_indicator
  {
    cdr << ros_message->tower_change_indicator;
  }

  // Field name: nmea_timeout_flag
  {
    cdr << (ros_message->nmea_timeout_flag ? true : false);
  }

  // Field name: server_timeout_flag
  {
    cdr << (ros_message->server_timeout_flag ? true : false);
  }

  // Field name: rtcm_timeout_flag
  {
    cdr << (ros_message->rtcm_timeout_flag ? true : false);
  }

  // Field name: device_out_of_range_flag
  {
    cdr << (ros_message->device_out_of_range_flag ? true : false);
  }

  // Field name: corrections_unavailable_flag
  {
    cdr << (ros_message->corrections_unavailable_flag ? true : false);
  }

  return true;
}

static bool _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__ros_msg_type * ros_message = static_cast<_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: modem_state
  {
    cdr >> ros_message->modem_state;
  }

  // Field name: connection_type
  {
    cdr >> ros_message->connection_type;
  }

  // Field name: rssi
  {
    cdr >> ros_message->rssi;
  }

  // Field name: signal_quality
  {
    cdr >> ros_message->signal_quality;
  }

  // Field name: tower_change_indicator
  {
    cdr >> ros_message->tower_change_indicator;
  }

  // Field name: nmea_timeout_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->nmea_timeout_flag = tmp ? true : false;
  }

  // Field name: server_timeout_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->server_timeout_flag = tmp ? true : false;
  }

  // Field name: rtcm_timeout_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rtcm_timeout_flag = tmp ? true : false;
  }

  // Field name: device_out_of_range_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->device_out_of_range_flag = tmp ? true : false;
  }

  // Field name: corrections_unavailable_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->corrections_unavailable_flag = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__ros_msg_type * ros_message = static_cast<const _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name modem_state
  {
    size_t item_size = sizeof(ros_message->modem_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name connection_type
  {
    size_t item_size = sizeof(ros_message->connection_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rssi
  {
    size_t item_size = sizeof(ros_message->rssi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_quality
  {
    size_t item_size = sizeof(ros_message->signal_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tower_change_indicator
  {
    size_t item_size = sizeof(ros_message->tower_change_indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nmea_timeout_flag
  {
    size_t item_size = sizeof(ros_message->nmea_timeout_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name server_timeout_flag
  {
    size_t item_size = sizeof(ros_message->server_timeout_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rtcm_timeout_flag
  {
    size_t item_size = sizeof(ros_message->rtcm_timeout_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name device_out_of_range_flag
  {
    size_t item_size = sizeof(ros_message->device_out_of_range_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name corrections_unavailable_flag
  {
    size_t item_size = sizeof(ros_message->corrections_unavailable_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t max_serialized_size_microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus(
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

  // member: modem_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: connection_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rssi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: signal_quality
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tower_change_indicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nmea_timeout_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: server_timeout_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rtcm_timeout_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: device_out_of_range_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: corrections_unavailable_flag
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
    using DataType = microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus;
    is_plain =
      (
      offsetof(DataType, corrections_unavailable_flag) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus = {
  "microstrain_inertial_msgs::msg",
  "MipGnssCorrectionsRtkCorrectionsStatusDongleStatus",
  _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__cdr_serialize,
  _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__cdr_deserialize,
  _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__get_serialized_size,
  _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__max_serialized_size
};

static rosidl_message_type_support_t _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatusDongleStatus)() {
  return &_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
