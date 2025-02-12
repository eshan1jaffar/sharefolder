// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stsl_interfaces:msg/MineralDeposit.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT__BUILDER_HPP_
#define STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stsl_interfaces/msg/detail/mineral_deposit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stsl_interfaces
{

namespace msg
{

namespace builder
{

class Init_MineralDeposit_range
{
public:
  explicit Init_MineralDeposit_range(::stsl_interfaces::msg::MineralDeposit & msg)
  : msg_(msg)
  {}
  ::stsl_interfaces::msg::MineralDeposit range(::stsl_interfaces::msg::MineralDeposit::_range_type arg)
  {
    msg_.range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stsl_interfaces::msg::MineralDeposit msg_;
};

class Init_MineralDeposit_heading
{
public:
  explicit Init_MineralDeposit_heading(::stsl_interfaces::msg::MineralDeposit & msg)
  : msg_(msg)
  {}
  Init_MineralDeposit_range heading(::stsl_interfaces::msg::MineralDeposit::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_MineralDeposit_range(msg_);
  }

private:
  ::stsl_interfaces::msg::MineralDeposit msg_;
};

class Init_MineralDeposit_id
{
public:
  Init_MineralDeposit_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MineralDeposit_heading id(::stsl_interfaces::msg::MineralDeposit::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MineralDeposit_heading(msg_);
  }

private:
  ::stsl_interfaces::msg::MineralDeposit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::msg::MineralDeposit>()
{
  return stsl_interfaces::msg::builder::Init_MineralDeposit_id();
}

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT__BUILDER_HPP_
