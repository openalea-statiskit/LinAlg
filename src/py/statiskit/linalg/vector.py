from functools import wraps

from _linalg import __linalg

from optionals import numpy

__all__ = ["Vector", "RowVector"]


Vector = __linalg.statiskit.linalg.Vector
RowVector = __linalg.statiskit.linalg.RowVector

def wrapper__init__(f):
    @wraps(f)
    def __init__(self, *args):
        if len(args) == 0:
            f(self)
        if len(args) == 1:
            arg = args[0]
            if isinstance(arg, int):
                f(self)
                self.set_zero(arg)
            elif isinstance(arg, self.__class__):
                f(self, arg)
            else:
                arg = numpy.asarray(arg)
                if not len(arg.shape) == 1:
                    raise ValueError('\'arg\' parameter is vector compatible')
                f(self)
                self.set_zero(arg.shape[0])
                for i, v in enumerate(arg):
                    self[i] = v
        else:
            raise TypeError('__init__() takes at most 1 argument')
    return __init__

Vector.__init__ = wrapper__init__(Vector.__init__)
RowVector.__init__ = wrapper__init__(RowVector.__init__)
del wrapper__init__

def __eq__(self, other):
    if isinstance(other, self.__class__):
        return all(self[index] == other[index] for index in range(len(self)))
    else:
        return False

Vector.__eq__ = __eq__
RowVector.__eq__ = __eq__
del __eq__

Vector.__len__ = Vector.rows
Vector.nb_rows = property(Vector.rows)
Vector.nb_cols = property(Vector.cols)
# del Vector.rows, Vector.cols

RowVector.__len__ = RowVector.cols
RowVector.nb_cols = property(RowVector.cols)
RowVector.nb_rows = property(RowVector.rows)
# del RowVector.rows, RowVector.cols

def wrapper__getitem__(f):
    @wraps(f)
    def __getitem__(self, index):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError('`index` parameter should be positive and strictly inferior to ' + str(len(self)))
        return f(self, index)
    return __getitem__

Vector.__getitem__ = wrapper__getitem__(Vector.coeff)
RowVector.__getitem__ = wrapper__getitem__(RowVector.coeff)
# del Vector.coeff,  RowVector.coeff, wrapper__getitem__

def wrapper__setitem__(f):
    @wraps(f)
    def __setitem__(self, index, value):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError('`index` parameter should be positive and strictly inferior to ' + str(len(self)))
        f(self, index, value)
    return __setitem__

Vector.__setitem__ = wrapper__setitem__(Vector.coeff_ref)
RowVector.__setitem__ = wrapper__setitem__(RowVector.coeff_ref)
# del Vector.coeff_ref,  RowVector.coeff_ref, wrapper__setitem__

def __repr__(self):
    length = 0
    for element in self:
        length = max(length, len(str(element)))
    return "\n".join("[" + str(self[row]).rjust(length) + "]" for row in range(self.nb_rows))
    
Vector.__repr__ = __repr__
del __repr__

def __repr__(self):
    return "[" + ", ".join(str(element) for element in self) + "]"

RowVector.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return "$\\begin{pmatrix}\n\t" + str(self).replace("[", "").replace("]", "\\\\").replace(", ", " & ").replace("\n", "\n\t") + "\n\\end{pmatrix}$"

Vector._repr_latex_ = _repr_latex_
RowVector._repr_latex_ = _repr_latex_
del _repr_latex_

def to_list(self):
    return [[self[i] for i in range(self.nb_rows)]]

RowVector.to_list = to_list
del to_list

def to_list(self):
    return [self[i] for i in range(self.nb_cols)]

RowVector.to_list = to_list
del to_list

def to_numpy(self):
    return numpy.array(self.to_list())

Vector.to_numpy = to_numpy
RowVector.to_numpy = to_numpy
del to_numpy