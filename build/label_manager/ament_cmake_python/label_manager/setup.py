from setuptools import find_packages
from setuptools import setup

setup(
    name='label_manager',
    version='2.1.1',
    packages=find_packages(
        include=('label_manager', 'label_manager.*')),
)
