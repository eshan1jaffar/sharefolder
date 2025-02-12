// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from stsl_interfaces:msg/MineralDeposit.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "stsl_interfaces/msg/detail/mineral_deposit__struct.hpp"
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

void MineralDeposit_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) stsl_interfaces::msg::MineralDeposit(_init);
}

void MineralDeposit_fini_function(void * message_memory)
{
  auto typed_message = static_cast<stsl_interfaces::msg::MineralDeposit *>(message_memory);
  typed_message->~MineralDeposit();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MineralDeposit_message_member_array[3] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stsl_interfaces::msg::MineralDeposit, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "heading",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stsl_interfaces::msg::MineralDeposit, heading),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stsl_interfaces::msg::MineralDeposit, range),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MineralDeposit_message_members = {
  "stsl_interfaces::msg",  // message namespace
  "MineralDeposit",  // message name
  3,  // number of fields
  sizeof(stsl_interfaces::msg::MineralDeposit),
  MineralDeposit_message_member_array,  // message members
  MineralDeposit_init_function,  // function to initialize message memory (memory has to be allocated)
  MineralDeposit_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MineralDeposit_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MineralDeposit_message_members,
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
get_message_type_support_handle<stsl_interfaces::msg::MineralDeposit>()
{
  return &::stsl_interfaces::msg::rosidl_typesupport_introspection_cpp::MineralDeposit_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, stsl_interfaces, msg, MineralDeposit)() {
  return &::stsl_interfaces::msg::rosidl_typesupport_introspection_cpp::MineralDeposit_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
