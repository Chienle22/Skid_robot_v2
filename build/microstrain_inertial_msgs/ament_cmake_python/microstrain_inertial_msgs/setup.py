from setuptools import find_packages
from setuptools import setup

setup(
    name='microstrain_inertial_msgs',
    version='4.8.0',
    packages=find_packages(
        include=('microstrain_inertial_msgs', 'microstrain_inertial_msgs.*')),
)
