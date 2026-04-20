// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterMultiAntennaOffsetCorrection.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_MULTI_ANTENNA_OFFSET_CORRECTION__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_MULTI_ANTENNA_OFFSET_CORRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_multi_antenna_offset_correction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipFilterMultiAntennaOffsetCorrection_offset
{
public:
  explicit Init_MipFilterMultiAntennaOffsetCorrection_offset(::microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection offset(::microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection msg_;
};

class Init_MipFilterMultiAntennaOffsetCorrection_receiver_id
{
public:
  explicit Init_MipFilterMultiAntennaOffsetCorrection_receiver_id(::microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection & msg)
  : msg_(msg)
  {}
  Init_MipFilterMultiAntennaOffsetCorrection_offset receiver_id(::microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_MipFilterMultiAntennaOffsetCorrection_offset(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection msg_;
};

class Init_MipFilterMultiAntennaOffsetCorrection_header
{
public:
  Init_MipFilterMultiAntennaOffsetCorrection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipFilterMultiAntennaOffsetCorrection_receiver_id header(::microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipFilterMultiAntennaOffsetCorrection_receiver_id(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipFilterMultiAntennaOffsetCorrection_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_MULTI_ANTENNA_OFFSET_CORRECTION__BUILDER_HPP_
