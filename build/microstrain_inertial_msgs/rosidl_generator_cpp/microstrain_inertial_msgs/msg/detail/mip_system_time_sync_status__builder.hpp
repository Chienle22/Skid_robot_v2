// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipSystemTimeSyncStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_TIME_SYNC_STATUS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_TIME_SYNC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_system_time_sync_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipSystemTimeSyncStatus_last_pps_rcvd
{
public:
  explicit Init_MipSystemTimeSyncStatus_last_pps_rcvd(::microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus last_pps_rcvd(::microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus::_last_pps_rcvd_type arg)
  {
    msg_.last_pps_rcvd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus msg_;
};

class Init_MipSystemTimeSyncStatus_time_sync
{
public:
  explicit Init_MipSystemTimeSyncStatus_time_sync(::microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus & msg)
  : msg_(msg)
  {}
  Init_MipSystemTimeSyncStatus_last_pps_rcvd time_sync(::microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus::_time_sync_type arg)
  {
    msg_.time_sync = std::move(arg);
    return Init_MipSystemTimeSyncStatus_last_pps_rcvd(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus msg_;
};

class Init_MipSystemTimeSyncStatus_header
{
public:
  Init_MipSystemTimeSyncStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipSystemTimeSyncStatus_time_sync header(::microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipSystemTimeSyncStatus_time_sync(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipSystemTimeSyncStatus_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_TIME_SYNC_STATUS__BUILDER_HPP_
