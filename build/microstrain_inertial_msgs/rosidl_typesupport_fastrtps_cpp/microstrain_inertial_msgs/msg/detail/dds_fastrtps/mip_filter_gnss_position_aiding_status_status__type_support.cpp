// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssPositionAidingStatusStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__struct.hpp"

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
  const microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tight_coupling
  cdr << (ros_message.tight_coupling ? true : false);
  // Member: differential
  cdr << (ros_message.differential ? true : false);
  // Member: integer_fix
  cdr << (ros_message.integer_fix ? true : false);
  // Member: gps_l1
  cdr << (ros_message.gps_l1 ? true : false);
  // Member: gps_l2
  cdr << (ros_message.gps_l2 ? true : false);
  // Member: gps_l5
  cdr << (ros_message.gps_l5 ? true : false);
  // Member: glo_l1
  cdr << (ros_message.glo_l1 ? true : false);
  // Member: glo_l2
  cdr << (ros_message.glo_l2 ? true : false);
  // Member: gal_e1
  cdr << (ros_message.gal_e1 ? true : false);
  // Member: gal_e5
  cdr << (ros_message.gal_e5 ? true : false);
  // Member: gal_e6
  cdr << (ros_message.gal_e6 ? true : false);
  // Member: bei_b1
  cdr << (ros_message.bei_b1 ? true : false);
  // Member: bei_b2
  cdr << (ros_message.bei_b2 ? true : false);
  // Member: bei_b3
  cdr << (ros_message.bei_b3 ? true : false);
  // Member: no_fix
  cdr << (ros_message.no_fix ? true : false);
  // Member: config_error
  cdr << (ros_message.config_error ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & ros_message)
{
  // Member: tight_coupling
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tight_coupling = tmp ? true : false;
  }

  // Member: differential
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.differential = tmp ? true : false;
  }

  // Member: integer_fix
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.integer_fix = tmp ? true : false;
  }

  // Member: gps_l1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps_l1 = tmp ? true : false;
  }

  // Member: gps_l2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps_l2 = tmp ? true : false;
  }

  // Member: gps_l5
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps_l5 = tmp ? true : false;
  }

  // Member: glo_l1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.glo_l1 = tmp ? true : false;
  }

  // Member: glo_l2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.glo_l2 = tmp ? true : false;
  }

  // Member: gal_e1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gal_e1 = tmp ? true : false;
  }

  // Member: gal_e5
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gal_e5 = tmp ? true : false;
  }

  // Member: gal_e6
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gal_e6 = tmp ? true : false;
  }

  // Member: bei_b1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bei_b1 = tmp ? true : false;
  }

  // Member: bei_b2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bei_b2 = tmp ? true : false;
  }

  // Member: bei_b3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bei_b3 = tmp ? true : false;
  }

  // Member: no_fix
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.no_fix = tmp ? true : false;
  }

  // Member: config_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.config_error = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
get_serialized_size(
  const microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tight_coupling
  {
    size_t item_size = sizeof(ros_message.tight_coupling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: differential
  {
    size_t item_size = sizeof(ros_message.differential);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: integer_fix
  {
    size_t item_size = sizeof(ros_message.integer_fix);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_l1
  {
    size_t item_size = sizeof(ros_message.gps_l1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_l2
  {
    size_t item_size = sizeof(ros_message.gps_l2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_l5
  {
    size_t item_size = sizeof(ros_message.gps_l5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: glo_l1
  {
    size_t item_size = sizeof(ros_message.glo_l1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: glo_l2
  {
    size_t item_size = sizeof(ros_message.glo_l2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gal_e1
  {
    size_t item_size = sizeof(ros_message.gal_e1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gal_e5
  {
    size_t item_size = sizeof(ros_message.gal_e5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gal_e6
  {
    size_t item_size = sizeof(ros_message.gal_e6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bei_b1
  {
    size_t item_size = sizeof(ros_message.bei_b1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bei_b2
  {
    size_t item_size = sizeof(ros_message.bei_b2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bei_b3
  {
    size_t item_size = sizeof(ros_message.bei_b3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: no_fix
  {
    size_t item_size = sizeof(ros_message.no_fix);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: config_error
  {
    size_t item_size = sizeof(ros_message.config_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
max_serialized_size_MipFilterGnssPositionAidingStatusStatus(
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


  // Member: tight_coupling
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: differential
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: integer_fix
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_l1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_l2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_l5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: glo_l1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: glo_l2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gal_e1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gal_e5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gal_e6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bei_b1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bei_b2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bei_b3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: no_fix
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: config_error
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
    using DataType = microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus;
    is_plain =
      (
      offsetof(DataType, config_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MipFilterGnssPositionAidingStatusStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MipFilterGnssPositionAidingStatusStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MipFilterGnssPositionAidingStatusStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MipFilterGnssPositionAidingStatusStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MipFilterGnssPositionAidingStatusStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MipFilterGnssPositionAidingStatusStatus__callbacks = {
  "microstrain_inertial_msgs::msg",
  "MipFilterGnssPositionAidingStatusStatus",
  _MipFilterGnssPositionAidingStatusStatus__cdr_serialize,
  _MipFilterGnssPositionAidingStatusStatus__cdr_deserialize,
  _MipFilterGnssPositionAidingStatusStatus__get_serialized_size,
  _MipFilterGnssPositionAidingStatusStatus__max_serialized_size
};

static rosidl_message_type_support_t _MipFilterGnssPositionAidingStatusStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MipFilterGnssPositionAidingStatusStatus__callbacks,
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
get_message_type_support_handle<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus>()
{
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipFilterGnssPositionAidingStatusStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, microstrain_inertial_msgs, msg, MipFilterGnssPositionAidingStatusStatus)() {
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipFilterGnssPositionAidingStatusStatus__handle;
}

#ifdef __cplusplus
}
#endif
