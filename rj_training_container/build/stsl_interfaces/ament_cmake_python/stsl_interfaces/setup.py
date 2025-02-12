from setuptools import find_packages
from setuptools import setup

setup(
    name='stsl_interfaces',
    version='0.1.0',
    packages=find_packages(
        include=('stsl_interfaces', 'stsl_interfaces.*')),
)
