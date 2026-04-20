// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__struct.hpp"

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
bool cdr_serialize(
  const microstrain_inertial_msgs::msg::MipHeader &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  microstrain_inertial_msgs::msg::MipHeader &);
size_t get_serialized_size(
  const microstrain_inertial_msgs::msg::MipHeader &,
  size_t current_alignment);
size_t
max_serialized_size_MipHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace microstrain_inertial_msgs

namespace microstrain_inertial_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags &);
size_t get_serialized_size(
  const microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags &,
  size_t current_alignment);
size_t
max_serialized_size_MipFilterStatusGx5StatusFlags(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace microstrain_inertial_msgs

namespace microstrain_inertial_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags &);
size_t get_serialized_size(
  const microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags &,
  size_t current_alignment);
size_t
max_serialized_size_MipFilterStatusGq7StatusFlags(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace microstrain_inertial_msgs


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_serialize(
  const microstrain_inertial_msgs::msg::MipFilterStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: filter_state
  cdr << ros_message.filter_state;
  // Member: dynamics_mode
  cdr << ros_message.dynamics_mode;
  // Member: gx5_status_flags
  microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.gx5_status_flags,
    cdr);
  // Member: gq7_status_flags
  microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.gq7_status_flags,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  microstrain_inertial_msgs::msg::MipFilterStatus & ros_message)
{
  // Member: header
  microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: filter_state
  cdr >> ros_message.filter_state;

  // Member: dynamics_mode
  cdr >> ros_message.dynamics_mode;

  // Member: gx5_status_flags
  microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.gx5_status_flags);

  // Member: gq7_status_flags
  microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.gq7_status_flags);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
get_serialized_size(
  const microstrain_inertial_msgs::msg::MipFilterStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: filter_state
  {
    size_t item_size = sizeof(ros_message.filter_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dynamics_mode
  {
    size_t item_size = sizeof(ros_message.dynamics_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gx5_status_flags

  current_alignment +=
    microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.gx5_status_flags, current_alignment);
  // Member: gq7_status_flags

  current_alignment +=
    microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.gq7_status_flags, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
max_serialized_size_MipFilterStatus(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MipHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: filter_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: dynamics_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: gx5_status_flags
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MipFilterStatusGx5StatusFlags(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: gq7_status_flags
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MipFilterStatusGq7StatusFlags(
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
    using DataType = microstrain_inertial_msgs::msg::MipFilterStatus;
    is_plain =
      (
      offsetof(DataType, gq7_status_flags) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MipFilterStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipFilterStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MipFilterStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<microstrain_inertial_msgs::msg::MipFilterStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MipFilterStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipFilterStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MipFilterStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MipFilterStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MipFilterStatus__callbacks = {
  "microstrain_inertial_msgs::msg",
  "MipFilterStatus",
  _MipFilterStatus__cdr_serialize,
  _MipFilterStatus__cdr_deserialize,
  _MipFilterStatus__get_serialized_size,
  _MipFilterStatus__max_serialized_size
};

static rosidl_message_type_support_t _MipFilterStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MipFilterStatus__callbacks,
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
get_message_type_support_handle<microstrain_inertial_msgs::msg::MipFilterStatus>()
{
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipFilterStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, microstrain_inertial_msgs, msg, MipFilterStatus)() {
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipFilterStatus__handle;
}

#ifdef __cplusplus
}
#endif
