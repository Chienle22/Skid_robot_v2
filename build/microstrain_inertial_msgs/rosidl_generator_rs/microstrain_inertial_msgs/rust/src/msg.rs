#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to microstrain_inertial_msgs__msg__HumanReadableStatus
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

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HumanReadableStatus {
    /// Header containing the time at which this message was populated
    ///   header.frame_id will contain the frame ID of the IMU
    pub header: std_msgs::msg::Header,

    /// Device information. This information will be read when the node first activates.
    /// To force an update of this information (shouldn't change during runtime), call the mip/base/get_device_information service
    pub device_info: super::msg::MipBaseDeviceInfo,

    /// GNSS state. See GNSS_STATE_* for possible values
    /// This value is computed from many different fields from microstrain_inertial_msgs/MipGnssFixInfo.msg and microstrain_inertial_msgs/MipFilterGnssPositionAidingStatus.msg
    pub gnss_state: std::string::String,

    /// Dual antenna fix type. See DUAL_ANTENNA_FIX_TYPE_* enums for possble values
    /// This is identical to fix_type in microstrain_inertial_msgs/MipFilterGnssDualAntennaStatus.msg
    pub dual_antenna_fix_type: std::string::String,

    /// Device-specific filter state. See filter_state_* enums for possible values
    /// This is identical to filter_state in microstrain_inertial_msgs/MipFilterStatus.msg represented as a string
    pub filter_state: std::string::String,

    /// String version of the status_flags field of the MipFilterStatus message. Only active statuses will be in this list
    /// This is a list of all of the status_flags_* that are true in microstrain_inertial_msgs/MipFilterStatus.msg filtered to only include relevant flags for this type of device
    /// See STATIS_FLAG_* for possible values that could be in this array
    pub status_flags: Vec<std::string::String>,

    /// String version of the possible continuous bit fields possibly provided by the device.
    /// Generally, you want to see nothing populated in this message, but when you do see something, it can be used to diagnose problems with the device.
    /// This is a parsed out version of microstrain_inertial_msgs/MipSystemBuiltInTest.msg parsed to be accurate for each device
    pub continuous_bit_flags: Vec<std::string::String>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HumanReadableStatus::default())
  }
}

impl rosidl_runtime_rs::Message for HumanReadableStatus {
  type RmwMsg = super::msg::rmw::HumanReadableStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        device_info: super::msg::MipBaseDeviceInfo::into_rmw_message(std::borrow::Cow::Owned(msg.device_info)).into_owned(),
        gnss_state: msg.gnss_state.as_str().into(),
        dual_antenna_fix_type: msg.dual_antenna_fix_type.as_str().into(),
        filter_state: msg.filter_state.as_str().into(),
        status_flags: msg.status_flags
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        continuous_bit_flags: msg.continuous_bit_flags
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        device_info: super::msg::MipBaseDeviceInfo::into_rmw_message(std::borrow::Cow::Borrowed(&msg.device_info)).into_owned(),
        gnss_state: msg.gnss_state.as_str().into(),
        dual_antenna_fix_type: msg.dual_antenna_fix_type.as_str().into(),
        filter_state: msg.filter_state.as_str().into(),
        status_flags: msg.status_flags
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        continuous_bit_flags: msg.continuous_bit_flags
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      device_info: super::msg::MipBaseDeviceInfo::from_rmw_message(msg.device_info),
      gnss_state: msg.gnss_state.to_string(),
      dual_antenna_fix_type: msg.dual_antenna_fix_type.to_string(),
      filter_state: msg.filter_state.to_string(),
      status_flags: msg.status_flags
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      continuous_bit_flags: msg.continuous_bit_flags
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipBaseDeviceInfo
/// Message definition for https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Commands/base_command/data/base_device_info.htm
///   Note: This message will never be published on it's own, only included in other messages.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipBaseDeviceInfo {
    /// String version of the firmware version on the device
    pub firmware_version: std::string::String,

    /// Model name (3DM-GQ7, 3DM-GX5, etc.)
    pub model_name: std::string::String,

    /// Model number (6284, 6285, etc.)
    pub model_number: std::string::String,

    /// Serial number (6284.109766, 6285.13404, etc.)
    pub serial_number: std::string::String,

    /// Lot number
    pub lot_number: std::string::String,

    /// Device options
    pub device_options: std::string::String,

}



impl Default for MipBaseDeviceInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipBaseDeviceInfo::default())
  }
}

impl rosidl_runtime_rs::Message for MipBaseDeviceInfo {
  type RmwMsg = super::msg::rmw::MipBaseDeviceInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        firmware_version: msg.firmware_version.as_str().into(),
        model_name: msg.model_name.as_str().into(),
        model_number: msg.model_number.as_str().into(),
        serial_number: msg.serial_number.as_str().into(),
        lot_number: msg.lot_number.as_str().into(),
        device_options: msg.device_options.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        firmware_version: msg.firmware_version.as_str().into(),
        model_name: msg.model_name.as_str().into(),
        model_number: msg.model_number.as_str().into(),
        serial_number: msg.serial_number.as_str().into(),
        lot_number: msg.lot_number.as_str().into(),
        device_options: msg.device_options.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      firmware_version: msg.firmware_version.to_string(),
      model_name: msg.model_name.to_string(),
      model_number: msg.model_number.to_string(),
      serial_number: msg.serial_number.to_string(),
      lot_number: msg.lot_number.to_string(),
      device_options: msg.device_options.to_string(),
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary
/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_aiding_measurement_summary.htm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterAidingMeasurementSummary {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::msg::MipHeader,

    /// GPS time of week (seconds)
    pub time_of_week: f64,

    /// Source used when type is set to TYPE_GNSS to specify which GNSS module this message is for
    pub source: u8,

    /// Type of the aiding measurement. See TYPE_* enums for possible values
    pub type_: u8,

    /// Parsed version of indicator bitfield
    pub indicator: super::msg::MipFilterAidingMeasurementSummaryIndicator,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipFilterAidingMeasurementSummary::default())
  }
}

