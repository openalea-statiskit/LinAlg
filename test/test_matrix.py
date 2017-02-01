import unittest
from statiskit import linalg

class TestMatrix(unittest.TestCase):

    def test_initialization(self):
        """Test matrix initialization"""
        M = linalg.Matrix(3,3)
        self.assertEqual(M.rows == 3)
        self.assertEqual(M.cols == 3)
        for row in range(M.rows):
            for col in range(M.cols):
                self.assertEqual(m[row, col], 0.)

    def test_assignement(self):
        """Test matrix assignement"""
        from statiskit import linalg
        M = linalg.Matrix(3,3)
        self.assertEqual(M[0,0] == 0.)
        M[0, 0] = 1.
        self.assertEqual(M[0,0] == 1.)