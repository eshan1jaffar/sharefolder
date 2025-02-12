// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stsl_interfaces:msg/TagArray.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__TAG_ARRAY__BUILDER_HPP_
#define STSL_INTERFACES__MSG__DETAIL__TAG_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stsl_interfaces/msg/detail/tag_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stsl_interfaces
{

namespace msg
{

namespace builder
{

class Init_TagArray_tags
{
public:
  explicit Init_TagArray_tags(::stsl_interfaces::msg::TagArray & msg)
  : msg_(msg)
  {}
  ::stsl_interfaces::msg::TagArray tags(::stsl_interfaces::msg::TagArray::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stsl_interfaces::msg::TagArray msg_;
};

class Init_TagArray_header
{
public:
  Init_TagArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TagArray_tags header(::stsl_interfaces::msg::TagArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TagArray_tags(msg_);
  }

private:
  ::stsl_interfaces::msg::TagArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::msg::TagArray>()
{
  return stsl_interfaces::msg::builder::Init_TagArray_header();
}

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__MSG__DETAIL__TAG_ARRAY__BUILDER_HPP_
