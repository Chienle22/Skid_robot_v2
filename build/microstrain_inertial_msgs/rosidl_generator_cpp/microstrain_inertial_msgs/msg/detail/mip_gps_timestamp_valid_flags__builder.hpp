// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGpsTimestampValidFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP_VALID_FLAGS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP_VALID_FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp_valid_flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipGpsTimestampValidFlags_time_valid
{
public:
  explicit Init_MipGpsTimestampValidFlags_time_valid(::microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags time_valid(::microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags::_time_valid_type arg)
  {
    msg_.time_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags msg_;
};

class Init_MipGpsTimestampValidFlags_week_number
{
public:
  explicit Init_MipGpsTimestampValidFlags_week_number(::microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags & msg)
  : msg_(msg)
  {}
  Init_MipGpsTimestampValidFlags_time_valid week_number(::microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags::_week_number_type arg)
  {
    msg_.week_number = std::move(arg);
    return Init_MipGpsTimestampValidFlags_time_valid(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags msg_;
};

class Init_MipGpsTimestampValidFlags_tow
{
public:
  Init_MipGpsTimestampValidFlags_tow()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipGpsTimestampValidFlags_week_number tow(::microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags::_tow_type arg)
  {
    msg_.tow = std::move(arg);
    return Init_MipGpsTimestampValidFlags_week_number(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipGpsTimestampValidFlags_tow();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP_VALID_FLAGS__BUILDER_HPP_
