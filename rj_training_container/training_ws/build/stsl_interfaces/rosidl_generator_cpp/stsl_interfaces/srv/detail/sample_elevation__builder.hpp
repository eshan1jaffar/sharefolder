// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stsl_interfaces:srv/SampleElevation.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__SRV__DETAIL__SAMPLE_ELEVATION__BUILDER_HPP_
#define STSL_INTERFACES__SRV__DETAIL__SAMPLE_ELEVATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stsl_interfaces/srv/detail/sample_elevation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stsl_interfaces
{

namespace srv
{

namespace builder
{

class Init_SampleElevation_Request_y
{
public:
  explicit Init_SampleElevation_Request_y(::stsl_interfaces::srv::SampleElevation_Request & msg)
  : msg_(msg)
  {}
  ::stsl_interfaces::srv::SampleElevation_Request y(::stsl_interfaces::srv::SampleElevation_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stsl_interfaces::srv::SampleElevation_Request msg_;
};

class Init_SampleElevation_Request_x
{
public:
  Init_SampleElevation_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SampleElevation_Request_y x(::stsl_interfaces::srv::SampleElevation_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SampleElevation_Request_y(msg_);
  }

private:
  ::stsl_interfaces::srv::SampleElevation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::srv::SampleElevation_Request>()
{
  return stsl_interfaces::srv::builder::Init_SampleElevation_Request_x();
}

}  // namespace stsl_interfaces


namespace stsl_interfaces
{

namespace srv
{

namespace builder
{

class Init_SampleElevation_Response_elevation
{
public:
  explicit Init_SampleElevation_Response_elevation(::stsl_interfaces::srv::SampleElevation_Response & msg)
  : msg_(msg)
  {}
  ::stsl_interfaces::srv::SampleElevation_Response elevation(::stsl_interfaces::srv::SampleElevation_Response::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stsl_interfaces::srv::SampleElevation_Response msg_;
};

class Init_SampleElevation_Response_success
{
public:
  Init_SampleElevation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SampleElevation_Response_elevation success(::stsl_interfaces::srv::SampleElevation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SampleElevation_Response_elevation(msg_);
  }

private:
  ::stsl_interfaces::srv::SampleElevation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::srv::SampleElevation_Response>()
{
  return stsl_interfaces::srv::builder::Init_SampleElevation_Response_success();
}

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__SRV__DETAIL__SAMPLE_ELEVATION__BUILDER_HPP_
