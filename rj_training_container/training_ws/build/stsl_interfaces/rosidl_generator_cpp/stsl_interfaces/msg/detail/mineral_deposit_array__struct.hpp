// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stsl_interfaces:msg/MineralDepositArray.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_ARRAY__STRUCT_HPP_
#define STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'deposits'
#include "stsl_interfaces/msg/detail/mineral_deposit__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__stsl_interfaces__msg__MineralDepositArray __attribute__((deprecated))
#else
# define DEPRECATED__stsl_interfaces__msg__MineralDepositArray __declspec(deprecated)
#endif

namespace stsl_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MineralDepositArray_
{
  using Type = MineralDepositArray_<ContainerAllocator>;

  explicit MineralDepositArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit MineralDepositArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _deposits_type =
    std::vector<stsl_interfaces::msg::MineralDeposit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<stsl_interfaces::msg::MineralDeposit_<ContainerAllocator>>>;
  _deposits_type deposits;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__deposits(
    const std::vector<stsl_interfaces::msg::MineralDeposit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<stsl_interfaces::msg::MineralDeposit_<ContainerAllocator>>> & _arg)
  {
    this->deposits = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stsl_interfaces::msg::MineralDepositArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const stsl_interfaces::msg::MineralDepositArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stsl_interfaces::msg::MineralDepositArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stsl_interfaces::msg::MineralDepositArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::msg::MineralDepositArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::msg::MineralDepositArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::msg::MineralDepositArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::msg::MineralDepositArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stsl_interfaces::msg::MineralDepositArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stsl_interfaces::msg::MineralDepositArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stsl_interfaces__msg__MineralDepositArray
    std::shared_ptr<stsl_interfaces::msg::MineralDepositArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stsl_interfaces__msg__MineralDepositArray
    std::shared_ptr<stsl_interfaces::msg::MineralDepositArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MineralDepositArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->deposits != other.deposits) {
      return false;
    }
    return true;
  }
  bool operator!=(const MineralDepositArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MineralDepositArray_

// alias to use template instance with default allocator
using MineralDepositArray =
  stsl_interfaces::msg::MineralDepositArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_ARRAY__STRUCT_HPP_
