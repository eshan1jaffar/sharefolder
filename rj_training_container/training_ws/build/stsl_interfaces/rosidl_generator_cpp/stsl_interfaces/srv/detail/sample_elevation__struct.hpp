// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stsl_interfaces:srv/SampleElevation.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__SRV__DETAIL__SAMPLE_ELEVATION__STRUCT_HPP_
#define STSL_INTERFACES__SRV__DETAIL__SAMPLE_ELEVATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stsl_interfaces__srv__SampleElevation_Request __attribute__((deprecated))
#else
# define DEPRECATED__stsl_interfaces__srv__SampleElevation_Request __declspec(deprecated)
#endif

namespace stsl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SampleElevation_Request_
{
  using Type = SampleElevation_Request_<ContainerAllocator>;

  explicit SampleElevation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit SampleElevation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stsl_interfaces::srv::SampleElevation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const stsl_interfaces::srv::SampleElevation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stsl_interfaces::srv::SampleElevation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stsl_interfaces::srv::SampleElevation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::srv::SampleElevation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::srv::SampleElevation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::srv::SampleElevation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::srv::SampleElevation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stsl_interfaces::srv::SampleElevation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stsl_interfaces::srv::SampleElevation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stsl_interfaces__srv__SampleElevation_Request
    std::shared_ptr<stsl_interfaces::srv::SampleElevation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stsl_interfaces__srv__SampleElevation_Request
    std::shared_ptr<stsl_interfaces::srv::SampleElevation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SampleElevation_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const SampleElevation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SampleElevation_Request_

// alias to use template instance with default allocator
using SampleElevation_Request =
  stsl_interfaces::srv::SampleElevation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace stsl_interfaces


#ifndef _WIN32
# define DEPRECATED__stsl_interfaces__srv__SampleElevation_Response __attribute__((deprecated))
#else
# define DEPRECATED__stsl_interfaces__srv__SampleElevation_Response __declspec(deprecated)
#endif

namespace stsl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SampleElevation_Response_
{
  using Type = SampleElevation_Response_<ContainerAllocator>;

  explicit SampleElevation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->elevation = 0.0;
    }
  }

  explicit SampleElevation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->elevation = 0.0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _elevation_type =
    double;
  _elevation_type elevation;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__elevation(
    const double & _arg)
  {
    this->elevation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stsl_interfaces::srv::SampleElevation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const stsl_interfaces::srv::SampleElevation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stsl_interfaces::srv::SampleElevation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stsl_interfaces::srv::SampleElevation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::srv::SampleElevation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::srv::SampleElevation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::srv::SampleElevation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::srv::SampleElevation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stsl_interfaces::srv::SampleElevation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stsl_interfaces::srv::SampleElevation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stsl_interfaces__srv__SampleElevation_Response
    std::shared_ptr<stsl_interfaces::srv::SampleElevation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stsl_interfaces__srv__SampleElevation_Response
    std::shared_ptr<stsl_interfaces::srv::SampleElevation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SampleElevation_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    return true;
  }
  bool operator!=(const SampleElevation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SampleElevation_Response_

// alias to use template instance with default allocator
using SampleElevation_Response =
  stsl_interfaces::srv::SampleElevation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace stsl_interfaces

namespace stsl_interfaces
{

namespace srv
{

struct SampleElevation
{
  using Request = stsl_interfaces::srv::SampleElevation_Request;
  using Response = stsl_interfaces::srv::SampleElevation_Response;
};

}  // namespace srv

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__SRV__DETAIL__SAMPLE_ELEVATION__STRUCT_HPP_
