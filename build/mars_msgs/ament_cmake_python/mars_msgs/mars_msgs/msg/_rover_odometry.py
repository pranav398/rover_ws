# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mars_msgs:msg/RoverOdometry.idl
# generated code does not contain a copyright notice

from __future__ import annotations

import collections.abc
import os
import typing

import rosidl_pycommon.interface_base_classes

if typing.TYPE_CHECKING:
    from ctypes import Structure

    class PyCapsule(Structure):
        pass  # don't need to define the full structure


# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
ros_python_check_fields = os.getenv('ROS_PYTHON_CHECK_FIELDS', default='')


if typing.TYPE_CHECKING:
    import geometry_msgs.msg  # noqa: E402, I100, I201, I300
    import std_msgs.msg  # noqa: E402, I100, I201, I300


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoverOdometry(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'RoverOdometry'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class RoverOdometryConstants(typing.TypedDict):
        pass

    __constants: RoverOdometryConstants = {
    }

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('mars_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mars_msgs.msg.RoverOdometry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rover_odometry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rover_odometry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rover_odometry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rover_odometry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rover_odometry

            from geometry_msgs.msg import Twist
            if Twist._TYPE_SUPPORT is None:
                Twist.__import_type_support__()

            from std_msgs.msg import Header
            if Header._TYPE_SUPPORT is None:
                Header.__import_type_support__()

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RoverOdometry(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_RoverOdometry):
    """Message class 'RoverOdometry'."""

    __slots__ = [
        '_header',
        '_rover_id',
        '_x',
        '_y',
        '_heading',
        '_velocity',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'header': 'std_msgs/Header',
        'rover_id': 'int32',
        'x': 'float',
        'y': 'float',
        'heading': 'float',
        'velocity': 'geometry_msgs/Twist',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
    )

    def __init__(self, *,
                 header: typing.Optional[std_msgs.msg.Header] = None,  # noqa: E501
                 rover_id: typing.Optional[int] = None,  # noqa: E501
                 x: typing.Optional[float] = None,  # noqa: E501
                 y: typing.Optional[float] = None,  # noqa: E501
                 heading: typing.Optional[float] = None,  # noqa: E501
                 velocity: typing.Optional[geometry_msgs.msg.Twist] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        from std_msgs.msg import Header
        self.header = header if header is not None else Header()
        self.rover_id = rover_id if rover_id is not None else int()
        self.x = x if x is not None else float()
        self.y = y if y is not None else float()
        self.heading = heading if heading is not None else float()
        from geometry_msgs.msg import Twist
        self.velocity = velocity if velocity is not None else Twist()

    def __repr__(self) -> str:
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args: list[str] = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    from rosidl_buffer import Buffer as _RosidlBuffer
                    if not isinstance(field, _RosidlBuffer):
                        if self._check_fields:
                            assert fieldstr.startswith('array(')
                        prefix = "array('X', "
                        suffix = ')'
                        fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other: object) -> bool:
        if not isinstance(other, RoverOdometry):
            return False
        if self.header != other.header:
            return False
        if self.rover_id != other.rover_id:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.heading != other.heading:
            return False
        if self.velocity != other.velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self) -> std_msgs.msg.Header:
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value: std_msgs.msg.Header) -> None:
        from std_msgs.msg import Header

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, Header), \
                    "The 'header' field must be a sub message of type 'Header'"

        self._header = value

    @builtins.property
    def rover_id(self) -> int:
        """Message field 'rover_id'."""
        return self._rover_id

    @rover_id.setter
    def rover_id(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'rover_id' field must be of type 'int'"
                assert value >= -2147483648 and value < 2147483648, \
                    "The 'rover_id' field must be an integer in [-2147483648, 2147483647]"

        self._rover_id = value

    @builtins.property
    def x(self) -> float:
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'x' field must be of type 'float'"
                assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                    "The 'x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"

        self._x = value

    @builtins.property
    def y(self) -> float:
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'y' field must be of type 'float'"
                assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                    "The 'y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"

        self._y = value

    @builtins.property
    def heading(self) -> float:
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'heading' field must be of type 'float'"
                assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                    "The 'heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"

        self._heading = value

    @builtins.property
    def velocity(self) -> geometry_msgs.msg.Twist:
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value: geometry_msgs.msg.Twist) -> None:
        from geometry_msgs.msg import Twist

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, Twist), \
                    "The 'velocity' field must be a sub message of type 'Twist'"

        self._velocity = value
