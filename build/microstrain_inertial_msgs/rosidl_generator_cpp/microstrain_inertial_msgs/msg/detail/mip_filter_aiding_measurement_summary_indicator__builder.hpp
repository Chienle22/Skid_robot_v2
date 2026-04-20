// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummaryIndicator.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY_INDICATOR__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY_INDICATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipFilterAidingMeasurementSummaryIndicator_max_num_meas_exceeded
{
public:
  explicit Init_MipFilterAidingMeasurementSummaryIndicator_max_num_meas_exceeded(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator max_num_meas_exceeded(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator::_max_num_meas_exceeded_type arg)
  {
    msg_.max_num_meas_exceeded = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator msg_;
};

class Init_MipFilterAidingMeasurementSummaryIndicator_configuration_error
{
public:
  explicit Init_MipFilterAidingMeasurementSummaryIndicator_configuration_error(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator & msg)
  : msg_(msg)
  {}
  Init_MipFilterAidingMeasurementSummaryIndicator_max_num_meas_exceeded configuration_error(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator::_configuration_error_type arg)
  {
    msg_.configuration_error = std::move(arg);
    return Init_MipFilterAidingMeasurementSummaryIndicator_max_num_meas_exceeded(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator msg_;
};

class Init_MipFilterAidingMeasurementSummaryIndicator_sample_time_warning
{
public:
  explicit Init_MipFilterAidingMeasurementSummaryIndicator_sample_time_warning(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator & msg)
  : msg_(msg)
  {}
  Init_MipFilterAidingMeasurementSummaryIndicator_configuration_error sample_time_warning(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator::_sample_time_warning_type arg)
  {
    msg_.sample_time_warning = std::move(arg);
    return Init_MipFilterAidingMeasurementSummaryIndicator_configuration_error(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator msg_;
};

class Init_MipFilterAidingMeasurementSummaryIndicator_residual_high_warning
{
public:
  explicit Init_MipFilterAidingMeasurementSummaryIndicator_residual_high_warning(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator & msg)
  : msg_(msg)
  {}
  Init_MipFilterAidingMeasurementSummaryIndicator_sample_time_warning residual_high_warning(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator::_residual_high_warning_type arg)
  {
    msg_.residual_high_warning = std::move(arg);
    return Init_MipFilterAidingMeasurementSummaryIndicator_sample_time_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator msg_;
};

class Init_MipFilterAidingMeasurementSummaryIndicator_used
{
public:
  explicit Init_MipFilterAidingMeasurementSummaryIndicator_used(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator & msg)
  : msg_(msg)
  {}
  Init_MipFilterAidingMeasurementSummaryIndicator_residual_high_warning used(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator::_used_type arg)
  {
    msg_.used = std::move(arg);
    return Init_MipFilterAidingMeasurementSummaryIndicator_residual_high_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator msg_;
};

class Init_MipFilterAidingMeasurementSummaryIndicator_enabled
{
public:
  Init_MipFilterAidingMeasurementSummaryIndicator_enabled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipFilterAidingMeasurementSummaryIndicator_used enabled(::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_MipFilterAidingMeasurementSummaryIndicator_used(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipFilterAidingMeasurementSummaryIndicator_enabled();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY_INDICATOR__BUILDER_HPP_
