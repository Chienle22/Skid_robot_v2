// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummary.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary__functions.h"
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

#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__functions.h"  // indicator
#include "microstrain_inertial_msgs/msg/detail/mip_header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterAidingMeasurementSummaryIndicator)();
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_microstrain_inertial_msgs__msg__MipHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipHeader)();


using _MipFilterAidingMeasurementSummary__ros_msg_type = microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary;

static bool _MipFilterAidingMeasurementSummary__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MipFilterAidingMeasurementSummary__ros_msg_type * ros_message = static_cast<const _MipFilterAidingMeasurementSummary__ros_msg_type *>(untyped_ros_message);
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

  // Field name: time_of_week
  {
    cdr << ros_message->time_of_week;
  }

  // Field name: source
  {
    cdr << ros_message->source;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: indicator
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterAidingMeasurementSummaryIndicator
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->indicator, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MipFilterAidingMeasurementSummary__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MipFilterAidingMeasurementSummary__ros_msg_type * ros_message = static_cast<_MipFilterAidingMeasurementSummary__ros_msg_type *>(untyped_ros_message);
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

  // Field name: time_of_week
  {
    cdr >> ros_message->time_of_week;
  }

  // Field name: source
  {
    cdr >> ros_message->source;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: indicator
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterAidingMeasurementSummaryIndicator
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->indicator))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MipFilterAidingMeasurementSummary__ros_msg_type * ros_message = static_cast<const _MipFilterAidingMeasurementSummary__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_microstrain_inertial_msgs__msg__MipHeader(
    &(ros_message->header), current_alignment);
  // field.name time_of_week
  {
    size_t item_size = sizeof(ros_message->time_of_week);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name source
  {
    size_t item_size = sizeof(ros_message->source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name indicator

  current_alignment += get_serialized_size_microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator(
    &(ros_message->indicator), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MipFilterAidingMeasurementSummary__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t max_serialized_size_microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary(
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
  // member: time_of_week
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: indicator
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator(
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
    using DataType = microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary;
    is_plain =
      (
      offsetof(DataType, indicator) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MipFilterAidingMeasurementSummary__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MipFilterAidingMeasurementSummary = {
  "microstrain_inertial_msgs::msg",
  "MipFilterAidingMeasurementSummary",
  _MipFilterAidingMeasurementSummary__cdr_serialize,
  _MipFilterAidingMeasurementSummary__cdr_deserialize,
  _MipFilterAidingMeasurementSummary__get_serialized_size,
  _MipFilterAidingMeasurementSummary__max_serialized_size
};

static rosidl_message_type_support_t _MipFilterAidingMeasurementSummary__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MipFilterAidingMeasurementSummary,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterAidingMeasurementSummary)() {
  return &_MipFilterAidingMeasurementSummary__type_support;
}

#if defined(__cplusplus)
}
#endif
