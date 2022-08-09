## Let's learn op_bridge_ros2.py first

## WorldHandler
### init()
carla args: host, port, mode, map name, frame rate, vehicle name

### load_world()
client = carla.client(host, port)
client.load(map)
sync mode
what is carla data provider?
set spawn point: x, y, z, roll, pitch, yaw

## AgentHandler
### Construction()
Use BridgeHelpers to find the ego_vehicle
Use AgentWrapper to setup sensors

### runAgent()
self.agent_loop = AgentLoop()

while self.agent_loop.running:
    timestamp = None
    world = CarlaDataProvider.get_world()
    if world:
        snapshot = world.get_snapshot()
        if snapshot:
            timestamp = snapshot.timestamp
    if timestamp:
        self.agent_loop._tick_agent(timestamp)

## AgentLoop
### init()
setup some parameters

### tick_agent()
GameTime.on_carla_tick(timestamp)
CarlaDataProvider.on_carla_tick()
self.ego_vehicle.apply_control(ego_action)
spectator = CarlaDataProvider.get_world().get_spectator()
ego_trans = self.ego_vehicle.get_transform()
spectator.set_transform(carla.Transform(ego_trans.location + carla.Location(z=50), carla.Rotation(pitch=-90)))
CarlaDataProvider.get_world().tick()


## BridgeHelpers
static method: get_agent_actor()
return the ego_vehicle/hero actor

## AgentWrapper
allowed_sensors = [
        'sensor.opendrive_map',
        'sensor.speedometer',
        'sensor.camera.rgb',
        'sensor.camera',
        'sensor.lidar.ray_cast',
        'sensor.other.radar',
        'sensor.other.gnss',
        'sensor.other.imu'
    ]


_sensor_list = []
### setup_sensors()
create sensors and attach them to ego_vehicle
for sensor in sensors:
    sensor = OpenDriveMapReader(vehicle, sensor_spec['reading_frequency'])
    sensor = SpeedometerReader(vehicle, frame_rate)

    define sensor location and sensor rotation
    blueprint library set attribute for sensors

    add sensor to _sensor_list

### validate_sensor_configurations()
Objective: Ensure that the sensor configuration is valid, in case the challenge mode is used
    Returns true on valid configuration, false otherwise

check the number of sensors
check the validity and extrinsics of the sensors

## main()
new WorldHandler.load_world
new AgentHandler
agentHandler.run_agent()

cleanup()
