// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssSbasInfoSbasStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info_sbas_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info_sbas_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info_sbas_status__functions.h"
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


using _MipGnssSbasInfoSbasStatus__ros_msg_type = microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus;

static bool _MipGnssSbasInfoSbasStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MipGnssSbasInfoSbasStatus__ros_msg_type * ros_message = static_cast<const _MipGnssSbasInfoSbasStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: range_available
  {
    cdr << (ros_message->range_available ? true : false);
  }

  // Field name: corrections_available
  {
    cdr << (ros_message->corrections_available ? true : false);
  }

  // Field name: integrity_available
  {
    cdr << (ros_message->integrity_available ? true : false);
  }

  // Field name: test_mode
  {
    cdr << (ros_message->test_mode ? true : false);
  }

  return true;
}

static bool _MipGnssSbasInfoSbasStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MipGnssSbasInfoSbasStatus__ros_msg_type * ros_message = static_cast<_MipGnssSbasInfoSbasStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: range_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->range_available = tmp ? true : false;
  }

  // Field name: corrections_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->corrections_available = tmp ? true : false;
  }

  // Field name: integrity_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->integrity_available = tmp ? true : false;
  }

  // Field name: test_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->test_mode = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MipGnssSbasInfoSbasStatus__ros_msg_type * ros_message = static_cast<const _MipGnssSbasInfoSbasStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name range_available
  {
    size_t item_size = sizeof(ros_message->range_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name corrections_available
  {
    size_t item_size = sizeof(ros_message->corrections_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name integrity_available
  {
    size_t item_size = sizeof(ros_message->integrity_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name test_mode
  {
    size_t item_size = sizeof(ros_message->test_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MipGnssSbasInfoSbasStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t max_serialized_size_microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus(
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

  // member: range_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: corrections_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: integrity_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: test_mode
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
    using DataType = microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus;
    is_plain =
      (
      offsetof(DataType, test_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MipGnssSbasInfoSbasStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MipGnssSbasInfoSbasStatus = {
  "microstrain_inertial_msgs::msg",
  "MipGnssSbasInfoSbasStatus",
  _MipGnssSbasInfoSbasStatus__cdr_serialize,
  _MipGnssSbasInfoSbasStatus__cdr_deserialize,
  _MipGnssSbasInfoSbasStatus__get_serialized_size,
  _MipGnssSbasInfoSbasStatus__max_serialized_size
};

static rosidl_message_type_support_t _MipGnssSbasInfoSbasStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MipGnssSbasInfoSbasStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipGnssSbasInfoSbasStatus)() {
  return &_MipGnssSbasInfoSbasStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
