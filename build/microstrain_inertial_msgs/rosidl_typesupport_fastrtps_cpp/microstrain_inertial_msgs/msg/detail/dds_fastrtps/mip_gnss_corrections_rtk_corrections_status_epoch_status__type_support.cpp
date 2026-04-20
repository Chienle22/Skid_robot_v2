// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusEpochStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__struct.hpp"

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
  const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: antenna_location_received
  cdr << (ros_message.antenna_location_received ? true : false);
  // Member: antenna_description_received
  cdr << (ros_message.antenna_description_received ? true : false);
  // Member: gps_received
  cdr << (ros_message.gps_received ? true : false);
  // Member: galileo_received
  cdr << (ros_message.galileo_received ? true : false);
  // Member: glonass_received
  cdr << (ros_message.glonass_received ? true : false);
  // Member: beidou_received
  cdr << (ros_message.beidou_received ? true : false);
  // Member: using_gps_msm_messages
  cdr << (ros_message.using_gps_msm_messages ? true : false);
  // Member: using_glonass_msm_messages
  cdr << (ros_message.using_glonass_msm_messages ? true : false);
  // Member: dongle_status_read_failed
  cdr << (ros_message.dongle_status_read_failed ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & ros_message)
{
  // Member: antenna_location_received
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.antenna_location_received = tmp ? true : false;
  }

  // Member: antenna_description_received
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.antenna_description_received = tmp ? true : false;
  }

  // Member: gps_received
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps_received = tmp ? true : false;
  }

  // Member: galileo_received
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.galileo_received = tmp ? true : false;
  }

  // Member: glonass_received
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.glonass_received = tmp ? true : false;
  }

  // Member: beidou_received
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.beidou_received = tmp ? true : false;
  }

  // Member: using_gps_msm_messages
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.using_gps_msm_messages = tmp ? true : false;
  }

  // Member: using_glonass_msm_messages
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.using_glonass_msm_messages = tmp ? true : false;
  }

  // Member: dongle_status_read_failed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dongle_status_read_failed = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
get_serialized_size(
  const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: antenna_location_received
  {
    size_t item_size = sizeof(ros_message.antenna_location_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: antenna_description_received
  {
    size_t item_size = sizeof(ros_message.antenna_description_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_received
  {
    size_t item_size = sizeof(ros_message.gps_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: galileo_received
  {
    size_t item_size = sizeof(ros_message.galileo_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: glonass_received
  {
    size_t item_size = sizeof(ros_message.glonass_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beidou_received
  {
    size_t item_size = sizeof(ros_message.beidou_received);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: using_gps_msm_messages
  {
    size_t item_size = sizeof(ros_message.using_gps_msm_messages);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: using_glonass_msm_messages
  {
    size_t item_size = sizeof(ros_message.using_glonass_msm_messages);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dongle_status_read_failed
  {
    size_t item_size = sizeof(ros_message.dongle_status_read_failed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
max_serialized_size_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus(
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


  // Member: antenna_location_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: antenna_description_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: galileo_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: glonass_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: beidou_received
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: using_gps_msm_messages
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: using_glonass_msm_messages
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dongle_status_read_failed
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
    using DataType = microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus;
    is_plain =
      (
      offsetof(DataType, dongle_status_read_failed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__callbacks = {
  "microstrain_inertial_msgs::msg",
  "MipGnssCorrectionsRtkCorrectionsStatusEpochStatus",
  _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__cdr_serialize,
  _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__cdr_deserialize,
  _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__get_serialized_size,
  _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__max_serialized_size
};

static rosidl_message_type_support_t _MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__callbacks,
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
get_message_type_support_handle<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus>()
{
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatusEpochStatus)() {
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__handle;
}

#ifdef __cplusplus
}
#endif
