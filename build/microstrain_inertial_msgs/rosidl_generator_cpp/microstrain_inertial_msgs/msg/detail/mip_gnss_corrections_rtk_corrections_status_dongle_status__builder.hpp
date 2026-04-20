// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_DONGLE_STATUS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_DONGLE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_corrections_unavailable_flag
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_corrections_unavailable_flag(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus corrections_unavailable_flag(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::_corrections_unavailable_flag_type arg)
  {
    msg_.corrections_unavailable_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_device_out_of_range_flag
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_device_out_of_range_flag(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_corrections_unavailable_flag device_out_of_range_flag(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::_device_out_of_range_flag_type arg)
  {
    msg_.device_out_of_range_flag = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_corrections_unavailable_flag(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_rtcm_timeout_flag
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_rtcm_timeout_flag(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_device_out_of_range_flag rtcm_timeout_flag(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::_rtcm_timeout_flag_type arg)
  {
    msg_.rtcm_timeout_flag = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_device_out_of_range_flag(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_server_timeout_flag
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_server_timeout_flag(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_rtcm_timeout_flag server_timeout_flag(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::_server_timeout_flag_type arg)
  {
    msg_.server_timeout_flag = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_rtcm_timeout_flag(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_nmea_timeout_flag
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_nmea_timeout_flag(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_server_timeout_flag nmea_timeout_flag(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::_nmea_timeout_flag_type arg)
  {
    msg_.nmea_timeout_flag = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_server_timeout_flag(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_tower_change_indicator
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_tower_change_indicator(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_nmea_timeout_flag tower_change_indicator(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::_tower_change_indicator_type arg)
  {
    msg_.tower_change_indicator = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_nmea_timeout_flag(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_signal_quality
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_signal_quality(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_tower_change_indicator signal_quality(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::_signal_quality_type arg)
  {
    msg_.signal_quality = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_tower_change_indicator(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_rssi
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_rssi(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_signal_quality rssi(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::_rssi_type arg)
  {
    msg_.rssi = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_signal_quality(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_connection_type
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_connection_type(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_rssi connection_type(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::_connection_type_type arg)
  {
    msg_.connection_type = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_rssi(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_modem_state
{
public:
  Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_modem_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_connection_type modem_state(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::_modem_state_type arg)
  {
    msg_.modem_state = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_connection_type(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_modem_state();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_DONGLE_STATUS__BUILDER_HPP_
