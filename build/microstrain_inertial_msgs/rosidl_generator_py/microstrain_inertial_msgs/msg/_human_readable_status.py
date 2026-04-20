# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/HumanReadableStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HumanReadableStatus(type):
    """Metaclass of message 'HumanReadableStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNSUPPORTED': 'Unsupported',
        'GNSS_STATE_NO_FIX': 'No Fix',
        'GNSS_STATE_3D_FIX': '3D Fix',
        'GNSS_STATE_SBAS': 'SBAS',
        'GNSS_STATE_RTK_FLOAT': 'RTK Float',
        'GNSS_STATE_RTK_FIXED': 'RTK Fixed',
        'DUAL_ANTENNA_FIX_TYPE_NONE': 'None',
        'DUAL_ANTENNA_FIX_TYPE_FLOAT': 'Dual Antenna Float',
        'DUAL_ANTENNA_FIX_TYPE_FIXED': 'Dual Antenna Fixed',
        'FILTER_STATE_GX5_STARTUP': 'Startup',
        'FILTER_STATE_GX5_INIT': 'Init',
        'FILTER_STATE_GX5_RUN_SOLUTION_VALID': 'Solution Valid',
        'FILTER_STATE_GX5_RUN_SOLUTION_ERROR': 'Solution Error',
        'FILTER_STATE_GQ7_INIT': 'Init',
        'FILTER_STATE_GQ7_VERT_GYRO': 'Vertical Gyro',
        'FILTER_STATE_GQ7_AHRS': 'AHRS',
        'FILTER_STATE_GQ7_FULL_NAV': 'Full Nav',
        'STATUS_FLAGS_GX5_INIT_NO_ATTITUDE': 'Init No Attitude',
        'STATUS_FLAGS_GX5_INIT_NO_POSITION_VELOCITY': 'Init No Position / Velocity',
        'STATUS_FLAGS_GX5_RUN_IMU_UNAVAILABLE': 'IMU Unavailable',
        'STATUS_FLAGS_GX5_RUN_GPS_UNAVAILABLE': 'GPS Unavailable',
        'STATUS_FLAGS_GX5_RUN_MATRIX_SINGULARITY': 'Matrix Singularity',
        'STATUS_FLAGS_GX5_RUN_POSITION_COVARIANCE_WARNING': 'Position Covariance Warning',
        'STATUS_FLAGS_GX5_RUN_VELOCITY_COVARIANCE_WARNING': 'Velocity Covariance Warning',
        'STATUS_FLAGS_GX5_RUN_ATTITUDE_COVARIANCE_WARNING': 'Attitude Covariance Warning',
        'STATUS_FLAGS_GX5_RUN_NAN_IN_SOLUTION_WARNING': 'NaN in Solution',
        'STATUS_FLAGS_GX5_RUN_GYRO_BIAS_EST_HIGH_WARNING': 'Gyroscope Bias Estimate High',
        'STATUS_FLAGS_GX5_RUN_ACCEL_BIAS_EST_HIGH_WARNING': 'Accelerometer Bias Estimate High',
        'STATUS_FLAGS_GX5_RUN_GYRO_SCALE_FACTOR_EST_HIGH_WARNING': 'Gyroscope Scale Factor Estimate High',
        'STATUS_FLAGS_GX5_RUN_ACCEL_SCALE_FACTOR_EST_HIGH_WARNING': 'Accelerometer Scal Factor Estimate High',
        'STATUS_FLAGS_GX5_RUN_MAG_BIAS_EST_HIGH_WARNING': 'Magnetometer Bias Estimate High',
        'STATUS_FLAGS_GX5_RUN_ANT_OFFSET_CORRECTION_EST_HIGH_WARNING': 'Antenna Offset Correction Estimate High',
        'STATUS_FLAGS_GX5_RUN_MAG_HARD_IRON_EST_HIGH_WARNING': 'Magnetometer Hard Iron Estimate High',
        'STATUS_FLAGS_GX5_RUN_MAG_SOFT_IRON_EST_HIGH_WARNING': 'Magnetometer Soft Iron Estimate High',
        'STATUS_FLAGS_GQ7_FILTER_CONDITION_STABLE': 'Stable',
        'STATUS_FLAGS_GQ7_FILTER_CONDITION_CONVERGING': 'Converging',
        'STATUS_FLAGS_GQ7_FILTER_CONDITION_UNSTABLE': 'Unstable',
        'STATUS_FLAGS_GQ7_ROLL_PITCH_WARNING': 'Roll / Pitch Warning',
        'STATUS_FLAGS_GQ7_HEADING_WARNING': 'Heading Warning',
        'STATUS_FLAGS_GQ7_POSITION_WARNING': 'Position Warning',
        'STATUS_FLAGS_GQ7_VELOCITY_WARNING': 'Velocity Warning',
        'STATUS_FLAGS_GQ7_IMU_BIAS_WARNING': 'IMU Bias Warning',
        'STATUS_FLAGS_GQ7_GNSS_CLK_WARNING': 'GNSS Clock Warning',
        'STATUS_FLAGS_GQ7_ANTENNA_LEVER_ARM_WARNING': 'Antenna Lever Arm Warning',
        'STATUS_FLAGS_GQ7_MOUNTING_TRANSFORM_WARNING': 'Mounting Transform Warning',
        'STATUS_FLAGS_GQ7_TIME_SYNC_WARNING': 'Time Sync Warning',
        'STATUS_FLAGS_GQ7_SOLUTION_ERROR': 'Solution Error',
        'CONTINUOUS_BIT_FLAGS_GQ7_SYSTEM_CLOCK_FAILURE': 'System Clock Failure',
        'CONTINUOUS_BIT_FLAGS_GQ7_POWER_FAULT': 'Power Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_FIRMWARE_FAULT': 'Firmware Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_TIMING_OVERLOAD': 'Timing Overload',
        'CONTINUOUS_BIT_FLAGS_GQ7_BUFFER_OVERRUN': 'Buffer Overrun',
        'CONTINUOUS_BIT_FLAGS_GQ7_IMU_IPC_FAULT': 'IMU IPC Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_IPC_FAULT': 'Filter IPC Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_IPC_FAULT': 'GNSS IPC Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CLOCK_FAULT': 'IMU Clock Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_IMU_COMMUNICATION_FAULT': 'IMU Communication Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_IMU_TIMING_OVERRUN': 'IMU Timing Overrun',
        'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_ACCEL': 'IMU Calibration Error - Accel',
        'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_GYRO': 'IMU Calibration Error - Gyro',
        'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_MAG': 'IMU Calibration Error - Mag',
        'CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_GENERAL_FAULT': 'Accelerometer General Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_OVER_RANGE': 'Accelerometer Over-Range',
        'CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_SELF_TEST_FAIL': 'Accelerometer Self-test Fail',
        'CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_GENERAL_FAULT': 'Gyroscope General Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_OVER_RANGE': 'Gyroscope Over-Range',
        'CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_SELF_TEST_FAIL': 'Gyroscope Self-test Fail',
        'CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_GENERAL_FAULT': 'Magnetometer General Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_OVER_RANGE': 'Magnetometer Over-Range',
        'CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_SELF_TEST_FAIL': 'Magnetometer Self-test Fail',
        'CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_GENERAL_FAULT': 'Pressure Sensor General Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_OVER_RANGE': 'Pressure Sensor Over-Range',
        'CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_SELF_TEST_FAIL': 'Pressure Sensor Self-test Fail',
        'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_CLOCK_FAULT': 'Filter Clock Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_HARDWARE_FAULT': 'Filter Hardware Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_OVERRUN': 'Filter Timing Overrun',
        'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_UNDERRUN': 'Filter Timing Underrun',
        'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_COMMUNICATION_ERROR': 'Filter Communication Error',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_CLOCK_FAULT': 'GNSS Clock Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_HARDWARE_FAULT': 'GNSS Hardware Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_COMMUNICATION_ERROR': 'GNSS Communication Error',
        'CONTINUOUS_BIT_FLAGS_GQ7_GPS_TIME_FAULT': 'GPS Time Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_TIMING_OVERRUN': 'GNSS Timing Overrun',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_POWER_FAULT': 'GNSS Receiver 1 Power Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_FAULT': 'GNSS Receiver 1 Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_SHORTED': 'GNSS Antenna 1 Shorted',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_OPEN': 'GNSS Antenna 1 Open',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_SOLUTION_FAULT': 'GNSS Receiver 1 Solution Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_POWER_FAULT': 'GNSS Receiver 2 Power Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_FAULT': 'GNSS Receiver 2 Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_SHORTED': 'GNSS Antenna 2 Shorted',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_OPEN': 'GNSS Antenna 2 Open',
        'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_SOLUTION_FAULT': 'GNSS Receiver 2 Solution Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_RTCM_COMMUNICATION_FAULT': 'RTCM Communication Fault',
        'CONTINUOUS_BIT_FLAGS_GQ7_RTK_DONGLE_FAULT': 'RTK Dongle Fault',
        'CONTINUOUS_BIT_FLAGS_CV7_SYSTEM_CLOCK_FAILURE': 'System Clock Failure',
        'CONTINUOUS_BIT_FLAGS_CV7_POWER_FAULT': 'Power Fault',
        'CONTINUOUS_BIT_FLAGS_CV7_FIRMWARE_FAULT': 'Firmware Fault',
        'CONTINUOUS_BIT_FLAGS_CV7_TIMING_OVERLOAD': 'Timing Overload',
        'CONTINUOUS_BIT_FLAGS_CV7_BUFFER_OVERRUN': 'Buffer Overrun',
        'CONTINUOUS_BIT_FLAGS_CV7_IMU_PROCESS_FAULT': 'IMU Process Fault',
        'CONTINUOUS_BIT_FLAGS_CV7_IMU_DATA_RATE_MISMATCH': 'IMU Data Rate Mismatch',
        'CONTINUOUS_BIT_FLAGS_CV7_IMU_OVERRUN_DROPPED_DATA': 'IMU Overrun/Dropped Data',
        'CONTINUOUS_BIT_FLAGS_CV7_IMU_STUCK': 'IMU Stuck',
        'CONTINUOUS_BIT_FLAGS_CV7_FILTER_PROCESS_FAULT': 'Filter Process Fault',
        'CONTINUOUS_BIT_FLAGS_CV7_FILTER_DROPPED_DATA': 'Filter Dropped Data',
        'CONTINUOUS_BIT_FLAGS_CV7_FILTER_RATE_MISMATCH': 'Filter Rate Mismatch',
        'CONTINUOUS_BIT_FLAGS_CV7_FILTER_STUCK': 'Filter Stuck',
        'CONTINUOUS_BIT_FLAGS_CV7_IMU_CLOCK_FAULT': 'IMU Clock Fault',
        'CONTINUOUS_BIT_FLAGS_CV7_IMU_COMMUNICATION_FAULT': 'IMU Communication Fault',
        'CONTINUOUS_BIT_FLAGS_CV7_IMU_TIMING_OVERRUN': 'IMU Timing Overrun',
        'CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_ACCELEROMETER': 'IMU Calibration Error - Accelerometer',
        'CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_GYROSCOPE': 'IMU Calibration Error - Gyroscope',
        'CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_MAGNETOMETER': 'IMU Calibration Error - Magnetometer',
        'CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_GENERAL_FAULT': 'Accelerometer General Fault',
        'CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_OVER_RANGE': 'Accelerometer Over-range',
        'CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_SELF_TEST_FAIL': 'Accelerometer Self-test Fail',
        'CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_GENERAL_FAULT': 'Gyroscope General Fault',
        'CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_OVER_RANGE': 'Gyroscope Over-range',
        'CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_SELF_TEST_FAIL': 'Gyroscope Self-test Fail',
        'CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_GENERAL_FAULT': 'Magnetometer General Fault',
        'CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_OVER_RANGE': 'Magnetometer Over-range',
        'CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_SELF_TEST_FAIL': 'Magnetometer Self-test Fail',
        'CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_GENERAL_FAULT': 'Pressure Sensor General Fault',
        'CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_OVER_RANGE': 'Pressure Sensor Over-range',
        'CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_SELF_TEST_FAIL': 'Pressure Sensor Self-test Fail',
        'CONTINUOUS_BIT_FLAGS_CV7_FACTORY_BITS_INVALID': 'Factory Bits Invalid',
        'CONTINUOUS_BIT_FLAGS_CV7_FILTER_FAULT': 'Filter Fault',
        'CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_OVERRUN': 'Filter Timing Overrun',
        'CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_UNDERRUN': 'Filter Timing Underrun',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('microstrain_inertial_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'microstrain_inertial_msgs.msg.HumanReadableStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__human_readable_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__human_readable_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__human_readable_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__human_readable_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__human_readable_status

            from microstrain_inertial_msgs.msg import MipBaseDeviceInfo
            if MipBaseDeviceInfo.__class__._TYPE_SUPPORT is None:
                MipBaseDeviceInfo.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNSUPPORTED': cls.__constants['UNSUPPORTED'],
            'GNSS_STATE_NO_FIX': cls.__constants['GNSS_STATE_NO_FIX'],
            'GNSS_STATE_3D_FIX': cls.__constants['GNSS_STATE_3D_FIX'],
            'GNSS_STATE_SBAS': cls.__constants['GNSS_STATE_SBAS'],
            'GNSS_STATE_RTK_FLOAT': cls.__constants['GNSS_STATE_RTK_FLOAT'],
            'GNSS_STATE_RTK_FIXED': cls.__constants['GNSS_STATE_RTK_FIXED'],
            'DUAL_ANTENNA_FIX_TYPE_NONE': cls.__constants['DUAL_ANTENNA_FIX_TYPE_NONE'],
            'DUAL_ANTENNA_FIX_TYPE_FLOAT': cls.__constants['DUAL_ANTENNA_FIX_TYPE_FLOAT'],
            'DUAL_ANTENNA_FIX_TYPE_FIXED': cls.__constants['DUAL_ANTENNA_FIX_TYPE_FIXED'],
            'FILTER_STATE_GX5_STARTUP': cls.__constants['FILTER_STATE_GX5_STARTUP'],
            'FILTER_STATE_GX5_INIT': cls.__constants['FILTER_STATE_GX5_INIT'],
            'FILTER_STATE_GX5_RUN_SOLUTION_VALID': cls.__constants['FILTER_STATE_GX5_RUN_SOLUTION_VALID'],
            'FILTER_STATE_GX5_RUN_SOLUTION_ERROR': cls.__constants['FILTER_STATE_GX5_RUN_SOLUTION_ERROR'],
            'FILTER_STATE_GQ7_INIT': cls.__constants['FILTER_STATE_GQ7_INIT'],
            'FILTER_STATE_GQ7_VERT_GYRO': cls.__constants['FILTER_STATE_GQ7_VERT_GYRO'],
            'FILTER_STATE_GQ7_AHRS': cls.__constants['FILTER_STATE_GQ7_AHRS'],
            'FILTER_STATE_GQ7_FULL_NAV': cls.__constants['FILTER_STATE_GQ7_FULL_NAV'],
            'STATUS_FLAGS_GX5_INIT_NO_ATTITUDE': cls.__constants['STATUS_FLAGS_GX5_INIT_NO_ATTITUDE'],
            'STATUS_FLAGS_GX5_INIT_NO_POSITION_VELOCITY': cls.__constants['STATUS_FLAGS_GX5_INIT_NO_POSITION_VELOCITY'],
            'STATUS_FLAGS_GX5_RUN_IMU_UNAVAILABLE': cls.__constants['STATUS_FLAGS_GX5_RUN_IMU_UNAVAILABLE'],
            'STATUS_FLAGS_GX5_RUN_GPS_UNAVAILABLE': cls.__constants['STATUS_FLAGS_GX5_RUN_GPS_UNAVAILABLE'],
            'STATUS_FLAGS_GX5_RUN_MATRIX_SINGULARITY': cls.__constants['STATUS_FLAGS_GX5_RUN_MATRIX_SINGULARITY'],
            'STATUS_FLAGS_GX5_RUN_POSITION_COVARIANCE_WARNING': cls.__constants['STATUS_FLAGS_GX5_RUN_POSITION_COVARIANCE_WARNING'],
            'STATUS_FLAGS_GX5_RUN_VELOCITY_COVARIANCE_WARNING': cls.__constants['STATUS_FLAGS_GX5_RUN_VELOCITY_COVARIANCE_WARNING'],
            'STATUS_FLAGS_GX5_RUN_ATTITUDE_COVARIANCE_WARNING': cls.__constants['STATUS_FLAGS_GX5_RUN_ATTITUDE_COVARIANCE_WARNING'],
            'STATUS_FLAGS_GX5_RUN_NAN_IN_SOLUTION_WARNING': cls.__constants['STATUS_FLAGS_GX5_RUN_NAN_IN_SOLUTION_WARNING'],
            'STATUS_FLAGS_GX5_RUN_GYRO_BIAS_EST_HIGH_WARNING': cls.__constants['STATUS_FLAGS_GX5_RUN_GYRO_BIAS_EST_HIGH_WARNING'],
            'STATUS_FLAGS_GX5_RUN_ACCEL_BIAS_EST_HIGH_WARNING': cls.__constants['STATUS_FLAGS_GX5_RUN_ACCEL_BIAS_EST_HIGH_WARNING'],
            'STATUS_FLAGS_GX5_RUN_GYRO_SCALE_FACTOR_EST_HIGH_WARNING': cls.__constants['STATUS_FLAGS_GX5_RUN_GYRO_SCALE_FACTOR_EST_HIGH_WARNING'],
            'STATUS_FLAGS_GX5_RUN_ACCEL_SCALE_FACTOR_EST_HIGH_WARNING': cls.__constants['STATUS_FLAGS_GX5_RUN_ACCEL_SCALE_FACTOR_EST_HIGH_WARNING'],
            'STATUS_FLAGS_GX5_RUN_MAG_BIAS_EST_HIGH_WARNING': cls.__constants['STATUS_FLAGS_GX5_RUN_MAG_BIAS_EST_HIGH_WARNING'],
            'STATUS_FLAGS_GX5_RUN_ANT_OFFSET_CORRECTION_EST_HIGH_WARNING': cls.__constants['STATUS_FLAGS_GX5_RUN_ANT_OFFSET_CORRECTION_EST_HIGH_WARNING'],
            'STATUS_FLAGS_GX5_RUN_MAG_HARD_IRON_EST_HIGH_WARNING': cls.__constants['STATUS_FLAGS_GX5_RUN_MAG_HARD_IRON_EST_HIGH_WARNING'],
            'STATUS_FLAGS_GX5_RUN_MAG_SOFT_IRON_EST_HIGH_WARNING': cls.__constants['STATUS_FLAGS_GX5_RUN_MAG_SOFT_IRON_EST_HIGH_WARNING'],
            'STATUS_FLAGS_GQ7_FILTER_CONDITION_STABLE': cls.__constants['STATUS_FLAGS_GQ7_FILTER_CONDITION_STABLE'],
            'STATUS_FLAGS_GQ7_FILTER_CONDITION_CONVERGING': cls.__constants['STATUS_FLAGS_GQ7_FILTER_CONDITION_CONVERGING'],
            'STATUS_FLAGS_GQ7_FILTER_CONDITION_UNSTABLE': cls.__constants['STATUS_FLAGS_GQ7_FILTER_CONDITION_UNSTABLE'],
            'STATUS_FLAGS_GQ7_ROLL_PITCH_WARNING': cls.__constants['STATUS_FLAGS_GQ7_ROLL_PITCH_WARNING'],
            'STATUS_FLAGS_GQ7_HEADING_WARNING': cls.__constants['STATUS_FLAGS_GQ7_HEADING_WARNING'],
            'STATUS_FLAGS_GQ7_POSITION_WARNING': cls.__constants['STATUS_FLAGS_GQ7_POSITION_WARNING'],
            'STATUS_FLAGS_GQ7_VELOCITY_WARNING': cls.__constants['STATUS_FLAGS_GQ7_VELOCITY_WARNING'],
            'STATUS_FLAGS_GQ7_IMU_BIAS_WARNING': cls.__constants['STATUS_FLAGS_GQ7_IMU_BIAS_WARNING'],
            'STATUS_FLAGS_GQ7_GNSS_CLK_WARNING': cls.__constants['STATUS_FLAGS_GQ7_GNSS_CLK_WARNING'],
            'STATUS_FLAGS_GQ7_ANTENNA_LEVER_ARM_WARNING': cls.__constants['STATUS_FLAGS_GQ7_ANTENNA_LEVER_ARM_WARNING'],
            'STATUS_FLAGS_GQ7_MOUNTING_TRANSFORM_WARNING': cls.__constants['STATUS_FLAGS_GQ7_MOUNTING_TRANSFORM_WARNING'],
            'STATUS_FLAGS_GQ7_TIME_SYNC_WARNING': cls.__constants['STATUS_FLAGS_GQ7_TIME_SYNC_WARNING'],
            'STATUS_FLAGS_GQ7_SOLUTION_ERROR': cls.__constants['STATUS_FLAGS_GQ7_SOLUTION_ERROR'],
            'CONTINUOUS_BIT_FLAGS_GQ7_SYSTEM_CLOCK_FAILURE': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_SYSTEM_CLOCK_FAILURE'],
            'CONTINUOUS_BIT_FLAGS_GQ7_POWER_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_POWER_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_FIRMWARE_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FIRMWARE_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_TIMING_OVERLOAD': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_TIMING_OVERLOAD'],
            'CONTINUOUS_BIT_FLAGS_GQ7_BUFFER_OVERRUN': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_BUFFER_OVERRUN'],
            'CONTINUOUS_BIT_FLAGS_GQ7_IMU_IPC_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_IPC_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_IPC_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FILTER_IPC_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_IPC_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_IPC_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CLOCK_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_CLOCK_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_IMU_COMMUNICATION_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_COMMUNICATION_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_IMU_TIMING_OVERRUN': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_TIMING_OVERRUN'],
            'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_ACCEL': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_ACCEL'],
            'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_GYRO': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_GYRO'],
            'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_MAG': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_MAG'],
            'CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_GENERAL_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_GENERAL_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_OVER_RANGE': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_OVER_RANGE'],
            'CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_SELF_TEST_FAIL': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_SELF_TEST_FAIL'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_GENERAL_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_GENERAL_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_OVER_RANGE': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_OVER_RANGE'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_SELF_TEST_FAIL': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_SELF_TEST_FAIL'],
            'CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_GENERAL_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_GENERAL_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_OVER_RANGE': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_OVER_RANGE'],
            'CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_SELF_TEST_FAIL': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_SELF_TEST_FAIL'],
            'CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_GENERAL_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_GENERAL_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_OVER_RANGE': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_OVER_RANGE'],
            'CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_SELF_TEST_FAIL': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_SELF_TEST_FAIL'],
            'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_CLOCK_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FILTER_CLOCK_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_HARDWARE_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FILTER_HARDWARE_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_OVERRUN': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_OVERRUN'],
            'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_UNDERRUN': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_UNDERRUN'],
            'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_COMMUNICATION_ERROR': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FILTER_COMMUNICATION_ERROR'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_CLOCK_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_CLOCK_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_HARDWARE_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_HARDWARE_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_COMMUNICATION_ERROR': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_COMMUNICATION_ERROR'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GPS_TIME_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GPS_TIME_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_TIMING_OVERRUN': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_TIMING_OVERRUN'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_POWER_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_POWER_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_SHORTED': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_SHORTED'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_OPEN': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_OPEN'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_SOLUTION_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_SOLUTION_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_POWER_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_POWER_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_SHORTED': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_SHORTED'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_OPEN': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_OPEN'],
            'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_SOLUTION_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_SOLUTION_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_RTCM_COMMUNICATION_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_RTCM_COMMUNICATION_FAULT'],
            'CONTINUOUS_BIT_FLAGS_GQ7_RTK_DONGLE_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_GQ7_RTK_DONGLE_FAULT'],
            'CONTINUOUS_BIT_FLAGS_CV7_SYSTEM_CLOCK_FAILURE': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_SYSTEM_CLOCK_FAILURE'],
            'CONTINUOUS_BIT_FLAGS_CV7_POWER_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_POWER_FAULT'],
            'CONTINUOUS_BIT_FLAGS_CV7_FIRMWARE_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_FIRMWARE_FAULT'],
            'CONTINUOUS_BIT_FLAGS_CV7_TIMING_OVERLOAD': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_TIMING_OVERLOAD'],
            'CONTINUOUS_BIT_FLAGS_CV7_BUFFER_OVERRUN': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_BUFFER_OVERRUN'],
            'CONTINUOUS_BIT_FLAGS_CV7_IMU_PROCESS_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_PROCESS_FAULT'],
            'CONTINUOUS_BIT_FLAGS_CV7_IMU_DATA_RATE_MISMATCH': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_DATA_RATE_MISMATCH'],
            'CONTINUOUS_BIT_FLAGS_CV7_IMU_OVERRUN_DROPPED_DATA': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_OVERRUN_DROPPED_DATA'],
            'CONTINUOUS_BIT_FLAGS_CV7_IMU_STUCK': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_STUCK'],
            'CONTINUOUS_BIT_FLAGS_CV7_FILTER_PROCESS_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_PROCESS_FAULT'],
            'CONTINUOUS_BIT_FLAGS_CV7_FILTER_DROPPED_DATA': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_DROPPED_DATA'],
            'CONTINUOUS_BIT_FLAGS_CV7_FILTER_RATE_MISMATCH': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_RATE_MISMATCH'],
            'CONTINUOUS_BIT_FLAGS_CV7_FILTER_STUCK': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_STUCK'],
            'CONTINUOUS_BIT_FLAGS_CV7_IMU_CLOCK_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_CLOCK_FAULT'],
            'CONTINUOUS_BIT_FLAGS_CV7_IMU_COMMUNICATION_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_COMMUNICATION_FAULT'],
            'CONTINUOUS_BIT_FLAGS_CV7_IMU_TIMING_OVERRUN': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_TIMING_OVERRUN'],
            'CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_ACCELEROMETER': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_ACCELEROMETER'],
            'CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_GYROSCOPE': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_GYROSCOPE'],
            'CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_MAGNETOMETER': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_MAGNETOMETER'],
            'CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_GENERAL_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_GENERAL_FAULT'],
            'CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_OVER_RANGE': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_OVER_RANGE'],
            'CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_SELF_TEST_FAIL': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_SELF_TEST_FAIL'],
            'CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_GENERAL_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_GENERAL_FAULT'],
            'CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_OVER_RANGE': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_OVER_RANGE'],
            'CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_SELF_TEST_FAIL': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_SELF_TEST_FAIL'],
            'CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_GENERAL_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_GENERAL_FAULT'],
            'CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_OVER_RANGE': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_OVER_RANGE'],
            'CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_SELF_TEST_FAIL': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_SELF_TEST_FAIL'],
            'CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_GENERAL_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_GENERAL_FAULT'],
            'CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_OVER_RANGE': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_OVER_RANGE'],
            'CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_SELF_TEST_FAIL': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_SELF_TEST_FAIL'],
            'CONTINUOUS_BIT_FLAGS_CV7_FACTORY_BITS_INVALID': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_FACTORY_BITS_INVALID'],
            'CONTINUOUS_BIT_FLAGS_CV7_FILTER_FAULT': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_FAULT'],
            'CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_OVERRUN': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_OVERRUN'],
            'CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_UNDERRUN': cls.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_UNDERRUN'],
        }

    @property
    def UNSUPPORTED(self):
        """Message constant 'UNSUPPORTED'."""
        return Metaclass_HumanReadableStatus.__constants['UNSUPPORTED']

    @property
    def GNSS_STATE_NO_FIX(self):
        """Message constant 'GNSS_STATE_NO_FIX'."""
        return Metaclass_HumanReadableStatus.__constants['GNSS_STATE_NO_FIX']

    @property
    def GNSS_STATE_3D_FIX(self):
        """Message constant 'GNSS_STATE_3D_FIX'."""
        return Metaclass_HumanReadableStatus.__constants['GNSS_STATE_3D_FIX']

    @property
    def GNSS_STATE_SBAS(self):
        """Message constant 'GNSS_STATE_SBAS'."""
        return Metaclass_HumanReadableStatus.__constants['GNSS_STATE_SBAS']

    @property
    def GNSS_STATE_RTK_FLOAT(self):
        """Message constant 'GNSS_STATE_RTK_FLOAT'."""
        return Metaclass_HumanReadableStatus.__constants['GNSS_STATE_RTK_FLOAT']

    @property
    def GNSS_STATE_RTK_FIXED(self):
        """Message constant 'GNSS_STATE_RTK_FIXED'."""
        return Metaclass_HumanReadableStatus.__constants['GNSS_STATE_RTK_FIXED']

    @property
    def DUAL_ANTENNA_FIX_TYPE_NONE(self):
        """Message constant 'DUAL_ANTENNA_FIX_TYPE_NONE'."""
        return Metaclass_HumanReadableStatus.__constants['DUAL_ANTENNA_FIX_TYPE_NONE']

    @property
    def DUAL_ANTENNA_FIX_TYPE_FLOAT(self):
        """Message constant 'DUAL_ANTENNA_FIX_TYPE_FLOAT'."""
        return Metaclass_HumanReadableStatus.__constants['DUAL_ANTENNA_FIX_TYPE_FLOAT']

    @property
    def DUAL_ANTENNA_FIX_TYPE_FIXED(self):
        """Message constant 'DUAL_ANTENNA_FIX_TYPE_FIXED'."""
        return Metaclass_HumanReadableStatus.__constants['DUAL_ANTENNA_FIX_TYPE_FIXED']

    @property
    def FILTER_STATE_GX5_STARTUP(self):
        """Message constant 'FILTER_STATE_GX5_STARTUP'."""
        return Metaclass_HumanReadableStatus.__constants['FILTER_STATE_GX5_STARTUP']

    @property
    def FILTER_STATE_GX5_INIT(self):
        """Message constant 'FILTER_STATE_GX5_INIT'."""
        return Metaclass_HumanReadableStatus.__constants['FILTER_STATE_GX5_INIT']

    @property
    def FILTER_STATE_GX5_RUN_SOLUTION_VALID(self):
        """Message constant 'FILTER_STATE_GX5_RUN_SOLUTION_VALID'."""
        return Metaclass_HumanReadableStatus.__constants['FILTER_STATE_GX5_RUN_SOLUTION_VALID']

    @property
    def FILTER_STATE_GX5_RUN_SOLUTION_ERROR(self):
        """Message constant 'FILTER_STATE_GX5_RUN_SOLUTION_ERROR'."""
        return Metaclass_HumanReadableStatus.__constants['FILTER_STATE_GX5_RUN_SOLUTION_ERROR']

    @property
    def FILTER_STATE_GQ7_INIT(self):
        """Message constant 'FILTER_STATE_GQ7_INIT'."""
        return Metaclass_HumanReadableStatus.__constants['FILTER_STATE_GQ7_INIT']

    @property
    def FILTER_STATE_GQ7_VERT_GYRO(self):
        """Message constant 'FILTER_STATE_GQ7_VERT_GYRO'."""
        return Metaclass_HumanReadableStatus.__constants['FILTER_STATE_GQ7_VERT_GYRO']

    @property
    def FILTER_STATE_GQ7_AHRS(self):
        """Message constant 'FILTER_STATE_GQ7_AHRS'."""
        return Metaclass_HumanReadableStatus.__constants['FILTER_STATE_GQ7_AHRS']

    @property
    def FILTER_STATE_GQ7_FULL_NAV(self):
        """Message constant 'FILTER_STATE_GQ7_FULL_NAV'."""
        return Metaclass_HumanReadableStatus.__constants['FILTER_STATE_GQ7_FULL_NAV']

    @property
    def STATUS_FLAGS_GX5_INIT_NO_ATTITUDE(self):
        """Message constant 'STATUS_FLAGS_GX5_INIT_NO_ATTITUDE'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_INIT_NO_ATTITUDE']

    @property
    def STATUS_FLAGS_GX5_INIT_NO_POSITION_VELOCITY(self):
        """Message constant 'STATUS_FLAGS_GX5_INIT_NO_POSITION_VELOCITY'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_INIT_NO_POSITION_VELOCITY']

    @property
    def STATUS_FLAGS_GX5_RUN_IMU_UNAVAILABLE(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_IMU_UNAVAILABLE'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_IMU_UNAVAILABLE']

    @property
    def STATUS_FLAGS_GX5_RUN_GPS_UNAVAILABLE(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_GPS_UNAVAILABLE'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_GPS_UNAVAILABLE']

    @property
    def STATUS_FLAGS_GX5_RUN_MATRIX_SINGULARITY(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_MATRIX_SINGULARITY'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_MATRIX_SINGULARITY']

    @property
    def STATUS_FLAGS_GX5_RUN_POSITION_COVARIANCE_WARNING(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_POSITION_COVARIANCE_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_POSITION_COVARIANCE_WARNING']

    @property
    def STATUS_FLAGS_GX5_RUN_VELOCITY_COVARIANCE_WARNING(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_VELOCITY_COVARIANCE_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_VELOCITY_COVARIANCE_WARNING']

    @property
    def STATUS_FLAGS_GX5_RUN_ATTITUDE_COVARIANCE_WARNING(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_ATTITUDE_COVARIANCE_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_ATTITUDE_COVARIANCE_WARNING']

    @property
    def STATUS_FLAGS_GX5_RUN_NAN_IN_SOLUTION_WARNING(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_NAN_IN_SOLUTION_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_NAN_IN_SOLUTION_WARNING']

    @property
    def STATUS_FLAGS_GX5_RUN_GYRO_BIAS_EST_HIGH_WARNING(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_GYRO_BIAS_EST_HIGH_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_GYRO_BIAS_EST_HIGH_WARNING']

    @property
    def STATUS_FLAGS_GX5_RUN_ACCEL_BIAS_EST_HIGH_WARNING(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_ACCEL_BIAS_EST_HIGH_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_ACCEL_BIAS_EST_HIGH_WARNING']

    @property
    def STATUS_FLAGS_GX5_RUN_GYRO_SCALE_FACTOR_EST_HIGH_WARNING(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_GYRO_SCALE_FACTOR_EST_HIGH_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_GYRO_SCALE_FACTOR_EST_HIGH_WARNING']

    @property
    def STATUS_FLAGS_GX5_RUN_ACCEL_SCALE_FACTOR_EST_HIGH_WARNING(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_ACCEL_SCALE_FACTOR_EST_HIGH_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_ACCEL_SCALE_FACTOR_EST_HIGH_WARNING']

    @property
    def STATUS_FLAGS_GX5_RUN_MAG_BIAS_EST_HIGH_WARNING(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_MAG_BIAS_EST_HIGH_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_MAG_BIAS_EST_HIGH_WARNING']

    @property
    def STATUS_FLAGS_GX5_RUN_ANT_OFFSET_CORRECTION_EST_HIGH_WARNING(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_ANT_OFFSET_CORRECTION_EST_HIGH_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_ANT_OFFSET_CORRECTION_EST_HIGH_WARNING']

    @property
    def STATUS_FLAGS_GX5_RUN_MAG_HARD_IRON_EST_HIGH_WARNING(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_MAG_HARD_IRON_EST_HIGH_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_MAG_HARD_IRON_EST_HIGH_WARNING']

    @property
    def STATUS_FLAGS_GX5_RUN_MAG_SOFT_IRON_EST_HIGH_WARNING(self):
        """Message constant 'STATUS_FLAGS_GX5_RUN_MAG_SOFT_IRON_EST_HIGH_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GX5_RUN_MAG_SOFT_IRON_EST_HIGH_WARNING']

    @property
    def STATUS_FLAGS_GQ7_FILTER_CONDITION_STABLE(self):
        """Message constant 'STATUS_FLAGS_GQ7_FILTER_CONDITION_STABLE'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GQ7_FILTER_CONDITION_STABLE']

    @property
    def STATUS_FLAGS_GQ7_FILTER_CONDITION_CONVERGING(self):
        """Message constant 'STATUS_FLAGS_GQ7_FILTER_CONDITION_CONVERGING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GQ7_FILTER_CONDITION_CONVERGING']

    @property
    def STATUS_FLAGS_GQ7_FILTER_CONDITION_UNSTABLE(self):
        """Message constant 'STATUS_FLAGS_GQ7_FILTER_CONDITION_UNSTABLE'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GQ7_FILTER_CONDITION_UNSTABLE']

    @property
    def STATUS_FLAGS_GQ7_ROLL_PITCH_WARNING(self):
        """Message constant 'STATUS_FLAGS_GQ7_ROLL_PITCH_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GQ7_ROLL_PITCH_WARNING']

    @property
    def STATUS_FLAGS_GQ7_HEADING_WARNING(self):
        """Message constant 'STATUS_FLAGS_GQ7_HEADING_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GQ7_HEADING_WARNING']

    @property
    def STATUS_FLAGS_GQ7_POSITION_WARNING(self):
        """Message constant 'STATUS_FLAGS_GQ7_POSITION_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GQ7_POSITION_WARNING']

    @property
    def STATUS_FLAGS_GQ7_VELOCITY_WARNING(self):
        """Message constant 'STATUS_FLAGS_GQ7_VELOCITY_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GQ7_VELOCITY_WARNING']

    @property
    def STATUS_FLAGS_GQ7_IMU_BIAS_WARNING(self):
        """Message constant 'STATUS_FLAGS_GQ7_IMU_BIAS_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GQ7_IMU_BIAS_WARNING']

    @property
    def STATUS_FLAGS_GQ7_GNSS_CLK_WARNING(self):
        """Message constant 'STATUS_FLAGS_GQ7_GNSS_CLK_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GQ7_GNSS_CLK_WARNING']

    @property
    def STATUS_FLAGS_GQ7_ANTENNA_LEVER_ARM_WARNING(self):
        """Message constant 'STATUS_FLAGS_GQ7_ANTENNA_LEVER_ARM_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GQ7_ANTENNA_LEVER_ARM_WARNING']

    @property
    def STATUS_FLAGS_GQ7_MOUNTING_TRANSFORM_WARNING(self):
        """Message constant 'STATUS_FLAGS_GQ7_MOUNTING_TRANSFORM_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GQ7_MOUNTING_TRANSFORM_WARNING']

    @property
    def STATUS_FLAGS_GQ7_TIME_SYNC_WARNING(self):
        """Message constant 'STATUS_FLAGS_GQ7_TIME_SYNC_WARNING'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GQ7_TIME_SYNC_WARNING']

    @property
    def STATUS_FLAGS_GQ7_SOLUTION_ERROR(self):
        """Message constant 'STATUS_FLAGS_GQ7_SOLUTION_ERROR'."""
        return Metaclass_HumanReadableStatus.__constants['STATUS_FLAGS_GQ7_SOLUTION_ERROR']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_SYSTEM_CLOCK_FAILURE(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_SYSTEM_CLOCK_FAILURE'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_SYSTEM_CLOCK_FAILURE']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_POWER_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_POWER_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_POWER_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_FIRMWARE_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_FIRMWARE_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FIRMWARE_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_TIMING_OVERLOAD(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_TIMING_OVERLOAD'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_TIMING_OVERLOAD']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_BUFFER_OVERRUN(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_BUFFER_OVERRUN'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_BUFFER_OVERRUN']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_IMU_IPC_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_IPC_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_IPC_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_FILTER_IPC_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_IPC_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FILTER_IPC_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_IPC_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_IPC_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_IPC_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_IMU_CLOCK_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CLOCK_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_CLOCK_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_IMU_COMMUNICATION_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_COMMUNICATION_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_COMMUNICATION_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_IMU_TIMING_OVERRUN(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_TIMING_OVERRUN'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_TIMING_OVERRUN']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_ACCEL(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_ACCEL'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_ACCEL']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_GYRO(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_GYRO'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_GYRO']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_MAG(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_MAG'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_MAG']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_GENERAL_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_GENERAL_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_GENERAL_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_OVER_RANGE(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_OVER_RANGE'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_OVER_RANGE']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_SELF_TEST_FAIL(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_SELF_TEST_FAIL'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_SELF_TEST_FAIL']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_GENERAL_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_GENERAL_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_GENERAL_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_OVER_RANGE(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_OVER_RANGE'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_OVER_RANGE']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_SELF_TEST_FAIL(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_SELF_TEST_FAIL'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_SELF_TEST_FAIL']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_GENERAL_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_GENERAL_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_GENERAL_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_OVER_RANGE(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_OVER_RANGE'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_OVER_RANGE']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_SELF_TEST_FAIL(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_SELF_TEST_FAIL'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_SELF_TEST_FAIL']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_GENERAL_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_GENERAL_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_GENERAL_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_OVER_RANGE(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_OVER_RANGE'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_OVER_RANGE']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_SELF_TEST_FAIL(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_SELF_TEST_FAIL'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_SELF_TEST_FAIL']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_FILTER_CLOCK_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_CLOCK_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FILTER_CLOCK_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_FILTER_HARDWARE_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_HARDWARE_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FILTER_HARDWARE_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_OVERRUN(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_OVERRUN'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_OVERRUN']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_UNDERRUN(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_UNDERRUN'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_UNDERRUN']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_FILTER_COMMUNICATION_ERROR(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_COMMUNICATION_ERROR'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_FILTER_COMMUNICATION_ERROR']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_CLOCK_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_CLOCK_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_CLOCK_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_HARDWARE_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_HARDWARE_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_HARDWARE_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_COMMUNICATION_ERROR(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_COMMUNICATION_ERROR'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_COMMUNICATION_ERROR']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GPS_TIME_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GPS_TIME_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GPS_TIME_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_TIMING_OVERRUN(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_TIMING_OVERRUN'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_TIMING_OVERRUN']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_POWER_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_POWER_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_POWER_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_SHORTED(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_SHORTED'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_SHORTED']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_OPEN(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_OPEN'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_OPEN']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_SOLUTION_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_SOLUTION_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_SOLUTION_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_POWER_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_POWER_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_POWER_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_SHORTED(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_SHORTED'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_SHORTED']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_OPEN(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_OPEN'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_OPEN']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_SOLUTION_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_SOLUTION_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_SOLUTION_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_RTCM_COMMUNICATION_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_RTCM_COMMUNICATION_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_RTCM_COMMUNICATION_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_GQ7_RTK_DONGLE_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_GQ7_RTK_DONGLE_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_GQ7_RTK_DONGLE_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_SYSTEM_CLOCK_FAILURE(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_SYSTEM_CLOCK_FAILURE'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_SYSTEM_CLOCK_FAILURE']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_POWER_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_POWER_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_POWER_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_FIRMWARE_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_FIRMWARE_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_FIRMWARE_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_TIMING_OVERLOAD(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_TIMING_OVERLOAD'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_TIMING_OVERLOAD']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_BUFFER_OVERRUN(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_BUFFER_OVERRUN'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_BUFFER_OVERRUN']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_IMU_PROCESS_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_PROCESS_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_PROCESS_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_IMU_DATA_RATE_MISMATCH(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_DATA_RATE_MISMATCH'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_DATA_RATE_MISMATCH']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_IMU_OVERRUN_DROPPED_DATA(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_OVERRUN_DROPPED_DATA'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_OVERRUN_DROPPED_DATA']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_IMU_STUCK(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_STUCK'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_STUCK']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_FILTER_PROCESS_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_PROCESS_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_PROCESS_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_FILTER_DROPPED_DATA(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_DROPPED_DATA'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_DROPPED_DATA']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_FILTER_RATE_MISMATCH(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_RATE_MISMATCH'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_RATE_MISMATCH']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_FILTER_STUCK(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_STUCK'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_STUCK']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_IMU_CLOCK_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_CLOCK_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_CLOCK_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_IMU_COMMUNICATION_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_COMMUNICATION_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_COMMUNICATION_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_IMU_TIMING_OVERRUN(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_TIMING_OVERRUN'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_TIMING_OVERRUN']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_ACCELEROMETER(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_ACCELEROMETER'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_ACCELEROMETER']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_GYROSCOPE(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_GYROSCOPE'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_GYROSCOPE']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_MAGNETOMETER(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_MAGNETOMETER'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_MAGNETOMETER']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_GENERAL_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_GENERAL_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_GENERAL_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_OVER_RANGE(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_OVER_RANGE'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_OVER_RANGE']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_SELF_TEST_FAIL(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_SELF_TEST_FAIL'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_SELF_TEST_FAIL']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_GENERAL_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_GENERAL_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_GENERAL_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_OVER_RANGE(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_OVER_RANGE'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_OVER_RANGE']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_SELF_TEST_FAIL(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_SELF_TEST_FAIL'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_SELF_TEST_FAIL']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_GENERAL_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_GENERAL_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_GENERAL_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_OVER_RANGE(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_OVER_RANGE'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_OVER_RANGE']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_SELF_TEST_FAIL(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_SELF_TEST_FAIL'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_SELF_TEST_FAIL']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_GENERAL_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_GENERAL_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_GENERAL_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_OVER_RANGE(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_OVER_RANGE'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_OVER_RANGE']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_SELF_TEST_FAIL(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_SELF_TEST_FAIL'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_SELF_TEST_FAIL']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_FACTORY_BITS_INVALID(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_FACTORY_BITS_INVALID'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_FACTORY_BITS_INVALID']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_FILTER_FAULT(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_FAULT'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_FAULT']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_OVERRUN(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_OVERRUN'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_OVERRUN']

    @property
    def CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_UNDERRUN(self):
        """Message constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_UNDERRUN'."""
        return Metaclass_HumanReadableStatus.__constants['CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_UNDERRUN']


