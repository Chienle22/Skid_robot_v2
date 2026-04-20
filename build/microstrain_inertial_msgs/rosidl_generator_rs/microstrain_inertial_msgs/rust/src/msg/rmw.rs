#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__HumanReadableStatus() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__HumanReadableStatus__init(msg: *mut HumanReadableStatus) -> bool;
    fn microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HumanReadableStatus>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HumanReadableStatus>);
    fn microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HumanReadableStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<HumanReadableStatus>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__HumanReadableStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Convenience message to contain some useful device information
///
/// This is a combination of several different messages to allow for an easy view of the device status.
/// For more detailed information on the device status, see the messages mentioned in the field definitions below.
///
/// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
/// NOTE: This is meant as a useful tool for checking general status of the device by a human.
///       This interface may change without a major version upgrade.
///       It is STRONGLY encouraged to not use this to actually control real logic.
///       For that, we would recommend looking at the other messages mentioned in this one
///       as well as the uncertainty for measurements
/// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HumanReadableStatus {
    /// Header containing the time at which this message was populated
    ///   header.frame_id will contain the frame ID of the IMU
    pub header: std_msgs::msg::rmw::Header,

    /// Device information. This information will be read when the node first activates.
    /// To force an update of this information (shouldn't change during runtime), call the mip/base/get_device_information service
    pub device_info: super::super::msg::rmw::MipBaseDeviceInfo,

    /// GNSS state. See GNSS_STATE_* for possible values
    /// This value is computed from many different fields from microstrain_inertial_msgs/MipGnssFixInfo.msg and microstrain_inertial_msgs/MipFilterGnssPositionAidingStatus.msg
    pub gnss_state: rosidl_runtime_rs::String,

    /// Dual antenna fix type. See DUAL_ANTENNA_FIX_TYPE_* enums for possble values
    /// This is identical to fix_type in microstrain_inertial_msgs/MipFilterGnssDualAntennaStatus.msg
    pub dual_antenna_fix_type: rosidl_runtime_rs::String,

    /// Device-specific filter state. See filter_state_* enums for possible values
    /// This is identical to filter_state in microstrain_inertial_msgs/MipFilterStatus.msg represented as a string
    pub filter_state: rosidl_runtime_rs::String,

    /// String version of the status_flags field of the MipFilterStatus message. Only active statuses will be in this list
    /// This is a list of all of the status_flags_* that are true in microstrain_inertial_msgs/MipFilterStatus.msg filtered to only include relevant flags for this type of device
    /// See STATIS_FLAG_* for possible values that could be in this array
    pub status_flags: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// String version of the possible continuous bit fields possibly provided by the device.
    /// Generally, you want to see nothing populated in this message, but when you do see something, it can be used to diagnose problems with the device.
    /// This is a parsed out version of microstrain_inertial_msgs/MipSystemBuiltInTest.msg parsed to be accurate for each device
    pub continuous_bit_flags: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}

impl HumanReadableStatus {
    /// Possible value for any field if a devicedoes not support it
    pub const UNSUPPORTED: &'static str = "Unsupported";

    /// Possible values for gnss_state
    pub const GNSS_STATE_NO_FIX: &'static str = "No Fix";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GNSS_STATE_3D_FIX: &'static str = "3D Fix";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GNSS_STATE_SBAS: &'static str = "SBAS";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GNSS_STATE_RTK_FLOAT: &'static str = "RTK Float";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GNSS_STATE_RTK_FIXED: &'static str = "RTK Fixed";

    /// Possible values for dual_antenna_fix_type
    pub const DUAL_ANTENNA_FIX_TYPE_NONE: &'static str = "None";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DUAL_ANTENNA_FIX_TYPE_FLOAT: &'static str = "Dual Antenna Float";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DUAL_ANTENNA_FIX_TYPE_FIXED: &'static str = "Dual Antenna Fixed";

    /// Possible values for filter_state when the connected device is a philo device (GX5, CX5, CV5, etc)
    pub const FILTER_STATE_GX5_STARTUP: &'static str = "Startup";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_STATE_GX5_INIT: &'static str = "Init";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_STATE_GX5_RUN_SOLUTION_VALID: &'static str = "Solution Valid";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_STATE_GX5_RUN_SOLUTION_ERROR: &'static str = "Solution Error";

    /// Possible values for filter_state when the connected device is a prospect device (GQ7, CV7, etc)
    pub const FILTER_STATE_GQ7_INIT: &'static str = "Init";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_STATE_GQ7_VERT_GYRO: &'static str = "Vertical Gyro";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_STATE_GQ7_AHRS: &'static str = "AHRS";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_STATE_GQ7_FULL_NAV: &'static str = "Full Nav";

    /// Possible values to be stored in status_flags when the connected device is a philo device (GX5, CX5, CV5, etc)
    pub const STATUS_FLAGS_GX5_INIT_NO_ATTITUDE: &'static str = "Init No Attitude";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_INIT_NO_POSITION_VELOCITY: &'static str = "Init No Position / Velocity";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_IMU_UNAVAILABLE: &'static str = "IMU Unavailable";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_GPS_UNAVAILABLE: &'static str = "GPS Unavailable";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_MATRIX_SINGULARITY: &'static str = "Matrix Singularity";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_POSITION_COVARIANCE_WARNING: &'static str = "Position Covariance Warning";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_VELOCITY_COVARIANCE_WARNING: &'static str = "Velocity Covariance Warning";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_ATTITUDE_COVARIANCE_WARNING: &'static str = "Attitude Covariance Warning";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_NAN_IN_SOLUTION_WARNING: &'static str = "NaN in Solution";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_GYRO_BIAS_EST_HIGH_WARNING: &'static str = "Gyroscope Bias Estimate High";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_ACCEL_BIAS_EST_HIGH_WARNING: &'static str = "Accelerometer Bias Estimate High";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_GYRO_SCALE_FACTOR_EST_HIGH_WARNING: &'static str = "Gyroscope Scale Factor Estimate High";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_ACCEL_SCALE_FACTOR_EST_HIGH_WARNING: &'static str = "Accelerometer Scal Factor Estimate High";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_MAG_BIAS_EST_HIGH_WARNING: &'static str = "Magnetometer Bias Estimate High";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_ANT_OFFSET_CORRECTION_EST_HIGH_WARNING: &'static str = "Antenna Offset Correction Estimate High";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_MAG_HARD_IRON_EST_HIGH_WARNING: &'static str = "Magnetometer Hard Iron Estimate High";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GX5_RUN_MAG_SOFT_IRON_EST_HIGH_WARNING: &'static str = "Magnetometer Soft Iron Estimate High";

