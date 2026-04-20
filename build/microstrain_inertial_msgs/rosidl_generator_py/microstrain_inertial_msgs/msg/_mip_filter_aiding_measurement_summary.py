# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummary.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipFilterAidingMeasurementSummary(type):
    """Metaclass of message 'MipFilterAidingMeasurementSummary'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_GNSS': 1,
        'TYPE_DUAL_ANTENNA': 2,
        'TYPE_HEADING': 3,
        'TYPE_PRESSURE': 4,
        'TYPE_MAGNETOMETER': 5,
        'TYPE_SPEED': 6,
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
                'microstrain_inertial_msgs.msg.MipFilterAidingMeasurementSummary')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_filter_aiding_measurement_summary
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_filter_aiding_measurement_summary
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_filter_aiding_measurement_summary
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_filter_aiding_measurement_summary
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_filter_aiding_measurement_summary

            from microstrain_inertial_msgs.msg import MipFilterAidingMeasurementSummaryIndicator
            if MipFilterAidingMeasurementSummaryIndicator.__class__._TYPE_SUPPORT is None:
                MipFilterAidingMeasurementSummaryIndicator.__class__.__import_type_support__()

            from microstrain_inertial_msgs.msg import MipHeader
            if MipHeader.__class__._TYPE_SUPPORT is None:
                MipHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_GNSS': cls.__constants['TYPE_GNSS'],
            'TYPE_DUAL_ANTENNA': cls.__constants['TYPE_DUAL_ANTENNA'],
            'TYPE_HEADING': cls.__constants['TYPE_HEADING'],
            'TYPE_PRESSURE': cls.__constants['TYPE_PRESSURE'],
            'TYPE_MAGNETOMETER': cls.__constants['TYPE_MAGNETOMETER'],
            'TYPE_SPEED': cls.__constants['TYPE_SPEED'],
        }

    @property
    def TYPE_GNSS(self):
        """Message constant 'TYPE_GNSS'."""
        return Metaclass_MipFilterAidingMeasurementSummary.__constants['TYPE_GNSS']

    @property
    def TYPE_DUAL_ANTENNA(self):
        """Message constant 'TYPE_DUAL_ANTENNA'."""
        return Metaclass_MipFilterAidingMeasurementSummary.__constants['TYPE_DUAL_ANTENNA']

    @property
    def TYPE_HEADING(self):
        """Message constant 'TYPE_HEADING'."""
        return Metaclass_MipFilterAidingMeasurementSummary.__constants['TYPE_HEADING']

    @property
    def TYPE_PRESSURE(self):
        """Message constant 'TYPE_PRESSURE'."""
        return Metaclass_MipFilterAidingMeasurementSummary.__constants['TYPE_PRESSURE']

    @property
    def TYPE_MAGNETOMETER(self):
        """Message constant 'TYPE_MAGNETOMETER'."""
        return Metaclass_MipFilterAidingMeasurementSummary.__constants['TYPE_MAGNETOMETER']

    @property
    def TYPE_SPEED(self):
        """Message constant 'TYPE_SPEED'."""
        return Metaclass_MipFilterAidingMeasurementSummary.__constants['TYPE_SPEED']


class MipFilterAidingMeasurementSummary(metaclass=Metaclass_MipFilterAidingMeasurementSummary):
    """
    Message class 'MipFilterAidingMeasurementSummary'.

    Constants:
      TYPE_GNSS
      TYPE_DUAL_ANTENNA
      TYPE_HEADING
      TYPE_PRESSURE
      TYPE_MAGNETOMETER
      TYPE_SPEED
    """

    __slots__ = [
        '_header',
        '_time_of_week',
        '_source',
        '_type',
        '_indicator',
    ]

    _fields_and_field_types = {
        'header': 'microstrain_inertial_msgs/MipHeader',
        'time_of_week': 'double',
        'source': 'uint8',
        'type': 'uint8',
        'indicator': 'microstrain_inertial_msgs/MipFilterAidingMeasurementSummaryIndicator',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipFilterAidingMeasurementSummaryIndicator'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from microstrain_inertial_msgs.msg import MipHeader
        self.header = kwargs.get('header', MipHeader())
        self.time_of_week = kwargs.get('time_of_week', float())
        self.source = kwargs.get('source', int())
        self.type = kwargs.get('type', int())
        from microstrain_inertial_msgs.msg import MipFilterAidingMeasurementSummaryIndicator
        self.indicator = kwargs.get('indicator', MipFilterAidingMeasurementSummaryIndicator())

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
        if self.source != other.source:
            return False
        if self.type != other.type:
            return False
        if self.indicator != other.indicator:
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
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source' field must be an unsigned integer in [0, 255]"
        self._source = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def indicator(self):
        """Message field 'indicator'."""
        return self._indicator

    @indicator.setter
    def indicator(self, value):
        if __debug__:
            from microstrain_inertial_msgs.msg import MipFilterAidingMeasurementSummaryIndicator
            assert \
                isinstance(value, MipFilterAidingMeasurementSummaryIndicator), \
                "The 'indicator' field must be a sub message of type 'MipFilterAidingMeasurementSummaryIndicator'"
        self._indicator = value
