#include "base.h"

namespace ieigen
{
	Matrix4f solve(const Matrix4f& A, const Matrix4f& b, const solver_type& solver)
	{
		Matrix4f x;
		switch(solver)
		{
			case partialPivLu:
				x = A.partialPivLu().solve(b);
				break;
			case fullPivLu:
				x = A.fullPivLu().solve(b);
				break;
			case householderQr:
				x = A.householderQr().solve(b);
				break;
			case colPivHouseholderQr:
				x = A.colPivHouseholderQr().solve(b);
				break;
			case fullPivHouseholderQr:
				x = A.fullPivHouseholderQr().solve(b);
				break;
			case llt:
				x = A.llt().solve(b);
				break;
			case ldlt:
				x = A.ldlt().solve(b);
				break;
			case jacobiSvd:
				x = A.jacobiSvd().solve(b);
				break;
		}
		return x;
	}
}