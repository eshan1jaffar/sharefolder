// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stsl_interfaces:msg/MineralDepositSample.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_SAMPLE__STRUCT_HPP_
#define STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_SAMPLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__stsl_interfaces__msg__MineralDepositSample __attribute__((deprecated))
#else
# define DEPRECATED__stsl_interfaces__msg__MineralDepositSample __declspec(deprecated)
#endif

namespace stsl_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MineralDepositSample_
{
  using Type = MineralDepositSample_<ContainerAllocator>;

  explicit MineralDepositSample_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  explicit MineralDepositSample_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _pose_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stsl_interfaces::msg::MineralDepositSample_<ContainerAllocator> *;
  using ConstRawPtr =
    const stsl_interfaces::msg::MineralDepositSample_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stsl_interfaces::msg::MineralDepositSample_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stsl_interfaces::msg::MineralDepositSample_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::msg::MineralDepositSample_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::msg::MineralDepositSample_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::msg::MineralDepositSample_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::msg::MineralDepositSample_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stsl_interfaces::msg::MineralDepositSample_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stsl_interfaces::msg::MineralDepositSample_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stsl_interfaces__msg__MineralDepositSample
    std::shared_ptr<stsl_interfaces::msg::MineralDepositSample_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stsl_interfaces__msg__MineralDepositSample
    std::shared_ptr<stsl_interfaces::msg::MineralDepositSample_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MineralDepositSample_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const MineralDepositSample_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MineralDepositSample_

// alias to use template instance with default allocator
using MineralDepositSample =
  stsl_interfaces::msg::MineralDepositSample_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_SAMPLE__STRUCT_HPP_
