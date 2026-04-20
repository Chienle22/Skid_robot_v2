// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummaryIndicator.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__functions.h"
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


using _MipFilterAidingMeasurementSummaryIndicator__ros_msg_type = microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator;

static bool _MipFilterAidingMeasurementSummaryIndicator__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MipFilterAidingMeasurementSummaryIndicator__ros_msg_type * ros_message = static_cast<const _MipFilterAidingMeasurementSummaryIndicator__ros_msg_type *>(untyped_ros_message);
  // Field name: enabled
  {
    cdr << (ros_message->enabled ? true : false);
  }

  // Field name: used
  {
    cdr << (ros_message->used ? true : false);
  }

  // Field name: residual_high_warning
  {
    cdr << (ros_message->residual_high_warning ? true : false);
  }

  // Field name: sample_time_warning
  {
    cdr << (ros_message->sample_time_warning ? true : false);
  }

  // Field name: configuration_error
  {
    cdr << (ros_message->configuration_error ? true : false);
  }

  // Field name: max_num_meas_exceeded
  {
    cdr << (ros_message->max_num_meas_exceeded ? true : false);
  }

  return true;
}

static bool _MipFilterAidingMeasurementSummaryIndicator__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MipFilterAidingMeasurementSummaryIndicator__ros_msg_type * ros_message = static_cast<_MipFilterAidingMeasurementSummaryIndicator__ros_msg_type *>(untyped_ros_message);
  // Field name: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enabled = tmp ? true : false;
  }

  // Field name: used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->used = tmp ? true : false;
  }

  // Field name: residual_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->residual_high_warning = tmp ? true : false;
  }

  // Field name: sample_time_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sample_time_warning = tmp ? true : false;
  }

  // Field name: configuration_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->configuration_error = tmp ? true : false;
  }

  // Field name: max_num_meas_exceeded
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->max_num_meas_exceeded = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MipFilterAidingMeasurementSummaryIndicator__ros_msg_type * ros_message = static_cast<const _MipFilterAidingMeasurementSummaryIndicator__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name enabled
  {
    size_t item_size = sizeof(ros_message->enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name used
  {
    size_t item_size = sizeof(ros_message->used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name residual_high_warning
  {
    size_t item_size = sizeof(ros_message->residual_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sample_time_warning
  {
    size_t item_size = sizeof(ros_message->sample_time_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name configuration_error
  {
    size_t item_size = sizeof(ros_message->configuration_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_num_meas_exceeded
  {
    size_t item_size = sizeof(ros_message->max_num_meas_exceeded);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MipFilterAidingMeasurementSummaryIndicator__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t max_serialized_size_microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator(
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

  // member: enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: residual_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sample_time_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: configuration_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_num_meas_exceeded
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
    using DataType = microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator;
    is_plain =
      (
      offsetof(DataType, max_num_meas_exceeded) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MipFilterAidingMeasurementSummaryIndicator__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MipFilterAidingMeasurementSummaryIndicator = {
  "microstrain_inertial_msgs::msg",
  "MipFilterAidingMeasurementSummaryIndicator",
  _MipFilterAidingMeasurementSummaryIndicator__cdr_serialize,
  _MipFilterAidingMeasurementSummaryIndicator__cdr_deserialize,
  _MipFilterAidingMeasurementSummaryIndicator__get_serialized_size,
  _MipFilterAidingMeasurementSummaryIndicator__max_serialized_size
};

static rosidl_message_type_support_t _MipFilterAidingMeasurementSummaryIndicator__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MipFilterAidingMeasurementSummaryIndicator,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterAidingMeasurementSummaryIndicator)() {
  return &_MipFilterAidingMeasurementSummaryIndicator__type_support;
}

#if defined(__cplusplus)
}
#endif
