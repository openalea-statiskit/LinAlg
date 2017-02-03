from functools import wraps
from _linalg import __linalg

__all__ = ["Matrix"]


Matrix = __linalg.statiskit.linalg.Matrix

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
            else:
                f(self, arg)
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
    if isinstance(other, Matrix):
        return all(all(self[row, col] == other[row, col] for col in range(self.cols)) for row in range(self.rows))
    else:
        return False

Matrix.__eq__ = __eq__
del __eq__

Matrix.rows = property(Matrix.rows)
Matrix.cols = property(Matrix.cols)

def wrapper__getitem__(f):
    @wraps(f)
    def __getitem__(self, item):
        row, col = item
        if row < 0:
            row += self.rows
        if col < 0:
            col += self.cols
        if not 0 <= row < self.rows:
            raise IndexError('`row` parameter should be positive and strictly inferior to ' + str(self.rows))
        if not 0 <= col < self.cols:
            raise IndexError('`row` parameter should be positive and strictly inferior to ' + str(self.rows))
        return f(self, row, col)
    return __getitem__

Matrix.__getitem__ = wrapper__getitem__(Matrix.coeff)
#del __linalg.eigen._PlainObjectBase_5391cabac5f95f278a515f77cb95023c.coeff, wrapper__getitem__

def wrapper__setitem__(f):
    @wraps(f)
    def __setitem__(self, item, value):
        row, col = item
        if row < 0:
            row += self.rows
        if col < 0:
            col += self.cols
        if not 0 <= row < self.rows:
            raise IndexError('`row` parameter should be positive and strictly inferior to ' + str(self.rows))
        if not 0 <= col < self.cols:
            raise IndexError('`row` parameter should be positive and strictly inferior to ' + str(self.rows))
        return f(self, row, col, value)
    return __setitem__

Matrix.__setitem__ = wrapper__setitem__(Matrix.coeff_ref)
#del __linalg.eigen._PlainObjectBase_5391cabac5f95f278a515f77cb95023c.coeff_ref, wrapper__setitem__

def __repr__(self):
    lengths = [0] * self.cols
    for row in range(self.rows):
        for col in range(self.cols):
            lengths[col] = max(lengths[col], len(str(self[row, col])))
    return "\n".join("[" + ", ".join(str(self[row, col]).rjust(lengths[col]) for col in range(self.cols)) + "]" for row in range(self.rows))
    
Matrix.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return "$\\begin{pmatrix}\n" + str(self).replace("[", "").replace("]", "\\\\").replace(", ", " & ").replace("\n", "\t\n") + "\n\\end{pmatrix}$"

Matrix._repr_latex_ = _repr_latex_
#del _repr_latex_