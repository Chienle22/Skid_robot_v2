// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusEpochStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_EPOCH_STATUS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_EPOCH_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_dongle_status_read_failed
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_dongle_status_read_failed(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus dongle_status_read_failed(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus::_dongle_status_read_failed_type arg)
  {
    msg_.dongle_status_read_failed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_using_glonass_msm_messages
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_using_glonass_msm_messages(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_dongle_status_read_failed using_glonass_msm_messages(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus::_using_glonass_msm_messages_type arg)
  {
    msg_.using_glonass_msm_messages = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_dongle_status_read_failed(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_using_gps_msm_messages
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_using_gps_msm_messages(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_using_glonass_msm_messages using_gps_msm_messages(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus::_using_gps_msm_messages_type arg)
  {
    msg_.using_gps_msm_messages = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_using_glonass_msm_messages(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_beidou_received
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_beidou_received(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_using_gps_msm_messages beidou_received(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus::_beidou_received_type arg)
  {
    msg_.beidou_received = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_using_gps_msm_messages(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_glonass_received
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_glonass_received(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_beidou_received glonass_received(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus::_glonass_received_type arg)
  {
    msg_.glonass_received = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_beidou_received(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_galileo_received
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_galileo_received(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_glonass_received galileo_received(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus::_galileo_received_type arg)
  {
    msg_.galileo_received = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_glonass_received(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_gps_received
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_gps_received(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_galileo_received gps_received(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus::_gps_received_type arg)
  {
    msg_.gps_received = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_galileo_received(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_antenna_description_received
{
public:
  explicit Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_antenna_description_received(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_gps_received antenna_description_received(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus::_antenna_description_received_type arg)
  {
    msg_.antenna_description_received = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_gps_received(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus msg_;
};

class Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_antenna_location_received
{
public:
  Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_antenna_location_received()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_antenna_description_received antenna_location_received(::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus::_antenna_location_received_type arg)
  {
    msg_.antenna_location_received = std::move(arg);
    return Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_antenna_description_received(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_antenna_location_received();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_EPOCH_STATUS__BUILDER_HPP_
