// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stsl_interfaces:msg/MineralDeposit.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT__STRUCT_HPP_
#define STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stsl_interfaces__msg__MineralDeposit __attribute__((deprecated))
#else
# define DEPRECATED__stsl_interfaces__msg__MineralDeposit __declspec(deprecated)
#endif

namespace stsl_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MineralDeposit_
{
  using Type = MineralDeposit_<ContainerAllocator>;

  explicit MineralDeposit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->heading = 0.0;
      this->range = 0.0;
    }
  }

  explicit MineralDeposit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->heading = 0.0;
      this->range = 0.0;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _heading_type =
    double;
  _heading_type heading;
  using _range_type =
    double;
  _range_type range;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__range(
    const double & _arg)
  {
    this->range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stsl_interfaces::msg::MineralDeposit_<ContainerAllocator> *;
  using ConstRawPtr =
    const stsl_interfaces::msg::MineralDeposit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stsl_interfaces::msg::MineralDeposit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stsl_interfaces::msg::MineralDeposit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::msg::MineralDeposit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::msg::MineralDeposit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::msg::MineralDeposit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::msg::MineralDeposit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stsl_interfaces::msg::MineralDeposit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stsl_interfaces::msg::MineralDeposit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stsl_interfaces__msg__MineralDeposit
    std::shared_ptr<stsl_interfaces::msg::MineralDeposit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stsl_interfaces__msg__MineralDeposit
    std::shared_ptr<stsl_interfaces::msg::MineralDeposit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MineralDeposit_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    return true;
  }
  bool operator!=(const MineralDeposit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MineralDeposit_

// alias to use template instance with default allocator
using MineralDeposit =
  stsl_interfaces::msg::MineralDeposit_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT__STRUCT_HPP_
