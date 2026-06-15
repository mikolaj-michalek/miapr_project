# generated from rosidl_generator_py/resource/_idl.py.em
# with input from label_manager:srv/GetLabeledClusterGroup.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetLabeledClusterGroup_Request(type):
    """Metaclass of message 'GetLabeledClusterGroup_Request'."""

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
            module = import_type_support('label_manager')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'label_manager.srv.GetLabeledClusterGroup_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_labeled_cluster_group__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_labeled_cluster_group__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_labeled_cluster_group__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_labeled_cluster_group__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_labeled_cluster_group__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetLabeledClusterGroup_Request(metaclass=Metaclass_GetLabeledClusterGroup_Request):
    """Message class 'GetLabeledClusterGroup_Request'."""

    __slots__ = [
        '_uuid',
        '_label_group',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'uuid': 'string',
        'label_group': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.uuid = kwargs.get('uuid', str())
        self.label_group = kwargs.get('label_group', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.uuid != other.uuid:
            return False
        if self.label_group != other.label_group:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def uuid(self):
        """Message field 'uuid'."""
        return self._uuid

    @uuid.setter
    def uuid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'uuid' field must be of type 'str'"
        self._uuid = value

    @builtins.property
    def label_group(self):
        """Message field 'label_group'."""
        return self._label_group

    @label_group.setter
    def label_group(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'label_group' field must be of type 'str'"
        self._label_group = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetLabeledClusterGroup_Response(type):
    """Metaclass of message 'GetLabeledClusterGroup_Response'."""

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
            module = import_type_support('label_manager')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'label_manager.srv.GetLabeledClusterGroup_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_labeled_cluster_group__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_labeled_cluster_group__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_labeled_cluster_group__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_labeled_cluster_group__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_labeled_cluster_group__response

            from mesh_msgs.msg import MeshFaceCluster
            if MeshFaceCluster.__class__._TYPE_SUPPORT is None:
                MeshFaceCluster.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetLabeledClusterGroup_Response(metaclass=Metaclass_GetLabeledClusterGroup_Response):
    """Message class 'GetLabeledClusterGroup_Response'."""

    __slots__ = [
        '_clusters',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'clusters': 'sequence<mesh_msgs/MeshFaceCluster>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['mesh_msgs', 'msg'], 'MeshFaceCluster')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.clusters = kwargs.get('clusters', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.clusters != other.clusters:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def clusters(self):
        """Message field 'clusters'."""
        return self._clusters

    @clusters.setter
    def clusters(self, value):
        if self._check_fields:
            from mesh_msgs.msg import MeshFaceCluster
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, MeshFaceCluster) for v in value) and
                 True), \
                "The 'clusters' field must be a set or sequence and each value of type 'MeshFaceCluster'"
        self._clusters = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetLabeledClusterGroup_Event(type):
    """Metaclass of message 'GetLabeledClusterGroup_Event'."""

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
            module = import_type_support('label_manager')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'label_manager.srv.GetLabeledClusterGroup_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_labeled_cluster_group__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_labeled_cluster_group__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_labeled_cluster_group__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_labeled_cluster_group__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_labeled_cluster_group__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetLabeledClusterGroup_Event(metaclass=Metaclass_GetLabeledClusterGroup_Event):
    """Message class 'GetLabeledClusterGroup_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<label_manager/GetLabeledClusterGroup_Request, 1>',
        'response': 'sequence<label_manager/GetLabeledClusterGroup_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['label_manager', 'srv'], 'GetLabeledClusterGroup_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['label_manager', 'srv'], 'GetLabeledClusterGroup_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from label_manager.srv import GetLabeledClusterGroup_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, GetLabeledClusterGroup_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'GetLabeledClusterGroup_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from label_manager.srv import GetLabeledClusterGroup_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, GetLabeledClusterGroup_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'GetLabeledClusterGroup_Response'"
        self._response = value


class Metaclass_GetLabeledClusterGroup(type):
    """Metaclass of service 'GetLabeledClusterGroup'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('label_manager')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'label_manager.srv.GetLabeledClusterGroup')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_labeled_cluster_group

            from label_manager.srv import _get_labeled_cluster_group
            if _get_labeled_cluster_group.Metaclass_GetLabeledClusterGroup_Request._TYPE_SUPPORT is None:
                _get_labeled_cluster_group.Metaclass_GetLabeledClusterGroup_Request.__import_type_support__()
            if _get_labeled_cluster_group.Metaclass_GetLabeledClusterGroup_Response._TYPE_SUPPORT is None:
                _get_labeled_cluster_group.Metaclass_GetLabeledClusterGroup_Response.__import_type_support__()
            if _get_labeled_cluster_group.Metaclass_GetLabeledClusterGroup_Event._TYPE_SUPPORT is None:
                _get_labeled_cluster_group.Metaclass_GetLabeledClusterGroup_Event.__import_type_support__()


class GetLabeledClusterGroup(metaclass=Metaclass_GetLabeledClusterGroup):
    from label_manager.srv._get_labeled_cluster_group import GetLabeledClusterGroup_Request as Request
    from label_manager.srv._get_labeled_cluster_group import GetLabeledClusterGroup_Response as Response
    from label_manager.srv._get_labeled_cluster_group import GetLabeledClusterGroup_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
