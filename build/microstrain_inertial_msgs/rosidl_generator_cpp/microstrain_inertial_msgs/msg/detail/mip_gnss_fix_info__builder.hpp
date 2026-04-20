// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssFixInfo.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipGnssFixInfo_fix_flags
{
public:
  explicit Init_MipGnssFixInfo_fix_flags(::microstrain_inertial_msgs::msg::MipGnssFixInfo & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipGnssFixInfo fix_flags(::microstrain_inertial_msgs::msg::MipGnssFixInfo::_fix_flags_type arg)
  {
    msg_.fix_flags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssFixInfo msg_;
};

class Init_MipGnssFixInfo_num_sv
{
public:
  explicit Init_MipGnssFixInfo_num_sv(::microstrain_inertial_msgs::msg::MipGnssFixInfo & msg)
  : msg_(msg)
  {}
  Init_MipGnssFixInfo_fix_flags num_sv(::microstrain_inertial_msgs::msg::MipGnssFixInfo::_num_sv_type arg)
  {
    msg_.num_sv = std::move(arg);
    return Init_MipGnssFixInfo_fix_flags(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssFixInfo msg_;
};

class Init_MipGnssFixInfo_fix_type
{
public:
  explicit Init_MipGnssFixInfo_fix_type(::microstrain_inertial_msgs::msg::MipGnssFixInfo & msg)
  : msg_(msg)
  {}
  Init_MipGnssFixInfo_num_sv fix_type(::microstrain_inertial_msgs::msg::MipGnssFixInfo::_fix_type_type arg)
  {
    msg_.fix_type = std::move(arg);
    return Init_MipGnssFixInfo_num_sv(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssFixInfo msg_;
};

class Init_MipGnssFixInfo_header
{
public:
  Init_MipGnssFixInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipGnssFixInfo_fix_type header(::microstrain_inertial_msgs::msg::MipGnssFixInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipGnssFixInfo_fix_type(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssFixInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipGnssFixInfo>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipGnssFixInfo_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO__BUILDER_HPP_
