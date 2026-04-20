// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatusStatusFlags.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status_status_flags__rosidl_typesupport_fastrtps_cpp.hpp"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status_status_flags__struct.hpp"

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
  const microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rcv_1_data_valid
  cdr << (ros_message.rcv_1_data_valid ? true : false);
  // Member: rcv_2_data_valid
  cdr << (ros_message.rcv_2_data_valid ? true : false);
  // Member: antenna_offsets_valid
  cdr << (ros_message.antenna_offsets_valid ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags & ros_message)
{
  // Member: rcv_1_data_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rcv_1_data_valid = tmp ? true : false;
  }

  // Member: rcv_2_data_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rcv_2_data_valid = tmp ? true : false;
  }

  // Member: antenna_offsets_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.antenna_offsets_valid = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
get_serialized_size(
  const microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rcv_1_data_valid
  {
    size_t item_size = sizeof(ros_message.rcv_1_data_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rcv_2_data_valid
  {
    size_t item_size = sizeof(ros_message.rcv_2_data_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: antenna_offsets_valid
  {
    size_t item_size = sizeof(ros_message.antenna_offsets_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
max_serialized_size_MipFilterGnssDualAntennaStatusStatusFlags(
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


  // Member: rcv_1_data_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rcv_2_data_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: antenna_offsets_valid
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
    using DataType = microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags;
    is_plain =
      (
      offsetof(DataType, antenna_offsets_valid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MipFilterGnssDualAntennaStatusStatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MipFilterGnssDualAntennaStatusStatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MipFilterGnssDualAntennaStatusStatusFlags__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MipFilterGnssDualAntennaStatusStatusFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MipFilterGnssDualAntennaStatusStatusFlags(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MipFilterGnssDualAntennaStatusStatusFlags__callbacks = {
  "microstrain_inertial_msgs::msg",
  "MipFilterGnssDualAntennaStatusStatusFlags",
  _MipFilterGnssDualAntennaStatusStatusFlags__cdr_serialize,
  _MipFilterGnssDualAntennaStatusStatusFlags__cdr_deserialize,
  _MipFilterGnssDualAntennaStatusStatusFlags__get_serialized_size,
  _MipFilterGnssDualAntennaStatusStatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _MipFilterGnssDualAntennaStatusStatusFlags__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MipFilterGnssDualAntennaStatusStatusFlags__callbacks,
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
get_message_type_support_handle<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags>()
{
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipFilterGnssDualAntennaStatusStatusFlags__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, microstrain_inertial_msgs, msg, MipFilterGnssDualAntennaStatusStatusFlags)() {
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipFilterGnssDualAntennaStatusStatusFlags__handle;
}

#ifdef __cplusplus
}
#endif
