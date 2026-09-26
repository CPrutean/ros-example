.PHONY: container build clean launch

build:
	colcon build
clean:
	rm -rf build install log 
container:
	devcontainer up
	devcontainer exec --workspace-folder . /bin/bash
launch:
	ros2 launch ExampleLaunch nodes.launch.py -a
