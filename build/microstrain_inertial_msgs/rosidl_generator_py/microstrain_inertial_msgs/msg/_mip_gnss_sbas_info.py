# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipGnssSbasInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipGnssSbasInfo(type):
    """Metaclass of message 'MipGnssSbasInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SBAS_SYSTEM_UNKNOWN': 0,
        'SBAS_SYSTEM_WAAS': 1,
        'SBAS_SYSTEM_EGNOS': 2,
        'SBAS_SYSTEM_MSAS': 3,
        'SBAS_SYSTEM_GAGAN': 4,
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
                'microstrain_inertial_msgs.msg.MipGnssSbasInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_gnss_sbas_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_gnss_sbas_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_gnss_sbas_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_gnss_sbas_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_gnss_sbas_info

            from microstrain_inertial_msgs.msg import MipGnssSbasInfoSbasStatus
            if MipGnssSbasInfoSbasStatus.__class__._TYPE_SUPPORT is None:
                MipGnssSbasInfoSbasStatus.__class__.__import_type_support__()

            from microstrain_inertial_msgs.msg import MipHeader
            if MipHeader.__class__._TYPE_SUPPORT is None:
                MipHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SBAS_SYSTEM_UNKNOWN': cls.__constants['SBAS_SYSTEM_UNKNOWN'],
            'SBAS_SYSTEM_WAAS': cls.__constants['SBAS_SYSTEM_WAAS'],
            'SBAS_SYSTEM_EGNOS': cls.__constants['SBAS_SYSTEM_EGNOS'],
            'SBAS_SYSTEM_MSAS': cls.__constants['SBAS_SYSTEM_MSAS'],
            'SBAS_SYSTEM_GAGAN': cls.__constants['SBAS_SYSTEM_GAGAN'],
        }

    @property
    def SBAS_SYSTEM_UNKNOWN(self):
        """Message constant 'SBAS_SYSTEM_UNKNOWN'."""
        return Metaclass_MipGnssSbasInfo.__constants['SBAS_SYSTEM_UNKNOWN']

    @property
    def SBAS_SYSTEM_WAAS(self):
        """Message constant 'SBAS_SYSTEM_WAAS'."""
        return Metaclass_MipGnssSbasInfo.__constants['SBAS_SYSTEM_WAAS']

    @property
    def SBAS_SYSTEM_EGNOS(self):
        """Message constant 'SBAS_SYSTEM_EGNOS'."""
        return Metaclass_MipGnssSbasInfo.__constants['SBAS_SYSTEM_EGNOS']

    @property
    def SBAS_SYSTEM_MSAS(self):
        """Message constant 'SBAS_SYSTEM_MSAS'."""
        return Metaclass_MipGnssSbasInfo.__constants['SBAS_SYSTEM_MSAS']

    @property
    def SBAS_SYSTEM_GAGAN(self):
        """Message constant 'SBAS_SYSTEM_GAGAN'."""
        return Metaclass_MipGnssSbasInfo.__constants['SBAS_SYSTEM_GAGAN']


class MipGnssSbasInfo(metaclass=Metaclass_MipGnssSbasInfo):
    """
    Message class 'MipGnssSbasInfo'.

    Constants:
      SBAS_SYSTEM_UNKNOWN
      SBAS_SYSTEM_WAAS
      SBAS_SYSTEM_EGNOS
      SBAS_SYSTEM_MSAS
      SBAS_SYSTEM_GAGAN
    """

    __slots__ = [
        '_header',
        '_time_of_week',
        '_week_number',
        '_sbas_system',
        '_sbas_id',
        '_count',
        '_sbas_status',
    ]

    _fields_and_field_types = {
        'header': 'microstrain_inertial_msgs/MipHeader',
        'time_of_week': 'double',
        'week_number': 'uint16',
        'sbas_system': 'uint8',
        'sbas_id': 'uint8',
        'count': 'uint8',
        'sbas_status': 'microstrain_inertial_msgs/MipGnssSbasInfoSbasStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipGnssSbasInfoSbasStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from microstrain_inertial_msgs.msg import MipHeader
        self.header = kwargs.get('header', MipHeader())
        self.time_of_week = kwargs.get('time_of_week', float())
        self.week_number = kwargs.get('week_number', int())
        self.sbas_system = kwargs.get('sbas_system', int())
        self.sbas_id = kwargs.get('sbas_id', int())
        self.count = kwargs.get('count', int())
        from microstrain_inertial_msgs.msg import MipGnssSbasInfoSbasStatus
        self.sbas_status = kwargs.get('sbas_status', MipGnssSbasInfoSbasStatus())

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
        if self.time_of_week != other.time_of_week:
            return False
        if self.week_number != other.week_number:
            return False
        if self.sbas_system != other.sbas_system:
            return False
        if self.sbas_id != other.sbas_id:
            return False
        if self.count != other.count:
            return False
        if self.sbas_status != other.sbas_status:
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
    def time_of_week(self):
        """Message field 'time_of_week'."""
        return self._time_of_week

    @time_of_week.setter
    def time_of_week(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_of_week' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time_of_week' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time_of_week = value

    @builtins.property
    def week_number(self):
        """Message field 'week_number'."""
        return self._week_number

    @week_number.setter
    def week_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'week_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'week_number' field must be an unsigned integer in [0, 65535]"
        self._week_number = value

    @builtins.property
    def sbas_system(self):
        """Message field 'sbas_system'."""
        return self._sbas_system

    @sbas_system.setter
    def sbas_system(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sbas_system' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sbas_system' field must be an unsigned integer in [0, 255]"
        self._sbas_system = value

    @builtins.property
    def sbas_id(self):
        """Message field 'sbas_id'."""
        return self._sbas_id

    @sbas_id.setter
    def sbas_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sbas_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sbas_id' field must be an unsigned integer in [0, 255]"
        self._sbas_id = value

    @builtins.property
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'count' field must be an unsigned integer in [0, 255]"
        self._count = value

    @builtins.property
    def sbas_status(self):
        """Message field 'sbas_status'."""
        return self._sbas_status

    @sbas_status.setter
    def sbas_status(self, value):
        if __debug__:
            from microstrain_inertial_msgs.msg import MipGnssSbasInfoSbasStatus
            assert \
                isinstance(value, MipGnssSbasInfoSbasStatus), \
                "The 'sbas_status' field must be a sub message of type 'MipGnssSbasInfoSbasStatus'"
        self._sbas_status = value
