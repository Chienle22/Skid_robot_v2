// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssFixInfoFixFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO_FIX_FLAGS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO_FIX_FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info_fix_flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipGnssFixInfoFixFlags_dgnss_used
{
public:
  explicit Init_MipGnssFixInfoFixFlags_dgnss_used(::microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags dgnss_used(::microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags::_dgnss_used_type arg)
  {
    msg_.dgnss_used = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags msg_;
};

class Init_MipGnssFixInfoFixFlags_sbas_used
{
public:
  Init_MipGnssFixInfoFixFlags_sbas_used()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipGnssFixInfoFixFlags_dgnss_used sbas_used(::microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags::_sbas_used_type arg)
  {
    msg_.sbas_used = std::move(arg);
    return Init_MipGnssFixInfoFixFlags_dgnss_used(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipGnssFixInfoFixFlags_sbas_used();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO_FIX_FLAGS__BUILDER_HPP_
