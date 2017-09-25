from functools import wraps
from statiskit.stl.vector import decorator

from ._linalg import __linalg

from optionals import numpy, pyplot

__all__ = ["Matrix",
           "SparseMatrix",
           "Matrices",
           "SparseMatrices"]


Matrix = __linalg.statiskit.linalg.Matrix
SparseMatrix = __linalg.statiskit.linalg.SparseMatrix
Matrices = __linalg.statiskit.linalg.Matrices
SparseMatrices = __linalg.statiskit.linalg.SparseMatrices
decorator(Matrices)

def wrapper__init__(f):
    @wraps(f)
    def __init__(self, *args):
        if len(args) == 0:
            f(self)
        if len(args) == 1:
            arg = args[0]
            if isinstance(arg, int):
                f(self)
                self.set_zero(arg, arg)
            elif isinstance(arg, self.__class__):
                f(self, arg)
            else:
                arg = numpy.asarray(arg)
                if not len(arg.shape) <= 2:
                    raise ValueError('\'arg\' parameter is matrix compatible')
                f(self)
                if len(arg.shape) == 1:
                    self.set_zero(arg.shape[0], arg.shape[0])
                    for i, v in enumerate(arg):
                        self[i, i] = v
                else:
                    self.set_zero(arg.shape[0], arg.shape[1])
                    for i, v in enumerate(arg):
                        for j, m in enumerate(v):
                            self[i, j] = m
        elif len(args) == 2:
            if any(not isinstance(arg, int) for arg in args) or any(arg <= 0 for arg in args):
                raise TypeError('Arguments should be strictly positive integers')
            f(self)
            self.set_zero(*args)
        else:
            raise TypeError('__init__() takes at most 2 arguments')
    return __init__

Matrix.__init__ = wrapper__init__(Matrix.__init__)
del wrapper__init__

def __eq__(self, other):
    if isinstance(other, Matrix) and self.nb_rows == other.nb_rows and self.nb_cols == other.nb_cols:
        return all(all(self[row, col] == other[row, col] for col in range(self.nb_cols)) for row in range(self.nb_rows))
    else:
        return False

Matrix.__eq__ = __eq__
del __eq__

Matrix.nb_rows = property(Matrix.rows)
# del Matrix.rows
Matrix.nb_cols = property(Matrix.cols)
# del Matrix.cols

def wrapper__getitem__(f):
    @wraps(f)
    def __getitem__(self, item):
        row, col = item
        if row < 0:
            row += self.nb_rows
        if col < 0:
            col += self.nb_cols
        if not 0 <= row < self.nb_rows:
            raise IndexError('`row` parameter should be positive and strictly inferior to ' + str(self.nb_rows))
        if not 0 <= col < self.nb_cols:
            raise IndexError('`row` parameter should be positive and strictly inferior to ' + str(self.nb_rows))
        return f(self, row, col)
    return __getitem__

Matrix.__getitem__ = wrapper__getitem__(Matrix.coeff)
# del Matrix.coeff, wrapper__getitem__

def wrapper__setitem__(f):
    @wraps(f)
    def __setitem__(self, item, value):
        row, col = item
        if row < 0:
            row += self.nb_rows
        if col < 0:
            col += self.nb_cols
        if not 0 <= row < self.nb_rows:
            raise IndexError('`row` parameter should be positive and strictly inferior to ' + str(self.nb_rows))
        if not 0 <= col < self.nb_cols:
            raise IndexError('`row` parameter should be positive and strictly inferior to ' + str(self.nb_rows))
        return f(self, row, col, value)
    return __setitem__

Matrix.__setitem__ = wrapper__setitem__(Matrix.coeff_ref)
# del Matrix.coeff_ref, wrapper__setitem__

def __repr__(self):
    lengths = [0] * self.nb_cols
    for row in range(self.nb_rows):
        for col in range(self.nb_cols):
            lengths[col] = max(lengths[col], len(str(self[row, col])))
    return "\n".join("[" + ", ".join(str(self[row, col]).rjust(lengths[col]) for col in range(self.nb_cols)) + "]" for row in range(self.nb_rows))
    
Matrix.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return "$\\begin{pmatrix}\n\t" + str(self).replace("[", "").replace("]", "\\\\").replace(", ", " & ").replace("\n", "\n\t") + "\n\\end{pmatrix}$"

Matrix._repr_latex_ = _repr_latex_
del _repr_latex_

def to_list(self):
    return [[self[i, j] for j in range(self.nb_cols)] for i in range(self.nb_rows)]

Matrix.to_list = to_list
del to_list


def to_numpy(self):
    return numpy.array(self.to_list())

Matrix.to_numpy = to_numpy
del to_numpy

def plot(self, axes=None, *args, **kwargs):
    if axes is None:
        axes = pyplot.subplot(111)
    axes.matshow(self.to_numpy(), *args, **kwargs)
    return axes

Matrix.plot = plot
del plot