// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGpsTimestamp.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipGpsTimestamp_valid_flags
{
public:
  explicit Init_MipGpsTimestamp_valid_flags(::microstrain_inertial_msgs::msg::MipGpsTimestamp & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipGpsTimestamp valid_flags(::microstrain_inertial_msgs::msg::MipGpsTimestamp::_valid_flags_type arg)
  {
    msg_.valid_flags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGpsTimestamp msg_;
};

class Init_MipGpsTimestamp_week_number
{
public:
  explicit Init_MipGpsTimestamp_week_number(::microstrain_inertial_msgs::msg::MipGpsTimestamp & msg)
  : msg_(msg)
  {}
  Init_MipGpsTimestamp_valid_flags week_number(::microstrain_inertial_msgs::msg::MipGpsTimestamp::_week_number_type arg)
  {
    msg_.week_number = std::move(arg);
    return Init_MipGpsTimestamp_valid_flags(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGpsTimestamp msg_;
};

class Init_MipGpsTimestamp_tow
{
public:
  Init_MipGpsTimestamp_tow()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipGpsTimestamp_week_number tow(::microstrain_inertial_msgs::msg::MipGpsTimestamp::_tow_type arg)
  {
    msg_.tow = std::move(arg);
    return Init_MipGpsTimestamp_week_number(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGpsTimestamp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipGpsTimestamp>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipGpsTimestamp_tow();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP__BUILDER_HPP_
