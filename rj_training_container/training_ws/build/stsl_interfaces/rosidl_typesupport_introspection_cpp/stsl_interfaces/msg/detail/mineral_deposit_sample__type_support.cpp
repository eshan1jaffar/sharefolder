// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from stsl_interfaces:msg/MineralDepositSample.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "stsl_interfaces/msg/detail/mineral_deposit_sample__struct.hpp"
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

void MineralDepositSample_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) stsl_interfaces::msg::MineralDepositSample(_init);
}

void MineralDepositSample_fini_function(void * message_memory)
{
  auto typed_message = static_cast<stsl_interfaces::msg::MineralDepositSample *>(message_memory);
  typed_message->~MineralDepositSample();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MineralDepositSample_message_member_array[2] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stsl_interfaces::msg::MineralDepositSample, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseWithCovariance>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stsl_interfaces::msg::MineralDepositSample, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MineralDepositSample_message_members = {
  "stsl_interfaces::msg",  // message namespace
  "MineralDepositSample",  // message name
  2,  // number of fields
  sizeof(stsl_interfaces::msg::MineralDepositSample),
  MineralDepositSample_message_member_array,  // message members
  MineralDepositSample_init_function,  // function to initialize message memory (memory has to be allocated)
  MineralDepositSample_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MineralDepositSample_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MineralDepositSample_message_members,
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
get_message_type_support_handle<stsl_interfaces::msg::MineralDepositSample>()
{
  return &::stsl_interfaces::msg::rosidl_typesupport_introspection_cpp::MineralDepositSample_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, stsl_interfaces, msg, MineralDepositSample)() {
  return &::stsl_interfaces::msg::rosidl_typesupport_introspection_cpp::MineralDepositSample_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
