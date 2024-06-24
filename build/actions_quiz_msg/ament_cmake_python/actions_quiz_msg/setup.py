from setuptools import find_packages
from setuptools import setup

setup(
    name='actions_quiz_msg',
    version='0.0.0',
    packages=find_packages(
        include=('actions_quiz_msg', 'actions_quiz_msg.*')),
)
