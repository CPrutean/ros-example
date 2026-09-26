#include <ExampleCppNode/example_cpp_node.hpp>
#include <chrono>
#include <rclcpp/executors.hpp>
#include <rclcpp/future_return_code.hpp>
#include <rclcpp/publisher_base.hpp>
/*
 Normally you wouldnt define the functions in the same file it runs in this is
 just to show the include and src pattern of many C++ projects
*/

CppNode::ExampleCppNode::ExampleCppNode() : Node("ExampleCppNode") {
  using namespace messages::msg;
  using namespace std::chrono_literals;
  m_publisher = this->create_publisher<ExampleMsg>("CppPublisher", 10);
  /* This is the same as the way below, we create a `placeholder` value that is
  some dynamic argument, same as a lambda m_subscriber =
  this->create_subscription<ExampleMsg>( "PythonPublisher", 10,
      std::bind(&ExampleCppNode::messageCallback, this, _1));

  */
  // A subscription needs some callable object, so we create this lambda to pass
  // to it
  auto functionLambda = [this](const ExampleMsg &msg) {
    this->messageCallback(msg);
  };
  m_subscriber = this->create_subscription<ExampleMsg>("PythonPublisher", 10,
                                                       functionLambda);

  std::chrono::milliseconds duration{500};
  using namespace messages::srv;
  auto serviceLambda = [this](ExampleService::Request::SharedPtr req,
                              ExampleService::Response::SharedPtr resp) {
    resp->response = req->a + req->b;
    return resp;
  };
  m_service =
      this->create_service<ExampleService>("cpp_service", serviceLambda);

  m_client = this->create_client<ExampleService>("python_service");
  auto wait_res = m_client->wait_for_service(std::chrono::seconds(10));
  if (!wait_res) {
    RCLCPP_ERROR(this->get_logger(), "Failed to initialize service");
  }

  m_timer = this->create_timer(duration,
                               std::bind(&ExampleCppNode::timerCallback, this));
}

void CppNode::ExampleCppNode::timerCallback() {
  using namespace messages::msg;
  ExampleMsg msg{};
  msg.a = rand();
  msg.b = rand();
  this->m_publisher->publish(msg);
  auto request =
      std::make_shared<messages::srv::ExampleService::Request>();
  request->a = rand();
  request->b = rand();
  // Don't spin from inside a callback, the executor is already spinning this
  // node. Handle the response asynchronously instead.
  m_client->async_send_request(
      request,
      [this](rclcpp::Client<messages::srv::ExampleService>::SharedFuture f) {
        RCLCPP_INFO(this->get_logger(), "Received value was %ld",
                    f.get()->response);
      });
}

void CppNode::ExampleCppNode::messageCallback(
    const messages::msg::ExampleMsg &ptr) {
  RCLCPP_INFO(this->get_logger(), "New data found A: %ld, B: %ld", ptr.a,
              ptr.b);
}

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CppNode::ExampleCppNode>());
  rclcpp::shutdown();
  return 0;
}
