// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssPositionAidingStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipFilterGnssPositionAidingStatus_status
{
public:
  explicit Init_MipFilterGnssPositionAidingStatus_status(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus status(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatus_time_of_week
{
public:
  explicit Init_MipFilterGnssPositionAidingStatus_time_of_week(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatus_status time_of_week(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus::_time_of_week_type arg)
  {
    msg_.time_of_week = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatus_status(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatus_receiver_id
{
public:
  explicit Init_MipFilterGnssPositionAidingStatus_receiver_id(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssPositionAidingStatus_time_of_week receiver_id(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatus_time_of_week(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus msg_;
};

class Init_MipFilterGnssPositionAidingStatus_header
{
public:
  Init_MipFilterGnssPositionAidingStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipFilterGnssPositionAidingStatus_receiver_id header(::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipFilterGnssPositionAidingStatus_receiver_id(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipFilterGnssPositionAidingStatus_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS__BUILDER_HPP_
