// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from stsl_interfaces:msg/TagArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "stsl_interfaces/msg/detail/tag_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace stsl_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TagArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) stsl_interfaces::msg::TagArray(_init);
}

void TagArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<stsl_interfaces::msg::TagArray *>(message_memory);
  typed_message->~TagArray();
}

size_t size_function__TagArray__tags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<stsl_interfaces::msg::Tag> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TagArray__tags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<stsl_interfaces::msg::Tag> *>(untyped_member);
  return &member[index];
}

void * get_function__TagArray__tags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<stsl_interfaces::msg::Tag> *>(untyped_member);
  return &member[index];
}

void fetch_function__TagArray__tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const stsl_interfaces::msg::Tag *>(
    get_const_function__TagArray__tags(untyped_member, index));
  auto & value = *reinterpret_cast<stsl_interfaces::msg::Tag *>(untyped_value);
  value = item;
}

void assign_function__TagArray__tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<stsl_interfaces::msg::Tag *>(
    get_function__TagArray__tags(untyped_member, index));
  const auto & value = *reinterpret_cast<const stsl_interfaces::msg::Tag *>(untyped_value);
  item = value;
}

void resize_function__TagArray__tags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<stsl_interfaces::msg::Tag> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TagArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stsl_interfaces::msg::TagArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<stsl_interfaces::msg::Tag>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stsl_interfaces::msg::TagArray, tags),  // bytes offset in struct
    nullptr,  // default value
    size_function__TagArray__tags,  // size() function pointer
    get_const_function__TagArray__tags,  // get_const(index) function pointer
    get_function__TagArray__tags,  // get(index) function pointer
    fetch_function__TagArray__tags,  // fetch(index, &value) function pointer
    assign_function__TagArray__tags,  // assign(index, value) function pointer
    resize_function__TagArray__tags  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TagArray_message_members = {
  "stsl_interfaces::msg",  // message namespace
  "TagArray",  // message name
  2,  // number of fields
  sizeof(stsl_interfaces::msg::TagArray),
  TagArray_message_member_array,  // message members
  TagArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TagArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TagArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TagArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace stsl_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<stsl_interfaces::msg::TagArray>()
{
  return &::stsl_interfaces::msg::rosidl_typesupport_introspection_cpp::TagArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, stsl_interfaces, msg, TagArray)() {
  return &::stsl_interfaces::msg::rosidl_typesupport_introspection_cpp::TagArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