    /// Possible values to be stored in status_flags when the connected device is a prospect device (GQ7, CV7, etc)
    pub const STATUS_FLAGS_GQ7_FILTER_CONDITION_STABLE: &'static str = "Stable";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GQ7_FILTER_CONDITION_CONVERGING: &'static str = "Converging";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GQ7_FILTER_CONDITION_UNSTABLE: &'static str = "Unstable";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GQ7_ROLL_PITCH_WARNING: &'static str = "Roll / Pitch Warning";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GQ7_HEADING_WARNING: &'static str = "Heading Warning";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GQ7_POSITION_WARNING: &'static str = "Position Warning";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GQ7_VELOCITY_WARNING: &'static str = "Velocity Warning";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GQ7_IMU_BIAS_WARNING: &'static str = "IMU Bias Warning";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GQ7_GNSS_CLK_WARNING: &'static str = "GNSS Clock Warning";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GQ7_ANTENNA_LEVER_ARM_WARNING: &'static str = "Antenna Lever Arm Warning";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GQ7_MOUNTING_TRANSFORM_WARNING: &'static str = "Mounting Transform Warning";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GQ7_TIME_SYNC_WARNING: &'static str = "Time Sync Warning";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FLAGS_GQ7_SOLUTION_ERROR: &'static str = "Solution Error";

    /// Possible values to be stored in continuous_bit_flags when the connected device is a GQ7
    /// See https://files.microstrain.com/GQ7+User+Manual/user_manual_content/additional_features/Built-in%20Test.htm for more information
    pub const CONTINUOUS_BIT_FLAGS_GQ7_SYSTEM_CLOCK_FAILURE: &'static str = "System Clock Failure";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_POWER_FAULT: &'static str = "Power Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_FIRMWARE_FAULT: &'static str = "Firmware Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_TIMING_OVERLOAD: &'static str = "Timing Overload";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_BUFFER_OVERRUN: &'static str = "Buffer Overrun";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_IMU_IPC_FAULT: &'static str = "IMU IPC Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_FILTER_IPC_FAULT: &'static str = "Filter IPC Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_IPC_FAULT: &'static str = "GNSS IPC Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_IMU_CLOCK_FAULT: &'static str = "IMU Clock Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_IMU_COMMUNICATION_FAULT: &'static str = "IMU Communication Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_IMU_TIMING_OVERRUN: &'static str = "IMU Timing Overrun";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_ACCEL: &'static str = "IMU Calibration Error - Accel";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_GYRO: &'static str = "IMU Calibration Error - Gyro";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_MAG: &'static str = "IMU Calibration Error - Mag";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_GENERAL_FAULT: &'static str = "Accelerometer General Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_OVER_RANGE: &'static str = "Accelerometer Over-Range";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_SELF_TEST_FAIL: &'static str = "Accelerometer Self-test Fail";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_GENERAL_FAULT: &'static str = "Gyroscope General Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_OVER_RANGE: &'static str = "Gyroscope Over-Range";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_SELF_TEST_FAIL: &'static str = "Gyroscope Self-test Fail";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_GENERAL_FAULT: &'static str = "Magnetometer General Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_OVER_RANGE: &'static str = "Magnetometer Over-Range";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_SELF_TEST_FAIL: &'static str = "Magnetometer Self-test Fail";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_GENERAL_FAULT: &'static str = "Pressure Sensor General Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_OVER_RANGE: &'static str = "Pressure Sensor Over-Range";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_SELF_TEST_FAIL: &'static str = "Pressure Sensor Self-test Fail";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_FILTER_CLOCK_FAULT: &'static str = "Filter Clock Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_FILTER_HARDWARE_FAULT: &'static str = "Filter Hardware Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_OVERRUN: &'static str = "Filter Timing Overrun";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_UNDERRUN: &'static str = "Filter Timing Underrun";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_FILTER_COMMUNICATION_ERROR: &'static str = "Filter Communication Error";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_CLOCK_FAULT: &'static str = "GNSS Clock Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_HARDWARE_FAULT: &'static str = "GNSS Hardware Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_COMMUNICATION_ERROR: &'static str = "GNSS Communication Error";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GPS_TIME_FAULT: &'static str = "GPS Time Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_TIMING_OVERRUN: &'static str = "GNSS Timing Overrun";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_POWER_FAULT: &'static str = "GNSS Receiver 1 Power Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_FAULT: &'static str = "GNSS Receiver 1 Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_SHORTED: &'static str = "GNSS Antenna 1 Shorted";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_OPEN: &'static str = "GNSS Antenna 1 Open";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_SOLUTION_FAULT: &'static str = "GNSS Receiver 1 Solution Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_POWER_FAULT: &'static str = "GNSS Receiver 2 Power Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_FAULT: &'static str = "GNSS Receiver 2 Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_SHORTED: &'static str = "GNSS Antenna 2 Shorted";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_OPEN: &'static str = "GNSS Antenna 2 Open";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_SOLUTION_FAULT: &'static str = "GNSS Receiver 2 Solution Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_RTCM_COMMUNICATION_FAULT: &'static str = "RTCM Communication Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_GQ7_RTK_DONGLE_FAULT: &'static str = "RTK Dongle Fault";

    /// Possible values to be stored in continuous_bit_flags when the device is a CV7
    /// See https://files.microstrain.com/CV7+Online/user_manual_content/additional_features/Built-in%20Test.htm?Highlight=built%20in%20test for more information
    pub const CONTINUOUS_BIT_FLAGS_CV7_SYSTEM_CLOCK_FAILURE: &'static str = "System Clock Failure";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_POWER_FAULT: &'static str = "Power Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_FIRMWARE_FAULT: &'static str = "Firmware Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_TIMING_OVERLOAD: &'static str = "Timing Overload";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_BUFFER_OVERRUN: &'static str = "Buffer Overrun";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_IMU_PROCESS_FAULT: &'static str = "IMU Process Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_IMU_DATA_RATE_MISMATCH: &'static str = "IMU Data Rate Mismatch";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_IMU_OVERRUN_DROPPED_DATA: &'static str = "IMU Overrun/Dropped Data";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_IMU_STUCK: &'static str = "IMU Stuck";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_FILTER_PROCESS_FAULT: &'static str = "Filter Process Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_FILTER_DROPPED_DATA: &'static str = "Filter Dropped Data";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_FILTER_RATE_MISMATCH: &'static str = "Filter Rate Mismatch";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_FILTER_STUCK: &'static str = "Filter Stuck";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_IMU_CLOCK_FAULT: &'static str = "IMU Clock Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_IMU_COMMUNICATION_FAULT: &'static str = "IMU Communication Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_IMU_TIMING_OVERRUN: &'static str = "IMU Timing Overrun";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_ACCELEROMETER: &'static str = "IMU Calibration Error - Accelerometer";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_GYROSCOPE: &'static str = "IMU Calibration Error - Gyroscope";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_MAGNETOMETER: &'static str = "IMU Calibration Error - Magnetometer";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_GENERAL_FAULT: &'static str = "Accelerometer General Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_OVER_RANGE: &'static str = "Accelerometer Over-range";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_SELF_TEST_FAIL: &'static str = "Accelerometer Self-test Fail";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_GENERAL_FAULT: &'static str = "Gyroscope General Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_OVER_RANGE: &'static str = "Gyroscope Over-range";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_SELF_TEST_FAIL: &'static str = "Gyroscope Self-test Fail";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_GENERAL_FAULT: &'static str = "Magnetometer General Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_OVER_RANGE: &'static str = "Magnetometer Over-range";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_SELF_TEST_FAIL: &'static str = "Magnetometer Self-test Fail";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_GENERAL_FAULT: &'static str = "Pressure Sensor General Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_OVER_RANGE: &'static str = "Pressure Sensor Over-range";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_SELF_TEST_FAIL: &'static str = "Pressure Sensor Self-test Fail";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_FACTORY_BITS_INVALID: &'static str = "Factory Bits Invalid";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_FILTER_FAULT: &'static str = "Filter Fault";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_OVERRUN: &'static str = "Filter Timing Overrun";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_UNDERRUN: &'static str = "Filter Timing Underrun";

}


