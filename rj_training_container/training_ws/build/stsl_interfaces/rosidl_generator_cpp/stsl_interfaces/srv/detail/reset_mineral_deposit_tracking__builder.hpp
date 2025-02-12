// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stsl_interfaces:srv/ResetMineralDepositTracking.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__SRV__DETAIL__RESET_MINERAL_DEPOSIT_TRACKING__BUILDER_HPP_
#define STSL_INTERFACES__SRV__DETAIL__RESET_MINERAL_DEPOSIT_TRACKING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stsl_interfaces/srv/detail/reset_mineral_deposit_tracking__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stsl_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetMineralDepositTracking_Request_pose
{
public:
  explicit Init_ResetMineralDepositTracking_Request_pose(::stsl_interfaces::srv::ResetMineralDepositTracking_Request & msg)
  : msg_(msg)
  {}
  ::stsl_interfaces::srv::ResetMineralDepositTracking_Request pose(::stsl_interfaces::srv::ResetMineralDepositTracking_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stsl_interfaces::srv::ResetMineralDepositTracking_Request msg_;
};

class Init_ResetMineralDepositTracking_Request_id
{
public:
  Init_ResetMineralDepositTracking_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetMineralDepositTracking_Request_pose id(::stsl_interfaces::srv::ResetMineralDepositTracking_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ResetMineralDepositTracking_Request_pose(msg_);
  }

private:
  ::stsl_interfaces::srv::ResetMineralDepositTracking_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::srv::ResetMineralDepositTracking_Request>()
{
  return stsl_interfaces::srv::builder::Init_ResetMineralDepositTracking_Request_id();
}

}  // namespace stsl_interfaces


namespace stsl_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::srv::ResetMineralDepositTracking_Response>()
{
  return ::stsl_interfaces::srv::ResetMineralDepositTracking_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__SRV__DETAIL__RESET_MINERAL_DEPOSIT_TRACKING__BUILDER_HPP_
