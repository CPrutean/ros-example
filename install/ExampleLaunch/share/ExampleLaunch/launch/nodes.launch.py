from launch import LaunchDescription
import launch_ros.actions


def generate_launch_description():
    return LaunchDescription(
        [
            launch_ros.actions.Node(
                package="ExampleCppNode",
                executable="ros-node",
            ),
            launch_ros.actions.Node(
                package="ExamplePythonNode",
                executable="ExamplePythonNode",
            ),
        ]
    )