impl Default for HumanReadableStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__HumanReadableStatus__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__HumanReadableStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HumanReadableStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HumanReadableStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HumanReadableStatus where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/HumanReadableStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__HumanReadableStatus() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipBaseDeviceInfo() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipBaseDeviceInfo__init(msg: *mut MipBaseDeviceInfo) -> bool;
    fn microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipBaseDeviceInfo>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipBaseDeviceInfo>);
    fn microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipBaseDeviceInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<MipBaseDeviceInfo>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipBaseDeviceInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Commands/base_command/data/base_device_info.htm
///   Note: This message will never be published on it's own, only included in other messages.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipBaseDeviceInfo {
    /// String version of the firmware version on the device
    pub firmware_version: rosidl_runtime_rs::String,

    /// Model name (3DM-GQ7, 3DM-GX5, etc.)
    pub model_name: rosidl_runtime_rs::String,

    /// Model number (6284, 6285, etc.)
    pub model_number: rosidl_runtime_rs::String,

    /// Serial number (6284.109766, 6285.13404, etc.)
    pub serial_number: rosidl_runtime_rs::String,

    /// Lot number
    pub lot_number: rosidl_runtime_rs::String,

    /// Device options
    pub device_options: rosidl_runtime_rs::String,

}



impl Default for MipBaseDeviceInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipBaseDeviceInfo__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipBaseDeviceInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipBaseDeviceInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipBaseDeviceInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipBaseDeviceInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipBaseDeviceInfo where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipBaseDeviceInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipBaseDeviceInfo() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__init(msg: *mut MipFilterAidingMeasurementSummary) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipFilterAidingMeasurementSummary>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipFilterAidingMeasurementSummary>);
    fn microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipFilterAidingMeasurementSummary>, out_seq: *mut rosidl_runtime_rs::Sequence<MipFilterAidingMeasurementSummary>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_aiding_measurement_summary.htm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterAidingMeasurementSummary {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::super::msg::rmw::MipHeader,

    /// GPS time of week (seconds)
    pub time_of_week: f64,

    /// Source used when type is set to TYPE_GNSS to specify which GNSS module this message is for
    pub source: u8,

    /// Type of the aiding measurement. See TYPE_* enums for possible values
    pub type_: u8,

    /// Parsed version of indicator bitfield
    pub indicator: super::super::msg::rmw::MipFilterAidingMeasurementSummaryIndicator,

}

impl MipFilterAidingMeasurementSummary {
    /// Possible values for type
    pub const TYPE_GNSS: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_DUAL_ANTENNA: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_HEADING: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_PRESSURE: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_MAGNETOMETER: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_SPEED: u8 = 6;

}


impl Default for MipFilterAidingMeasurementSummary {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipFilterAidingMeasurementSummary {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipFilterAidingMeasurementSummary {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipFilterAidingMeasurementSummary where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipFilterAidingMeasurementSummary";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__init(msg: *mut MipFilterAidingMeasurementSummaryIndicator) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipFilterAidingMeasurementSummaryIndicator>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipFilterAidingMeasurementSummaryIndicator>);
    fn microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipFilterAidingMeasurementSummaryIndicator>, out_seq: *mut rosidl_runtime_rs::Sequence<MipFilterAidingMeasurementSummaryIndicator>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the indicator field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_aiding_measurement_summary.htm?Highlight=filter%20aiding%20measurement
///   Note: This message will never be published on it's own, only included in other messages

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterAidingMeasurementSummaryIndicator {

    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub used: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub residual_high_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sample_time_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub configuration_error: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_num_meas_exceeded: bool,

}



impl Default for MipFilterAidingMeasurementSummaryIndicator {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipFilterAidingMeasurementSummaryIndicator {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipFilterAidingMeasurementSummaryIndicator {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipFilterAidingMeasurementSummaryIndicator where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipFilterAidingMeasurementSummaryIndicator";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__init(msg: *mut MipFilterGnssDualAntennaStatus) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipFilterGnssDualAntennaStatus>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipFilterGnssDualAntennaStatus>);
    fn microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipFilterGnssDualAntennaStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MipFilterGnssDualAntennaStatus>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_gnss_dual_antenna_status.htm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterGnssDualAntennaStatus {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::super::msg::rmw::MipHeader,

    /// Last dual-antenna GNSS aiding measurement time of week (seconds)
    pub time_of_week: f32,

    /// Heading in radians
    pub heading: f32,

    /// Heading uncertainty in radians
    pub heading_unc: f32,

    /// Fix type indicator. See FIX_TYPE_* enums for possible values
    pub fix_type: u8,

    /// Parsed out version of the Status Flags bitfield
    pub status_flags: super::super::msg::rmw::MipFilterGnssDualAntennaStatusStatusFlags,

    /// Valid flags (0 = invalid, 1 = valid)
    pub valid_flags: u16,

}

impl MipFilterGnssDualAntennaStatus {
    /// Possible values for fix_type
    pub const FIX_TYPE_FIX_NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_FIX_DA_FLOAT: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_FIX_DA_FIXED: u8 = 2;

}


impl Default for MipFilterGnssDualAntennaStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipFilterGnssDualAntennaStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipFilterGnssDualAntennaStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipFilterGnssDualAntennaStatus where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipFilterGnssDualAntennaStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__init(msg: *mut MipFilterGnssDualAntennaStatusStatusFlags) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipFilterGnssDualAntennaStatusStatusFlags>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipFilterGnssDualAntennaStatusStatusFlags>);
    fn microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipFilterGnssDualAntennaStatusStatusFlags>, out_seq: *mut rosidl_runtime_rs::Sequence<MipFilterGnssDualAntennaStatusStatusFlags>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for Status Flags field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_gnss_dual_antenna_status.htm?Highlight=dual%20antenna
///   Note: This message will never be published on it's own, only included in other messages.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterGnssDualAntennaStatusStatusFlags {

