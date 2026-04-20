// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssPositionAidingStatusStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__functions.h"
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


using _MipFilterGnssPositionAidingStatusStatus__ros_msg_type = microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus;

static bool _MipFilterGnssPositionAidingStatusStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MipFilterGnssPositionAidingStatusStatus__ros_msg_type * ros_message = static_cast<const _MipFilterGnssPositionAidingStatusStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: tight_coupling
  {
    cdr << (ros_message->tight_coupling ? true : false);
  }

  // Field name: differential
  {
    cdr << (ros_message->differential ? true : false);
  }

  // Field name: integer_fix
  {
    cdr << (ros_message->integer_fix ? true : false);
  }

  // Field name: gps_l1
  {
    cdr << (ros_message->gps_l1 ? true : false);
  }

  // Field name: gps_l2
  {
    cdr << (ros_message->gps_l2 ? true : false);
  }

  // Field name: gps_l5
  {
    cdr << (ros_message->gps_l5 ? true : false);
  }

  // Field name: glo_l1
  {
    cdr << (ros_message->glo_l1 ? true : false);
  }

  // Field name: glo_l2
  {
    cdr << (ros_message->glo_l2 ? true : false);
  }

  // Field name: gal_e1
  {
    cdr << (ros_message->gal_e1 ? true : false);
  }

  // Field name: gal_e5
  {
    cdr << (ros_message->gal_e5 ? true : false);
  }

  // Field name: gal_e6
  {
    cdr << (ros_message->gal_e6 ? true : false);
  }

  // Field name: bei_b1
  {
    cdr << (ros_message->bei_b1 ? true : false);
  }

  // Field name: bei_b2
  {
    cdr << (ros_message->bei_b2 ? true : false);
  }

  // Field name: bei_b3
  {
    cdr << (ros_message->bei_b3 ? true : false);
  }

  // Field name: no_fix
  {
    cdr << (ros_message->no_fix ? true : false);
  }

  // Field name: config_error
  {
    cdr << (ros_message->config_error ? true : false);
  }

  return true;
}

static bool _MipFilterGnssPositionAidingStatusStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MipFilterGnssPositionAidingStatusStatus__ros_msg_type * ros_message = static_cast<_MipFilterGnssPositionAidingStatusStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: tight_coupling
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tight_coupling = tmp ? true : false;
  }

  // Field name: differential
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->differential = tmp ? true : false;
  }

  // Field name: integer_fix
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->integer_fix = tmp ? true : false;
  }

  // Field name: gps_l1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_l1 = tmp ? true : false;
  }

  // Field name: gps_l2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_l2 = tmp ? true : false;
  }

  // Field name: gps_l5
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_l5 = tmp ? true : false;
  }

  // Field name: glo_l1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->glo_l1 = tmp ? true : false;
  }

  // Field name: glo_l2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->glo_l2 = tmp ? true : false;
  }

  // Field name: gal_e1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gal_e1 = tmp ? true : false;
  }

  // Field name: gal_e5
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gal_e5 = tmp ? true : false;
  }

  // Field name: gal_e6
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gal_e6 = tmp ? true : false;
  }

  // Field name: bei_b1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bei_b1 = tmp ? true : false;
  }

  // Field name: bei_b2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bei_b2 = tmp ? true : false;
  }

  // Field name: bei_b3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bei_b3 = tmp ? true : false;
  }

  // Field name: no_fix
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->no_fix = tmp ? true : false;
  }

  // Field name: config_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->config_error = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MipFilterGnssPositionAidingStatusStatus__ros_msg_type * ros_message = static_cast<const _MipFilterGnssPositionAidingStatusStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tight_coupling
  {
    size_t item_size = sizeof(ros_message->tight_coupling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name differential
  {
    size_t item_size = sizeof(ros_message->differential);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name integer_fix
  {
    size_t item_size = sizeof(ros_message->integer_fix);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_l1
  {
    size_t item_size = sizeof(ros_message->gps_l1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_l2
  {
    size_t item_size = sizeof(ros_message->gps_l2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_l5
  {
    size_t item_size = sizeof(ros_message->gps_l5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name glo_l1
  {
    size_t item_size = sizeof(ros_message->glo_l1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name glo_l2
  {
    size_t item_size = sizeof(ros_message->glo_l2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gal_e1
  {
    size_t item_size = sizeof(ros_message->gal_e1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gal_e5
  {
    size_t item_size = sizeof(ros_message->gal_e5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gal_e6
  {
    size_t item_size = sizeof(ros_message->gal_e6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bei_b1
  {
    size_t item_size = sizeof(ros_message->bei_b1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bei_b2
  {
    size_t item_size = sizeof(ros_message->bei_b2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bei_b3
  {
    size_t item_size = sizeof(ros_message->bei_b3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name no_fix
  {
    size_t item_size = sizeof(ros_message->no_fix);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name config_error
  {
    size_t item_size = sizeof(ros_message->config_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MipFilterGnssPositionAidingStatusStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t max_serialized_size_microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus(
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

  // member: tight_coupling
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: differential
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: integer_fix
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_l1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_l2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_l5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: glo_l1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: glo_l2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gal_e1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gal_e5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gal_e6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bei_b1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bei_b2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bei_b3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: no_fix
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: config_error
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
    using DataType = microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus;
    is_plain =
      (
      offsetof(DataType, config_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MipFilterGnssPositionAidingStatusStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MipFilterGnssPositionAidingStatusStatus = {
  "microstrain_inertial_msgs::msg",
  "MipFilterGnssPositionAidingStatusStatus",
  _MipFilterGnssPositionAidingStatusStatus__cdr_serialize,
  _MipFilterGnssPositionAidingStatusStatus__cdr_deserialize,
  _MipFilterGnssPositionAidingStatusStatus__get_serialized_size,
  _MipFilterGnssPositionAidingStatusStatus__max_serialized_size
};

static rosidl_message_type_support_t _MipFilterGnssPositionAidingStatusStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MipFilterGnssPositionAidingStatusStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterGnssPositionAidingStatusStatus)() {
  return &_MipFilterGnssPositionAidingStatusStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
