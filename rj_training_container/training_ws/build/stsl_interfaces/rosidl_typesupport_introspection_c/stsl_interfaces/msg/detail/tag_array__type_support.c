// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stsl_interfaces:msg/TagArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stsl_interfaces/msg/detail/tag_array__rosidl_typesupport_introspection_c.h"
#include "stsl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stsl_interfaces/msg/detail/tag_array__functions.h"
#include "stsl_interfaces/msg/detail/tag_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `tags`
#include "stsl_interfaces/msg/tag.h"
// Member `tags`
#include "stsl_interfaces/msg/detail/tag__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stsl_interfaces__msg__TagArray__init(message_memory);
}

void stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_fini_function(void * message_memory)
{
  stsl_interfaces__msg__TagArray__fini(message_memory);
}

size_t stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__size_function__TagArray__tags(
  const void * untyped_member)
{
  const stsl_interfaces__msg__Tag__Sequence * member =
    (const stsl_interfaces__msg__Tag__Sequence *)(untyped_member);
  return member->size;
}

const void * stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__get_const_function__TagArray__tags(
  const void * untyped_member, size_t index)
{
  const stsl_interfaces__msg__Tag__Sequence * member =
    (const stsl_interfaces__msg__Tag__Sequence *)(untyped_member);
  return &member->data[index];
}

void * stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__get_function__TagArray__tags(
  void * untyped_member, size_t index)
{
  stsl_interfaces__msg__Tag__Sequence * member =
    (stsl_interfaces__msg__Tag__Sequence *)(untyped_member);
  return &member->data[index];
}

void stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__fetch_function__TagArray__tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const stsl_interfaces__msg__Tag * item =
    ((const stsl_interfaces__msg__Tag *)
    stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__get_const_function__TagArray__tags(untyped_member, index));
  stsl_interfaces__msg__Tag * value =
    (stsl_interfaces__msg__Tag *)(untyped_value);
  *value = *item;
}

void stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__assign_function__TagArray__tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  stsl_interfaces__msg__Tag * item =
    ((stsl_interfaces__msg__Tag *)
    stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__get_function__TagArray__tags(untyped_member, index));
  const stsl_interfaces__msg__Tag * value =
    (const stsl_interfaces__msg__Tag *)(untyped_value);
  *item = *value;
}

bool stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__resize_function__TagArray__tags(
  void * untyped_member, size_t size)
{
  stsl_interfaces__msg__Tag__Sequence * member =
    (stsl_interfaces__msg__Tag__Sequence *)(untyped_member);
  stsl_interfaces__msg__Tag__Sequence__fini(member);
  return stsl_interfaces__msg__Tag__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stsl_interfaces__msg__TagArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stsl_interfaces__msg__TagArray, tags),  // bytes offset in struct
    NULL,  // default value
    stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__size_function__TagArray__tags,  // size() function pointer
    stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__get_const_function__TagArray__tags,  // get_const(index) function pointer
    stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__get_function__TagArray__tags,  // get(index) function pointer
    stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__fetch_function__TagArray__tags,  // fetch(index, &value) function pointer
    stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__assign_function__TagArray__tags,  // assign(index, value) function pointer
    stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__resize_function__TagArray__tags  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_message_members = {
  "stsl_interfaces__msg",  // message namespace
  "TagArray",  // message name
  2,  // number of fields
  sizeof(stsl_interfaces__msg__TagArray),
  stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_message_member_array,  // message members
  stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_init_function,  // function to initialize message memory (memory has to be allocated)
  stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_message_type_support_handle = {
  0,
  &stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stsl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stsl_interfaces, msg, TagArray)() {
  stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stsl_interfaces, msg, Tag)();
  if (!stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_message_type_support_handle.typesupport_identifier) {
    stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &stsl_interfaces__msg__TagArray__rosidl_typesupport_introspection_c__TagArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