impl rosidl_runtime_rs::Message for MipFilterAidingMeasurementSummary {
  type RmwMsg = super::msg::rmw::MipFilterAidingMeasurementSummary;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_week: msg.time_of_week,
        source: msg.source,
        type_: msg.type_,
        indicator: super::msg::MipFilterAidingMeasurementSummaryIndicator::into_rmw_message(std::borrow::Cow::Owned(msg.indicator)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      time_of_week: msg.time_of_week,
      source: msg.source,
      type_: msg.type_,
        indicator: super::msg::MipFilterAidingMeasurementSummaryIndicator::into_rmw_message(std::borrow::Cow::Borrowed(&msg.indicator)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MipHeader::from_rmw_message(msg.header),
      time_of_week: msg.time_of_week,
      source: msg.source,
      type_: msg.type_,
      indicator: super::msg::MipFilterAidingMeasurementSummaryIndicator::from_rmw_message(msg.indicator),
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator
/// Message definition for the indicator field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_aiding_measurement_summary.htm?Highlight=filter%20aiding%20measurement
///   Note: This message will never be published on it's own, only included in other messages

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipFilterAidingMeasurementSummaryIndicator::default())
  }
}

impl rosidl_runtime_rs::Message for MipFilterAidingMeasurementSummaryIndicator {
  type RmwMsg = super::msg::rmw::MipFilterAidingMeasurementSummaryIndicator;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        enabled: msg.enabled,
        used: msg.used,
        residual_high_warning: msg.residual_high_warning,
        sample_time_warning: msg.sample_time_warning,
        configuration_error: msg.configuration_error,
        max_num_meas_exceeded: msg.max_num_meas_exceeded,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      enabled: msg.enabled,
      used: msg.used,
      residual_high_warning: msg.residual_high_warning,
      sample_time_warning: msg.sample_time_warning,
      configuration_error: msg.configuration_error,
      max_num_meas_exceeded: msg.max_num_meas_exceeded,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      enabled: msg.enabled,
      used: msg.used,
      residual_high_warning: msg.residual_high_warning,
      sample_time_warning: msg.sample_time_warning,
      configuration_error: msg.configuration_error,
      max_num_meas_exceeded: msg.max_num_meas_exceeded,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus
/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_gnss_dual_antenna_status.htm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterGnssDualAntennaStatus {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::msg::MipHeader,

    /// Last dual-antenna GNSS aiding measurement time of week (seconds)
    pub time_of_week: f32,

    /// Heading in radians
    pub heading: f32,

    /// Heading uncertainty in radians
    pub heading_unc: f32,

    /// Fix type indicator. See FIX_TYPE_* enums for possible values
    pub fix_type: u8,

    /// Parsed out version of the Status Flags bitfield
    pub status_flags: super::msg::MipFilterGnssDualAntennaStatusStatusFlags,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipFilterGnssDualAntennaStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MipFilterGnssDualAntennaStatus {
  type RmwMsg = super::msg::rmw::MipFilterGnssDualAntennaStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_week: msg.time_of_week,
        heading: msg.heading,
        heading_unc: msg.heading_unc,
        fix_type: msg.fix_type,
        status_flags: super::msg::MipFilterGnssDualAntennaStatusStatusFlags::into_rmw_message(std::borrow::Cow::Owned(msg.status_flags)).into_owned(),
        valid_flags: msg.valid_flags,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      time_of_week: msg.time_of_week,
      heading: msg.heading,
      heading_unc: msg.heading_unc,
      fix_type: msg.fix_type,
        status_flags: super::msg::MipFilterGnssDualAntennaStatusStatusFlags::into_rmw_message(std::borrow::Cow::Borrowed(&msg.status_flags)).into_owned(),
      valid_flags: msg.valid_flags,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MipHeader::from_rmw_message(msg.header),
      time_of_week: msg.time_of_week,
      heading: msg.heading,
      heading_unc: msg.heading_unc,
      fix_type: msg.fix_type,
      status_flags: super::msg::MipFilterGnssDualAntennaStatusStatusFlags::from_rmw_message(msg.status_flags),
      valid_flags: msg.valid_flags,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags
/// Message definition for Status Flags field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_gnss_dual_antenna_status.htm?Highlight=dual%20antenna
///   Note: This message will never be published on it's own, only included in other messages.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipFilterGnssDualAntennaStatusStatusFlags::default())
  }
}

impl rosidl_runtime_rs::Message for MipFilterGnssDualAntennaStatusStatusFlags {
  type RmwMsg = super::msg::rmw::MipFilterGnssDualAntennaStatusStatusFlags;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        rcv_1_data_valid: msg.rcv_1_data_valid,
        rcv_2_data_valid: msg.rcv_2_data_valid,
        antenna_offsets_valid: msg.antenna_offsets_valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      rcv_1_data_valid: msg.rcv_1_data_valid,
      rcv_2_data_valid: msg.rcv_2_data_valid,
      antenna_offsets_valid: msg.antenna_offsets_valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      rcv_1_data_valid: msg.rcv_1_data_valid,
      rcv_2_data_valid: msg.rcv_2_data_valid,
      antenna_offsets_valid: msg.antenna_offsets_valid,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus
/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_gnss_pos_aid_status.htm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterGnssPositionAidingStatus {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::msg::MipHeader,

    /// Receiver ID. For GQ7, this will be 1 for GNSS1 and 2 for GNSS2
    pub receiver_id: u8,

    /// Last GNSS aiding measurement time of week (seconds)
    pub time_of_week: f64,

    /// Parsed out version of the status bit field
    pub status: super::msg::MipFilterGnssPositionAidingStatusStatus,

}



impl Default for MipFilterGnssPositionAidingStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipFilterGnssPositionAidingStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MipFilterGnssPositionAidingStatus {
  type RmwMsg = super::msg::rmw::MipFilterGnssPositionAidingStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        receiver_id: msg.receiver_id,
        time_of_week: msg.time_of_week,
        status: super::msg::MipFilterGnssPositionAidingStatusStatus::into_rmw_message(std::borrow::Cow::Owned(msg.status)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      receiver_id: msg.receiver_id,
      time_of_week: msg.time_of_week,
        status: super::msg::MipFilterGnssPositionAidingStatusStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.status)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MipHeader::from_rmw_message(msg.header),
      receiver_id: msg.receiver_id,
      time_of_week: msg.time_of_week,
      status: super::msg::MipFilterGnssPositionAidingStatusStatus::from_rmw_message(msg.status),
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus
/// Message definition for the Status field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_gnss_pos_aid_status.htm?Highlight=gnss%20position%20aiding
///   Note: This message will never be published on it's own, only included in other messages.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipFilterGnssPositionAidingStatusStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MipFilterGnssPositionAidingStatusStatus {
  type RmwMsg = super::msg::rmw::MipFilterGnssPositionAidingStatusStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tight_coupling: msg.tight_coupling,
        differential: msg.differential,
        integer_fix: msg.integer_fix,
        gps_l1: msg.gps_l1,
        gps_l2: msg.gps_l2,
        gps_l5: msg.gps_l5,
        glo_l1: msg.glo_l1,
        glo_l2: msg.glo_l2,
        gal_e1: msg.gal_e1,
        gal_e5: msg.gal_e5,
        gal_e6: msg.gal_e6,
        bei_b1: msg.bei_b1,
        bei_b2: msg.bei_b2,
        bei_b3: msg.bei_b3,
        no_fix: msg.no_fix,
        config_error: msg.config_error,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      tight_coupling: msg.tight_coupling,
      differential: msg.differential,
      integer_fix: msg.integer_fix,
      gps_l1: msg.gps_l1,
      gps_l2: msg.gps_l2,
      gps_l5: msg.gps_l5,
      glo_l1: msg.glo_l1,
      glo_l2: msg.glo_l2,
      gal_e1: msg.gal_e1,
      gal_e5: msg.gal_e5,
      gal_e6: msg.gal_e6,
      bei_b1: msg.bei_b1,
      bei_b2: msg.bei_b2,
      bei_b3: msg.bei_b3,
      no_fix: msg.no_fix,
      config_error: msg.config_error,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tight_coupling: msg.tight_coupling,
      differential: msg.differential,
      integer_fix: msg.integer_fix,
      gps_l1: msg.gps_l1,
      gps_l2: msg.gps_l2,
      gps_l5: msg.gps_l5,
      glo_l1: msg.glo_l1,
      glo_l2: msg.glo_l2,
      gal_e1: msg.gal_e1,
      gal_e5: msg.gal_e5,
      gal_e6: msg.gal_e6,
      bei_b1: msg.bei_b1,
      bei_b2: msg.bei_b2,
      bei_b3: msg.bei_b3,
      no_fix: msg.no_fix,
      config_error: msg.config_error,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection
/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_multi_antenna_offset_correction.htm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterMultiAntennaOffsetCorrection {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::msg::MipHeader,

    /// Receiver ID. For GQ7, this will be 1 for GNSS1 and 2 for GNSS2
    pub receiver_id: u8,

    /// Offset (x, y, z) in meters
    pub offset: [f32; 3],

}



impl Default for MipFilterMultiAntennaOffsetCorrection {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipFilterMultiAntennaOffsetCorrection::default())
  }
}

impl rosidl_runtime_rs::Message for MipFilterMultiAntennaOffsetCorrection {
  type RmwMsg = super::msg::rmw::MipFilterMultiAntennaOffsetCorrection;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        receiver_id: msg.receiver_id,
        offset: msg.offset,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      receiver_id: msg.receiver_id,
        offset: msg.offset,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MipHeader::from_rmw_message(msg.header),
      receiver_id: msg.receiver_id,
      offset: msg.offset,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipFilterStatus
/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_status.htm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipFilterStatus {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::msg::MipHeader,

    /// Device-specific filter state. Please consult the user manual for definition. See FILTER_STATE_* enums for possible values
    pub filter_state: u16,

    /// Device-specific dynamics mode. Please consult the user manual for definition. See DYNAMICS_MODE_* enums for possible values
    /// Note that for prospect devices (GQ7, CV7, etc), this field has a default value, and should be mostly ignored
    pub dynamics_mode: u16,

    /// Parsed out version of the Status Flags bitfield when the connected device is a philo device (GX5, CX5, CV5, etc)
    pub gx5_status_flags: super::msg::MipFilterStatusGx5StatusFlags,

    /// Parsed out version of the Status Flags bitfield when the connected device is a prospect device (GQ7, CV7, etc)
    pub gq7_status_flags: super::msg::MipFilterStatusGq7StatusFlags,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipFilterStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MipFilterStatus {
  type RmwMsg = super::msg::rmw::MipFilterStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        filter_state: msg.filter_state,
        dynamics_mode: msg.dynamics_mode,
        gx5_status_flags: super::msg::MipFilterStatusGx5StatusFlags::into_rmw_message(std::borrow::Cow::Owned(msg.gx5_status_flags)).into_owned(),
        gq7_status_flags: super::msg::MipFilterStatusGq7StatusFlags::into_rmw_message(std::borrow::Cow::Owned(msg.gq7_status_flags)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      filter_state: msg.filter_state,
      dynamics_mode: msg.dynamics_mode,
        gx5_status_flags: super::msg::MipFilterStatusGx5StatusFlags::into_rmw_message(std::borrow::Cow::Borrowed(&msg.gx5_status_flags)).into_owned(),
        gq7_status_flags: super::msg::MipFilterStatusGq7StatusFlags::into_rmw_message(std::borrow::Cow::Borrowed(&msg.gq7_status_flags)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MipHeader::from_rmw_message(msg.header),
      filter_state: msg.filter_state,
      dynamics_mode: msg.dynamics_mode,
      gx5_status_flags: super::msg::MipFilterStatusGx5StatusFlags::from_rmw_message(msg.gx5_status_flags),
      gq7_status_flags: super::msg::MipFilterStatusGq7StatusFlags::from_rmw_message(msg.gq7_status_flags),
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags
/// Message definition for the Status Flags (GQ7, CV7, etc.) field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_status.htm?Highlight=filter%20status
///   Note: This message will never be published on it's own, only included in other messages.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipFilterStatusGq7StatusFlags::default())
  }
}

impl rosidl_runtime_rs::Message for MipFilterStatusGq7StatusFlags {
  type RmwMsg = super::msg::rmw::MipFilterStatusGq7StatusFlags;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        filter_condition: msg.filter_condition,
        roll_pitch_warning: msg.roll_pitch_warning,
        heading_warning: msg.heading_warning,
        position_warning: msg.position_warning,
        velocity_warning: msg.velocity_warning,
        imu_bias_warning: msg.imu_bias_warning,
        gnss_clk_warning: msg.gnss_clk_warning,
        antenna_lever_arm_warning: msg.antenna_lever_arm_warning,
        mounting_transform_warning: msg.mounting_transform_warning,
        time_sync_warning: msg.time_sync_warning,
        solution_error: msg.solution_error,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      filter_condition: msg.filter_condition,
      roll_pitch_warning: msg.roll_pitch_warning,
      heading_warning: msg.heading_warning,
      position_warning: msg.position_warning,
      velocity_warning: msg.velocity_warning,
      imu_bias_warning: msg.imu_bias_warning,
      gnss_clk_warning: msg.gnss_clk_warning,
      antenna_lever_arm_warning: msg.antenna_lever_arm_warning,
      mounting_transform_warning: msg.mounting_transform_warning,
      time_sync_warning: msg.time_sync_warning,
      solution_error: msg.solution_error,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      filter_condition: msg.filter_condition,
      roll_pitch_warning: msg.roll_pitch_warning,
      heading_warning: msg.heading_warning,
      position_warning: msg.position_warning,
      velocity_warning: msg.velocity_warning,
      imu_bias_warning: msg.imu_bias_warning,
      gnss_clk_warning: msg.gnss_clk_warning,
      antenna_lever_arm_warning: msg.antenna_lever_arm_warning,
      mounting_transform_warning: msg.mounting_transform_warning,
      time_sync_warning: msg.time_sync_warning,
      solution_error: msg.solution_error,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags
/// Message definition for the Status Flags (GX5, CV5, CX5, etc.) field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/filter_data/data/mip_field_filter_status.htm?Highlight=filter%20status
///   Note: This message will never be published on it's own, only included in other messages.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipFilterStatusGx5StatusFlags::default())
  }
}

impl rosidl_runtime_rs::Message for MipFilterStatusGx5StatusFlags {
  type RmwMsg = super::msg::rmw::MipFilterStatusGx5StatusFlags;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        init_no_attitude: msg.init_no_attitude,
        init_no_position_velocity: msg.init_no_position_velocity,
        run_imu_unavailable: msg.run_imu_unavailable,
        run_gps_unavailable: msg.run_gps_unavailable,
        run_matrix_singularity: msg.run_matrix_singularity,
        run_position_covariance_warning: msg.run_position_covariance_warning,
        run_velocity_covariance_warning: msg.run_velocity_covariance_warning,
        run_attitude_covariance_warning: msg.run_attitude_covariance_warning,
        run_nan_in_solution_warning: msg.run_nan_in_solution_warning,
        run_gyro_bias_est_high_warning: msg.run_gyro_bias_est_high_warning,
        run_accel_bias_est_high_warning: msg.run_accel_bias_est_high_warning,
        run_gyro_scale_factor_est_high_warning: msg.run_gyro_scale_factor_est_high_warning,
        run_accel_scale_factor_est_high_warning: msg.run_accel_scale_factor_est_high_warning,
        run_mag_bias_est_high_warning: msg.run_mag_bias_est_high_warning,
        run_ant_offset_correction_est_high_warning: msg.run_ant_offset_correction_est_high_warning,
        run_mag_hard_iron_est_high_warning: msg.run_mag_hard_iron_est_high_warning,
        run_mag_soft_iron_est_high_warning: msg.run_mag_soft_iron_est_high_warning,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      init_no_attitude: msg.init_no_attitude,
      init_no_position_velocity: msg.init_no_position_velocity,
      run_imu_unavailable: msg.run_imu_unavailable,
      run_gps_unavailable: msg.run_gps_unavailable,
      run_matrix_singularity: msg.run_matrix_singularity,
      run_position_covariance_warning: msg.run_position_covariance_warning,
      run_velocity_covariance_warning: msg.run_velocity_covariance_warning,
      run_attitude_covariance_warning: msg.run_attitude_covariance_warning,
      run_nan_in_solution_warning: msg.run_nan_in_solution_warning,
      run_gyro_bias_est_high_warning: msg.run_gyro_bias_est_high_warning,
      run_accel_bias_est_high_warning: msg.run_accel_bias_est_high_warning,
      run_gyro_scale_factor_est_high_warning: msg.run_gyro_scale_factor_est_high_warning,
      run_accel_scale_factor_est_high_warning: msg.run_accel_scale_factor_est_high_warning,
      run_mag_bias_est_high_warning: msg.run_mag_bias_est_high_warning,
      run_ant_offset_correction_est_high_warning: msg.run_ant_offset_correction_est_high_warning,
      run_mag_hard_iron_est_high_warning: msg.run_mag_hard_iron_est_high_warning,
      run_mag_soft_iron_est_high_warning: msg.run_mag_soft_iron_est_high_warning,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      init_no_attitude: msg.init_no_attitude,
      init_no_position_velocity: msg.init_no_position_velocity,
      run_imu_unavailable: msg.run_imu_unavailable,
      run_gps_unavailable: msg.run_gps_unavailable,
      run_matrix_singularity: msg.run_matrix_singularity,
      run_position_covariance_warning: msg.run_position_covariance_warning,
      run_velocity_covariance_warning: msg.run_velocity_covariance_warning,
      run_attitude_covariance_warning: msg.run_attitude_covariance_warning,
      run_nan_in_solution_warning: msg.run_nan_in_solution_warning,
      run_gyro_bias_est_high_warning: msg.run_gyro_bias_est_high_warning,
      run_accel_bias_est_high_warning: msg.run_accel_bias_est_high_warning,
      run_gyro_scale_factor_est_high_warning: msg.run_gyro_scale_factor_est_high_warning,
      run_accel_scale_factor_est_high_warning: msg.run_accel_scale_factor_est_high_warning,
      run_mag_bias_est_high_warning: msg.run_mag_bias_est_high_warning,
      run_ant_offset_correction_est_high_warning: msg.run_ant_offset_correction_est_high_warning,
      run_mag_hard_iron_est_high_warning: msg.run_mag_hard_iron_est_high_warning,
      run_mag_soft_iron_est_high_warning: msg.run_mag_soft_iron_est_high_warning,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus
/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_corrections/data/mip_field_gnss_rtk_corrections_status.htm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGnssCorrectionsRtkCorrectionsStatus {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::msg::MipHeader,

    /// GPS time of week (seconds)
    pub time_of_week: f64,

    /// GPS weeks since 1980 (weeks)
    pub week_number: u16,

    /// Parsed out version of the Epoch Status bitfield
    pub epoch_status: super::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus,

    /// Parsed out version of the Dongle Status bitfield
    pub dongle_status: super::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipGnssCorrectionsRtkCorrectionsStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MipGnssCorrectionsRtkCorrectionsStatus {
  type RmwMsg = super::msg::rmw::MipGnssCorrectionsRtkCorrectionsStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_week: msg.time_of_week,
        week_number: msg.week_number,
        epoch_status: super::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus::into_rmw_message(std::borrow::Cow::Owned(msg.epoch_status)).into_owned(),
        dongle_status: super::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::into_rmw_message(std::borrow::Cow::Owned(msg.dongle_status)).into_owned(),
        gps_correction_latency: msg.gps_correction_latency,
        glonass_correction_latency: msg.glonass_correction_latency,
        galileo_correction_latency: msg.galileo_correction_latency,
        beidou_correction_latency: msg.beidou_correction_latency,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      time_of_week: msg.time_of_week,
      week_number: msg.week_number,
        epoch_status: super::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.epoch_status)).into_owned(),
        dongle_status: super::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.dongle_status)).into_owned(),
      gps_correction_latency: msg.gps_correction_latency,
      glonass_correction_latency: msg.glonass_correction_latency,
      galileo_correction_latency: msg.galileo_correction_latency,
      beidou_correction_latency: msg.beidou_correction_latency,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MipHeader::from_rmw_message(msg.header),
      time_of_week: msg.time_of_week,
      week_number: msg.week_number,
      epoch_status: super::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus::from_rmw_message(msg.epoch_status),
      dongle_status: super::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::from_rmw_message(msg.dongle_status),
      gps_correction_latency: msg.gps_correction_latency,
      glonass_correction_latency: msg.glonass_correction_latency,
      galileo_correction_latency: msg.galileo_correction_latency,
      beidou_correction_latency: msg.beidou_correction_latency,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus
/// Message definition for the Dongle Status field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_corrections/data/mip_field_gnss_rtk_corrections_status.htm?Highlight=rtk%20status
///   Note: This message will never be published on it's own, only included in other messages.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MipGnssCorrectionsRtkCorrectionsStatusDongleStatus {
  type RmwMsg = super::msg::rmw::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        modem_state: msg.modem_state,
        connection_type: msg.connection_type,
        rssi: msg.rssi,
        signal_quality: msg.signal_quality,
        tower_change_indicator: msg.tower_change_indicator,
        nmea_timeout_flag: msg.nmea_timeout_flag,
        server_timeout_flag: msg.server_timeout_flag,
        rtcm_timeout_flag: msg.rtcm_timeout_flag,
        device_out_of_range_flag: msg.device_out_of_range_flag,
        corrections_unavailable_flag: msg.corrections_unavailable_flag,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      modem_state: msg.modem_state,
      connection_type: msg.connection_type,
      rssi: msg.rssi,
      signal_quality: msg.signal_quality,
      tower_change_indicator: msg.tower_change_indicator,
      nmea_timeout_flag: msg.nmea_timeout_flag,
      server_timeout_flag: msg.server_timeout_flag,
      rtcm_timeout_flag: msg.rtcm_timeout_flag,
      device_out_of_range_flag: msg.device_out_of_range_flag,
      corrections_unavailable_flag: msg.corrections_unavailable_flag,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      modem_state: msg.modem_state,
      connection_type: msg.connection_type,
      rssi: msg.rssi,
      signal_quality: msg.signal_quality,
      tower_change_indicator: msg.tower_change_indicator,
      nmea_timeout_flag: msg.nmea_timeout_flag,
      server_timeout_flag: msg.server_timeout_flag,
      rtcm_timeout_flag: msg.rtcm_timeout_flag,
      device_out_of_range_flag: msg.device_out_of_range_flag,
      corrections_unavailable_flag: msg.corrections_unavailable_flag,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus
/// Message definition for the Epoch Status field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_corrections/data/mip_field_gnss_rtk_corrections_status.htm?Highlight=rtk%20status
///   Note: This message will never be published on it's own, only included in other messages.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MipGnssCorrectionsRtkCorrectionsStatusEpochStatus {
  type RmwMsg = super::msg::rmw::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        antenna_location_received: msg.antenna_location_received,
        antenna_description_received: msg.antenna_description_received,
        gps_received: msg.gps_received,
        galileo_received: msg.galileo_received,
        glonass_received: msg.glonass_received,
        beidou_received: msg.beidou_received,
        using_gps_msm_messages: msg.using_gps_msm_messages,
        using_glonass_msm_messages: msg.using_glonass_msm_messages,
        dongle_status_read_failed: msg.dongle_status_read_failed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      antenna_location_received: msg.antenna_location_received,
      antenna_description_received: msg.antenna_description_received,
      gps_received: msg.gps_received,
      galileo_received: msg.galileo_received,
      glonass_received: msg.glonass_received,
      beidou_received: msg.beidou_received,
      using_gps_msm_messages: msg.using_gps_msm_messages,
      using_glonass_msm_messages: msg.using_glonass_msm_messages,
      dongle_status_read_failed: msg.dongle_status_read_failed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      antenna_location_received: msg.antenna_location_received,
      antenna_description_received: msg.antenna_description_received,
      gps_received: msg.gps_received,
      galileo_received: msg.galileo_received,
      glonass_received: msg.glonass_received,
      beidou_received: msg.beidou_received,
      using_gps_msm_messages: msg.using_gps_msm_messages,
      using_glonass_msm_messages: msg.using_glonass_msm_messages,
      dongle_status_read_failed: msg.dongle_status_read_failed,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipGnssFixInfo
/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_fix_info.htm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGnssFixInfo {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::msg::MipHeader,

    /// Fix type. See FIX_TYPE_* enums for possible values
    pub fix_type: u8,

    /// Number of satellites in view for this receiver
    pub num_sv: u8,

    /// Parsed out version of the fix_flags bitfield
    pub fix_flags: super::msg::MipGnssFixInfoFixFlags,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipGnssFixInfo::default())
  }
}