    // This member is not documented.
    #[allow(missing_docs)]
    pub rcv_1_data_valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rcv_2_data_valid: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub antenna_offsets_valid: bool,

}



impl Default for MipFilterGnssDualAntennaStatusStatusFlags {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipFilterGnssDualAntennaStatusStatusFlags {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipFilterGnssDualAntennaStatusStatusFlags {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipFilterGnssDualAntennaStatusStatusFlags where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipFilterGnssDualAntennaStatusStatusFlags";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__init(msg: *mut MipFilterGnssPositionAidingStatus) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipFilterGnssPositionAidingStatus>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipFilterGnssPositionAidingStatus>);
    fn microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipFilterGnssPositionAidingStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MipFilterGnssPositionAidingStatus>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_gnss_pos_aid_status.htm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterGnssPositionAidingStatus {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::super::msg::rmw::MipHeader,

    /// Receiver ID. For GQ7, this will be 1 for GNSS1 and 2 for GNSS2
    pub receiver_id: u8,

    /// Last GNSS aiding measurement time of week (seconds)
    pub time_of_week: f64,

    /// Parsed out version of the status bit field
    pub status: super::super::msg::rmw::MipFilterGnssPositionAidingStatusStatus,

}



impl Default for MipFilterGnssPositionAidingStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipFilterGnssPositionAidingStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipFilterGnssPositionAidingStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipFilterGnssPositionAidingStatus where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipFilterGnssPositionAidingStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__init(msg: *mut MipFilterGnssPositionAidingStatusStatus) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipFilterGnssPositionAidingStatusStatus>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipFilterGnssPositionAidingStatusStatus>);
    fn microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipFilterGnssPositionAidingStatusStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MipFilterGnssPositionAidingStatusStatus>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the Status field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_gnss_pos_aid_status.htm?Highlight=gnss%20position%20aiding
///   Note: This message will never be published on it's own, only included in other messages.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterGnssPositionAidingStatusStatus {
    /// If 1, the Kalman filter is processing raw range information from this GNSS module
    pub tight_coupling: bool,

    /// If 1, the Kalman filter is processing RTK corrections from this GNSS module
    pub differential: bool,

    /// If 1, the Kalman filter has an RTK integer fix from this GNSS module, indicating the best position performance possible
    pub integer_fix: bool,

    /// If 1, the Kalman filter is using GPS L1 measurements
    pub gps_l1: bool,

    /// If 1, the Kalman filter is using GPS L2 measurements
    pub gps_l2: bool,

    /// If 1, the Kalman filter is using GPS L5 measurements
    pub gps_l5: bool,

    /// If 1, the Kalman filter is using GLONASS L1 measurements
    pub glo_l1: bool,

    /// If 1, the Kalman filter is using GLONASS L2 measurements
    pub glo_l2: bool,

    /// If 1, the Kalman filter is using Galileo E1 measurements
    pub gal_e1: bool,

    /// If 1, the Kalman filter is using Galileo E5 measurements
    pub gal_e5: bool,

    /// If 1, the Kalman filter is using Galileo E6 measurements
    pub gal_e6: bool,

    /// If 1, the Kalman filter is using Beidou B1 measurements (not enabled on GQ7 currently)
    pub bei_b1: bool,

    /// If 1, the Kalman filter is using Beidou B2 measurements (not enabled on GQ7 currently)
    pub bei_b2: bool,

    /// If 1, the Kalman filter is using Beidou B3 measurements (not enabled on GQ7 currently)
    pub bei_b3: bool,

    /// If 1, this GNSS module is reporting no position fix
    pub no_fix: bool,

    /// If 1, there is likely an issue with the antenna offset for this GNSS module
    pub config_error: bool,

}



impl Default for MipFilterGnssPositionAidingStatusStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipFilterGnssPositionAidingStatusStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipFilterGnssPositionAidingStatusStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipFilterGnssPositionAidingStatusStatus where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipFilterGnssPositionAidingStatusStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__init(msg: *mut MipFilterMultiAntennaOffsetCorrection) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipFilterMultiAntennaOffsetCorrection>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipFilterMultiAntennaOffsetCorrection>);
    fn microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipFilterMultiAntennaOffsetCorrection>, out_seq: *mut rosidl_runtime_rs::Sequence<MipFilterMultiAntennaOffsetCorrection>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_multi_antenna_offset_correction.htm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterMultiAntennaOffsetCorrection {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::super::msg::rmw::MipHeader,

    /// Receiver ID. For GQ7, this will be 1 for GNSS1 and 2 for GNSS2
    pub receiver_id: u8,

    /// Offset (x, y, z) in meters
    pub offset: [f32; 3],

}



impl Default for MipFilterMultiAntennaOffsetCorrection {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipFilterMultiAntennaOffsetCorrection {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipFilterMultiAntennaOffsetCorrection {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipFilterMultiAntennaOffsetCorrection where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipFilterMultiAntennaOffsetCorrection";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterStatus() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipFilterStatus__init(msg: *mut MipFilterStatus) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipFilterStatus>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipFilterStatus>);
    fn microstrain_inertial_msgs__msg__MipFilterStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipFilterStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MipFilterStatus>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipFilterStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_status.htm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterStatus {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::super::msg::rmw::MipHeader,

    /// Device-specific filter state. Please consult the user manual for definition. See FILTER_STATE_* enums for possible values
    pub filter_state: u16,

    /// Device-specific dynamics mode. Please consult the user manual for definition. See DYNAMICS_MODE_* enums for possible values
    /// Note that for prospect devices (GQ7, CV7, etc), this field has a default value, and should be mostly ignored
    pub dynamics_mode: u16,

    /// Parsed out version of the Status Flags bitfield when the connected device is a philo device (GX5, CX5, CV5, etc)
    pub gx5_status_flags: super::super::msg::rmw::MipFilterStatusGx5StatusFlags,

    /// Parsed out version of the Status Flags bitfield when the connected device is a prospect device (GQ7, CV7, etc)
    pub gq7_status_flags: super::super::msg::rmw::MipFilterStatusGq7StatusFlags,

}

impl MipFilterStatus {
    /// Possible values for filter_state when the connected device is a philo device (GX5, CX5, CV5, etc)
    pub const FILTER_STATE_GX5_STARTUP: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_STATE_GX5_INIT: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_STATE_GX5_RUN_SOLUTION_VALID: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_STATE_GX5_RUN_SOLUTION_ERROR: u16 = 3;

