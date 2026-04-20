// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipFilterGnssDualAntennaStatus_valid_flags
{
public:
  explicit Init_MipFilterGnssDualAntennaStatus_valid_flags(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus valid_flags(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus::_valid_flags_type arg)
  {
    msg_.valid_flags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus msg_;
};

class Init_MipFilterGnssDualAntennaStatus_status_flags
{
public:
  explicit Init_MipFilterGnssDualAntennaStatus_status_flags(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssDualAntennaStatus_valid_flags status_flags(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus::_status_flags_type arg)
  {
    msg_.status_flags = std::move(arg);
    return Init_MipFilterGnssDualAntennaStatus_valid_flags(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus msg_;
};

class Init_MipFilterGnssDualAntennaStatus_fix_type
{
public:
  explicit Init_MipFilterGnssDualAntennaStatus_fix_type(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssDualAntennaStatus_status_flags fix_type(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus::_fix_type_type arg)
  {
    msg_.fix_type = std::move(arg);
    return Init_MipFilterGnssDualAntennaStatus_status_flags(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus msg_;
};

class Init_MipFilterGnssDualAntennaStatus_heading_unc
{
public:
  explicit Init_MipFilterGnssDualAntennaStatus_heading_unc(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssDualAntennaStatus_fix_type heading_unc(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus::_heading_unc_type arg)
  {
    msg_.heading_unc = std::move(arg);
    return Init_MipFilterGnssDualAntennaStatus_fix_type(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus msg_;
};

class Init_MipFilterGnssDualAntennaStatus_heading
{
public:
  explicit Init_MipFilterGnssDualAntennaStatus_heading(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssDualAntennaStatus_heading_unc heading(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_MipFilterGnssDualAntennaStatus_heading_unc(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus msg_;
};

class Init_MipFilterGnssDualAntennaStatus_time_of_week
{
public:
  explicit Init_MipFilterGnssDualAntennaStatus_time_of_week(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterGnssDualAntennaStatus_heading time_of_week(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus::_time_of_week_type arg)
  {
    msg_.time_of_week = std::move(arg);
    return Init_MipFilterGnssDualAntennaStatus_heading(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus msg_;
};

class Init_MipFilterGnssDualAntennaStatus_header
{
public:
  Init_MipFilterGnssDualAntennaStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipFilterGnssDualAntennaStatus_time_of_week header(::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipFilterGnssDualAntennaStatus_time_of_week(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipFilterGnssDualAntennaStatus_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__BUILDER_HPP_
