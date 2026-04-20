// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from microstrain_inertial_msgs:msg/MipGpsTimestampValidFlags.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp_valid_flags__rosidl_typesupport_fastrtps_cpp.hpp"
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp_valid_flags__struct.hpp"

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
  const microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tow
  cdr << (ros_message.tow ? true : false);
  // Member: week_number
  cdr << (ros_message.week_number ? true : false);
  // Member: time_valid
  cdr << (ros_message.time_valid ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags & ros_message)
{
  // Member: tow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tow = tmp ? true : false;
  }

  // Member: week_number
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.week_number = tmp ? true : false;
  }

  // Member: time_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.time_valid = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
get_serialized_size(
  const microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tow
  {
    size_t item_size = sizeof(ros_message.tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: week_number
  {
    size_t item_size = sizeof(ros_message.week_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_valid
  {
    size_t item_size = sizeof(ros_message.time_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
max_serialized_size_MipGpsTimestampValidFlags(
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


  // Member: tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: week_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: time_valid
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
    using DataType = microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags;
    is_plain =
      (
      offsetof(DataType, time_valid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MipGpsTimestampValidFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MipGpsTimestampValidFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MipGpsTimestampValidFlags__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MipGpsTimestampValidFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MipGpsTimestampValidFlags(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MipGpsTimestampValidFlags__callbacks = {
  "microstrain_inertial_msgs::msg",
  "MipGpsTimestampValidFlags",
  _MipGpsTimestampValidFlags__cdr_serialize,
  _MipGpsTimestampValidFlags__cdr_deserialize,
  _MipGpsTimestampValidFlags__get_serialized_size,
  _MipGpsTimestampValidFlags__max_serialized_size
};

static rosidl_message_type_support_t _MipGpsTimestampValidFlags__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MipGpsTimestampValidFlags__callbacks,
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
get_message_type_support_handle<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags>()
{
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipGpsTimestampValidFlags__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, microstrain_inertial_msgs, msg, MipGpsTimestampValidFlags)() {
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipGpsTimestampValidFlags__handle;
}

#ifdef __cplusplus
}
#endif
