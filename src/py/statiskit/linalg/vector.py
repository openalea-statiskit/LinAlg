from functools import wraps
from _linalg import __linalg

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
            else:
                f(self, arg)
        else:
            raise TypeError('__init__() takes at most 1 argument')
    return __init__

Vector.__init__ = wrapper__init__(Vector.__init__)
RowVector.__init__ = wrapper__init__(RowVector.__init__)
del wrapper__init__

def __eq__(self, other):
    if isinstance(other, self.__class__):
        return all(all(self[index] == other[index] for index in range(len(self))))
    else:
        return False

Vector.__eq__ = __eq__
RowVector.__eq__ = __eq__
del __eq__

Vector.__len__ = Vector.rows
Vector.rows = property(Vector.rows)
Vector.cols = property(Vector.cols)

RowVector.__len__ = RowVector.cols
RowVector.cols = property(RowVector.cols)
RowVector.rows = property(RowVector.rows)

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
    def __setitem__(self, item, value):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError('`index` parameter should be positive and strictly inferior to ' + str(len(self)))
        return f(self, index)
        return f(self, index, value)
    return __setitem__

Vector.__setitem__ = wrapper__setitem__(Vector.coeff_ref)
RowVector.__setitem__ = wrapper__setitem__(RowVector.coeff_ref)
# del Vector.coeff_ref,  RowVector.coeff_ref, wrapper__setitem__

# def __repr__(self):
#     lengths = [0] * self.cols
#     for row in range(self.rows):
#         for col in range(self.cols):
#             lengths[col] = max(lengths[col], len(str(self[row, col])))
#     return "\n".join("[" + ", ".join(str(self[row, col]).rjust(lengths[col]) for col in range(self.cols)) + "]" for row in range(self.rows))
    
# Matrix.__repr__ = __repr__
# del __repr__

# def _repr_latex_(self):
#     return "$\\begin{pmatrix}\n" + str(self).replace("[", "").replace("]", "\\\\").replace(", ", " & ").replace("\n", "\t\n") + "\n\\end{pmatrix}$"

# Matrix._repr_latex_ = _repr_latex_
# #del _repr_latex_