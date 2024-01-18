This repository provides basic examples of building ROS wrappers for non-ROS libraries. The code comes from: https://roboticsbackend.com/create-a-ros-driver-package-introduction-what-is-a-ros-wrapper-1-4/

Verified this works with ROS noetic

Launch the python version
```
roslaunch my_robot_driver_py motor_driver.launch
```
or launch the C++ version
```
roslaunch my_robot_driver_cpp motor_driver.launch
```

In another terminal, use the following command to show available topics:
```
rostopic list
```

Then use the following command to echo the topic to see if it is publishing correctly: 
```
rostopic echo <topic name> 
```

Example:
```
rostopic echo /current_speed
```
