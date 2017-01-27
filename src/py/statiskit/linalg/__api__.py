__all__ = []

def _repr_latex_(self):
	return '$\\begin{pmatrix}\n\t' + '\\\\\n\t'.join(' & '.join(str(self[i,j]) for j in range(self.cols())) for i in range(self.rows())) + '\n\\\end{pmatrix}'