impl rosidl_runtime_rs::Message for MipGnssFixInfo {
  type RmwMsg = super::msg::rmw::MipGnssFixInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        fix_type: msg.fix_type,
        num_sv: msg.num_sv,
        fix_flags: super::msg::MipGnssFixInfoFixFlags::into_rmw_message(std::borrow::Cow::Owned(msg.fix_flags)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      fix_type: msg.fix_type,
      num_sv: msg.num_sv,
        fix_flags: super::msg::MipGnssFixInfoFixFlags::into_rmw_message(std::borrow::Cow::Borrowed(&msg.fix_flags)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MipHeader::from_rmw_message(msg.header),
      fix_type: msg.fix_type,
      num_sv: msg.num_sv,
      fix_flags: super::msg::MipGnssFixInfoFixFlags::from_rmw_message(msg.fix_flags),
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags
/// Message definition for the Fix Type field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_fix_info.htm?Highlight=fix%20info
///   Note: This message will never be published on it's own, only included in other messages.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipGnssFixInfoFixFlags::default())
  }
}

impl rosidl_runtime_rs::Message for MipGnssFixInfoFixFlags {
  type RmwMsg = super::msg::rmw::MipGnssFixInfoFixFlags;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sbas_used: msg.sbas_used,
        dgnss_used: msg.dgnss_used,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sbas_used: msg.sbas_used,
      dgnss_used: msg.dgnss_used,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sbas_used: msg.sbas_used,
      dgnss_used: msg.dgnss_used,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipGnssRfErrorDetection
/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_rf_error_detection.htm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGnssRfErrorDetection {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::msg::MipHeader,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipGnssRfErrorDetection::default())
  }
}

