from setuptools import setup, find_packages
from glob import glob

so_files = glob("MeanVector/python/vector_core*.so")

setup(
    name="mean_vector",
    version="0.1",
    description="Function for computing mean value of vector.",
    packages=find_packages(),
    package_data={
        "mean_vector": ["python/*.so"],
    },
)