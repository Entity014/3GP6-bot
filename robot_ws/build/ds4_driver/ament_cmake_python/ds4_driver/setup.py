from setuptools import find_packages
from setuptools import setup

setup(
    name='ds4_driver',
    version='0.2.1',
    packages=find_packages(
        include=('ds4_driver', 'ds4_driver.*')),
)
