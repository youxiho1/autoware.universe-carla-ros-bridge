0. test whether we can send /initialpose and /planning/mission_planning/goal by commandline		Finished
1. spawn ego_vehicle in carla at a specific position, aka p(x, y, z, pitch, roll, yaw)		Finished (We can do this via command line)
2. create a udp-client and udp-server, which can redirect all kinds of messages to autoware
3. send the initial pose via udp client-server
4. send a goal pose via udp-client-server (p.s. we can decide a goal pose on rviz when we first try to program this demo)
5. what does /localization/kinematic_state: nav_msgs/msg/Odometry mean?				Finished
6. convert carla odometry to kinematic_state and then send it to autoware. It seems that we only need to remap it. Maybe we can use a remap in the later version.
7. revise the sample_planning.launch.xml (we do not need a simple_planning_simulator again)
	I've changed the planning_simulator_launch.xml and rebuild the autoware package
    	<!-- <let name="launch_dummy_vehicle" value="false" if="$(var scenario_simulation)"/> -->
    	<!-- <let name="launch_dummy_vehicle" value="true" unless="$(var scenario_simulation)"/> -->
    	<let name="launch_dummy_vehicle" value="false" />
8. integrate all parts and test whether the system can run successfully


set initialpose failed
tf tree?


Now that we have a new environment
What should we do? We need to revise the frameid to map and child_frame_id to base_link!


Let's see what's carla ego_vehicle's odometry like?
An example is as follows:
header:
  stamp:
    sec: 115
    nanosec: 822270908
  frame_id: map
child_frame_id: ego_vehicle
pose:
  pose:
    position:
      x: 91.99989318847656
      y: -0.9995567798614502
      z: 0.0014284133212640882
    orientation:
      x: -2.3968453786683755e-05
      y: -2.616643383059778e-05
      z: -1.5297772120895228e-07
      w: 0.9999999993704036
  covariance:
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
twist:
  twist:
    linear:
      x: 0.0
      y: -0.0
      z: 0.0
    angular:
      x: 0.0
      y: -0.0
      z: -0.0
  covariance:
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0

Then how about the autoware kinematic_state? Let's see it then.
header:
  stamp:
    sec: 1660372016
    nanosec: 74505524
  frame_id: map
child_frame_id: base_link
pose:
  pose:
    position:
      x: 385.579345703125
      y: -326.24444580078125
      z: 0.0
    orientation:
      x: 0.0
      y: 0.0
      z: 0.9999729701491825
      w: 0.007352480603322218
  covariance:
  - 0.0001
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0001
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
twist:
  twist:
    linear:
      x: 0.0
      y: 0.0
      z: 0.0
    angular:
      x: 0.0
      y: 0.0
      z: 0.0
  covariance:
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
  - 0.0
---