    /// Possible values for filter_state when the connected device is a prospect device (GQ7, CV7, etc)
    pub const FILTER_STATE_GQ7_INIT: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_STATE_GQ7_VERT_GYRO: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_STATE_GQ7_AHRS: u16 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_STATE_GQ7_FULL_NAV: u16 = 4;

    /// Possible values for dynamics_mode when the connected device is a philo device (GX5, CX5, CV5, etc)
    pub const DYNAMICS_MODE_GX5_PORTABLE: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DYNAMICS_MODE_GX5_AUTOMOTIVE: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DYNAMICS_MODE_GX5_AIRBORNE: u16 = 3;

    /// Possible values for dynamics_mode when the connected device is a prospect device (GQ7, CV7, etc)
    /// Note that on older firmware the GQ7 will often report 0 for it's dynamics mode, it is strongly advised to ignore this field
    pub const DYNAMICS_MODE_GQ7_DEFAULT: u16 = 1;

}


impl Default for MipFilterStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipFilterStatus__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipFilterStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipFilterStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipFilterStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipFilterStatus where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipFilterStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterStatus() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__init(msg: *mut MipFilterStatusGq7StatusFlags) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipFilterStatusGq7StatusFlags>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipFilterStatusGq7StatusFlags>);
    fn microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipFilterStatusGq7StatusFlags>, out_seq: *mut rosidl_runtime_rs::Sequence<MipFilterStatusGq7StatusFlags>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the Status Flags (GQ7, CV7, etc.) field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_status.htm?Highlight=filter%20status
///   Note: This message will never be published on it's own, only included in other messages.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterStatusGq7StatusFlags {
    /// See FILTER_CONDITION_* enums for possible values
    pub filter_condition: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll_pitch_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub heading_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub imu_bias_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gnss_clk_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub antenna_lever_arm_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mounting_transform_warning: bool,

    /// No time synchronization pulse detected
    pub time_sync_warning: bool,

    /// This includes all bits between 12 and 15, if any of them are set there is a GQ7 solution error
    pub solution_error: bool,

}

impl MipFilterStatusGq7StatusFlags {
    /// Possible values for filter_condition when the connected device is a prospect device (GQ7, CV7, etc)
    pub const FILTER_CONDITION_STABLE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_CONDITION_CONVERGING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FILTER_CONDITION_UNSTABLE: u8 = 3;

}


impl Default for MipFilterStatusGq7StatusFlags {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipFilterStatusGq7StatusFlags {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipFilterStatusGq7StatusFlags {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipFilterStatusGq7StatusFlags where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipFilterStatusGq7StatusFlags";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__init(msg: *mut MipFilterStatusGx5StatusFlags) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipFilterStatusGx5StatusFlags>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipFilterStatusGx5StatusFlags>);
    fn microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipFilterStatusGx5StatusFlags>, out_seq: *mut rosidl_runtime_rs::Sequence<MipFilterStatusGx5StatusFlags>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the Status Flags (GX5, CV5, CX5, etc.) field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_status.htm?Highlight=filter%20status
///   Note: This message will never be published on it's own, only included in other messages.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterStatusGx5StatusFlags {

    // This member is not documented.
    #[allow(missing_docs)]
    pub init_no_attitude: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub init_no_position_velocity: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_imu_unavailable: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_gps_unavailable: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_matrix_singularity: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_position_covariance_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_velocity_covariance_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_attitude_covariance_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_nan_in_solution_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_gyro_bias_est_high_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_accel_bias_est_high_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_gyro_scale_factor_est_high_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_accel_scale_factor_est_high_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_mag_bias_est_high_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_ant_offset_correction_est_high_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_mag_hard_iron_est_high_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub run_mag_soft_iron_est_high_warning: bool,

}



impl Default for MipFilterStatusGx5StatusFlags {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipFilterStatusGx5StatusFlags {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipFilterStatusGx5StatusFlags {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipFilterStatusGx5StatusFlags where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipFilterStatusGx5StatusFlags";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__init(msg: *mut MipGnssCorrectionsRtkCorrectionsStatus) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipGnssCorrectionsRtkCorrectionsStatus>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipGnssCorrectionsRtkCorrectionsStatus>);
    fn microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipGnssCorrectionsRtkCorrectionsStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MipGnssCorrectionsRtkCorrectionsStatus>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_corrections/data/mip_field_gnss_rtk_corrections_status.htm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGnssCorrectionsRtkCorrectionsStatus {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::super::msg::rmw::MipHeader,

    /// GPS time of week (seconds)
    pub time_of_week: f64,

    /// GPS weeks since 1980 (weeks)
    pub week_number: u16,

    /// Parsed out version of the Epoch Status bitfield
    pub epoch_status: super::super::msg::rmw::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus,

    /// Parsed out version of the Dongle Status bitfield
    pub dongle_status: super::super::msg::rmw::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus,

    /// Latency of last GPS correction (seconds)
    pub gps_correction_latency: f32,

    /// Latency of last GLONASS correction (seconds)
    pub glonass_correction_latency: f32,

    /// Latency of last Galileo correction (seconds)
    pub galileo_correction_latency: f32,

    /// Latency of last Beidou correction (seconds)
    pub beidou_correction_latency: f32,

}



impl Default for MipGnssCorrectionsRtkCorrectionsStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipGnssCorrectionsRtkCorrectionsStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipGnssCorrectionsRtkCorrectionsStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipGnssCorrectionsRtkCorrectionsStatus where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipGnssCorrectionsRtkCorrectionsStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__init(msg: *mut MipGnssCorrectionsRtkCorrectionsStatusDongleStatus) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipGnssCorrectionsRtkCorrectionsStatusDongleStatus>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipGnssCorrectionsRtkCorrectionsStatusDongleStatus>);
    fn microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipGnssCorrectionsRtkCorrectionsStatusDongleStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MipGnssCorrectionsRtkCorrectionsStatusDongleStatus>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the Dongle Status field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_corrections/data/mip_field_gnss_rtk_corrections_status.htm?Highlight=rtk%20status
///   Note: This message will never be published on it's own, only included in other messages.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGnssCorrectionsRtkCorrectionsStatusDongleStatus {
    /// Modem State bits from the Dongle Status field. See MODEM_STATE_* enums for possible values
    pub modem_state: u8,

