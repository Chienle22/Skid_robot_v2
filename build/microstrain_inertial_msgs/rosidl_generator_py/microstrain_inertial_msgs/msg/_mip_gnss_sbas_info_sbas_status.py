# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipGnssSbasInfoSbasStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipGnssSbasInfoSbasStatus(type):
    """Metaclass of message 'MipGnssSbasInfoSbasStatus'."""

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
                'microstrain_inertial_msgs.msg.MipGnssSbasInfoSbasStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_gnss_sbas_info_sbas_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_gnss_sbas_info_sbas_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_gnss_sbas_info_sbas_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_gnss_sbas_info_sbas_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_gnss_sbas_info_sbas_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MipGnssSbasInfoSbasStatus(metaclass=Metaclass_MipGnssSbasInfoSbasStatus):
    """Message class 'MipGnssSbasInfoSbasStatus'."""

    __slots__ = [
        '_range_available',
        '_corrections_available',
        '_integrity_available',
        '_test_mode',
    ]

    _fields_and_field_types = {
        'range_available': 'boolean',
        'corrections_available': 'boolean',
        'integrity_available': 'boolean',
        'test_mode': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.range_available = kwargs.get('range_available', bool())
        self.corrections_available = kwargs.get('corrections_available', bool())
        self.integrity_available = kwargs.get('integrity_available', bool())
        self.test_mode = kwargs.get('test_mode', bool())

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
        if self.range_available != other.range_available:
            return False
        if self.corrections_available != other.corrections_available:
            return False
        if self.integrity_available != other.integrity_available:
            return False
        if self.test_mode != other.test_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def range_available(self):
        """Message field 'range_available'."""
        return self._range_available

    @range_available.setter
    def range_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'range_available' field must be of type 'bool'"
        self._range_available = value

    @builtins.property
    def corrections_available(self):
        """Message field 'corrections_available'."""
        return self._corrections_available

    @corrections_available.setter
    def corrections_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'corrections_available' field must be of type 'bool'"
        self._corrections_available = value

    @builtins.property
    def integrity_available(self):
        """Message field 'integrity_available'."""
        return self._integrity_available

    @integrity_available.setter
    def integrity_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'integrity_available' field must be of type 'bool'"
        self._integrity_available = value

    @builtins.property
    def test_mode(self):
        """Message field 'test_mode'."""
        return self._test_mode

    @test_mode.setter
    def test_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'test_mode' field must be of type 'bool'"
        self._test_mode = value