class HumanReadableStatus(metaclass=Metaclass_HumanReadableStatus):
    """
    Message class 'HumanReadableStatus'.

    Constants:
      UNSUPPORTED
      GNSS_STATE_NO_FIX
      GNSS_STATE_3D_FIX
      GNSS_STATE_SBAS
      GNSS_STATE_RTK_FLOAT
      GNSS_STATE_RTK_FIXED
      DUAL_ANTENNA_FIX_TYPE_NONE
      DUAL_ANTENNA_FIX_TYPE_FLOAT
      DUAL_ANTENNA_FIX_TYPE_FIXED
      FILTER_STATE_GX5_STARTUP
      FILTER_STATE_GX5_INIT
      FILTER_STATE_GX5_RUN_SOLUTION_VALID
      FILTER_STATE_GX5_RUN_SOLUTION_ERROR
      FILTER_STATE_GQ7_INIT
      FILTER_STATE_GQ7_VERT_GYRO
      FILTER_STATE_GQ7_AHRS
      FILTER_STATE_GQ7_FULL_NAV
      STATUS_FLAGS_GX5_INIT_NO_ATTITUDE
      STATUS_FLAGS_GX5_INIT_NO_POSITION_VELOCITY
      STATUS_FLAGS_GX5_RUN_IMU_UNAVAILABLE
      STATUS_FLAGS_GX5_RUN_GPS_UNAVAILABLE
      STATUS_FLAGS_GX5_RUN_MATRIX_SINGULARITY
      STATUS_FLAGS_GX5_RUN_POSITION_COVARIANCE_WARNING
      STATUS_FLAGS_GX5_RUN_VELOCITY_COVARIANCE_WARNING
      STATUS_FLAGS_GX5_RUN_ATTITUDE_COVARIANCE_WARNING
      STATUS_FLAGS_GX5_RUN_NAN_IN_SOLUTION_WARNING
      STATUS_FLAGS_GX5_RUN_GYRO_BIAS_EST_HIGH_WARNING
      STATUS_FLAGS_GX5_RUN_ACCEL_BIAS_EST_HIGH_WARNING
      STATUS_FLAGS_GX5_RUN_GYRO_SCALE_FACTOR_EST_HIGH_WARNING
      STATUS_FLAGS_GX5_RUN_ACCEL_SCALE_FACTOR_EST_HIGH_WARNING
      STATUS_FLAGS_GX5_RUN_MAG_BIAS_EST_HIGH_WARNING
      STATUS_FLAGS_GX5_RUN_ANT_OFFSET_CORRECTION_EST_HIGH_WARNING
      STATUS_FLAGS_GX5_RUN_MAG_HARD_IRON_EST_HIGH_WARNING
      STATUS_FLAGS_GX5_RUN_MAG_SOFT_IRON_EST_HIGH_WARNING
      STATUS_FLAGS_GQ7_FILTER_CONDITION_STABLE
      STATUS_FLAGS_GQ7_FILTER_CONDITION_CONVERGING
      STATUS_FLAGS_GQ7_FILTER_CONDITION_UNSTABLE
      STATUS_FLAGS_GQ7_ROLL_PITCH_WARNING
      STATUS_FLAGS_GQ7_HEADING_WARNING
      STATUS_FLAGS_GQ7_POSITION_WARNING
      STATUS_FLAGS_GQ7_VELOCITY_WARNING
      STATUS_FLAGS_GQ7_IMU_BIAS_WARNING
      STATUS_FLAGS_GQ7_GNSS_CLK_WARNING
      STATUS_FLAGS_GQ7_ANTENNA_LEVER_ARM_WARNING
      STATUS_FLAGS_GQ7_MOUNTING_TRANSFORM_WARNING
      STATUS_FLAGS_GQ7_TIME_SYNC_WARNING
      STATUS_FLAGS_GQ7_SOLUTION_ERROR
      CONTINUOUS_BIT_FLAGS_GQ7_SYSTEM_CLOCK_FAILURE
      CONTINUOUS_BIT_FLAGS_GQ7_POWER_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_FIRMWARE_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_TIMING_OVERLOAD
      CONTINUOUS_BIT_FLAGS_GQ7_BUFFER_OVERRUN
      CONTINUOUS_BIT_FLAGS_GQ7_IMU_IPC_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_FILTER_IPC_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_IPC_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_IMU_CLOCK_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_IMU_COMMUNICATION_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_IMU_TIMING_OVERRUN
      CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_ACCEL
      CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_GYRO
      CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_MAG
      CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_GENERAL_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_OVER_RANGE
      CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_SELF_TEST_FAIL
      CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_GENERAL_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_OVER_RANGE
      CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_SELF_TEST_FAIL
      CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_GENERAL_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_OVER_RANGE
      CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_SELF_TEST_FAIL
      CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_GENERAL_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_OVER_RANGE
      CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_SELF_TEST_FAIL
      CONTINUOUS_BIT_FLAGS_GQ7_FILTER_CLOCK_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_FILTER_HARDWARE_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_OVERRUN
      CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_UNDERRUN
      CONTINUOUS_BIT_FLAGS_GQ7_FILTER_COMMUNICATION_ERROR
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_CLOCK_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_HARDWARE_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_COMMUNICATION_ERROR
      CONTINUOUS_BIT_FLAGS_GQ7_GPS_TIME_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_TIMING_OVERRUN
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_POWER_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_SHORTED
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_OPEN
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_SOLUTION_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_POWER_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_SHORTED
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_OPEN
      CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_SOLUTION_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_RTCM_COMMUNICATION_FAULT
      CONTINUOUS_BIT_FLAGS_GQ7_RTK_DONGLE_FAULT
      CONTINUOUS_BIT_FLAGS_CV7_SYSTEM_CLOCK_FAILURE
      CONTINUOUS_BIT_FLAGS_CV7_POWER_FAULT
      CONTINUOUS_BIT_FLAGS_CV7_FIRMWARE_FAULT
      CONTINUOUS_BIT_FLAGS_CV7_TIMING_OVERLOAD
      CONTINUOUS_BIT_FLAGS_CV7_BUFFER_OVERRUN
      CONTINUOUS_BIT_FLAGS_CV7_IMU_PROCESS_FAULT
      CONTINUOUS_BIT_FLAGS_CV7_IMU_DATA_RATE_MISMATCH
      CONTINUOUS_BIT_FLAGS_CV7_IMU_OVERRUN_DROPPED_DATA
      CONTINUOUS_BIT_FLAGS_CV7_IMU_STUCK
      CONTINUOUS_BIT_FLAGS_CV7_FILTER_PROCESS_FAULT
      CONTINUOUS_BIT_FLAGS_CV7_FILTER_DROPPED_DATA
      CONTINUOUS_BIT_FLAGS_CV7_FILTER_RATE_MISMATCH
      CONTINUOUS_BIT_FLAGS_CV7_FILTER_STUCK
      CONTINUOUS_BIT_FLAGS_CV7_IMU_CLOCK_FAULT
      CONTINUOUS_BIT_FLAGS_CV7_IMU_COMMUNICATION_FAULT
      CONTINUOUS_BIT_FLAGS_CV7_IMU_TIMING_OVERRUN
      CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_ACCELEROMETER
      CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_GYROSCOPE
      CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_MAGNETOMETER
      CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_GENERAL_FAULT
      CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_OVER_RANGE
      CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_SELF_TEST_FAIL
      CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_GENERAL_FAULT
      CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_OVER_RANGE
      CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_SELF_TEST_FAIL
      CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_GENERAL_FAULT
      CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_OVER_RANGE
      CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_SELF_TEST_FAIL
      CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_GENERAL_FAULT
      CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_OVER_RANGE
      CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_SELF_TEST_FAIL
      CONTINUOUS_BIT_FLAGS_CV7_FACTORY_BITS_INVALID
      CONTINUOUS_BIT_FLAGS_CV7_FILTER_FAULT
      CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_OVERRUN
      CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_UNDERRUN
    """

    __slots__ = [
        '_header',
        '_device_info',
        '_gnss_state',
        '_dual_antenna_fix_type',
        '_filter_state',
        '_status_flags',
        '_continuous_bit_flags',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'device_info': 'microstrain_inertial_msgs/MipBaseDeviceInfo',
        'gnss_state': 'string',
        'dual_antenna_fix_type': 'string',
        'filter_state': 'string',
        'status_flags': 'sequence<string>',
        'continuous_bit_flags': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipBaseDeviceInfo'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from microstrain_inertial_msgs.msg import MipBaseDeviceInfo
        self.device_info = kwargs.get('device_info', MipBaseDeviceInfo())
        self.gnss_state = kwargs.get('gnss_state', str())
        self.dual_antenna_fix_type = kwargs.get('dual_antenna_fix_type', str())
        self.filter_state = kwargs.get('filter_state', str())
        self.status_flags = kwargs.get('status_flags', [])
        self.continuous_bit_flags = kwargs.get('continuous_bit_flags', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.device_info != other.device_info:
            return False
        if self.gnss_state != other.gnss_state:
            return False
        if self.dual_antenna_fix_type != other.dual_antenna_fix_type:
            return False
        if self.filter_state != other.filter_state:
            return False
        if self.status_flags != other.status_flags:
            return False
        if self.continuous_bit_flags != other.continuous_bit_flags:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def device_info(self):
        """Message field 'device_info'."""
        return self._device_info

    @device_info.setter
    def device_info(self, value):
        if __debug__:
            from microstrain_inertial_msgs.msg import MipBaseDeviceInfo
            assert \
                isinstance(value, MipBaseDeviceInfo), \
                "The 'device_info' field must be a sub message of type 'MipBaseDeviceInfo'"
        self._device_info = value

    @builtins.property
    def gnss_state(self):
        """Message field 'gnss_state'."""
        return self._gnss_state

    @gnss_state.setter
    def gnss_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gnss_state' field must be of type 'str'"
        self._gnss_state = value

    @builtins.property
    def dual_antenna_fix_type(self):
        """Message field 'dual_antenna_fix_type'."""
        return self._dual_antenna_fix_type

    @dual_antenna_fix_type.setter
    def dual_antenna_fix_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'dual_antenna_fix_type' field must be of type 'str'"
        self._dual_antenna_fix_type = value

    @builtins.property
    def filter_state(self):
        """Message field 'filter_state'."""
        return self._filter_state

    @filter_state.setter
    def filter_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'filter_state' field must be of type 'str'"
        self._filter_state = value

    @builtins.property
    def status_flags(self):
        """Message field 'status_flags'."""
        return self._status_flags

    @status_flags.setter
    def status_flags(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'status_flags' field must be a set or sequence and each value of type 'str'"
        self._status_flags = value

    @builtins.property
    def continuous_bit_flags(self):
        """Message field 'continuous_bit_flags'."""
        return self._continuous_bit_flags

    @continuous_bit_flags.setter
    def continuous_bit_flags(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'continuous_bit_flags' field must be a set or sequence and each value of type 'str'"
        self._continuous_bit_flags = value