impl rosidl_runtime_rs::Message for MipGnssRfErrorDetection {
  type RmwMsg = super::msg::rmw::MipGnssRfErrorDetection;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        rf_band: msg.rf_band,
        jamming_state: msg.jamming_state,
        spoofing_state: msg.spoofing_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      rf_band: msg.rf_band,
      jamming_state: msg.jamming_state,
      spoofing_state: msg.spoofing_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MipHeader::from_rmw_message(msg.header),
      rf_band: msg.rf_band,
      jamming_state: msg.jamming_state,
      spoofing_state: msg.spoofing_state,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipGnssSbasInfo
/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_sbas_info.htm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGnssSbasInfo {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::msg::MipHeader,

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
    pub sbas_status: super::msg::MipGnssSbasInfoSbasStatus,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipGnssSbasInfo::default())
  }
}

impl rosidl_runtime_rs::Message for MipGnssSbasInfo {
  type RmwMsg = super::msg::rmw::MipGnssSbasInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_week: msg.time_of_week,
        week_number: msg.week_number,
        sbas_system: msg.sbas_system,
        sbas_id: msg.sbas_id,
        count: msg.count,
        sbas_status: super::msg::MipGnssSbasInfoSbasStatus::into_rmw_message(std::borrow::Cow::Owned(msg.sbas_status)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      time_of_week: msg.time_of_week,
      week_number: msg.week_number,
      sbas_system: msg.sbas_system,
      sbas_id: msg.sbas_id,
      count: msg.count,
        sbas_status: super::msg::MipGnssSbasInfoSbasStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.sbas_status)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MipHeader::from_rmw_message(msg.header),
      time_of_week: msg.time_of_week,
      week_number: msg.week_number,
      sbas_system: msg.sbas_system,
      sbas_id: msg.sbas_id,
      count: msg.count,
      sbas_status: super::msg::MipGnssSbasInfoSbasStatus::from_rmw_message(msg.sbas_status),
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus
/// Message definition for the Sbas Status field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_recv_1/data/mip_field_gnss_sbas_info.htm?Highlight=sbas%20info
///   Note: This message will never be published on it's own, only included in other messages.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipGnssSbasInfoSbasStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MipGnssSbasInfoSbasStatus {
  type RmwMsg = super::msg::rmw::MipGnssSbasInfoSbasStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        range_available: msg.range_available,
        corrections_available: msg.corrections_available,
        integrity_available: msg.integrity_available,
        test_mode: msg.test_mode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      range_available: msg.range_available,
      corrections_available: msg.corrections_available,
      integrity_available: msg.integrity_available,
      test_mode: msg.test_mode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      range_available: msg.range_available,
      corrections_available: msg.corrections_available,
      integrity_available: msg.integrity_available,
      test_mode: msg.test_mode,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipGpsTimestamp
/// Definition of a GPS timestamp.
/// For more information see: https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/shared_data/data/mip_field_shared_gps_timestamp.htm
///   Note: This message will never be published on it's own, only included in other messages

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipGpsTimestamp {
    /// GPS time of week (seconds)
    pub tow: f64,

    /// GPS Week number since 1980 (weeks)
    pub week_number: u16,

    /// Valid Flags bitfield
    pub valid_flags: super::msg::MipGpsTimestampValidFlags,

}



impl Default for MipGpsTimestamp {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipGpsTimestamp::default())
  }
}

