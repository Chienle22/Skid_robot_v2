# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipFilterStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipFilterStatus(type):
    """Metaclass of message 'MipFilterStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FILTER_STATE_GX5_STARTUP': 0,
        'FILTER_STATE_GX5_INIT': 1,
        'FILTER_STATE_GX5_RUN_SOLUTION_VALID': 2,
        'FILTER_STATE_GX5_RUN_SOLUTION_ERROR': 3,
        'FILTER_STATE_GQ7_INIT': 1,
        'FILTER_STATE_GQ7_VERT_GYRO': 2,
        'FILTER_STATE_GQ7_AHRS': 3,
        'FILTER_STATE_GQ7_FULL_NAV': 4,
        'DYNAMICS_MODE_GX5_PORTABLE': 1,
        'DYNAMICS_MODE_GX5_AUTOMOTIVE': 2,
        'DYNAMICS_MODE_GX5_AIRBORNE': 3,
        'DYNAMICS_MODE_GQ7_DEFAULT': 1,
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
                'microstrain_inertial_msgs.msg.MipFilterStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_filter_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_filter_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_filter_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_filter_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_filter_status

            from microstrain_inertial_msgs.msg import MipFilterStatusGq7StatusFlags
            if MipFilterStatusGq7StatusFlags.__class__._TYPE_SUPPORT is None:
                MipFilterStatusGq7StatusFlags.__class__.__import_type_support__()

            from microstrain_inertial_msgs.msg import MipFilterStatusGx5StatusFlags
            if MipFilterStatusGx5StatusFlags.__class__._TYPE_SUPPORT is None:
                MipFilterStatusGx5StatusFlags.__class__.__import_type_support__()

            from microstrain_inertial_msgs.msg import MipHeader
            if MipHeader.__class__._TYPE_SUPPORT is None:
                MipHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FILTER_STATE_GX5_STARTUP': cls.__constants['FILTER_STATE_GX5_STARTUP'],
            'FILTER_STATE_GX5_INIT': cls.__constants['FILTER_STATE_GX5_INIT'],
            'FILTER_STATE_GX5_RUN_SOLUTION_VALID': cls.__constants['FILTER_STATE_GX5_RUN_SOLUTION_VALID'],
            'FILTER_STATE_GX5_RUN_SOLUTION_ERROR': cls.__constants['FILTER_STATE_GX5_RUN_SOLUTION_ERROR'],
            'FILTER_STATE_GQ7_INIT': cls.__constants['FILTER_STATE_GQ7_INIT'],
            'FILTER_STATE_GQ7_VERT_GYRO': cls.__constants['FILTER_STATE_GQ7_VERT_GYRO'],
            'FILTER_STATE_GQ7_AHRS': cls.__constants['FILTER_STATE_GQ7_AHRS'],
            'FILTER_STATE_GQ7_FULL_NAV': cls.__constants['FILTER_STATE_GQ7_FULL_NAV'],
            'DYNAMICS_MODE_GX5_PORTABLE': cls.__constants['DYNAMICS_MODE_GX5_PORTABLE'],
            'DYNAMICS_MODE_GX5_AUTOMOTIVE': cls.__constants['DYNAMICS_MODE_GX5_AUTOMOTIVE'],
            'DYNAMICS_MODE_GX5_AIRBORNE': cls.__constants['DYNAMICS_MODE_GX5_AIRBORNE'],
            'DYNAMICS_MODE_GQ7_DEFAULT': cls.__constants['DYNAMICS_MODE_GQ7_DEFAULT'],
        }

    @property
    def FILTER_STATE_GX5_STARTUP(self):
        """Message constant 'FILTER_STATE_GX5_STARTUP'."""
        return Metaclass_MipFilterStatus.__constants['FILTER_STATE_GX5_STARTUP']

    @property
    def FILTER_STATE_GX5_INIT(self):
        """Message constant 'FILTER_STATE_GX5_INIT'."""
        return Metaclass_MipFilterStatus.__constants['FILTER_STATE_GX5_INIT']

    @property
    def FILTER_STATE_GX5_RUN_SOLUTION_VALID(self):
        """Message constant 'FILTER_STATE_GX5_RUN_SOLUTION_VALID'."""
        return Metaclass_MipFilterStatus.__constants['FILTER_STATE_GX5_RUN_SOLUTION_VALID']

    @property
    def FILTER_STATE_GX5_RUN_SOLUTION_ERROR(self):
        """Message constant 'FILTER_STATE_GX5_RUN_SOLUTION_ERROR'."""
        return Metaclass_MipFilterStatus.__constants['FILTER_STATE_GX5_RUN_SOLUTION_ERROR']

    @property
    def FILTER_STATE_GQ7_INIT(self):
        """Message constant 'FILTER_STATE_GQ7_INIT'."""
        return Metaclass_MipFilterStatus.__constants['FILTER_STATE_GQ7_INIT']

    @property
    def FILTER_STATE_GQ7_VERT_GYRO(self):
        """Message constant 'FILTER_STATE_GQ7_VERT_GYRO'."""
        return Metaclass_MipFilterStatus.__constants['FILTER_STATE_GQ7_VERT_GYRO']

    @property
    def FILTER_STATE_GQ7_AHRS(self):
        """Message constant 'FILTER_STATE_GQ7_AHRS'."""
        return Metaclass_MipFilterStatus.__constants['FILTER_STATE_GQ7_AHRS']

    @property
    def FILTER_STATE_GQ7_FULL_NAV(self):
        """Message constant 'FILTER_STATE_GQ7_FULL_NAV'."""
        return Metaclass_MipFilterStatus.__constants['FILTER_STATE_GQ7_FULL_NAV']

    @property
    def DYNAMICS_MODE_GX5_PORTABLE(self):
        """Message constant 'DYNAMICS_MODE_GX5_PORTABLE'."""
        return Metaclass_MipFilterStatus.__constants['DYNAMICS_MODE_GX5_PORTABLE']

    @property
    def DYNAMICS_MODE_GX5_AUTOMOTIVE(self):
        """Message constant 'DYNAMICS_MODE_GX5_AUTOMOTIVE'."""
        return Metaclass_MipFilterStatus.__constants['DYNAMICS_MODE_GX5_AUTOMOTIVE']

    @property
    def DYNAMICS_MODE_GX5_AIRBORNE(self):
        """Message constant 'DYNAMICS_MODE_GX5_AIRBORNE'."""
        return Metaclass_MipFilterStatus.__constants['DYNAMICS_MODE_GX5_AIRBORNE']

    @property
    def DYNAMICS_MODE_GQ7_DEFAULT(self):
        """Message constant 'DYNAMICS_MODE_GQ7_DEFAULT'."""
        return Metaclass_MipFilterStatus.__constants['DYNAMICS_MODE_GQ7_DEFAULT']


class MipFilterStatus(metaclass=Metaclass_MipFilterStatus):
    """
    Message class 'MipFilterStatus'.

    Constants:
      FILTER_STATE_GX5_STARTUP
      FILTER_STATE_GX5_INIT
      FILTER_STATE_GX5_RUN_SOLUTION_VALID
      FILTER_STATE_GX5_RUN_SOLUTION_ERROR
      FILTER_STATE_GQ7_INIT
      FILTER_STATE_GQ7_VERT_GYRO
      FILTER_STATE_GQ7_AHRS
      FILTER_STATE_GQ7_FULL_NAV
      DYNAMICS_MODE_GX5_PORTABLE
      DYNAMICS_MODE_GX5_AUTOMOTIVE
      DYNAMICS_MODE_GX5_AIRBORNE
      DYNAMICS_MODE_GQ7_DEFAULT
    """

    __slots__ = [
        '_header',
        '_filter_state',
        '_dynamics_mode',
        '_gx5_status_flags',
        '_gq7_status_flags',
    ]

    _fields_and_field_types = {
        'header': 'microstrain_inertial_msgs/MipHeader',
        'filter_state': 'uint16',
        'dynamics_mode': 'uint16',
        'gx5_status_flags': 'microstrain_inertial_msgs/MipFilterStatusGx5StatusFlags',
        'gq7_status_flags': 'microstrain_inertial_msgs/MipFilterStatusGq7StatusFlags',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipFilterStatusGx5StatusFlags'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipFilterStatusGq7StatusFlags'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from microstrain_inertial_msgs.msg import MipHeader
        self.header = kwargs.get('header', MipHeader())
        self.filter_state = kwargs.get('filter_state', int())
        self.dynamics_mode = kwargs.get('dynamics_mode', int())
        from microstrain_inertial_msgs.msg import MipFilterStatusGx5StatusFlags
        self.gx5_status_flags = kwargs.get('gx5_status_flags', MipFilterStatusGx5StatusFlags())
        from microstrain_inertial_msgs.msg import MipFilterStatusGq7StatusFlags
        self.gq7_status_flags = kwargs.get('gq7_status_flags', MipFilterStatusGq7StatusFlags())

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
        if self.filter_state != other.filter_state:
            return False
        if self.dynamics_mode != other.dynamics_mode:
            return False
        if self.gx5_status_flags != other.gx5_status_flags:
            return False
        if self.gq7_status_flags != other.gq7_status_flags:
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
    def filter_state(self):
        """Message field 'filter_state'."""
        return self._filter_state

    @filter_state.setter
    def filter_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'filter_state' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'filter_state' field must be an unsigned integer in [0, 65535]"
        self._filter_state = value

    @builtins.property
    def dynamics_mode(self):
        """Message field 'dynamics_mode'."""
        return self._dynamics_mode

    @dynamics_mode.setter
    def dynamics_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dynamics_mode' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'dynamics_mode' field must be an unsigned integer in [0, 65535]"
        self._dynamics_mode = value

    @builtins.property
    def gx5_status_flags(self):
        """Message field 'gx5_status_flags'."""
        return self._gx5_status_flags

    @gx5_status_flags.setter
    def gx5_status_flags(self, value):
        if __debug__:
            from microstrain_inertial_msgs.msg import MipFilterStatusGx5StatusFlags
            assert \
                isinstance(value, MipFilterStatusGx5StatusFlags), \
                "The 'gx5_status_flags' field must be a sub message of type 'MipFilterStatusGx5StatusFlags'"
        self._gx5_status_flags = value

    @builtins.property
    def gq7_status_flags(self):
        """Message field 'gq7_status_flags'."""
        return self._gq7_status_flags

    @gq7_status_flags.setter
    def gq7_status_flags(self, value):
        if __debug__:
            from microstrain_inertial_msgs.msg import MipFilterStatusGq7StatusFlags
            assert \
                isinstance(value, MipFilterStatusGq7StatusFlags), \
                "The 'gq7_status_flags' field must be a sub message of type 'MipFilterStatusGq7StatusFlags'"
        self._gq7_status_flags = value
