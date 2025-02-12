// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stsl_interfaces:msg/MineralDepositArray.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_ARRAY__BUILDER_HPP_
#define STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stsl_interfaces/msg/detail/mineral_deposit_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stsl_interfaces
{

namespace msg
{

namespace builder
{

class Init_MineralDepositArray_deposits
{
public:
  explicit Init_MineralDepositArray_deposits(::stsl_interfaces::msg::MineralDepositArray & msg)
  : msg_(msg)
  {}
  ::stsl_interfaces::msg::MineralDepositArray deposits(::stsl_interfaces::msg::MineralDepositArray::_deposits_type arg)
  {
    msg_.deposits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stsl_interfaces::msg::MineralDepositArray msg_;
};

class Init_MineralDepositArray_header
{
public:
  Init_MineralDepositArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MineralDepositArray_deposits header(::stsl_interfaces::msg::MineralDepositArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MineralDepositArray_deposits(msg_);
  }

private:
  ::stsl_interfaces::msg::MineralDepositArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::msg::MineralDepositArray>()
{
  return stsl_interfaces::msg::builder::Init_MineralDepositArray_header();
}

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_ARRAY__BUILDER_HPP_
