// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGq7StatusFlags.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "microstrain_inertial_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__struct.h"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__functions.h"
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


using _MipFilterStatusGq7StatusFlags__ros_msg_type = microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags;

static bool _MipFilterStatusGq7StatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MipFilterStatusGq7StatusFlags__ros_msg_type * ros_message = static_cast<const _MipFilterStatusGq7StatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: filter_condition
  {
    cdr << ros_message->filter_condition;
  }

  // Field name: roll_pitch_warning
  {
    cdr << (ros_message->roll_pitch_warning ? true : false);
  }

  // Field name: heading_warning
  {
    cdr << (ros_message->heading_warning ? true : false);
  }

  // Field name: position_warning
  {
    cdr << (ros_message->position_warning ? true : false);
  }

  // Field name: velocity_warning
  {
    cdr << (ros_message->velocity_warning ? true : false);
  }

  // Field name: imu_bias_warning
  {
    cdr << (ros_message->imu_bias_warning ? true : false);
  }

  // Field name: gnss_clk_warning
  {
    cdr << (ros_message->gnss_clk_warning ? true : false);
  }

  // Field name: antenna_lever_arm_warning
  {
    cdr << (ros_message->antenna_lever_arm_warning ? true : false);
  }

  // Field name: mounting_transform_warning
  {
    cdr << (ros_message->mounting_transform_warning ? true : false);
  }

  // Field name: time_sync_warning
  {
    cdr << (ros_message->time_sync_warning ? true : false);
  }

  // Field name: solution_error
  {
    cdr << (ros_message->solution_error ? true : false);
  }

  return true;
}

static bool _MipFilterStatusGq7StatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MipFilterStatusGq7StatusFlags__ros_msg_type * ros_message = static_cast<_MipFilterStatusGq7StatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: filter_condition
  {
    cdr >> ros_message->filter_condition;
  }

  // Field name: roll_pitch_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->roll_pitch_warning = tmp ? true : false;
  }

  // Field name: heading_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heading_warning = tmp ? true : false;
  }

  // Field name: position_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->position_warning = tmp ? true : false;
  }

  // Field name: velocity_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->velocity_warning = tmp ? true : false;
  }

  // Field name: imu_bias_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->imu_bias_warning = tmp ? true : false;
  }

  // Field name: gnss_clk_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gnss_clk_warning = tmp ? true : false;
  }

  // Field name: antenna_lever_arm_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->antenna_lever_arm_warning = tmp ? true : false;
  }

  // Field name: mounting_transform_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mounting_transform_warning = tmp ? true : false;
  }

  // Field name: time_sync_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->time_sync_warning = tmp ? true : false;
  }

  // Field name: solution_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->solution_error = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t get_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MipFilterStatusGq7StatusFlags__ros_msg_type * ros_message = static_cast<const _MipFilterStatusGq7StatusFlags__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name filter_condition
  {
    size_t item_size = sizeof(ros_message->filter_condition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_pitch_warning
  {
    size_t item_size = sizeof(ros_message->roll_pitch_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_warning
  {
    size_t item_size = sizeof(ros_message->heading_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_warning
  {
    size_t item_size = sizeof(ros_message->position_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_warning
  {
    size_t item_size = sizeof(ros_message->velocity_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_bias_warning
  {
    size_t item_size = sizeof(ros_message->imu_bias_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_clk_warning
  {
    size_t item_size = sizeof(ros_message->gnss_clk_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name antenna_lever_arm_warning
  {
    size_t item_size = sizeof(ros_message->antenna_lever_arm_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mounting_transform_warning
  {
    size_t item_size = sizeof(ros_message->mounting_transform_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_sync_warning
  {
    size_t item_size = sizeof(ros_message->time_sync_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name solution_error
  {
    size_t item_size = sizeof(ros_message->solution_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MipFilterStatusGq7StatusFlags__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_microstrain_inertial_msgs
size_t max_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags(
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

  // member: filter_condition
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: roll_pitch_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heading_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: velocity_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: imu_bias_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gnss_clk_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: antenna_lever_arm_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mounting_transform_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: time_sync_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: solution_error
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
    using DataType = microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags;
    is_plain =
      (
      offsetof(DataType, solution_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MipFilterStatusGq7StatusFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MipFilterStatusGq7StatusFlags = {
  "microstrain_inertial_msgs::msg",
  "MipFilterStatusGq7StatusFlags",
  _MipFilterStatusGq7StatusFlags__cdr_serialize,
  _MipFilterStatusGq7StatusFlags__cdr_deserialize,
  _MipFilterStatusGq7StatusFlags__get_serialized_size,
  _MipFilterStatusGq7StatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _MipFilterStatusGq7StatusFlags__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MipFilterStatusGq7StatusFlags,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, microstrain_inertial_msgs, msg, MipFilterStatusGq7StatusFlags)() {
  return &_MipFilterStatusGq7StatusFlags__type_support;
}

#if defined(__cplusplus)
}
#endif