impl rosidl_runtime_rs::Message for MipGpsTimestamp {
  type RmwMsg = super::msg::rmw::MipGpsTimestamp;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tow: msg.tow,
        week_number: msg.week_number,
        valid_flags: super::msg::MipGpsTimestampValidFlags::into_rmw_message(std::borrow::Cow::Owned(msg.valid_flags)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      tow: msg.tow,
      week_number: msg.week_number,
        valid_flags: super::msg::MipGpsTimestampValidFlags::into_rmw_message(std::borrow::Cow::Borrowed(&msg.valid_flags)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tow: msg.tow,
      week_number: msg.week_number,
      valid_flags: super::msg::MipGpsTimestampValidFlags::from_rmw_message(msg.valid_flags),
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags
/// Message definition for the valid_flags field of https://files.microstrain.com/CV7+Online/external_content/dcp/Data/0xff/data/0xd3.htm
///   Note: This message will never be published on it's own, only included in other messages.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipGpsTimestampValidFlags::default())
  }
}

impl rosidl_runtime_rs::Message for MipGpsTimestampValidFlags {
  type RmwMsg = super::msg::rmw::MipGpsTimestampValidFlags;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tow: msg.tow,
        week_number: msg.week_number,
        time_valid: msg.time_valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      tow: msg.tow,
      week_number: msg.week_number,
      time_valid: msg.time_valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tow: msg.tow,
      week_number: msg.week_number,
      time_valid: msg.time_valid,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipHeader
/// Represents a standard header that all MIP fields should include at the beginning of their message definition
///   Note: This message will never be published on it's own, only included in other messages

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipHeader {
    /// Standard ROS header.
    ///   header.stamp will always be populated with the ROS time that this message was populated
    ///   header.frame_id is dependent on the full message definition. Most messages will not use this
    pub header: std_msgs::msg::Header,

    /// If the message was triggered by an event, this will be set, otherwise it will be set to 0 (will be 0 most of the time)
    /// For more information, see: https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/shared_data/data/mip_field_shared_event_source.htm
    pub event_source: u8,

    /// Reference timestamp of when the data was sampled if the device supports it. For devices that do not support this, it will always be 0
    /// For more information, see: https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/shared_data/data/mip_field_shared_reference_timestamp.htm
    pub reference_timestamp: u64,

    /// GPS timestamp of when the data was sampled if the device supports it
    /// For more information, see: https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/shared_data/data/mip_field_shared_gps_timestamp.htm
    /// Note that this timestamp may be blank in certain messages, but there will often be equivalent fields in the messages
    pub gps_timestamp: super::msg::MipGpsTimestamp,

}



impl Default for MipHeader {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipHeader::default())
  }
}

