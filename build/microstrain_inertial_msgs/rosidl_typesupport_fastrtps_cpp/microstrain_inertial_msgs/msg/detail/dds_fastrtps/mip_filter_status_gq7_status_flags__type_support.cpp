// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGq7StatusFlags.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__rosidl_typesupport_fastrtps_cpp.hpp"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__struct.hpp"

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
  const microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: filter_condition
  cdr << ros_message.filter_condition;
  // Member: roll_pitch_warning
  cdr << (ros_message.roll_pitch_warning ? true : false);
  // Member: heading_warning
  cdr << (ros_message.heading_warning ? true : false);
  // Member: position_warning
  cdr << (ros_message.position_warning ? true : false);
  // Member: velocity_warning
  cdr << (ros_message.velocity_warning ? true : false);
  // Member: imu_bias_warning
  cdr << (ros_message.imu_bias_warning ? true : false);
  // Member: gnss_clk_warning
  cdr << (ros_message.gnss_clk_warning ? true : false);
  // Member: antenna_lever_arm_warning
  cdr << (ros_message.antenna_lever_arm_warning ? true : false);
  // Member: mounting_transform_warning
  cdr << (ros_message.mounting_transform_warning ? true : false);
  // Member: time_sync_warning
  cdr << (ros_message.time_sync_warning ? true : false);
  // Member: solution_error
  cdr << (ros_message.solution_error ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & ros_message)
{
  // Member: filter_condition
  cdr >> ros_message.filter_condition;

  // Member: roll_pitch_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.roll_pitch_warning = tmp ? true : false;
  }

  // Member: heading_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heading_warning = tmp ? true : false;
  }

  // Member: position_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.position_warning = tmp ? true : false;
  }

  // Member: velocity_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.velocity_warning = tmp ? true : false;
  }

  // Member: imu_bias_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.imu_bias_warning = tmp ? true : false;
  }

  // Member: gnss_clk_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gnss_clk_warning = tmp ? true : false;
  }

  // Member: antenna_lever_arm_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.antenna_lever_arm_warning = tmp ? true : false;
  }

  // Member: mounting_transform_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mounting_transform_warning = tmp ? true : false;
  }

  // Member: time_sync_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.time_sync_warning = tmp ? true : false;
  }

  // Member: solution_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.solution_error = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
get_serialized_size(
  const microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: filter_condition
  {
    size_t item_size = sizeof(ros_message.filter_condition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_pitch_warning
  {
    size_t item_size = sizeof(ros_message.roll_pitch_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_warning
  {
    size_t item_size = sizeof(ros_message.heading_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_warning
  {
    size_t item_size = sizeof(ros_message.position_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_warning
  {
    size_t item_size = sizeof(ros_message.velocity_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_bias_warning
  {
    size_t item_size = sizeof(ros_message.imu_bias_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_clk_warning
  {
    size_t item_size = sizeof(ros_message.gnss_clk_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: antenna_lever_arm_warning
  {
    size_t item_size = sizeof(ros_message.antenna_lever_arm_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mounting_transform_warning
  {
    size_t item_size = sizeof(ros_message.mounting_transform_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_sync_warning
  {
    size_t item_size = sizeof(ros_message.time_sync_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: solution_error
  {
    size_t item_size = sizeof(ros_message.solution_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
max_serialized_size_MipFilterStatusGq7StatusFlags(
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


  // Member: filter_condition
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: roll_pitch_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heading_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: position_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: velocity_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: imu_bias_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gnss_clk_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: antenna_lever_arm_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mounting_transform_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: time_sync_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: solution_error
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
    using DataType = microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags;
    is_plain =
      (
      offsetof(DataType, solution_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MipFilterStatusGq7StatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MipFilterStatusGq7StatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MipFilterStatusGq7StatusFlags__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MipFilterStatusGq7StatusFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MipFilterStatusGq7StatusFlags(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MipFilterStatusGq7StatusFlags__callbacks = {
  "microstrain_inertial_msgs::msg",
  "MipFilterStatusGq7StatusFlags",
  _MipFilterStatusGq7StatusFlags__cdr_serialize,
  _MipFilterStatusGq7StatusFlags__cdr_deserialize,
  _MipFilterStatusGq7StatusFlags__get_serialized_size,
  _MipFilterStatusGq7StatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _MipFilterStatusGq7StatusFlags__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MipFilterStatusGq7StatusFlags__callbacks,
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
get_message_type_support_handle<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags>()
{
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipFilterStatusGq7StatusFlags__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, microstrain_inertial_msgs, msg, MipFilterStatusGq7StatusFlags)() {
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipFilterStatusGq7StatusFlags__handle;
}

#ifdef __cplusplus
}
#endif
