from distutils.core import setup
from catkin_pkg.python_setup import generate_distutils_setup

d = generate_distutils_setup(
    scripts=['scripts/motor_ros_wrapper.py'],
    packages=['my_robot_driver'],
    package_dir={'': 'src'}
)
setup(**d)
