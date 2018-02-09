from statiskit import linalg

import unittest
from nose.plugins.attrib import attr

@attr(linux=True, 
      osx=True,
      win=True,
      level=1)
class TestMatrix(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test vector construction"""
        cls._C = linalg.Vector(3)
        cls._R = linalg.RowVector(3)

    def test_column_construction(self):
        """Test column vector construction"""
        self.assertEqual(self._C.nb_rows, 3)
        self.assertEqual(self._C.nb_cols, 1)

        for element in self._C:
            self.assertEqual(element, 0.)

        self.assertEqual(self._C, linalg.Vector(3))
        self.assertEqual(self._C, linalg.Vector(self._C))

    def test_row_construction(self):
        """Test row vector construction"""
        self.assertEqual(self._R.nb_rows, 1)
        self.assertEqual(self._R.nb_cols, 3)

        for element in self._R:
            self.assertEqual(element, 0.)

        self.assertEqual(self._R, linalg.RowVector(3))
        self.assertEqual(self._R, linalg.RowVector(self._R))

    def test_assignement(self):
        """Test vector assignement"""
        self.assertEqual(self._C[0], 0.)
        self._C[0] = 10.
        self.assertEqual(self._C[0], 10.)
        self._C[0] = 0.

        self.assertEqual(self._R[0], 0.)
        self._R[0] = 10.
        self.assertEqual(self._R[0], 10.)
        self._R[0] = 0.

    def test_repr(self):
        """Test vector string representation"""
        self.assertEqual(repr(self._C), "[0.0]\n[0.0]\n[0.0]")
        self.assertEqual(repr(self._R), "[0.0, 0.0, 0.0]")

    def test_repr_latex(self):
        """Test vector latex representation"""
        self.assertEqual(self._C._repr_latex_(), "$\\begin{pmatrix}\n\t0.0\\\\\n\t0.0\\\\\n\t0.0\\\\\n\\end{pmatrix}$")
        self.assertEqual(self._R._repr_latex_(), "$\\begin{pmatrix}\n\t0.0 & 0.0 & 0.0\\\\\n\\end{pmatrix}$")

    # def test_addition(self):
    #     """Test vector addition"""
    #     self.assertEqual(self._C, self._C + self._C)
    #     self.assertEqual(self._R, self._R + self._R)

    # def test_subtraction(self):
    #     """Test vector subtraction"""
    #     self.assertEqual(self._C, self._C - self._C)
    #     self.assertEqual(self._R, self._R - self._R)

    # def test_multiplication(self):
    #     """Test vector multiplication"""
    #     self.assertEqual(0., self._R * self._C)
    #     self.assertEqual(linalg.Matrix(3), self._C * self._R)
    #     self.assertEqual(self._C, self._C * 2)
    #     self.assertEqual(self._R, self._R * 2)

    # def test_division(self):
    #     """Test vector division"""
    #     self.assertEqual(self._C, self._C / 2)
    #     self.assertEqual(self._R, self._R / 2)


    @classmethod
    def tearDownClass(cls):
        """Test vector deletion"""
        del cls._C  
        del cls._R