impl rosidl_runtime_rs::Message for MipHeader {
  type RmwMsg = super::msg::rmw::MipHeader;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        event_source: msg.event_source,
        reference_timestamp: msg.reference_timestamp,
        gps_timestamp: super::msg::MipGpsTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.gps_timestamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      event_source: msg.event_source,
      reference_timestamp: msg.reference_timestamp,
        gps_timestamp: super::msg::MipGpsTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.gps_timestamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      event_source: msg.event_source,
      reference_timestamp: msg.reference_timestamp,
      gps_timestamp: super::msg::MipGpsTimestamp::from_rmw_message(msg.gps_timestamp),
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipSensorOverrangeStatus
/// Message definition for the MIP field https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/sensor_data/data/mip_field_sensor_overrange_status.htm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipSensorOverrangeStatus {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::msg::MipHeader,

    /// Parsed out representation of the status bitfield
    pub status: super::msg::MipSensorOverrangeStatusStatus,

}



impl Default for MipSensorOverrangeStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipSensorOverrangeStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MipSensorOverrangeStatus {
  type RmwMsg = super::msg::rmw::MipSensorOverrangeStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        status: super::msg::MipSensorOverrangeStatusStatus::into_rmw_message(std::borrow::Cow::Owned(msg.status)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        status: super::msg::MipSensorOverrangeStatusStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.status)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MipHeader::from_rmw_message(msg.header),
      status: super::msg::MipSensorOverrangeStatusStatus::from_rmw_message(msg.status),
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus
/// Message definition for the Status field of https://s3.amazonaws.com/files.microstrain.com/CV7+Online/external_content/dcp/Data/sensor_data/data/mip_field_sensor_overrange_status.htm?Highlight=overrange
///   Note: This message will never be published on it's own, only included in other messages.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipSensorOverrangeStatusStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MipSensorOverrangeStatusStatus {
  type RmwMsg = super::msg::rmw::MipSensorOverrangeStatusStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accel_x: msg.accel_x,
        accel_y: msg.accel_y,
        accel_z: msg.accel_z,
        gyro_x: msg.gyro_x,
        gyro_y: msg.gyro_y,
        gyro_z: msg.gyro_z,
        mag_x: msg.mag_x,
        mag_y: msg.mag_y,
        mag_z: msg.mag_z,
        press: msg.press,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accel_x: msg.accel_x,
      accel_y: msg.accel_y,
      accel_z: msg.accel_z,
      gyro_x: msg.gyro_x,
      gyro_y: msg.gyro_y,
      gyro_z: msg.gyro_z,
      mag_x: msg.mag_x,
      mag_y: msg.mag_y,
      mag_z: msg.mag_z,
      press: msg.press,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accel_x: msg.accel_x,
      accel_y: msg.accel_y,
      accel_z: msg.accel_z,
      gyro_x: msg.gyro_x,
      gyro_y: msg.gyro_y,
      gyro_z: msg.gyro_z,
      mag_x: msg.mag_x,
      mag_y: msg.mag_y,
      mag_z: msg.mag_z,
      press: msg.press,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics
/// Message definition for the MIP field https://files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/0x80/data/0x14.htm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipSensorTemperatureStatistics {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::msg::MipHeader,

