from setuptools import find_packages
from setuptools import setup

setup(
    name='duckie_led_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('duckie_led_interfaces', 'duckie_led_interfaces.*')),
)
