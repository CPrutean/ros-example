from rclpy.node import Node
from std_msgs.msg import Int64, String
from rclpy.publisher import Publisher
from rclpy.subscription import Subscription
from messages.msg import ExampleMsg
from messages.srv import ExampleService
import rclpy


class BasicNode(Node):
    def __init__(self):
        super().__init__("BasicNodePractice")
        # Create a publisher topic we can publish data to

        self._publisher = self.create_publisher(ExampleMsg, "PythonPublisher", 10)

        self._subscriber = self.create_subscription(
            ExampleMsg, "CppPublisher", self._subscriber_calback, 10
        )
        self._service = self.create_service(
            ExampleService, "python_service", self._service_callback
        )

        self._client = self.create_client(ExampleService, "cpp_service")
        res = self._client.wait_for_service(timeout_sec=10.0)
        if res == False:
            self.get_logger().error("Failed to wait for service")
        self._request = ExampleService.Request()

        self._timer = self.create_timer(0.5, self._timer_callback)

    def publish_some_data(self, a: int, b: int):
        pub_data = ExampleMsg()
        pub_data.a = a
        pub_data.b = b
        self._publisher.publish(pub_data)

    def _subscriber_calback(self, msg: ExampleMsg):
        self.get_logger().info(f"Data received A: {msg.a}, B:{msg.b}")

    def _timer_callback(self):
        self.publish_some_data(123, 456)
        self._request.a = 123
        self._request.b = 456
        # call_async returns a future immediately; handle the result in a callback
        # rather than blocking inside the timer callback
        future = self._client.call_async(self._request)
        future.add_done_callback(self._client_done)

    def _client_done(self, future):
        self.get_logger().info(f"Service response: {future.result().response}")

    def _service_callback(
        self, request: ExampleService.Request, response: ExampleService.Response
    ):
        response.response = request.a + request.b

        return response


def main():
    rclpy.init()
    try:
        rclpy.spin(BasicNode())
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.try_shutdown()


if __name__ == "__main__":
    main()
