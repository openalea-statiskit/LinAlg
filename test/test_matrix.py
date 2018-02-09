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
        """Test matrix construction"""
        cls._M = linalg.Matrix(3,3)

    def test_matrix_construction(self):
        """Test matrix construction"""
        self.assertEqual(self._M.nb_rows, 3)
        self.assertEqual(self._M.nb_cols, 3)
        for row in range(self._M.nb_rows):
            for col in range(self._M.nb_cols):
                self.assertEqual(self._M[row, col], 0.)
        self.assertEqual(self._M, linalg.Matrix(3))
        self.assertEqual(self._M, linalg.Matrix(self._M))

    def test_assignement(self):
        """Test matrix assignement"""
        self.assertEqual(self._M[0,0], 0.)
        self._M[0, 0] = 10.
        self.assertEqual(self._M[0,0], 10.)
        self._M[0, 0] = 0.
        self.assertEqual(self._M[0,0], 0.)

    def test_repr(self):
        """Test matrix string representation"""
        self.assertEqual(repr(self._M), "[0.0, 0.0, 0.0]\n[0.0, 0.0, 0.0]\n[0.0, 0.0, 0.0]")

    def test_repr_latex(self):
        """Test matrix latex representation"""
        self.assertEqual(self._M._repr_latex_(), "$\\begin{pmatrix}\n\t0.0 & 0.0 & 0.0\\\\\n\t0.0 & 0.0 & 0.0\\\\\n\t0.0 & 0.0 & 0.0\\\\\n\\end{pmatrix}$")

    def test_addition(self):
        """Test matrix addition"""
        self.assertEqual(self._M, self._M + self._M)

    def test_subtraction(self):
        """Test matrix subtraction"""
        self.assertEqual(self._M, self._M - self._M)

    def test_multiplication(self):
        """Test matrix multiplication"""
        self.assertEqual(self._M, self._M * self._M)
        self.assertEqual(self._M, self._M * 2.)

    def test_division(self):
        """Test matrix division"""
        self.assertEqual(self._M, self._M / 2.)

    @classmethod
    def tearDownClass(cls):
        """Test matrix deletion"""
        del cls._M  
