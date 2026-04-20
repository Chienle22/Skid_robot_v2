// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipGnssCorrectionsRtkCorrectionsStatus_beidou_correction_latency
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatus_beidou_correction_latency(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus beidou_correction_latency(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus::_beidou_correction_latency_type arg)
  {
    msg_.beidou_correction_latency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatus_galileo_correction_latency
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatus_galileo_correction_latency(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatus_beidou_correction_latency galileo_correction_latency(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus::_galileo_correction_latency_type arg)
  {
    msg_.galileo_correction_latency = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatus_beidou_correction_latency(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatus_glonass_correction_latency
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatus_glonass_correction_latency(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatus_galileo_correction_latency glonass_correction_latency(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus::_glonass_correction_latency_type arg)
  {
    msg_.glonass_correction_latency = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatus_galileo_correction_latency(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatus_gps_correction_latency
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatus_gps_correction_latency(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatus_glonass_correction_latency gps_correction_latency(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus::_gps_correction_latency_type arg)
  {
    msg_.gps_correction_latency = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatus_glonass_correction_latency(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatus_dongle_status
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatus_dongle_status(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatus_gps_correction_latency dongle_status(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus::_dongle_status_type arg)
  {
    msg_.dongle_status = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatus_gps_correction_latency(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatus_epoch_status
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatus_epoch_status(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatus_dongle_status epoch_status(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus::_epoch_status_type arg)
  {
    msg_.epoch_status = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatus_dongle_status(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatus_week_number
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatus_week_number(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatus_epoch_status week_number(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus::_week_number_type arg)
  {
    msg_.week_number = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatus_epoch_status(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatus_time_of_week
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatus_time_of_week(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatus_week_number time_of_week(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus::_time_of_week_type arg)
  {
    msg_.time_of_week = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatus_week_number(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatus_header
{
public:
  Init_MipGnssCorrectionsRtkCorrectionsStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatus_time_of_week header(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatus_time_of_week(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipGnssCorrectionsRtkCorrectionsStatus_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS__BUILDER_HPP_
