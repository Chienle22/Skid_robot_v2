// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummary.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipFilterAidingMeasurementSummary_indicator
{
public:
  explicit Init_MipFilterAidingMeasurementSummary_indicator(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary indicator(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary::_indicator_type arg)
  {
    msg_.indicator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary msg_;
};

class Init_MipFilterAidingMeasurementSummary_type
{
public:
  explicit Init_MipFilterAidingMeasurementSummary_type(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary & msg)
  : msg_(msg)
  {}
  Init_MipFilterAidingMeasurementSummary_indicator type(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_MipFilterAidingMeasurementSummary_indicator(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary msg_;
};

class Init_MipFilterAidingMeasurementSummary_source
{
public:
  explicit Init_MipFilterAidingMeasurementSummary_source(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary & msg)
  : msg_(msg)
  {}
  Init_MipFilterAidingMeasurementSummary_type source(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_MipFilterAidingMeasurementSummary_type(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary msg_;
};

class Init_MipFilterAidingMeasurementSummary_time_of_week
{
public:
  explicit Init_MipFilterAidingMeasurementSummary_time_of_week(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary & msg)
  : msg_(msg)
  {}
  Init_MipFilterAidingMeasurementSummary_source time_of_week(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary::_time_of_week_type arg)
  {
    msg_.time_of_week = std::move(arg);
    return Init_MipFilterAidingMeasurementSummary_source(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary msg_;
};

class Init_MipFilterAidingMeasurementSummary_header
{
public:
  Init_MipFilterAidingMeasurementSummary_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipFilterAidingMeasurementSummary_time_of_week header(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipFilterAidingMeasurementSummary_time_of_week(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipFilterAidingMeasurementSummary_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY__BUILDER_HPP_
