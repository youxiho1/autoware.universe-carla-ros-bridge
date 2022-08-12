0. test whether we can send /initialpose and /planning/mission_planning/goal by commandline		Finished
1. spawn ego_vehicle in carla at a specific position, aka p(x, y, z, pitch, roll, yaw)
2. create a udp-client and udp-server, which can redirect all kinds of messages to autoware
3. send the initial pose via udp client-server
4. send a goal pose via udp-client-server (p.s. we can decide a goal pose on rviz when we first try to program this demo)
5. what does /localization/kinematic_state: nav_msgs/msg/Odometry mean?
6. convert carla odometry to kinematic_state and then send it to autoware
7. revise the sample_planning.launch.xml (we do not need a simple_planning_simulator again)
8. integrate all parts and test whether the system can run successfully