    /// Connection Type bits from the Dongle Status field. See CONNECTION_TYPE_* enums for possible values
    pub connection_type: u8,

    /// RSSI bits from the Dongle Status field. Units are in dBm
    pub rssi: i8,

    /// Signal Quality bits from the Dongle Status field.
    /// 0-10 indication of signal quality, 0 means unavailable/invalid/not connected, 1 is poor, 10 is excellent.
    pub signal_quality: u8,

    /// Tower Change Indicator bits from the Dongle Status field.
    /// 4-bit value that increments each time a cell tower change occurs. Rolls over from 15 to 0.
    pub tower_change_indicator: u8,

    /// NMEA Timeout Flag bit from the Dongle Status field.
    /// The device has not received a valid NMEA message from the GQ7 in the past 3 seconds
    pub nmea_timeout_flag: bool,

    /// Server Timeout Flag bit from the Dongle Status field.
    /// The device has not received any communications with the server in the past 3 seconds.
    pub server_timeout_flag: bool,

    /// RTCM Timeout Flag bit from the Dongle Status field.
    /// The device has not received a valid RTCM message from the server in the past 3 seconds.
    pub rtcm_timeout_flag: bool,

    /// Device Out of Range Flag bit from the Dongle Status field
    /// The device's reported position is beyond the server-side configured distance to a base station and will not receive corrections
    pub device_out_of_range_flag: bool,

    /// Corrections Unavailable Flag bit from the Dongle Status field
    /// The server is reporting that corrections are not available given the user's account settings
    pub corrections_unavailable_flag: bool,

}

impl MipGnssCorrectionsRtkCorrectionsStatusDongleStatus {
    /// Possible values for dongle_modem_state
    pub const MODEM_STATE_OFF: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODEM_STATE_NO_NETWORK: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODEM_STATE_NETWORK_CONNECTED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODEM_STATE_CONFIGURING_DATA_CONTEXT: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODEM_STATE_ACTIVATING_DATA_CONTEXT: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODEM_STATE_CONFIGURING_SOCKET: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODEM_STATE_WAITING_ON_SERVER_HANDSHAKE: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODEM_STATE_CONNECTED_AND_IDLE: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODEM_STATE_CONNECTED_AND_STREAMING: u8 = 8;

    /// Possible values for dongle_connection_type
    pub const CONNECTION_TYPE_NO_CONNECTION: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONNECTION_TYPE_CONNECTION_2G: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONNECTION_TYPE_CONNECTION_3G: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONNECTION_TYPE_CONNECTION_4G: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONNECTION_TYPE_CONNECTION_5G: u8 = 5;

}


impl Default for MipGnssCorrectionsRtkCorrectionsStatusDongleStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipGnssCorrectionsRtkCorrectionsStatusDongleStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipGnssCorrectionsRtkCorrectionsStatusDongleStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipGnssCorrectionsRtkCorrectionsStatusDongleStatus where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipGnssCorrectionsRtkCorrectionsStatusDongleStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__init(msg: *mut MipGnssCorrectionsRtkCorrectionsStatusEpochStatus) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipGnssCorrectionsRtkCorrectionsStatusEpochStatus>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipGnssCorrectionsRtkCorrectionsStatusEpochStatus>);
    fn microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipGnssCorrectionsRtkCorrectionsStatusEpochStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MipGnssCorrectionsRtkCorrectionsStatusEpochStatus>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the Epoch Status field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_corrections/data/mip_field_gnss_rtk_corrections_status.htm?Highlight=rtk%20status
///   Note: This message will never be published on it's own, only included in other messages.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGnssCorrectionsRtkCorrectionsStatusEpochStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub antenna_location_received: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub antenna_description_received: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gps_received: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub galileo_received: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub glonass_received: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub beidou_received: bool,

    /// Using MSM messages for GPS corrections instead of RTCM messages 1001-1004
    pub using_gps_msm_messages: bool,

    /// Using MSM messages for GLONASS corrections instead of RTCM messages 1009-1012
    pub using_glonass_msm_messages: bool,

    /// A read of the dongle status was attempted, but failed
    pub dongle_status_read_failed: bool,

}



impl Default for MipGnssCorrectionsRtkCorrectionsStatusEpochStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipGnssCorrectionsRtkCorrectionsStatusEpochStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipGnssCorrectionsRtkCorrectionsStatusEpochStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipGnssCorrectionsRtkCorrectionsStatusEpochStatus where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipGnssCorrectionsRtkCorrectionsStatusEpochStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssFixInfo() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipGnssFixInfo__init(msg: *mut MipGnssFixInfo) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssFixInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipGnssFixInfo>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssFixInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipGnssFixInfo>);
    fn microstrain_inertial_msgs__msg__MipGnssFixInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipGnssFixInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<MipGnssFixInfo>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipGnssFixInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_fix_info.htm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGnssFixInfo {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::super::msg::rmw::MipHeader,

    /// Fix type. See FIX_TYPE_* enums for possible values
    pub fix_type: u8,

    /// Number of satellites in view for this receiver
    pub num_sv: u8,

    /// Parsed out version of the fix_flags bitfield
    pub fix_flags: super::super::msg::rmw::MipGnssFixInfoFixFlags,

}

impl MipGnssFixInfo {
    /// Valid values for the fix_type field
    pub const FIX_TYPE_FIX_3D: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_FIX_2D: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_FIX_TIME_ONLY: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_FIX_NONE: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_FIX_INVALID: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_FIX_RTK_FLOAT: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FIX_TYPE_FIX_RTK_FIXED: u8 = 6;

}


impl Default for MipGnssFixInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipGnssFixInfo__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipGnssFixInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipGnssFixInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssFixInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssFixInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssFixInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipGnssFixInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipGnssFixInfo where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipGnssFixInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssFixInfo() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags__init(msg: *mut MipGnssFixInfoFixFlags) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipGnssFixInfoFixFlags>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipGnssFixInfoFixFlags>);
    fn microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipGnssFixInfoFixFlags>, out_seq: *mut rosidl_runtime_rs::Sequence<MipGnssFixInfoFixFlags>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the Fix Type field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_fix_info.htm?Highlight=fix%20info
///   Note: This message will never be published on it's own, only included in other messages.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGnssFixInfoFixFlags {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sbas_used: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dgnss_used: bool,

}



impl Default for MipGnssFixInfoFixFlags {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipGnssFixInfoFixFlags {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipGnssFixInfoFixFlags {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipGnssFixInfoFixFlags where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipGnssFixInfoFixFlags";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssRfErrorDetection() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__init(msg: *mut MipGnssRfErrorDetection) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipGnssRfErrorDetection>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipGnssRfErrorDetection>);
    fn microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipGnssRfErrorDetection>, out_seq: *mut rosidl_runtime_rs::Sequence<MipGnssRfErrorDetection>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipGnssRfErrorDetection
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_rf_error_detection.htm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGnssRfErrorDetection {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::super::msg::rmw::MipHeader,

    /// RF Band of the reported information. See RF_BAND_* enums for possible values
    pub rf_band: u8,

    /// GNSS Jamming State (as reported by the GNSS module). See JAMMING_STATE_* enums for possible values
    pub jamming_state: u8,

    /// GNSS Spoofing State (as reported by the GNSS module). See SPOOFING_STATE_* enums for possible values
    pub spoofing_state: u8,

}

impl MipGnssRfErrorDetection {
    /// Enum values for rf_band field
    pub const RF_BAND_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RF_BAND_L1: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RF_BAND_L2: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RF_BAND_L5: u8 = 5;

