// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.idl
// generated code does not contain a copyright notice
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__struct.hpp"

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
  const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: modem_state
  cdr << ros_message.modem_state;
  // Member: connection_type
  cdr << ros_message.connection_type;
  // Member: rssi
  cdr << ros_message.rssi;
  // Member: signal_quality
  cdr << ros_message.signal_quality;
  // Member: tower_change_indicator
  cdr << ros_message.tower_change_indicator;
  // Member: nmea_timeout_flag
  cdr << (ros_message.nmea_timeout_flag ? true : false);
  // Member: server_timeout_flag
  cdr << (ros_message.server_timeout_flag ? true : false);
  // Member: rtcm_timeout_flag
  cdr << (ros_message.rtcm_timeout_flag ? true : false);
  // Member: device_out_of_range_flag
  cdr << (ros_message.device_out_of_range_flag ? true : false);
  // Member: corrections_unavailable_flag
  cdr << (ros_message.corrections_unavailable_flag ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & ros_message)
{
  // Member: modem_state
  cdr >> ros_message.modem_state;

  // Member: connection_type
  cdr >> ros_message.connection_type;

  // Member: rssi
  cdr >> ros_message.rssi;

  // Member: signal_quality
  cdr >> ros_message.signal_quality;

  // Member: tower_change_indicator
  cdr >> ros_message.tower_change_indicator;

  // Member: nmea_timeout_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.nmea_timeout_flag = tmp ? true : false;
  }

  // Member: server_timeout_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.server_timeout_flag = tmp ? true : false;
  }

  // Member: rtcm_timeout_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rtcm_timeout_flag = tmp ? true : false;
  }

  // Member: device_out_of_range_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.device_out_of_range_flag = tmp ? true : false;
  }

  // Member: corrections_unavailable_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.corrections_unavailable_flag = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
get_serialized_size(
  const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: modem_state
  {
    size_t item_size = sizeof(ros_message.modem_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: connection_type
  {
    size_t item_size = sizeof(ros_message.connection_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rssi
  {
    size_t item_size = sizeof(ros_message.rssi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signal_quality
  {
    size_t item_size = sizeof(ros_message.signal_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tower_change_indicator
  {
    size_t item_size = sizeof(ros_message.tower_change_indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nmea_timeout_flag
  {
    size_t item_size = sizeof(ros_message.nmea_timeout_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: server_timeout_flag
  {
    size_t item_size = sizeof(ros_message.server_timeout_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rtcm_timeout_flag
  {
    size_t item_size = sizeof(ros_message.rtcm_timeout_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: device_out_of_range_flag
  {
    size_t item_size = sizeof(ros_message.device_out_of_range_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: corrections_unavailable_flag
  {
    size_t item_size = sizeof(ros_message.corrections_unavailable_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_microstrain_inertial_msgs
max_serialized_size_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus(
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


  // Member: modem_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: connection_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rssi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: signal_quality
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tower_change_indicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nmea_timeout_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: server_timeout_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rtcm_timeout_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: device_out_of_range_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: corrections_unavailable_flag
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
    using DataType = microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus;
    is_plain =
      (
      offsetof(DataType, corrections_unavailable_flag) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__callbacks = {
  "microstrain_inertial_msgs::msg",
  "MipGnssCorrectionsRtkCorrectionsStatusDongleStatus",
  _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__cdr_serialize,
  _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__cdr_deserialize,
  _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__get_serialized_size,
  _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__max_serialized_size
};

static rosidl_message_type_support_t _MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__callbacks,
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
get_message_type_support_handle<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus>()
{
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, microstrain_inertial_msgs, msg, MipGnssCorrectionsRtkCorrectionsStatusDongleStatus)() {
  return &microstrain_inertial_msgs::msg::typesupport_fastrtps_cpp::_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__handle;
}

#ifdef __cplusplus
}
#endif
