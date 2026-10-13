from setuptools import find_packages
from setuptools import setup

setup(
    name='semantic_mapping_sim',
    version='0.1.0',
    packages=find_packages(
        include=('semantic_mapping_sim', 'semantic_mapping_sim.*')),
)
