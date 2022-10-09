from setuptools import setup

package_name = 'sensor_bridge'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='tasl',
    maintainer_email='linyuli@mail.nankai.edu.cn',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	'sensor_bridge = sensor_bridge.sensor_bridge:main',
        	'lidar_bridge = sensor_bridge.lidar_bridge:main',
        	'new_bridge = sensor_bridge.new_bridge:main',
        ],
    },
)
