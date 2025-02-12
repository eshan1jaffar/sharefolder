// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stsl_interfaces:msg/MineralDepositSample.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_SAMPLE__BUILDER_HPP_
#define STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_SAMPLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stsl_interfaces/msg/detail/mineral_deposit_sample__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stsl_interfaces
{

namespace msg
{

namespace builder
{

class Init_MineralDepositSample_pose
{
public:
  explicit Init_MineralDepositSample_pose(::stsl_interfaces::msg::MineralDepositSample & msg)
  : msg_(msg)
  {}
  ::stsl_interfaces::msg::MineralDepositSample pose(::stsl_interfaces::msg::MineralDepositSample::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stsl_interfaces::msg::MineralDepositSample msg_;
};

class Init_MineralDepositSample_id
{
public:
  Init_MineralDepositSample_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MineralDepositSample_pose id(::stsl_interfaces::msg::MineralDepositSample::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MineralDepositSample_pose(msg_);
  }

private:
  ::stsl_interfaces::msg::MineralDepositSample msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::msg::MineralDepositSample>()
{
  return stsl_interfaces::msg::builder::Init_MineralDepositSample_id();
}

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_SAMPLE__BUILDER_HPP_
