// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stsl_interfaces:srv/ResetMineralDepositTracking.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__SRV__DETAIL__RESET_MINERAL_DEPOSIT_TRACKING__STRUCT_HPP_
#define STSL_INTERFACES__SRV__DETAIL__RESET_MINERAL_DEPOSIT_TRACKING__STRUCT_HPP_

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
# define DEPRECATED__stsl_interfaces__srv__ResetMineralDepositTracking_Request __attribute__((deprecated))
#else
# define DEPRECATED__stsl_interfaces__srv__ResetMineralDepositTracking_Request __declspec(deprecated)
#endif

namespace stsl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetMineralDepositTracking_Request_
{
  using Type = ResetMineralDepositTracking_Request_<ContainerAllocator>;

  explicit ResetMineralDepositTracking_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  explicit ResetMineralDepositTracking_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    stsl_interfaces::srv::ResetMineralDepositTracking_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const stsl_interfaces::srv::ResetMineralDepositTracking_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::srv::ResetMineralDepositTracking_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::srv::ResetMineralDepositTracking_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stsl_interfaces__srv__ResetMineralDepositTracking_Request
    std::shared_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stsl_interfaces__srv__ResetMineralDepositTracking_Request
    std::shared_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetMineralDepositTracking_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetMineralDepositTracking_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetMineralDepositTracking_Request_

// alias to use template instance with default allocator
using ResetMineralDepositTracking_Request =
  stsl_interfaces::srv::ResetMineralDepositTracking_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace stsl_interfaces


#ifndef _WIN32
# define DEPRECATED__stsl_interfaces__srv__ResetMineralDepositTracking_Response __attribute__((deprecated))
#else
# define DEPRECATED__stsl_interfaces__srv__ResetMineralDepositTracking_Response __declspec(deprecated)
#endif

namespace stsl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetMineralDepositTracking_Response_
{
  using Type = ResetMineralDepositTracking_Response_<ContainerAllocator>;

  explicit ResetMineralDepositTracking_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ResetMineralDepositTracking_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    stsl_interfaces::srv::ResetMineralDepositTracking_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const stsl_interfaces::srv::ResetMineralDepositTracking_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::srv::ResetMineralDepositTracking_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stsl_interfaces::srv::ResetMineralDepositTracking_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stsl_interfaces__srv__ResetMineralDepositTracking_Response
    std::shared_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stsl_interfaces__srv__ResetMineralDepositTracking_Response
    std::shared_ptr<stsl_interfaces::srv::ResetMineralDepositTracking_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetMineralDepositTracking_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetMineralDepositTracking_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetMineralDepositTracking_Response_

// alias to use template instance with default allocator
using ResetMineralDepositTracking_Response =
  stsl_interfaces::srv::ResetMineralDepositTracking_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace stsl_interfaces

namespace stsl_interfaces
{

namespace srv
{

struct ResetMineralDepositTracking
{
  using Request = stsl_interfaces::srv::ResetMineralDepositTracking_Request;
  using Response = stsl_interfaces::srv::ResetMineralDepositTracking_Response;
};

}  // namespace srv

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__SRV__DETAIL__RESET_MINERAL_DEPOSIT_TRACKING__STRUCT_HPP_
