#include "Eigen.h"

namespace statiskit 
{	namespace linalg 
{

		Matrix solve(const Matrix& A, const Matrix& b, const solver_type& solver)
		{
			Matrix x;
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

		Vector solve(const Matrix& A, const Vector& b, const solver_type& solver)
		{
			Vector x;
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
}