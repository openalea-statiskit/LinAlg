import unittest
from statiskit import linalg

class TestMatrix(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test vector construction"""
        cls._C = linalg.Vector(3)
        cls._R = linalg.RowVector(3)

    def test__column_construction(self):
        """Test column vector construction"""
        self.assertEqual(self._C.rows, 3)
        self.assertEqual(self._C.cols, 1)

        for element in self._C:
            self.assertEqual(element, 0.)

        self.assertEqual(self._C, linalg.Vector(3))
        self.assertEqual(self._C, linalg.Vector(self._C))

    def test__row_construction(self):
        """Test row vector construction"""
        self.assertEqual(self._R.rows, 1)
        self.assertEqual(self._R.cols, 3)

        for element in self._R:
            self.assertEqual(element, 0.)

        self.assertEqual(self._R, linalg.RowVector(3))
        self.assertEqual(self._R, linalg.RowVector(self._R))

    def test_assignement(self):
        """Test vector assignement"""
        self.assertEqual(self._C[0], 0.)
        self._C[0] = 10.
        self.assertEqual(self._C[0], 10.)

        self.assertEqual(self._R[0], 0.)
        self._R[0] = 10.
        self.assertEqual(self._R[0], 10.)

    def test_repr(self):
        """Test vector string representation"""
        self.assertEqual(repr(self._C), "[10.0]\n[ 0.0]\n[ 0.0]")
        self.assertEqual(repr(self._R), "[10.0, 0.0, 0.0]")

    def test_repr_latex(self):
        """Test vector latex representation"""
        self.assertEqual(self._C._repr_latex_(), "$\\begin{pmatrix}\n\t10.0\\\\\n\t 0.0\\\\\n\t 0.0\\\\\n\\end{pmatrix}$")
        self.assertEqual(self._R._repr_latex_(), "$\\begin{pmatrix}\n\t10.0 & 0.0 & 0.0\\\\\n\\end{pmatrix}$")

    @classmethod
    def tearDownClass(cls):
        """Test vector deletion"""
        del cls._C  
        del cls._R