import unittest
from statiskit import linalg

class TestMatrix(unittest.TestCase):

    def test___initialization(self):
        """Test matrix initialization"""
        M = linalg.Matrix(3,3)
        self.assertEqual(M.rows, 3)
        self.assertEqual(M.cols, 3)
        for row in range(M.rows):
            for col in range(M.cols):
                self.assertEqual(M[row, col], 0.)
        self.assertEqual(M, linalg.Matrix(3))
        self.assertEqual(M, linalg.Matrix(M))


    def test__assignement(self):
        """Test matrix assignement"""
        from statiskit import linalg
        M = linalg.Matrix(3,3)
        self.assertEqual(M[0,0], 0.)
        M[0, 0] = 1.
        self.assertEqual(M[0,0], 1.)

    def test_str(self):
        """Test matrix string representation"""
        M = linalg.Matrix(3,3)
        M[0,0] = 10.
        self.assertEqual(str(M), "[10.0, 0.0, 0.0]\n[ 0.0, 0.0, 0.0]\n[ 0.0, 0.0, 0.0]")

    def test_repr(self):
        """Test matrix string representation"""
        M = linalg.Matrix(3,3)
        M[-1,-1] = 10.
        self.assertEqual(repr(M), "[0.0, 0.0,  0.0]\n[0.0, 0.0,  0.0]\n[0.0, 0.0, 10.0]")

    def test_repr_latex(self):
        """Test matrix latex representation"""
        M = linalg.Matrix(3,3)
        M[0,0] = 10.
        self.assertEqual(M._repr_latex_(), "$\\begin{pmatrix}\n10.0 & 0.0 & 0.0\\\\\t\n 0.0 & 0.0 & 0.0\\\\\t\n 0.0 & 0.0 & 0.0\\\\\n\\end{pmatrix}$")