    /// Enum values for jamming_state field
    pub const JAMMING_STATE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const JAMMING_STATE_NONE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const JAMMING_STATE_PARTIAL: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const JAMMING_STATE_SIGNIFICANT: u8 = 3;

    /// Enum values for spoofing_state field
    pub const SPOOFING_STATE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPOOFING_STATE_NONE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPOOFING_STATE_PARTIAL: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SPOOFING_STATE_SIGNIFICANT: u8 = 3;

}


impl Default for MipGnssRfErrorDetection {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipGnssRfErrorDetection {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssRfErrorDetection__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipGnssRfErrorDetection {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipGnssRfErrorDetection where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipGnssRfErrorDetection";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssRfErrorDetection() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssSbasInfo() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipGnssSbasInfo__init(msg: *mut MipGnssSbasInfo) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipGnssSbasInfo>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipGnssSbasInfo>);
    fn microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipGnssSbasInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<MipGnssSbasInfo>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipGnssSbasInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_sbas_info.htm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGnssSbasInfo {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::super::msg::rmw::MipHeader,

    /// GPS time of week (seconds)
    pub time_of_week: f64,

    /// GPS weeks since 1980 (weeks)
    pub week_number: u16,

    /// SBAS system if. See SBAS_SYSTEM_* enums for possible values
    pub sbas_system: u8,

    /// SBAS satellite id
    pub sbas_id: u8,

    /// Number of SBAS corrections
    pub count: u8,

    /// Parsed out version of the SBAS status bitfield
    pub sbas_status: super::super::msg::rmw::MipGnssSbasInfoSbasStatus,

}

impl MipGnssSbasInfo {
    /// Possible values for the sbas_system field
    pub const SBAS_SYSTEM_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SBAS_SYSTEM_WAAS: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SBAS_SYSTEM_EGNOS: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SBAS_SYSTEM_MSAS: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SBAS_SYSTEM_GAGAN: u8 = 4;

}


impl Default for MipGnssSbasInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipGnssSbasInfo__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipGnssSbasInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipGnssSbasInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssSbasInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipGnssSbasInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipGnssSbasInfo where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipGnssSbasInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssSbasInfo() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__init(msg: *mut MipGnssSbasInfoSbasStatus) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipGnssSbasInfoSbasStatus>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipGnssSbasInfoSbasStatus>);
    fn microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipGnssSbasInfoSbasStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MipGnssSbasInfoSbasStatus>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the Sbas Status field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_sbas_info.htm?Highlight=sbas%20info
///   Note: This message will never be published on it's own, only included in other messages.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGnssSbasInfoSbasStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub range_available: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub corrections_available: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub integrity_available: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub test_mode: bool,

}



impl Default for MipGnssSbasInfoSbasStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipGnssSbasInfoSbasStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipGnssSbasInfoSbasStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipGnssSbasInfoSbasStatus where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipGnssSbasInfoSbasStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGpsTimestamp() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipGpsTimestamp__init(msg: *mut MipGpsTimestamp) -> bool;
    fn microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipGpsTimestamp>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipGpsTimestamp>);
    fn microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipGpsTimestamp>, out_seq: *mut rosidl_runtime_rs::Sequence<MipGpsTimestamp>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipGpsTimestamp
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Definition of a GPS timestamp.
/// For more information see: https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/shared_data/data/mip_field_shared_gps_timestamp.htm
///   Note: This message will never be published on it's own, only included in other messages

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGpsTimestamp {
    /// GPS time of week (seconds)
    pub tow: f64,

    /// GPS Week number since 1980 (weeks)
    pub week_number: u16,

    /// Valid Flags bitfield
    pub valid_flags: super::super::msg::rmw::MipGpsTimestampValidFlags,

}



impl Default for MipGpsTimestamp {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipGpsTimestamp__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipGpsTimestamp__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipGpsTimestamp {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGpsTimestamp__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipGpsTimestamp {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipGpsTimestamp where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipGpsTimestamp";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGpsTimestamp() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__init(msg: *mut MipGpsTimestampValidFlags) -> bool;
    fn microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipGpsTimestampValidFlags>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipGpsTimestampValidFlags>);
    fn microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipGpsTimestampValidFlags>, out_seq: *mut rosidl_runtime_rs::Sequence<MipGpsTimestampValidFlags>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the valid_flags field of https://files.microstrain.com/CV7+Online/external_content/dcp/Data/0xff/data/0xd3.htm
///   Note: This message will never be published on it's own, only included in other messages.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGpsTimestampValidFlags {
    /// Whole number seconds TOW has been set
    pub tow: bool,

    /// Week number has been set
    pub week_number: bool,

