import _linalg

from optionals import numpy
from vector import RowVector
from matrix import Matrix

__all__ = ['read_csv', 'from_numpy']

def read_csv(filepath, sep=None, **kwargs):
    print numpy.genfromtxt(filepath, delimiter=sep, **kwargs)
    return from_numpy(numpy.genfromtxt(filepath, delimiter=sep, **kwargs))

def from_numpy(array):
    if not isinstance(array, numpy.ndarray):
        raise TypeError("'array' parameter must be a numpy 'ndarray' instance")
    if len(array.shape) == 1:
        return RowVector(array)
    elif len(array.shape) == 2:
        return Matrix(array)
    else:
        raise ValueError("'array' parameter must be a numpy 'ndarray' instance of dimension 1 or 2")