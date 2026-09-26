#pragma once
#include <iostream>
#include <messages/msg/example_msg.hpp>
#include <messages/srv/example_service.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
namespace CppNode {
class ExampleCppNode : public rclcpp::Node {
  rclcpp::Publisher<messages::msg::ExampleMsg>::SharedPtr m_publisher;
  rclcpp::Subscription<messages::msg::ExampleMsg>::SharedPtr m_subscriber;
  rclcpp::TimerBase::SharedPtr m_timer;
  rclcpp::ServiceBase::SharedPtr m_service;
  rclcpp::Client<messages::srv::ExampleService>::SharedPtr m_client;

public:
  void messageCallback(const messages::msg::ExampleMsg &ptr);
  // Small function that publishes data a few times a second
  void timerCallback();
  explicit ExampleCppNode();
};

}; // namespace CppNode
