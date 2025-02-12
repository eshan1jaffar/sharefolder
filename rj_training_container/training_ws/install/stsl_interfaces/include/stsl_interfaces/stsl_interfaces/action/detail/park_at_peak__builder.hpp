// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stsl_interfaces:action/ParkAtPeak.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__ACTION__DETAIL__PARK_AT_PEAK__BUILDER_HPP_
#define STSL_INTERFACES__ACTION__DETAIL__PARK_AT_PEAK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stsl_interfaces/action/detail/park_at_peak__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stsl_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::action::ParkAtPeak_Goal>()
{
  return ::stsl_interfaces::action::ParkAtPeak_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace stsl_interfaces


namespace stsl_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::action::ParkAtPeak_Result>()
{
  return ::stsl_interfaces::action::ParkAtPeak_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace stsl_interfaces


namespace stsl_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::action::ParkAtPeak_Feedback>()
{
  return ::stsl_interfaces::action::ParkAtPeak_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace stsl_interfaces


namespace stsl_interfaces
{

namespace action
{

namespace builder
{

class Init_ParkAtPeak_SendGoal_Request_goal
{
public:
  explicit Init_ParkAtPeak_SendGoal_Request_goal(::stsl_interfaces::action::ParkAtPeak_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::stsl_interfaces::action::ParkAtPeak_SendGoal_Request goal(::stsl_interfaces::action::ParkAtPeak_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stsl_interfaces::action::ParkAtPeak_SendGoal_Request msg_;
};

class Init_ParkAtPeak_SendGoal_Request_goal_id
{
public:
  Init_ParkAtPeak_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParkAtPeak_SendGoal_Request_goal goal_id(::stsl_interfaces::action::ParkAtPeak_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ParkAtPeak_SendGoal_Request_goal(msg_);
  }

private:
  ::stsl_interfaces::action::ParkAtPeak_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::action::ParkAtPeak_SendGoal_Request>()
{
  return stsl_interfaces::action::builder::Init_ParkAtPeak_SendGoal_Request_goal_id();
}

}  // namespace stsl_interfaces


namespace stsl_interfaces
{

namespace action
{

namespace builder
{

class Init_ParkAtPeak_SendGoal_Response_stamp
{
public:
  explicit Init_ParkAtPeak_SendGoal_Response_stamp(::stsl_interfaces::action::ParkAtPeak_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::stsl_interfaces::action::ParkAtPeak_SendGoal_Response stamp(::stsl_interfaces::action::ParkAtPeak_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stsl_interfaces::action::ParkAtPeak_SendGoal_Response msg_;
};

class Init_ParkAtPeak_SendGoal_Response_accepted
{
public:
  Init_ParkAtPeak_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParkAtPeak_SendGoal_Response_stamp accepted(::stsl_interfaces::action::ParkAtPeak_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ParkAtPeak_SendGoal_Response_stamp(msg_);
  }

private:
  ::stsl_interfaces::action::ParkAtPeak_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::action::ParkAtPeak_SendGoal_Response>()
{
  return stsl_interfaces::action::builder::Init_ParkAtPeak_SendGoal_Response_accepted();
}

}  // namespace stsl_interfaces


namespace stsl_interfaces
{

namespace action
{

namespace builder
{

class Init_ParkAtPeak_GetResult_Request_goal_id
{
public:
  Init_ParkAtPeak_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::stsl_interfaces::action::ParkAtPeak_GetResult_Request goal_id(::stsl_interfaces::action::ParkAtPeak_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stsl_interfaces::action::ParkAtPeak_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::action::ParkAtPeak_GetResult_Request>()
{
  return stsl_interfaces::action::builder::Init_ParkAtPeak_GetResult_Request_goal_id();
}

}  // namespace stsl_interfaces


namespace stsl_interfaces
{

namespace action
{

namespace builder
{

class Init_ParkAtPeak_GetResult_Response_result
{
public:
  explicit Init_ParkAtPeak_GetResult_Response_result(::stsl_interfaces::action::ParkAtPeak_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::stsl_interfaces::action::ParkAtPeak_GetResult_Response result(::stsl_interfaces::action::ParkAtPeak_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stsl_interfaces::action::ParkAtPeak_GetResult_Response msg_;
};

class Init_ParkAtPeak_GetResult_Response_status
{
public:
  Init_ParkAtPeak_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParkAtPeak_GetResult_Response_result status(::stsl_interfaces::action::ParkAtPeak_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ParkAtPeak_GetResult_Response_result(msg_);
  }

private:
  ::stsl_interfaces::action::ParkAtPeak_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::action::ParkAtPeak_GetResult_Response>()
{
  return stsl_interfaces::action::builder::Init_ParkAtPeak_GetResult_Response_status();
}

}  // namespace stsl_interfaces


namespace stsl_interfaces
{

namespace action
{

namespace builder
{

class Init_ParkAtPeak_FeedbackMessage_feedback
{
public:
  explicit Init_ParkAtPeak_FeedbackMessage_feedback(::stsl_interfaces::action::ParkAtPeak_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::stsl_interfaces::action::ParkAtPeak_FeedbackMessage feedback(::stsl_interfaces::action::ParkAtPeak_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stsl_interfaces::action::ParkAtPeak_FeedbackMessage msg_;
};

class Init_ParkAtPeak_FeedbackMessage_goal_id
{
public:
  Init_ParkAtPeak_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParkAtPeak_FeedbackMessage_feedback goal_id(::stsl_interfaces::action::ParkAtPeak_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ParkAtPeak_FeedbackMessage_feedback(msg_);
  }

private:
  ::stsl_interfaces::action::ParkAtPeak_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stsl_interfaces::action::ParkAtPeak_FeedbackMessage>()
{
  return stsl_interfaces::action::builder::Init_ParkAtPeak_FeedbackMessage_goal_id();
}

}  // namespace stsl_interfaces

#endif  // STSL_INTERFACES__ACTION__DETAIL__PARK_AT_PEAK__BUILDER_HPP_
