# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipGnssFixInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipGnssFixInfo(type):
    """Metaclass of message 'MipGnssFixInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FIX_TYPE_FIX_3D': 0,
        'FIX_TYPE_FIX_2D': 1,
        'FIX_TYPE_FIX_TIME_ONLY': 2,
        'FIX_TYPE_FIX_NONE': 3,
        'FIX_TYPE_FIX_INVALID': 4,
        'FIX_TYPE_FIX_RTK_FLOAT': 5,
        'FIX_TYPE_FIX_RTK_FIXED': 6,
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
                'microstrain_inertial_msgs.msg.MipGnssFixInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_gnss_fix_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_gnss_fix_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_gnss_fix_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_gnss_fix_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_gnss_fix_info

            from microstrain_inertial_msgs.msg import MipGnssFixInfoFixFlags
            if MipGnssFixInfoFixFlags.__class__._TYPE_SUPPORT is None:
                MipGnssFixInfoFixFlags.__class__.__import_type_support__()

            from microstrain_inertial_msgs.msg import MipHeader
            if MipHeader.__class__._TYPE_SUPPORT is None:
                MipHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FIX_TYPE_FIX_3D': cls.__constants['FIX_TYPE_FIX_3D'],
            'FIX_TYPE_FIX_2D': cls.__constants['FIX_TYPE_FIX_2D'],
            'FIX_TYPE_FIX_TIME_ONLY': cls.__constants['FIX_TYPE_FIX_TIME_ONLY'],
            'FIX_TYPE_FIX_NONE': cls.__constants['FIX_TYPE_FIX_NONE'],
            'FIX_TYPE_FIX_INVALID': cls.__constants['FIX_TYPE_FIX_INVALID'],
            'FIX_TYPE_FIX_RTK_FLOAT': cls.__constants['FIX_TYPE_FIX_RTK_FLOAT'],
            'FIX_TYPE_FIX_RTK_FIXED': cls.__constants['FIX_TYPE_FIX_RTK_FIXED'],
        }

    @property
    def FIX_TYPE_FIX_3D(self):
        """Message constant 'FIX_TYPE_FIX_3D'."""
        return Metaclass_MipGnssFixInfo.__constants['FIX_TYPE_FIX_3D']

    @property
    def FIX_TYPE_FIX_2D(self):
        """Message constant 'FIX_TYPE_FIX_2D'."""
        return Metaclass_MipGnssFixInfo.__constants['FIX_TYPE_FIX_2D']

    @property
    def FIX_TYPE_FIX_TIME_ONLY(self):
        """Message constant 'FIX_TYPE_FIX_TIME_ONLY'."""
        return Metaclass_MipGnssFixInfo.__constants['FIX_TYPE_FIX_TIME_ONLY']

    @property
    def FIX_TYPE_FIX_NONE(self):
        """Message constant 'FIX_TYPE_FIX_NONE'."""
        return Metaclass_MipGnssFixInfo.__constants['FIX_TYPE_FIX_NONE']

    @property
    def FIX_TYPE_FIX_INVALID(self):
        """Message constant 'FIX_TYPE_FIX_INVALID'."""
        return Metaclass_MipGnssFixInfo.__constants['FIX_TYPE_FIX_INVALID']

    @property
    def FIX_TYPE_FIX_RTK_FLOAT(self):
        """Message constant 'FIX_TYPE_FIX_RTK_FLOAT'."""
        return Metaclass_MipGnssFixInfo.__constants['FIX_TYPE_FIX_RTK_FLOAT']

    @property
    def FIX_TYPE_FIX_RTK_FIXED(self):
        """Message constant 'FIX_TYPE_FIX_RTK_FIXED'."""
        return Metaclass_MipGnssFixInfo.__constants['FIX_TYPE_FIX_RTK_FIXED']


class MipGnssFixInfo(metaclass=Metaclass_MipGnssFixInfo):
    """
    Message class 'MipGnssFixInfo'.

    Constants:
      FIX_TYPE_FIX_3D
      FIX_TYPE_FIX_2D
      FIX_TYPE_FIX_TIME_ONLY
      FIX_TYPE_FIX_NONE
      FIX_TYPE_FIX_INVALID
      FIX_TYPE_FIX_RTK_FLOAT
      FIX_TYPE_FIX_RTK_FIXED
    """

    __slots__ = [
        '_header',
        '_fix_type',
        '_num_sv',
        '_fix_flags',
    ]

    _fields_and_field_types = {
        'header': 'microstrain_inertial_msgs/MipHeader',
        'fix_type': 'uint8',
        'num_sv': 'uint8',
        'fix_flags': 'microstrain_inertial_msgs/MipGnssFixInfoFixFlags',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipGnssFixInfoFixFlags'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from microstrain_inertial_msgs.msg import MipHeader
        self.header = kwargs.get('header', MipHeader())
        self.fix_type = kwargs.get('fix_type', int())
        self.num_sv = kwargs.get('num_sv', int())
        from microstrain_inertial_msgs.msg import MipGnssFixInfoFixFlags
        self.fix_flags = kwargs.get('fix_flags', MipGnssFixInfoFixFlags())

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
        if self.fix_type != other.fix_type:
            return False
        if self.num_sv != other.num_sv:
            return False
        if self.fix_flags != other.fix_flags:
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
    def fix_type(self):
        """Message field 'fix_type'."""
        return self._fix_type

    @fix_type.setter
    def fix_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fix_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fix_type' field must be an unsigned integer in [0, 255]"
        self._fix_type = value

    @builtins.property
    def num_sv(self):
        """Message field 'num_sv'."""
        return self._num_sv

    @num_sv.setter
    def num_sv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_sv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_sv' field must be an unsigned integer in [0, 255]"
        self._num_sv = value

    @builtins.property
    def fix_flags(self):
        """Message field 'fix_flags'."""
        return self._fix_flags

    @fix_flags.setter
    def fix_flags(self, value):
        if __debug__:
            from microstrain_inertial_msgs.msg import MipGnssFixInfoFixFlags
            assert \
                isinstance(value, MipGnssFixInfoFixFlags), \
                "The 'fix_flags' field must be a sub message of type 'MipGnssFixInfoFixFlags'"
        self._fix_flags = value