    /// Degrees Celsius
    pub min_temp: f32,

    /// Degrees Celsius
    pub max_temp: f32,

    /// Degrees Celsius
    pub mean_temp: f32,

}



impl Default for MipSensorTemperatureStatistics {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipSensorTemperatureStatistics::default())
  }
}

impl rosidl_runtime_rs::Message for MipSensorTemperatureStatistics {
  type RmwMsg = super::msg::rmw::MipSensorTemperatureStatistics;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        min_temp: msg.min_temp,
        max_temp: msg.max_temp,
        mean_temp: msg.mean_temp,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      min_temp: msg.min_temp,
      max_temp: msg.max_temp,
      mean_temp: msg.mean_temp,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MipHeader::from_rmw_message(msg.header),
      min_temp: msg.min_temp,
      max_temp: msg.max_temp,
      mean_temp: msg.mean_temp,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipSystemBuiltInTest
/// Message definition for the MIP field https://files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/0xa0/data/0x01.htm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipSystemBuiltInTest {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::msg::MipHeader,

    /// Device-specific bitfield (128 bits).
    /// See device user manual.
    /// Bits are least-significant-byte first.
    /// For example, bit 0 is located at bit 0 of result[0], bit 1 is located at bit 1 of result[0], bit 8 is located at bit 0 of result[1], and bit 127 is located at bit 7 of result[15].
    pub result: [u8; 16],

}



