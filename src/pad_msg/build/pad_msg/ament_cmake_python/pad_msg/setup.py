from setuptools import find_packages
from setuptools import setup

setup(
    name='pad_msg',
    version='0.0.0',
    packages=find_packages(
        include=('pad_msg', 'pad_msg.*')),
)
