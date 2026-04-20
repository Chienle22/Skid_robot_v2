# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipFilterStatusGx5StatusFlags.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipFilterStatusGx5StatusFlags(type):
    """Metaclass of message 'MipFilterStatusGx5StatusFlags'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'microstrain_inertial_msgs.msg.MipFilterStatusGx5StatusFlags')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_filter_status_gx5_status_flags
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_filter_status_gx5_status_flags
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_filter_status_gx5_status_flags
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_filter_status_gx5_status_flags
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_filter_status_gx5_status_flags

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MipFilterStatusGx5StatusFlags(metaclass=Metaclass_MipFilterStatusGx5StatusFlags):
    """Message class 'MipFilterStatusGx5StatusFlags'."""

    __slots__ = [
        '_init_no_attitude',
        '_init_no_position_velocity',
        '_run_imu_unavailable',
        '_run_gps_unavailable',
        '_run_matrix_singularity',
        '_run_position_covariance_warning',
        '_run_velocity_covariance_warning',
        '_run_attitude_covariance_warning',
        '_run_nan_in_solution_warning',
        '_run_gyro_bias_est_high_warning',
        '_run_accel_bias_est_high_warning',
        '_run_gyro_scale_factor_est_high_warning',
        '_run_accel_scale_factor_est_high_warning',
        '_run_mag_bias_est_high_warning',
        '_run_ant_offset_correction_est_high_warning',
        '_run_mag_hard_iron_est_high_warning',
        '_run_mag_soft_iron_est_high_warning',
    ]

    _fields_and_field_types = {
        'init_no_attitude': 'boolean',
        'init_no_position_velocity': 'boolean',
        'run_imu_unavailable': 'boolean',
        'run_gps_unavailable': 'boolean',
        'run_matrix_singularity': 'boolean',
        'run_position_covariance_warning': 'boolean',
        'run_velocity_covariance_warning': 'boolean',
        'run_attitude_covariance_warning': 'boolean',
        'run_nan_in_solution_warning': 'boolean',
        'run_gyro_bias_est_high_warning': 'boolean',
        'run_accel_bias_est_high_warning': 'boolean',
        'run_gyro_scale_factor_est_high_warning': 'boolean',
        'run_accel_scale_factor_est_high_warning': 'boolean',
        'run_mag_bias_est_high_warning': 'boolean',
        'run_ant_offset_correction_est_high_warning': 'boolean',
        'run_mag_hard_iron_est_high_warning': 'boolean',
        'run_mag_soft_iron_est_high_warning': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.init_no_attitude = kwargs.get('init_no_attitude', bool())
        self.init_no_position_velocity = kwargs.get('init_no_position_velocity', bool())
        self.run_imu_unavailable = kwargs.get('run_imu_unavailable', bool())
        self.run_gps_unavailable = kwargs.get('run_gps_unavailable', bool())
        self.run_matrix_singularity = kwargs.get('run_matrix_singularity', bool())
        self.run_position_covariance_warning = kwargs.get('run_position_covariance_warning', bool())
        self.run_velocity_covariance_warning = kwargs.get('run_velocity_covariance_warning', bool())
        self.run_attitude_covariance_warning = kwargs.get('run_attitude_covariance_warning', bool())
        self.run_nan_in_solution_warning = kwargs.get('run_nan_in_solution_warning', bool())
        self.run_gyro_bias_est_high_warning = kwargs.get('run_gyro_bias_est_high_warning', bool())
        self.run_accel_bias_est_high_warning = kwargs.get('run_accel_bias_est_high_warning', bool())
        self.run_gyro_scale_factor_est_high_warning = kwargs.get('run_gyro_scale_factor_est_high_warning', bool())
        self.run_accel_scale_factor_est_high_warning = kwargs.get('run_accel_scale_factor_est_high_warning', bool())
        self.run_mag_bias_est_high_warning = kwargs.get('run_mag_bias_est_high_warning', bool())
        self.run_ant_offset_correction_est_high_warning = kwargs.get('run_ant_offset_correction_est_high_warning', bool())
        self.run_mag_hard_iron_est_high_warning = kwargs.get('run_mag_hard_iron_est_high_warning', bool())
        self.run_mag_soft_iron_est_high_warning = kwargs.get('run_mag_soft_iron_est_high_warning', bool())

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
        if self.init_no_attitude != other.init_no_attitude:
            return False
        if self.init_no_position_velocity != other.init_no_position_velocity:
            return False
        if self.run_imu_unavailable != other.run_imu_unavailable:
            return False
        if self.run_gps_unavailable != other.run_gps_unavailable:
            return False
        if self.run_matrix_singularity != other.run_matrix_singularity:
            return False
        if self.run_position_covariance_warning != other.run_position_covariance_warning:
            return False
        if self.run_velocity_covariance_warning != other.run_velocity_covariance_warning:
            return False
        if self.run_attitude_covariance_warning != other.run_attitude_covariance_warning:
            return False
        if self.run_nan_in_solution_warning != other.run_nan_in_solution_warning:
            return False
        if self.run_gyro_bias_est_high_warning != other.run_gyro_bias_est_high_warning:
            return False
        if self.run_accel_bias_est_high_warning != other.run_accel_bias_est_high_warning:
            return False
        if self.run_gyro_scale_factor_est_high_warning != other.run_gyro_scale_factor_est_high_warning:
            return False
        if self.run_accel_scale_factor_est_high_warning != other.run_accel_scale_factor_est_high_warning:
            return False
        if self.run_mag_bias_est_high_warning != other.run_mag_bias_est_high_warning:
            return False
        if self.run_ant_offset_correction_est_high_warning != other.run_ant_offset_correction_est_high_warning:
            return False
        if self.run_mag_hard_iron_est_high_warning != other.run_mag_hard_iron_est_high_warning:
            return False
        if self.run_mag_soft_iron_est_high_warning != other.run_mag_soft_iron_est_high_warning:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def init_no_attitude(self):
        """Message field 'init_no_attitude'."""
        return self._init_no_attitude

    @init_no_attitude.setter
    def init_no_attitude(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'init_no_attitude' field must be of type 'bool'"
        self._init_no_attitude = value

    @builtins.property
    def init_no_position_velocity(self):
        """Message field 'init_no_position_velocity'."""
        return self._init_no_position_velocity

    @init_no_position_velocity.setter
    def init_no_position_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'init_no_position_velocity' field must be of type 'bool'"
        self._init_no_position_velocity = value

    @builtins.property
    def run_imu_unavailable(self):
        """Message field 'run_imu_unavailable'."""
        return self._run_imu_unavailable

    @run_imu_unavailable.setter
    def run_imu_unavailable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_imu_unavailable' field must be of type 'bool'"
        self._run_imu_unavailable = value

    @builtins.property
    def run_gps_unavailable(self):
        """Message field 'run_gps_unavailable'."""
        return self._run_gps_unavailable

    @run_gps_unavailable.setter
    def run_gps_unavailable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_gps_unavailable' field must be of type 'bool'"
        self._run_gps_unavailable = value

    @builtins.property
    def run_matrix_singularity(self):
        """Message field 'run_matrix_singularity'."""
        return self._run_matrix_singularity

    @run_matrix_singularity.setter
    def run_matrix_singularity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_matrix_singularity' field must be of type 'bool'"
        self._run_matrix_singularity = value

    @builtins.property
    def run_position_covariance_warning(self):
        """Message field 'run_position_covariance_warning'."""
        return self._run_position_covariance_warning

    @run_position_covariance_warning.setter
    def run_position_covariance_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_position_covariance_warning' field must be of type 'bool'"
        self._run_position_covariance_warning = value

    @builtins.property
    def run_velocity_covariance_warning(self):
        """Message field 'run_velocity_covariance_warning'."""
        return self._run_velocity_covariance_warning

    @run_velocity_covariance_warning.setter
    def run_velocity_covariance_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_velocity_covariance_warning' field must be of type 'bool'"
        self._run_velocity_covariance_warning = value

    @builtins.property
    def run_attitude_covariance_warning(self):
        """Message field 'run_attitude_covariance_warning'."""
        return self._run_attitude_covariance_warning

    @run_attitude_covariance_warning.setter
    def run_attitude_covariance_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_attitude_covariance_warning' field must be of type 'bool'"
        self._run_attitude_covariance_warning = value

    @builtins.property
    def run_nan_in_solution_warning(self):
        """Message field 'run_nan_in_solution_warning'."""
        return self._run_nan_in_solution_warning

    @run_nan_in_solution_warning.setter
    def run_nan_in_solution_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_nan_in_solution_warning' field must be of type 'bool'"
        self._run_nan_in_solution_warning = value

    @builtins.property
    def run_gyro_bias_est_high_warning(self):
        """Message field 'run_gyro_bias_est_high_warning'."""
        return self._run_gyro_bias_est_high_warning

    @run_gyro_bias_est_high_warning.setter
    def run_gyro_bias_est_high_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_gyro_bias_est_high_warning' field must be of type 'bool'"
        self._run_gyro_bias_est_high_warning = value

    @builtins.property
    def run_accel_bias_est_high_warning(self):
        """Message field 'run_accel_bias_est_high_warning'."""
        return self._run_accel_bias_est_high_warning

    @run_accel_bias_est_high_warning.setter
    def run_accel_bias_est_high_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_accel_bias_est_high_warning' field must be of type 'bool'"
        self._run_accel_bias_est_high_warning = value

    @builtins.property
    def run_gyro_scale_factor_est_high_warning(self):
        """Message field 'run_gyro_scale_factor_est_high_warning'."""
        return self._run_gyro_scale_factor_est_high_warning

    @run_gyro_scale_factor_est_high_warning.setter
    def run_gyro_scale_factor_est_high_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_gyro_scale_factor_est_high_warning' field must be of type 'bool'"
        self._run_gyro_scale_factor_est_high_warning = value

    @builtins.property
    def run_accel_scale_factor_est_high_warning(self):
        """Message field 'run_accel_scale_factor_est_high_warning'."""
        return self._run_accel_scale_factor_est_high_warning

    @run_accel_scale_factor_est_high_warning.setter
    def run_accel_scale_factor_est_high_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_accel_scale_factor_est_high_warning' field must be of type 'bool'"
        self._run_accel_scale_factor_est_high_warning = value

    @builtins.property
    def run_mag_bias_est_high_warning(self):
        """Message field 'run_mag_bias_est_high_warning'."""
        return self._run_mag_bias_est_high_warning

    @run_mag_bias_est_high_warning.setter
    def run_mag_bias_est_high_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_mag_bias_est_high_warning' field must be of type 'bool'"
        self._run_mag_bias_est_high_warning = value

    @builtins.property
    def run_ant_offset_correction_est_high_warning(self):
        """Message field 'run_ant_offset_correction_est_high_warning'."""
        return self._run_ant_offset_correction_est_high_warning

    @run_ant_offset_correction_est_high_warning.setter
    def run_ant_offset_correction_est_high_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_ant_offset_correction_est_high_warning' field must be of type 'bool'"
        self._run_ant_offset_correction_est_high_warning = value

    @builtins.property
    def run_mag_hard_iron_est_high_warning(self):
        """Message field 'run_mag_hard_iron_est_high_warning'."""
        return self._run_mag_hard_iron_est_high_warning

    @run_mag_hard_iron_est_high_warning.setter
    def run_mag_hard_iron_est_high_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_mag_hard_iron_est_high_warning' field must be of type 'bool'"
        self._run_mag_hard_iron_est_high_warning = value

    @builtins.property
    def run_mag_soft_iron_est_high_warning(self):
        """Message field 'run_mag_soft_iron_est_high_warning'."""
        return self._run_mag_soft_iron_est_high_warning

    @run_mag_soft_iron_est_high_warning.setter
    def run_mag_soft_iron_est_high_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'run_mag_soft_iron_est_high_warning' field must be of type 'bool'"
        self._run_mag_soft_iron_est_high_warning = value
