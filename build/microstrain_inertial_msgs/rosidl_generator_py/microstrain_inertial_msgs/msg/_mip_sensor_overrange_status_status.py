# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipSensorOverrangeStatusStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipSensorOverrangeStatusStatus(type):
    """Metaclass of message 'MipSensorOverrangeStatusStatus'."""

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
                'microstrain_inertial_msgs.msg.MipSensorOverrangeStatusStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_sensor_overrange_status_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_sensor_overrange_status_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_sensor_overrange_status_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_sensor_overrange_status_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_sensor_overrange_status_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MipSensorOverrangeStatusStatus(metaclass=Metaclass_MipSensorOverrangeStatusStatus):
    """Message class 'MipSensorOverrangeStatusStatus'."""

    __slots__ = [
        '_accel_x',
        '_accel_y',
        '_accel_z',
        '_gyro_x',
        '_gyro_y',
        '_gyro_z',
        '_mag_x',
        '_mag_y',
        '_mag_z',
        '_press',
    ]

    _fields_and_field_types = {
        'accel_x': 'boolean',
        'accel_y': 'boolean',
        'accel_z': 'boolean',
        'gyro_x': 'boolean',
        'gyro_y': 'boolean',
        'gyro_z': 'boolean',
        'mag_x': 'boolean',
        'mag_y': 'boolean',
        'mag_z': 'boolean',
        'press': 'boolean',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accel_x = kwargs.get('accel_x', bool())
        self.accel_y = kwargs.get('accel_y', bool())
        self.accel_z = kwargs.get('accel_z', bool())
        self.gyro_x = kwargs.get('gyro_x', bool())
        self.gyro_y = kwargs.get('gyro_y', bool())
        self.gyro_z = kwargs.get('gyro_z', bool())
        self.mag_x = kwargs.get('mag_x', bool())
        self.mag_y = kwargs.get('mag_y', bool())
        self.mag_z = kwargs.get('mag_z', bool())
        self.press = kwargs.get('press', bool())

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
        if self.accel_x != other.accel_x:
            return False
        if self.accel_y != other.accel_y:
            return False
        if self.accel_z != other.accel_z:
            return False
        if self.gyro_x != other.gyro_x:
            return False
        if self.gyro_y != other.gyro_y:
            return False
        if self.gyro_z != other.gyro_z:
            return False
        if self.mag_x != other.mag_x:
            return False
        if self.mag_y != other.mag_y:
            return False
        if self.mag_z != other.mag_z:
            return False
        if self.press != other.press:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accel_x(self):
        """Message field 'accel_x'."""
        return self._accel_x

    @accel_x.setter
    def accel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accel_x' field must be of type 'bool'"
        self._accel_x = value

    @builtins.property
    def accel_y(self):
        """Message field 'accel_y'."""
        return self._accel_y

    @accel_y.setter
    def accel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accel_y' field must be of type 'bool'"
        self._accel_y = value

    @builtins.property
    def accel_z(self):
        """Message field 'accel_z'."""
        return self._accel_z

    @accel_z.setter
    def accel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accel_z' field must be of type 'bool'"
        self._accel_z = value

    @builtins.property
    def gyro_x(self):
        """Message field 'gyro_x'."""
        return self._gyro_x

    @gyro_x.setter
    def gyro_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gyro_x' field must be of type 'bool'"
        self._gyro_x = value

    @builtins.property
    def gyro_y(self):
        """Message field 'gyro_y'."""
        return self._gyro_y

    @gyro_y.setter
    def gyro_y(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gyro_y' field must be of type 'bool'"
        self._gyro_y = value

    @builtins.property
    def gyro_z(self):
        """Message field 'gyro_z'."""
        return self._gyro_z

    @gyro_z.setter
    def gyro_z(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gyro_z' field must be of type 'bool'"
        self._gyro_z = value

    @builtins.property
    def mag_x(self):
        """Message field 'mag_x'."""
        return self._mag_x

    @mag_x.setter
    def mag_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mag_x' field must be of type 'bool'"
        self._mag_x = value

    @builtins.property
    def mag_y(self):
        """Message field 'mag_y'."""
        return self._mag_y

    @mag_y.setter
    def mag_y(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mag_y' field must be of type 'bool'"
        self._mag_y = value

    @builtins.property
    def mag_z(self):
        """Message field 'mag_z'."""
        return self._mag_z

    @mag_z.setter
    def mag_z(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mag_z' field must be of type 'bool'"
        self._mag_z = value

    @builtins.property
    def press(self):
        """Message field 'press'."""
        return self._press

    @press.setter
    def press(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'press' field must be of type 'bool'"
        self._press = value
