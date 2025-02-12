// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from joystick_msgs:msg/VelocityPair.idl
// generated code does not contain a copyright notice

#ifndef JOYSTICK_MSGS__MSG__DETAIL__VELOCITY_PAIR__BUILDER_HPP_
#define JOYSTICK_MSGS__MSG__DETAIL__VELOCITY_PAIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "joystick_msgs/msg/detail/velocity_pair__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace joystick_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityPair_duration
{
public:
  explicit Init_VelocityPair_duration(::joystick_msgs::msg::VelocityPair & msg)
  : msg_(msg)
  {}
  ::joystick_msgs::msg::VelocityPair duration(::joystick_msgs::msg::VelocityPair::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::joystick_msgs::msg::VelocityPair msg_;
};

class Init_VelocityPair_right_velocity
{
public:
  explicit Init_VelocityPair_right_velocity(::joystick_msgs::msg::VelocityPair & msg)
  : msg_(msg)
  {}
  Init_VelocityPair_duration right_velocity(::joystick_msgs::msg::VelocityPair::_right_velocity_type arg)
  {
    msg_.right_velocity = std::move(arg);
    return Init_VelocityPair_duration(msg_);
  }

private:
  ::joystick_msgs::msg::VelocityPair msg_;
};

class Init_VelocityPair_left_velocity
{
public:
  explicit Init_VelocityPair_left_velocity(::joystick_msgs::msg::VelocityPair & msg)
  : msg_(msg)
  {}
  Init_VelocityPair_right_velocity left_velocity(::joystick_msgs::msg::VelocityPair::_left_velocity_type arg)
  {
    msg_.left_velocity = std::move(arg);
    return Init_VelocityPair_right_velocity(msg_);
  }

private:
  ::joystick_msgs::msg::VelocityPair msg_;
};

class Init_VelocityPair_header
{
public:
  Init_VelocityPair_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityPair_left_velocity header(::joystick_msgs::msg::VelocityPair::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VelocityPair_left_velocity(msg_);
  }

private:
  ::joystick_msgs::msg::VelocityPair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::joystick_msgs::msg::VelocityPair>()
{
  return joystick_msgs::msg::builder::Init_VelocityPair_header();
}

}  // namespace joystick_msgs

#endif  // JOYSTICK_MSGS__MSG__DETAIL__VELOCITY_PAIR__BUILDER_HPP_
