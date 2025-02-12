// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stsl_interfaces:msg/Tag.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__TAG__BUILDER_HPP_
#define STSL_INTERFACES__MSG__DETAIL__TAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stsl_interfaces/msg/detail/tag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stsl_interfaces
{

namespace msg
{

namespace builder
{

class Init_Tag_pose
{
public:
  explicit Init_Tag_pose(::stsl_interfaces::msg::Tag & msg)
  : msg_(msg)
  {}
  ::stsl_interfaces::msg::Tag pose(::stsl_interfaces::msg::Tag::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stsl_interfaces::msg::Tag msg_;
};

class Init_Tag_id
{
public:
  Init_Tag_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tag_pose id(::stsl_interfaces::msg::Tag::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Tag_pose(msg_);
  }

private:
  ::stsl_interfaces::msg::Tag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::msg::Tag>()
{
  return stsl_interfaces::msg::builder::Init_Tag_id();
}

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__MSG__DETAIL__TAG__BUILDER_HPP_
