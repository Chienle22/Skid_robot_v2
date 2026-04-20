// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusEpochStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__functions.h"
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


using _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__ros_msg_type = microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus;

static bool _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__ros_msg_type * ros_message = static_cast<const _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: antenna_location_received
  {
    cdr << (ros_message->antenna_location_received ? true : false);
  }

  // Field name: antenna_description_received
  {
    cdr << (ros_message->antenna_description_received ? true : false);
  }

  // Field name: gps_received
  {
    cdr << (ros_message->gps_received ? true : false);
  }

  // Field name: galileo_received
  {
    cdr << (ros_message->galileo_received ? true : false);
  }

  // Field name: glonass_received
  {
    cdr << (ros_message->glonass_received ? true : false);
  }

  // Field name: beidou_received
  {
    cdr << (ros_message->beidou_received ? true : false);
  }

  // Field name: using_gps_msm_messages
  {
    cdr << (ros_message->using_gps_msm_messages ? true : false);
  }

  // Field name: using_glonass_msm_messages
  {
    cdr << (ros_message->using_glonass_msm_messages ? true : false);
  }

  // Field name: dongle_status_read_failed
  {
    cdr << (ros_message->dongle_status_read_failed ? true : false);
  }

  return true;
}

static bool _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__ros_msg_type * ros_message = static_cast<_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: antenna_location_received
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->antenna_location_received = tmp ? true : false;
  }

  // Field name: antenna_description_received
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->antenna_description_received = tmp ? true : false;
  }

  // Field name: gps_received
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_received = tmp ? true : false;
  }

  // Field name: galileo_received
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->galileo_received = tmp ? true : false;
  }

  // Field name: glonass_received
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->glonass_received = tmp ? true : false;
  }

  // Field name: beidou_received
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->beidou_received = tmp ? true : false;
  }

  // Field name: using_gps_msm_messages
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->using_gps_msm_messages = tmp ? true : false;
  }

  // Field name: using_glonass_msm_messages
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->using_glonass_msm_messages = tmp ? true : false;
  }

  // Field name: dongle_status_read_failed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dongle_status_read_failed = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__ros_msg_type * ros_message = static_cast<const _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name antenna_location_received
  {
    size_t item_size = sizeof(ros_message->antenna_location_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name antenna_description_received
  {
    size_t item_size = sizeof(ros_message->antenna_description_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_received
  {
    size_t item_size = sizeof(ros_message->gps_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name galileo_received
  {
    size_t item_size = sizeof(ros_message->galileo_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name glonass_received
  {
    size_t item_size = sizeof(ros_message->glonass_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beidou_received
  {
    size_t item_size = sizeof(ros_message->beidou_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name using_gps_msm_messages
  {
    size_t item_size = sizeof(ros_message->using_gps_msm_messages);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name using_glonass_msm_messages
  {
    size_t item_size = sizeof(ros_message->using_glonass_msm_messages);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dongle_status_read_failed
  {
    size_t item_size = sizeof(ros_message->dongle_status_read_failed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t max_serialized_size_microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus(
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

  // member: antenna_location_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: antenna_description_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: galileo_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: glonass_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: beidou_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: using_gps_msm_messages
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: using_glonass_msm_messages
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dongle_status_read_failed
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
    using DataType = microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus;
    is_plain =
      (
      offsetof(DataType, dongle_status_read_failed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus = {
  "microstrain_inertial_msgs::msg",
  "MipGnssCorrectionsRtkCorrectionsStatusEpochStatus",
  _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__cdr_serialize,
  _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__cdr_deserialize,
  _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__get_serialized_size,
  _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__max_serialized_size
};

static rosidl_message_type_support_t _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatusEpochStatus)() {
  return &_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
