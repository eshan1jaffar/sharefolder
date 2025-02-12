// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stsl_interfaces:msg/Tag.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stsl_interfaces/msg/detail/tag__rosidl_typesupport_introspection_c.h"
#include "stsl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stsl_interfaces/msg/detail/tag__functions.h"
#include "stsl_interfaces/msg/detail/tag__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void stsl_interfaces__msg__Tag__rosidl_typesupport_introspection_c__Tag_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stsl_interfaces__msg__Tag__init(message_memory);
}

void stsl_interfaces__msg__Tag__rosidl_typesupport_introspection_c__Tag_fini_function(void * message_memory)
{
  stsl_interfaces__msg__Tag__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember stsl_interfaces__msg__Tag__rosidl_typesupport_introspection_c__Tag_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stsl_interfaces__msg__Tag, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stsl_interfaces__msg__Tag, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers stsl_interfaces__msg__Tag__rosidl_typesupport_introspection_c__Tag_message_members = {
  "stsl_interfaces__msg",  // message namespace
  "Tag",  // message name
  2,  // number of fields
  sizeof(stsl_interfaces__msg__Tag),
  stsl_interfaces__msg__Tag__rosidl_typesupport_introspection_c__Tag_message_member_array,  // message members
  stsl_interfaces__msg__Tag__rosidl_typesupport_introspection_c__Tag_init_function,  // function to initialize message memory (memory has to be allocated)
  stsl_interfaces__msg__Tag__rosidl_typesupport_introspection_c__Tag_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t stsl_interfaces__msg__Tag__rosidl_typesupport_introspection_c__Tag_message_type_support_handle = {
  0,
  &stsl_interfaces__msg__Tag__rosidl_typesupport_introspection_c__Tag_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stsl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stsl_interfaces, msg, Tag)() {
  stsl_interfaces__msg__Tag__rosidl_typesupport_introspection_c__Tag_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!stsl_interfaces__msg__Tag__rosidl_typesupport_introspection_c__Tag_message_type_support_handle.typesupport_identifier) {
    stsl_interfaces__msg__Tag__rosidl_typesupport_introspection_c__Tag_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &stsl_interfaces__msg__Tag__rosidl_typesupport_introspection_c__Tag_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
