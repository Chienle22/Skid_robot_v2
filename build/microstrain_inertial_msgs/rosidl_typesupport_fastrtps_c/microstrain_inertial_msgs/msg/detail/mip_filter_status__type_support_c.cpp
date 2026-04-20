// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__functions.h"
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

#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__functions.h"  // gq7_status_flags
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__functions.h"  // gx5_status_flags
#include "microstrain_inertial_msgs/msg/detail/mip_header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterStatusGq7StatusFlags)();
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterStatusGx5StatusFlags)();
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_microstrain_inertial_msgs__msg__MipHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipHeader)();


using _MipFilterStatus__ros_msg_type = microstrain_inertial_msgs__msg__MipFilterStatus;

static bool _MipFilterStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MipFilterStatus__ros_msg_type * ros_message = static_cast<const _MipFilterStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipHeader
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: filter_state
  {
    cdr << ros_message->filter_state;
  }

  // Field name: dynamics_mode
  {
    cdr << ros_message->dynamics_mode;
  }

  // Field name: gx5_status_flags
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterStatusGx5StatusFlags
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gx5_status_flags, cdr))
    {
      return false;
    }
  }

  // Field name: gq7_status_flags
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterStatusGq7StatusFlags
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gq7_status_flags, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MipFilterStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MipFilterStatus__ros_msg_type * ros_message = static_cast<_MipFilterStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipHeader
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: filter_state
  {
    cdr >> ros_message->filter_state;
  }

  // Field name: dynamics_mode
  {
    cdr >> ros_message->dynamics_mode;
  }

  // Field name: gx5_status_flags
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterStatusGx5StatusFlags
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gx5_status_flags))
    {
      return false;
    }
  }

  // Field name: gq7_status_flags
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterStatusGq7StatusFlags
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gq7_status_flags))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MipFilterStatus__ros_msg_type * ros_message = static_cast<const _MipFilterStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_microstrain_inertial_msgs__msg__MipHeader(
    &(ros_message->header), current_alignment);
  // field.name filter_state
  {
    size_t item_size = sizeof(ros_message->filter_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dynamics_mode
  {
    size_t item_size = sizeof(ros_message->dynamics_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gx5_status_flags

  current_alignment += get_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags(
    &(ros_message->gx5_status_flags), current_alignment);
  // field.name gq7_status_flags

  current_alignment += get_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags(
    &(ros_message->gq7_status_flags), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MipFilterStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t max_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatus(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_microstrain_inertial_msgs__msg__MipHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: filter_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: dynamics_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: gx5_status_flags
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: gq7_status_flags
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = microstrain_inertial_msgs__msg__MipFilterStatus;
    is_plain =
      (
      offsetof(DataType, gq7_status_flags) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MipFilterStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MipFilterStatus = {
  "microstrain_inertial_msgs::msg",
  "MipFilterStatus",
  _MipFilterStatus__cdr_serialize,
  _MipFilterStatus__cdr_deserialize,
  _MipFilterStatus__get_serialized_size,
  _MipFilterStatus__max_serialized_size
};

static rosidl_message_type_support_t _MipFilterStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MipFilterStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterStatus)() {
  return &_MipFilterStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
