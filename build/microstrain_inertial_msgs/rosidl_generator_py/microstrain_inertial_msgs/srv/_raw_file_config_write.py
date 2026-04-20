# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:srv/RawFileConfigWrite.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RawFileConfigWrite_Request(type):
    """Metaclass of message 'RawFileConfigWrite_Request'."""

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
                'microstrain_inertial_msgs.srv.RawFileConfigWrite_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__raw_file_config_write__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__raw_file_config_write__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__raw_file_config_write__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__raw_file_config_write__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__raw_file_config_write__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RawFileConfigWrite_Request(metaclass=Metaclass_RawFileConfigWrite_Request):
    """Message class 'RawFileConfigWrite_Request'."""

    __slots__ = [
        '_enable',
        '_file_path',
    ]

    _fields_and_field_types = {
        'enable': 'boolean',
        'file_path': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.enable = kwargs.get('enable', bool())
        self.file_path = kwargs.get('file_path', str())

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
        if self.enable != other.enable:
            return False
        if self.file_path != other.file_path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def enable(self):
        """Message field 'enable'."""
        return self._enable

    @enable.setter
    def enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable' field must be of type 'bool'"
        self._enable = value

    @builtins.property
    def file_path(self):
        """Message field 'file_path'."""
        return self._file_path

    @file_path.setter
    def file_path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'file_path' field must be of type 'str'"
        self._file_path = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RawFileConfigWrite_Response(type):
    """Metaclass of message 'RawFileConfigWrite_Response'."""

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
                'microstrain_inertial_msgs.srv.RawFileConfigWrite_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__raw_file_config_write__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__raw_file_config_write__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__raw_file_config_write__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__raw_file_config_write__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__raw_file_config_write__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RawFileConfigWrite_Response(metaclass=Metaclass_RawFileConfigWrite_Response):
    """Message class 'RawFileConfigWrite_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_RawFileConfigWrite(type):
    """Metaclass of service 'RawFileConfigWrite'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('microstrain_inertial_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'microstrain_inertial_msgs.srv.RawFileConfigWrite')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__raw_file_config_write

            from microstrain_inertial_msgs.srv import _raw_file_config_write
            if _raw_file_config_write.Metaclass_RawFileConfigWrite_Request._TYPE_SUPPORT is None:
                _raw_file_config_write.Metaclass_RawFileConfigWrite_Request.__import_type_support__()
            if _raw_file_config_write.Metaclass_RawFileConfigWrite_Response._TYPE_SUPPORT is None:
                _raw_file_config_write.Metaclass_RawFileConfigWrite_Response.__import_type_support__()


class RawFileConfigWrite(metaclass=Metaclass_RawFileConfigWrite):
    from microstrain_inertial_msgs.srv._raw_file_config_write import RawFileConfigWrite_Request as Request
    from microstrain_inertial_msgs.srv._raw_file_config_write import RawFileConfigWrite_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