impl Default for MipSystemBuiltInTest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipSystemBuiltInTest::default())
  }
}

impl rosidl_runtime_rs::Message for MipSystemBuiltInTest {
  type RmwMsg = super::msg::rmw::MipSystemBuiltInTest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MipHeader::from_rmw_message(msg.header),
      result: msg.result,
    }
  }
}


// Corresponds to microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus
/// Message definition for the MIP field https://files.microstrain.com/CV7+Online/external_content/dcp/Data/0xa0/data/0x02.htm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MipSystemTimeSyncStatus {
    /// Header containing common information
    ///   header.frame_id has no meaning in this message
    pub header: super::msg::MipHeader,

    /// True if sync with the PPS signal is currently valid. False if PPS feature is disabled or a PPS signal is not detected.
    pub time_sync: bool,

    /// Elapsed time in seconds since last PPS was received, with a maximum value of 255.
    pub last_pps_rcvd: u8,

}



impl Default for MipSystemTimeSyncStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MipSystemTimeSyncStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MipSystemTimeSyncStatus {
  type RmwMsg = super::msg::rmw::MipSystemTimeSyncStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_sync: msg.time_sync,
        last_pps_rcvd: msg.last_pps_rcvd,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::MipHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      time_sync: msg.time_sync,
      last_pps_rcvd: msg.last_pps_rcvd,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::MipHeader::from_rmw_message(msg.header),
      time_sync: msg.time_sync,
      last_pps_rcvd: msg.last_pps_rcvd,
    }
  }
}


