# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ds4_driver_msgs:msg/Report.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Report(type):
    """Metaclass of message 'Report'."""

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
            module = import_type_support('ds4_driver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ds4_driver_msgs.msg.Report')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__report

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Report(metaclass=Metaclass_Report):
    """Message class 'Report'."""

    __slots__ = [
        '_header',
        '_left_analog_x',
        '_left_analog_y',
        '_right_analog_x',
        '_right_analog_y',
        '_l2_analog',
        '_r2_analog',
        '_dpad_up',
        '_dpad_down',
        '_dpad_left',
        '_dpad_right',
        '_button_cross',
        '_button_circle',
        '_button_square',
        '_button_triangle',
        '_button_l1',
        '_button_l2',
        '_button_l3',
        '_button_r1',
        '_button_r2',
        '_button_r3',
        '_button_share',
        '_button_options',
        '_button_trackpad',
        '_button_ps',
        '_lin_acc_x',
        '_lin_acc_y',
        '_lin_acc_z',
        '_ang_vel_x',
        '_ang_vel_y',
        '_ang_vel_z',
        '_trackpad_touch0_id',
        '_trackpad_touch0_active',
        '_trackpad_touch0_x',
        '_trackpad_touch0_y',
        '_trackpad_touch1_id',
        '_trackpad_touch1_active',
        '_trackpad_touch1_x',
        '_trackpad_touch1_y',
        '_timestamp',
        '_battery',
        '_plug_usb',
        '_plug_audio',
        '_plug_mic',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'left_analog_x': 'uint8',
        'left_analog_y': 'uint8',
        'right_analog_x': 'uint8',
        'right_analog_y': 'uint8',
        'l2_analog': 'uint8',
        'r2_analog': 'uint8',
        'dpad_up': 'boolean',
        'dpad_down': 'boolean',
        'dpad_left': 'boolean',
        'dpad_right': 'boolean',
        'button_cross': 'boolean',
        'button_circle': 'boolean',
        'button_square': 'boolean',
        'button_triangle': 'boolean',
        'button_l1': 'boolean',
        'button_l2': 'boolean',
        'button_l3': 'boolean',
        'button_r1': 'boolean',
        'button_r2': 'boolean',
        'button_r3': 'boolean',
        'button_share': 'boolean',
        'button_options': 'boolean',
        'button_trackpad': 'boolean',
        'button_ps': 'boolean',
        'lin_acc_x': 'int16',
        'lin_acc_y': 'int16',
        'lin_acc_z': 'int16',
        'ang_vel_x': 'int16',
        'ang_vel_y': 'int16',
        'ang_vel_z': 'int16',
        'trackpad_touch0_id': 'uint16',
        'trackpad_touch0_active': 'uint16',
        'trackpad_touch0_x': 'uint16',
        'trackpad_touch0_y': 'uint16',
        'trackpad_touch1_id': 'uint16',
        'trackpad_touch1_active': 'uint16',
        'trackpad_touch1_x': 'uint16',
        'trackpad_touch1_y': 'uint16',
        'timestamp': 'uint8',
        'battery': 'uint8',
        'plug_usb': 'boolean',
        'plug_audio': 'boolean',
        'plug_mic': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.left_analog_x = kwargs.get('left_analog_x', int())
        self.left_analog_y = kwargs.get('left_analog_y', int())
        self.right_analog_x = kwargs.get('right_analog_x', int())
        self.right_analog_y = kwargs.get('right_analog_y', int())
        self.l2_analog = kwargs.get('l2_analog', int())
        self.r2_analog = kwargs.get('r2_analog', int())
        self.dpad_up = kwargs.get('dpad_up', bool())
        self.dpad_down = kwargs.get('dpad_down', bool())
        self.dpad_left = kwargs.get('dpad_left', bool())
        self.dpad_right = kwargs.get('dpad_right', bool())
        self.button_cross = kwargs.get('button_cross', bool())
        self.button_circle = kwargs.get('button_circle', bool())
        self.button_square = kwargs.get('button_square', bool())
        self.button_triangle = kwargs.get('button_triangle', bool())
        self.button_l1 = kwargs.get('button_l1', bool())
        self.button_l2 = kwargs.get('button_l2', bool())
        self.button_l3 = kwargs.get('button_l3', bool())
        self.button_r1 = kwargs.get('button_r1', bool())
        self.button_r2 = kwargs.get('button_r2', bool())
        self.button_r3 = kwargs.get('button_r3', bool())
        self.button_share = kwargs.get('button_share', bool())
        self.button_options = kwargs.get('button_options', bool())
        self.button_trackpad = kwargs.get('button_trackpad', bool())
        self.button_ps = kwargs.get('button_ps', bool())
        self.lin_acc_x = kwargs.get('lin_acc_x', int())
        self.lin_acc_y = kwargs.get('lin_acc_y', int())
        self.lin_acc_z = kwargs.get('lin_acc_z', int())
        self.ang_vel_x = kwargs.get('ang_vel_x', int())
        self.ang_vel_y = kwargs.get('ang_vel_y', int())
        self.ang_vel_z = kwargs.get('ang_vel_z', int())
        self.trackpad_touch0_id = kwargs.get('trackpad_touch0_id', int())
        self.trackpad_touch0_active = kwargs.get('trackpad_touch0_active', int())
        self.trackpad_touch0_x = kwargs.get('trackpad_touch0_x', int())
        self.trackpad_touch0_y = kwargs.get('trackpad_touch0_y', int())
        self.trackpad_touch1_id = kwargs.get('trackpad_touch1_id', int())
        self.trackpad_touch1_active = kwargs.get('trackpad_touch1_active', int())
        self.trackpad_touch1_x = kwargs.get('trackpad_touch1_x', int())
        self.trackpad_touch1_y = kwargs.get('trackpad_touch1_y', int())
        self.timestamp = kwargs.get('timestamp', int())
        self.battery = kwargs.get('battery', int())
        self.plug_usb = kwargs.get('plug_usb', bool())
        self.plug_audio = kwargs.get('plug_audio', bool())
        self.plug_mic = kwargs.get('plug_mic', bool())

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
        if self.left_analog_x != other.left_analog_x:
            return False
        if self.left_analog_y != other.left_analog_y:
            return False
        if self.right_analog_x != other.right_analog_x:
            return False
        if self.right_analog_y != other.right_analog_y:
            return False
        if self.l2_analog != other.l2_analog:
            return False
        if self.r2_analog != other.r2_analog:
            return False
        if self.dpad_up != other.dpad_up:
            return False
        if self.dpad_down != other.dpad_down:
            return False
        if self.dpad_left != other.dpad_left:
            return False
        if self.dpad_right != other.dpad_right:
            return False
        if self.button_cross != other.button_cross:
            return False
        if self.button_circle != other.button_circle:
            return False
        if self.button_square != other.button_square:
            return False
        if self.button_triangle != other.button_triangle:
            return False
        if self.button_l1 != other.button_l1:
            return False
        if self.button_l2 != other.button_l2:
            return False
        if self.button_l3 != other.button_l3:
            return False
        if self.button_r1 != other.button_r1:
            return False
        if self.button_r2 != other.button_r2:
            return False
        if self.button_r3 != other.button_r3:
            return False
        if self.button_share != other.button_share:
            return False
        if self.button_options != other.button_options:
            return False
        if self.button_trackpad != other.button_trackpad:
            return False
        if self.button_ps != other.button_ps:
            return False
        if self.lin_acc_x != other.lin_acc_x:
            return False
        if self.lin_acc_y != other.lin_acc_y:
            return False
        if self.lin_acc_z != other.lin_acc_z:
            return False
        if self.ang_vel_x != other.ang_vel_x:
            return False
        if self.ang_vel_y != other.ang_vel_y:
            return False
        if self.ang_vel_z != other.ang_vel_z:
            return False
        if self.trackpad_touch0_id != other.trackpad_touch0_id:
            return False
        if self.trackpad_touch0_active != other.trackpad_touch0_active:
            return False
        if self.trackpad_touch0_x != other.trackpad_touch0_x:
            return False
        if self.trackpad_touch0_y != other.trackpad_touch0_y:
            return False
        if self.trackpad_touch1_id != other.trackpad_touch1_id:
            return False
        if self.trackpad_touch1_active != other.trackpad_touch1_active:
            return False
        if self.trackpad_touch1_x != other.trackpad_touch1_x:
            return False
        if self.trackpad_touch1_y != other.trackpad_touch1_y:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.battery != other.battery:
            return False
        if self.plug_usb != other.plug_usb:
            return False
        if self.plug_audio != other.plug_audio:
            return False
        if self.plug_mic != other.plug_mic:
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
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def left_analog_x(self):
        """Message field 'left_analog_x'."""
        return self._left_analog_x

    @left_analog_x.setter
    def left_analog_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_analog_x' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'left_analog_x' field must be an unsigned integer in [0, 255]"
        self._left_analog_x = value

    @builtins.property
    def left_analog_y(self):
        """Message field 'left_analog_y'."""
        return self._left_analog_y

    @left_analog_y.setter
    def left_analog_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_analog_y' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'left_analog_y' field must be an unsigned integer in [0, 255]"
        self._left_analog_y = value

    @builtins.property
    def right_analog_x(self):
        """Message field 'right_analog_x'."""
        return self._right_analog_x

    @right_analog_x.setter
    def right_analog_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_analog_x' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'right_analog_x' field must be an unsigned integer in [0, 255]"
        self._right_analog_x = value

    @builtins.property
    def right_analog_y(self):
        """Message field 'right_analog_y'."""
        return self._right_analog_y

    @right_analog_y.setter
    def right_analog_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_analog_y' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'right_analog_y' field must be an unsigned integer in [0, 255]"
        self._right_analog_y = value

    @builtins.property
    def l2_analog(self):
        """Message field 'l2_analog'."""
        return self._l2_analog

    @l2_analog.setter
    def l2_analog(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l2_analog' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'l2_analog' field must be an unsigned integer in [0, 255]"
        self._l2_analog = value

    @builtins.property
    def r2_analog(self):
        """Message field 'r2_analog'."""
        return self._r2_analog

    @r2_analog.setter
    def r2_analog(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'r2_analog' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'r2_analog' field must be an unsigned integer in [0, 255]"
        self._r2_analog = value

    @builtins.property
    def dpad_up(self):
        """Message field 'dpad_up'."""
        return self._dpad_up

    @dpad_up.setter
    def dpad_up(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dpad_up' field must be of type 'bool'"
        self._dpad_up = value

    @builtins.property
    def dpad_down(self):
        """Message field 'dpad_down'."""
        return self._dpad_down

    @dpad_down.setter
    def dpad_down(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dpad_down' field must be of type 'bool'"
        self._dpad_down = value

    @builtins.property
    def dpad_left(self):
        """Message field 'dpad_left'."""
        return self._dpad_left

    @dpad_left.setter
    def dpad_left(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dpad_left' field must be of type 'bool'"
        self._dpad_left = value

    @builtins.property
    def dpad_right(self):
        """Message field 'dpad_right'."""
        return self._dpad_right

    @dpad_right.setter
    def dpad_right(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dpad_right' field must be of type 'bool'"
        self._dpad_right = value

    @builtins.property
    def button_cross(self):
        """Message field 'button_cross'."""
        return self._button_cross

    @button_cross.setter
    def button_cross(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_cross' field must be of type 'bool'"
        self._button_cross = value

    @builtins.property
    def button_circle(self):
        """Message field 'button_circle'."""
        return self._button_circle

    @button_circle.setter
    def button_circle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_circle' field must be of type 'bool'"
        self._button_circle = value

    @builtins.property
    def button_square(self):
        """Message field 'button_square'."""
        return self._button_square

    @button_square.setter
    def button_square(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_square' field must be of type 'bool'"
        self._button_square = value

    @builtins.property
    def button_triangle(self):
        """Message field 'button_triangle'."""
        return self._button_triangle

    @button_triangle.setter
    def button_triangle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_triangle' field must be of type 'bool'"
        self._button_triangle = value

    @builtins.property
    def button_l1(self):
        """Message field 'button_l1'."""
        return self._button_l1

    @button_l1.setter
    def button_l1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_l1' field must be of type 'bool'"
        self._button_l1 = value

    @builtins.property
    def button_l2(self):
        """Message field 'button_l2'."""
        return self._button_l2

    @button_l2.setter
    def button_l2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_l2' field must be of type 'bool'"
        self._button_l2 = value

    @builtins.property
    def button_l3(self):
        """Message field 'button_l3'."""
        return self._button_l3

    @button_l3.setter
    def button_l3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_l3' field must be of type 'bool'"
        self._button_l3 = value

    @builtins.property
    def button_r1(self):
        """Message field 'button_r1'."""
        return self._button_r1

    @button_r1.setter
    def button_r1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_r1' field must be of type 'bool'"
        self._button_r1 = value

    @builtins.property
    def button_r2(self):
        """Message field 'button_r2'."""
        return self._button_r2

    @button_r2.setter
    def button_r2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_r2' field must be of type 'bool'"
        self._button_r2 = value

    @builtins.property
    def button_r3(self):
        """Message field 'button_r3'."""
        return self._button_r3

    @button_r3.setter
    def button_r3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_r3' field must be of type 'bool'"
        self._button_r3 = value

    @builtins.property
    def button_share(self):
        """Message field 'button_share'."""
        return self._button_share

    @button_share.setter
    def button_share(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_share' field must be of type 'bool'"
        self._button_share = value

    @builtins.property
    def button_options(self):
        """Message field 'button_options'."""
        return self._button_options

    @button_options.setter
    def button_options(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_options' field must be of type 'bool'"
        self._button_options = value

    @builtins.property
    def button_trackpad(self):
        """Message field 'button_trackpad'."""
        return self._button_trackpad

    @button_trackpad.setter
    def button_trackpad(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_trackpad' field must be of type 'bool'"
        self._button_trackpad = value

    @builtins.property
    def button_ps(self):
        """Message field 'button_ps'."""
        return self._button_ps

    @button_ps.setter
    def button_ps(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_ps' field must be of type 'bool'"
        self._button_ps = value

    @builtins.property
    def lin_acc_x(self):
        """Message field 'lin_acc_x'."""
        return self._lin_acc_x

    @lin_acc_x.setter
    def lin_acc_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lin_acc_x' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'lin_acc_x' field must be an integer in [-32768, 32767]"
        self._lin_acc_x = value

    @builtins.property
    def lin_acc_y(self):
        """Message field 'lin_acc_y'."""
        return self._lin_acc_y

    @lin_acc_y.setter
    def lin_acc_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lin_acc_y' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'lin_acc_y' field must be an integer in [-32768, 32767]"
        self._lin_acc_y = value

    @builtins.property
    def lin_acc_z(self):
        """Message field 'lin_acc_z'."""
        return self._lin_acc_z

    @lin_acc_z.setter
    def lin_acc_z(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lin_acc_z' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'lin_acc_z' field must be an integer in [-32768, 32767]"
        self._lin_acc_z = value

    @builtins.property
    def ang_vel_x(self):
        """Message field 'ang_vel_x'."""
        return self._ang_vel_x

    @ang_vel_x.setter
    def ang_vel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ang_vel_x' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ang_vel_x' field must be an integer in [-32768, 32767]"
        self._ang_vel_x = value

    @builtins.property
    def ang_vel_y(self):
        """Message field 'ang_vel_y'."""
        return self._ang_vel_y

    @ang_vel_y.setter
    def ang_vel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ang_vel_y' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ang_vel_y' field must be an integer in [-32768, 32767]"
        self._ang_vel_y = value

    @builtins.property
    def ang_vel_z(self):
        """Message field 'ang_vel_z'."""
        return self._ang_vel_z

    @ang_vel_z.setter
    def ang_vel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ang_vel_z' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ang_vel_z' field must be an integer in [-32768, 32767]"
        self._ang_vel_z = value

    @builtins.property
    def trackpad_touch0_id(self):
        """Message field 'trackpad_touch0_id'."""
        return self._trackpad_touch0_id

    @trackpad_touch0_id.setter
    def trackpad_touch0_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trackpad_touch0_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'trackpad_touch0_id' field must be an unsigned integer in [0, 65535]"
        self._trackpad_touch0_id = value

    @builtins.property
    def trackpad_touch0_active(self):
        """Message field 'trackpad_touch0_active'."""
        return self._trackpad_touch0_active

    @trackpad_touch0_active.setter
    def trackpad_touch0_active(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trackpad_touch0_active' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'trackpad_touch0_active' field must be an unsigned integer in [0, 65535]"
        self._trackpad_touch0_active = value

    @builtins.property
    def trackpad_touch0_x(self):
        """Message field 'trackpad_touch0_x'."""
        return self._trackpad_touch0_x

    @trackpad_touch0_x.setter
    def trackpad_touch0_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trackpad_touch0_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'trackpad_touch0_x' field must be an unsigned integer in [0, 65535]"
        self._trackpad_touch0_x = value

    @builtins.property
    def trackpad_touch0_y(self):
        """Message field 'trackpad_touch0_y'."""
        return self._trackpad_touch0_y

    @trackpad_touch0_y.setter
    def trackpad_touch0_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trackpad_touch0_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'trackpad_touch0_y' field must be an unsigned integer in [0, 65535]"
        self._trackpad_touch0_y = value

    @builtins.property
    def trackpad_touch1_id(self):
        """Message field 'trackpad_touch1_id'."""
        return self._trackpad_touch1_id

    @trackpad_touch1_id.setter
    def trackpad_touch1_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trackpad_touch1_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'trackpad_touch1_id' field must be an unsigned integer in [0, 65535]"
        self._trackpad_touch1_id = value

    @builtins.property
    def trackpad_touch1_active(self):
        """Message field 'trackpad_touch1_active'."""
        return self._trackpad_touch1_active

    @trackpad_touch1_active.setter
    def trackpad_touch1_active(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trackpad_touch1_active' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'trackpad_touch1_active' field must be an unsigned integer in [0, 65535]"
        self._trackpad_touch1_active = value

    @builtins.property
    def trackpad_touch1_x(self):
        """Message field 'trackpad_touch1_x'."""
        return self._trackpad_touch1_x

    @trackpad_touch1_x.setter
    def trackpad_touch1_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trackpad_touch1_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'trackpad_touch1_x' field must be an unsigned integer in [0, 65535]"
        self._trackpad_touch1_x = value

    @builtins.property
    def trackpad_touch1_y(self):
        """Message field 'trackpad_touch1_y'."""
        return self._trackpad_touch1_y

    @trackpad_touch1_y.setter
    def trackpad_touch1_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trackpad_touch1_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'trackpad_touch1_y' field must be an unsigned integer in [0, 65535]"
        self._trackpad_touch1_y = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'timestamp' field must be an unsigned integer in [0, 255]"
        self._timestamp = value

    @builtins.property
    def battery(self):
        """Message field 'battery'."""
        return self._battery

    @battery.setter
    def battery(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'battery' field must be an unsigned integer in [0, 255]"
        self._battery = value

    @builtins.property
    def plug_usb(self):
        """Message field 'plug_usb'."""
        return self._plug_usb

    @plug_usb.setter
    def plug_usb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'plug_usb' field must be of type 'bool'"
        self._plug_usb = value

    @builtins.property
    def plug_audio(self):
        """Message field 'plug_audio'."""
        return self._plug_audio

    @plug_audio.setter
    def plug_audio(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'plug_audio' field must be of type 'bool'"
        self._plug_audio = value

    @builtins.property
    def plug_mic(self):
        """Message field 'plug_mic'."""
        return self._plug_mic

    @plug_mic.setter
    def plug_mic(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'plug_mic' field must be of type 'bool'"
        self._plug_mic = value
