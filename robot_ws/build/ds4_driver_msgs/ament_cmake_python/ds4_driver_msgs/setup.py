from setuptools import find_packages
from setuptools import setup

setup(
    name='ds4_driver_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('ds4_driver_msgs', 'ds4_driver_msgs.*')),
)
