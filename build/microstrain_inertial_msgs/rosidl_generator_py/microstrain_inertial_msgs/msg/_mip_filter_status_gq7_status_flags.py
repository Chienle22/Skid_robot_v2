# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipFilterStatusGq7StatusFlags.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipFilterStatusGq7StatusFlags(type):
    """Metaclass of message 'MipFilterStatusGq7StatusFlags'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FILTER_CONDITION_STABLE': 1,
        'FILTER_CONDITION_CONVERGING': 2,
        'FILTER_CONDITION_UNSTABLE': 3,
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
                'microstrain_inertial_msgs.msg.MipFilterStatusGq7StatusFlags')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_filter_status_gq7_status_flags
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_filter_status_gq7_status_flags
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_filter_status_gq7_status_flags
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_filter_status_gq7_status_flags
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_filter_status_gq7_status_flags

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FILTER_CONDITION_STABLE': cls.__constants['FILTER_CONDITION_STABLE'],
            'FILTER_CONDITION_CONVERGING': cls.__constants['FILTER_CONDITION_CONVERGING'],
            'FILTER_CONDITION_UNSTABLE': cls.__constants['FILTER_CONDITION_UNSTABLE'],
        }

    @property
    def FILTER_CONDITION_STABLE(self):
        """Message constant 'FILTER_CONDITION_STABLE'."""
        return Metaclass_MipFilterStatusGq7StatusFlags.__constants['FILTER_CONDITION_STABLE']

    @property
    def FILTER_CONDITION_CONVERGING(self):
        """Message constant 'FILTER_CONDITION_CONVERGING'."""
        return Metaclass_MipFilterStatusGq7StatusFlags.__constants['FILTER_CONDITION_CONVERGING']

    @property
    def FILTER_CONDITION_UNSTABLE(self):
        """Message constant 'FILTER_CONDITION_UNSTABLE'."""
        return Metaclass_MipFilterStatusGq7StatusFlags.__constants['FILTER_CONDITION_UNSTABLE']


class MipFilterStatusGq7StatusFlags(metaclass=Metaclass_MipFilterStatusGq7StatusFlags):
    """
    Message class 'MipFilterStatusGq7StatusFlags'.

    Constants:
      FILTER_CONDITION_STABLE
      FILTER_CONDITION_CONVERGING
      FILTER_CONDITION_UNSTABLE
    """

    __slots__ = [
        '_filter_condition',
        '_roll_pitch_warning',
        '_heading_warning',
        '_position_warning',
        '_velocity_warning',
        '_imu_bias_warning',
        '_gnss_clk_warning',
        '_antenna_lever_arm_warning',
        '_mounting_transform_warning',
        '_time_sync_warning',
        '_solution_error',
    ]

    _fields_and_field_types = {
        'filter_condition': 'uint8',
        'roll_pitch_warning': 'boolean',
        'heading_warning': 'boolean',
        'position_warning': 'boolean',
        'velocity_warning': 'boolean',
        'imu_bias_warning': 'boolean',
        'gnss_clk_warning': 'boolean',
        'antenna_lever_arm_warning': 'boolean',
        'mounting_transform_warning': 'boolean',
        'time_sync_warning': 'boolean',
        'solution_error': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.filter_condition = kwargs.get('filter_condition', int())
        self.roll_pitch_warning = kwargs.get('roll_pitch_warning', bool())
        self.heading_warning = kwargs.get('heading_warning', bool())
        self.position_warning = kwargs.get('position_warning', bool())
        self.velocity_warning = kwargs.get('velocity_warning', bool())
        self.imu_bias_warning = kwargs.get('imu_bias_warning', bool())
        self.gnss_clk_warning = kwargs.get('gnss_clk_warning', bool())
        self.antenna_lever_arm_warning = kwargs.get('antenna_lever_arm_warning', bool())
        self.mounting_transform_warning = kwargs.get('mounting_transform_warning', bool())
        self.time_sync_warning = kwargs.get('time_sync_warning', bool())
        self.solution_error = kwargs.get('solution_error', bool())

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
        if self.filter_condition != other.filter_condition:
            return False
        if self.roll_pitch_warning != other.roll_pitch_warning:
            return False
        if self.heading_warning != other.heading_warning:
            return False
        if self.position_warning != other.position_warning:
            return False
        if self.velocity_warning != other.velocity_warning:
            return False
        if self.imu_bias_warning != other.imu_bias_warning:
            return False
        if self.gnss_clk_warning != other.gnss_clk_warning:
            return False
        if self.antenna_lever_arm_warning != other.antenna_lever_arm_warning:
            return False
        if self.mounting_transform_warning != other.mounting_transform_warning:
            return False
        if self.time_sync_warning != other.time_sync_warning:
            return False
        if self.solution_error != other.solution_error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def filter_condition(self):
        """Message field 'filter_condition'."""
        return self._filter_condition

    @filter_condition.setter
    def filter_condition(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'filter_condition' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'filter_condition' field must be an unsigned integer in [0, 255]"
        self._filter_condition = value

    @builtins.property
    def roll_pitch_warning(self):
        """Message field 'roll_pitch_warning'."""
        return self._roll_pitch_warning

    @roll_pitch_warning.setter
    def roll_pitch_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'roll_pitch_warning' field must be of type 'bool'"
        self._roll_pitch_warning = value

    @builtins.property
    def heading_warning(self):
        """Message field 'heading_warning'."""
        return self._heading_warning

    @heading_warning.setter
    def heading_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heading_warning' field must be of type 'bool'"
        self._heading_warning = value

    @builtins.property
    def position_warning(self):
        """Message field 'position_warning'."""
        return self._position_warning

    @position_warning.setter
    def position_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'position_warning' field must be of type 'bool'"
        self._position_warning = value

    @builtins.property
    def velocity_warning(self):
        """Message field 'velocity_warning'."""
        return self._velocity_warning

    @velocity_warning.setter
    def velocity_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'velocity_warning' field must be of type 'bool'"
        self._velocity_warning = value

    @builtins.property
    def imu_bias_warning(self):
        """Message field 'imu_bias_warning'."""
        return self._imu_bias_warning

    @imu_bias_warning.setter
    def imu_bias_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_bias_warning' field must be of type 'bool'"
        self._imu_bias_warning = value

    @builtins.property
    def gnss_clk_warning(self):
        """Message field 'gnss_clk_warning'."""
        return self._gnss_clk_warning

    @gnss_clk_warning.setter
    def gnss_clk_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gnss_clk_warning' field must be of type 'bool'"
        self._gnss_clk_warning = value

    @builtins.property
    def antenna_lever_arm_warning(self):
        """Message field 'antenna_lever_arm_warning'."""
        return self._antenna_lever_arm_warning

    @antenna_lever_arm_warning.setter
    def antenna_lever_arm_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'antenna_lever_arm_warning' field must be of type 'bool'"
        self._antenna_lever_arm_warning = value

    @builtins.property
    def mounting_transform_warning(self):
        """Message field 'mounting_transform_warning'."""
        return self._mounting_transform_warning

    @mounting_transform_warning.setter
    def mounting_transform_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mounting_transform_warning' field must be of type 'bool'"
        self._mounting_transform_warning = value

    @builtins.property
    def time_sync_warning(self):
        """Message field 'time_sync_warning'."""
        return self._time_sync_warning

    @time_sync_warning.setter
    def time_sync_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'time_sync_warning' field must be of type 'bool'"
        self._time_sync_warning = value

    @builtins.property
    def solution_error(self):
        """Message field 'solution_error'."""
        return self._solution_error

    @solution_error.setter
    def solution_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'solution_error' field must be of type 'bool'"
        self._solution_error = value