    /// Both TOW and Week Number have been set
    pub time_valid: bool,

}



impl Default for MipGpsTimestampValidFlags {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipGpsTimestampValidFlags {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipGpsTimestampValidFlags {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipGpsTimestampValidFlags where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipGpsTimestampValidFlags";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipHeader() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipHeader__init(msg: *mut MipHeader) -> bool;
    fn microstrain_inertial_msgs__msg__MipHeader__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipHeader>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipHeader__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipHeader>);
    fn microstrain_inertial_msgs__msg__MipHeader__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipHeader>, out_seq: *mut rosidl_runtime_rs::Sequence<MipHeader>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipHeader
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Represents a standard header that all MIP fields should include at the beginning of their message definition
///   Note: This message will never be published on it's own, only included in other messages

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipHeader {
    /// Standard ROS header.
    ///   header.stamp will always be populated with the ROS time that this message was populated
    ///   header.frame_id is dependent on the full message definition. Most messages will not use this
    pub header: std_msgs::msg::rmw::Header,

    /// If the message was triggered by an event, this will be set, otherwise it will be set to 0 (will be 0 most of the time)
    /// For more information, see: https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/shared_data/data/mip_field_shared_event_source.htm
    pub event_source: u8,

    /// Reference timestamp of when the data was sampled if the device supports it. For devices that do not support this, it will always be 0
    /// For more information, see: https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/shared_data/data/mip_field_shared_reference_timestamp.htm
    pub reference_timestamp: u64,

    /// GPS timestamp of when the data was sampled if the device supports it
    /// For more information, see: https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/shared_data/data/mip_field_shared_gps_timestamp.htm
    /// Note that this timestamp may be blank in certain messages, but there will often be equivalent fields in the messages
    pub gps_timestamp: super::super::msg::rmw::MipGpsTimestamp,

}



impl Default for MipHeader {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipHeader__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipHeader__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipHeader {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipHeader__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipHeader__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipHeader__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipHeader {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipHeader where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipHeader";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipHeader() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipSensorOverrangeStatus() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipSensorOverrangeStatus__init(msg: *mut MipSensorOverrangeStatus) -> bool;
    fn microstrain_inertial_msgs__msg__MipSensorOverrangeStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipSensorOverrangeStatus>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipSensorOverrangeStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipSensorOverrangeStatus>);
    fn microstrain_inertial_msgs__msg__MipSensorOverrangeStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipSensorOverrangeStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MipSensorOverrangeStatus>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipSensorOverrangeStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/sensor_data/data/mip_field_sensor_overrange_status.htm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipSensorOverrangeStatus {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::super::msg::rmw::MipHeader,

    /// Parsed out representation of the status bitfield
    pub status: super::super::msg::rmw::MipSensorOverrangeStatusStatus,

}



impl Default for MipSensorOverrangeStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipSensorOverrangeStatus__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipSensorOverrangeStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipSensorOverrangeStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSensorOverrangeStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSensorOverrangeStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSensorOverrangeStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipSensorOverrangeStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipSensorOverrangeStatus where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipSensorOverrangeStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipSensorOverrangeStatus() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__init(msg: *mut MipSensorOverrangeStatusStatus) -> bool;
    fn microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipSensorOverrangeStatusStatus>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipSensorOverrangeStatusStatus>);
    fn microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipSensorOverrangeStatusStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MipSensorOverrangeStatusStatus>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the Status field of https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/sensor_data/data/mip_field_sensor_overrange_status.htm?Highlight=overrange
///   Note: This message will never be published on it's own, only included in other messages.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipSensorOverrangeStatusStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_x: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_y: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel_z: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_x: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_y: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_z: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_x: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_y: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mag_z: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub press: bool,

}



impl Default for MipSensorOverrangeStatusStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipSensorOverrangeStatusStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipSensorOverrangeStatusStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipSensorOverrangeStatusStatus where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipSensorOverrangeStatusStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__init(msg: *mut MipSensorTemperatureStatistics) -> bool;
    fn microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipSensorTemperatureStatistics>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipSensorTemperatureStatistics>);
    fn microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipSensorTemperatureStatistics>, out_seq: *mut rosidl_runtime_rs::Sequence<MipSensorTemperatureStatistics>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the MIP field https://files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/0x80/data/0x14.htm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipSensorTemperatureStatistics {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::super::msg::rmw::MipHeader,

    /// Degrees Celsius
    pub min_temp: f32,

    /// Degrees Celsius
    pub max_temp: f32,

    /// Degrees Celsius
    pub mean_temp: f32,

}



impl Default for MipSensorTemperatureStatistics {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipSensorTemperatureStatistics {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipSensorTemperatureStatistics {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipSensorTemperatureStatistics where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipSensorTemperatureStatistics";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipSystemBuiltInTest() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipSystemBuiltInTest__init(msg: *mut MipSystemBuiltInTest) -> bool;
    fn microstrain_inertial_msgs__msg__MipSystemBuiltInTest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipSystemBuiltInTest>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipSystemBuiltInTest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipSystemBuiltInTest>);
    fn microstrain_inertial_msgs__msg__MipSystemBuiltInTest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipSystemBuiltInTest>, out_seq: *mut rosidl_runtime_rs::Sequence<MipSystemBuiltInTest>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipSystemBuiltInTest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the MIP field https://files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/0xa0/data/0x01.htm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipSystemBuiltInTest {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::super::msg::rmw::MipHeader,

    /// Device-specific bitfield (128 bits).
    /// See device user manual.
    /// Bits are least-significant-byte first.
    /// For example, bit 0 is located at bit 0 of result[0], bit 1 is located at bit 1 of result[0], bit 8 is located at bit 0 of result[1], and bit 127 is located at bit 7 of result[15].
    pub result: [u8; 16],

}



impl Default for MipSystemBuiltInTest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipSystemBuiltInTest__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipSystemBuiltInTest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipSystemBuiltInTest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSystemBuiltInTest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSystemBuiltInTest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSystemBuiltInTest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipSystemBuiltInTest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipSystemBuiltInTest where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipSystemBuiltInTest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipSystemBuiltInTest() }
  }
}


#[link(name = "microstrain_inertial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus() -> *const std::ffi::c_void;
}

#[link(name = "microstrain_inertial_msgs__rosidl_generator_c")]
extern "C" {
    fn microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus__init(msg: *mut MipSystemTimeSyncStatus) -> bool;
    fn microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MipSystemTimeSyncStatus>, size: usize) -> bool;
    fn microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MipSystemTimeSyncStatus>);
    fn microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MipSystemTimeSyncStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MipSystemTimeSyncStatus>) -> bool;
}

// Corresponds to microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Message definition for the MIP field https://files.microstrain.com/CV7+Online/external_content/dcp/Data/0xa0/data/0x02.htm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipSystemTimeSyncStatus {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::super::msg::rmw::MipHeader,

    /// True if sync with the PPS signal is currently valid. False if PPS feature is disabled or a PPS signal is not detected.
    pub time_sync: bool,

    /// Elapsed time in seconds since last PPS was received, with a maximum value of 255.
    pub last_pps_rcvd: u8,

}



impl Default for MipSystemTimeSyncStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus__init(&mut msg as *mut _) {
        panic!("Call to microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MipSystemTimeSyncStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MipSystemTimeSyncStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MipSystemTimeSyncStatus where Self: Sized {
  const TYPE_NAME: &'static str = "microstrain_inertial_msgs/msg/MipSystemTimeSyncStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus() }
  }
}


