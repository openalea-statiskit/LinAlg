import types

__all__ = []

class NotImportedModule(types.ModuleType):

    def __init__(self, module):
        self._module = module

    def __getattr__(self, arg):
        raise ImportError("No module named " + self._module)

try:
    import numpy
except ImportError:
    numpy = NotImportedModule('numpy')