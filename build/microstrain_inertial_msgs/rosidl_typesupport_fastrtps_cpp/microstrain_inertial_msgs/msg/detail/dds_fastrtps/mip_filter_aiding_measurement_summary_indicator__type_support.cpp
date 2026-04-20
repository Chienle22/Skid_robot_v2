// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummaryIndicator.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__rosidl_typesupport_fastrtps_cpp.hpp"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__struct.hpp"

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
  const microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: enabled
  cdr << (ros_message.enabled ? true : false);
  // Member: used
  cdr << (ros_message.used ? true : false);
  // Member: residual_high_warning
  cdr << (ros_message.residual_high_warning ? true : false);
  // Member: sample_time_warning
  cdr << (ros_message.sample_time_warning ? true : false);
  // Member: configuration_error
  cdr << (ros_message.configuration_error ? true : false);
  // Member: max_num_meas_exceeded
  cdr << (ros_message.max_num_meas_exceeded ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator & ros_message)
{
  // Member: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enabled = tmp ? true : false;
  }

  // Member: used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.used = tmp ? true : false;
  }

  // Member: residual_high_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.residual_high_warning = tmp ? true : false;
  }

  // Member: sample_time_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sample_time_warning = tmp ? true : false;
  }

  // Member: configuration_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.configuration_error = tmp ? true : false;
  }

  // Member: max_num_meas_exceeded
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.max_num_meas_exceeded = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
get_serialized_size(
  const microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: enabled
  {
    size_t item_size = sizeof(ros_message.enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: used
  {
    size_t item_size = sizeof(ros_message.used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: residual_high_warning
  {
    size_t item_size = sizeof(ros_message.residual_high_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sample_time_warning
  {
    size_t item_size = sizeof(ros_message.sample_time_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: configuration_error
  {
    size_t item_size = sizeof(ros_message.configuration_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_num_meas_exceeded
  {
    size_t item_size = sizeof(ros_message.max_num_meas_exceeded);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
max_serialized_size_MipFilterAidingMeasurementSummaryIndicator(
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


  // Member: enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: residual_high_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sample_time_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: configuration_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_num_meas_exceeded
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
    using DataType = microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator;
    is_plain =
      (
      offsetof(DataType, max_num_meas_exceeded) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MipFilterAidingMeasurementSummaryIndicator__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MipFilterAidingMeasurementSummaryIndicator__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MipFilterAidingMeasurementSummaryIndicator__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MipFilterAidingMeasurementSummaryIndicator__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MipFilterAidingMeasurementSummaryIndicator(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MipFilterAidingMeasurementSummaryIndicator__callbacks = {
  "microstrain_inertial_msgs::msg",
  "MipFilterAidingMeasurementSummaryIndicator",
  _MipFilterAidingMeasurementSummaryIndicator__cdr_serialize,
  _MipFilterAidingMeasurementSummaryIndicator__cdr_deserialize,
  _MipFilterAidingMeasurementSummaryIndicator__get_serialized_size,
  _MipFilterAidingMeasurementSummaryIndicator__max_serialized_size
};

static rosidl_message_type_support_t _MipFilterAidingMeasurementSummaryIndicator__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MipFilterAidingMeasurementSummaryIndicator__callbacks,
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
get_message_type_support_handle<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator>()
{
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipFilterAidingMeasurementSummaryIndicator__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, microstrain_inertial_msgs, msg, MipFilterAidingMeasurementSummaryIndicator)() {
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipFilterAidingMeasurementSummaryIndicator__handle;
}

#ifdef __cplusplus
}
#endif
