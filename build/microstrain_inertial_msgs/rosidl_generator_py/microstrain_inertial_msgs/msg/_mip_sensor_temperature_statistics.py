# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipSensorTemperatureStatistics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipSensorTemperatureStatistics(type):
    """Metaclass of message 'MipSensorTemperatureStatistics'."""

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
                'microstrain_inertial_msgs.msg.MipSensorTemperatureStatistics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_sensor_temperature_statistics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_sensor_temperature_statistics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_sensor_temperature_statistics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_sensor_temperature_statistics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_sensor_temperature_statistics

            from microstrain_inertial_msgs.msg import MipHeader
            if MipHeader.__class__._TYPE_SUPPORT is None:
                MipHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MipSensorTemperatureStatistics(metaclass=Metaclass_MipSensorTemperatureStatistics):
    """Message class 'MipSensorTemperatureStatistics'."""

    __slots__ = [
        '_header',
        '_min_temp',
        '_max_temp',
        '_mean_temp',
    ]

    _fields_and_field_types = {
        'header': 'microstrain_inertial_msgs/MipHeader',
        'min_temp': 'float',
        'max_temp': 'float',
        'mean_temp': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from microstrain_inertial_msgs.msg import MipHeader
        self.header = kwargs.get('header', MipHeader())
        self.min_temp = kwargs.get('min_temp', float())
        self.max_temp = kwargs.get('max_temp', float())
        self.mean_temp = kwargs.get('mean_temp', float())

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
        if self.min_temp != other.min_temp:
            return False
        if self.max_temp != other.max_temp:
            return False
        if self.mean_temp != other.mean_temp:
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
            from microstrain_inertial_msgs.msg import MipHeader
            assert \
                isinstance(value, MipHeader), \
                "The 'header' field must be a sub message of type 'MipHeader'"
        self._header = value

    @builtins.property
    def min_temp(self):
        """Message field 'min_temp'."""
        return self._min_temp

    @min_temp.setter
    def min_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_temp = value

    @builtins.property
    def max_temp(self):
        """Message field 'max_temp'."""
        return self._max_temp

    @max_temp.setter
    def max_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_temp = value

    @builtins.property
    def mean_temp(self):
        """Message field 'mean_temp'."""
        return self._mean_temp

    @mean_temp.setter
    def mean_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mean_temp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mean_temp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mean_temp = value
