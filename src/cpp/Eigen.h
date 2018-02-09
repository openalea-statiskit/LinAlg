#ifndef STATISKIT_LINALG_EIGEN_H
#define STATISKIT_LINALG_EIGEN_H

#include <stdexcept>
#include <vector>
#include <Eigen/Dense>
#include <Eigen/Sparse>

namespace statiskit
{
    namespace linalg
    {
		enum solver_type {
			partialPivLu,
			fullPivLu,
			householderQr,
			colPivHouseholderQr,
			fullPivHouseholderQr,
			llt,
			ldlt,
			jacobiSvd,
		};

		enum sparse_solver_type {
			simplicialLLT,
			simplicialLDLT ,
			sparseLU,
			sparseQR,
			conjugateGradient,
			leastSquaresConjugateGradient,
			biCGSTAB,
		};

		typedef Eigen::SparseMatrix< double > SparseMatrix;
		typedef Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > Matrix;
		typedef Eigen::PartialPivLU< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > PartialPivLUMatrix;
		typedef Eigen::FullPivLU< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > FullPivLUMatrix;
		typedef Eigen::HouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > HouseholderQRMatrix;
		typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > ColPivHouseholderQRMatrix;
		typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > FullPivHouseholderQRMatrix;
		typedef Eigen::LLT< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > LLTMatrix;
		typedef Eigen::LDLT< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > LDLTMatrix;
		typedef Eigen::JacobiSVD< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > JacobiSVDMatrix;

		typedef Eigen::SparseVector< double > SparseVector;
		typedef Eigen::Matrix< double, Eigen::Dynamic, 1 > Vector;

		typedef Eigen::Matrix< double, 1, Eigen::Dynamic > RowVector;

		typedef std::vector< Vector > Vectors;
		typedef std::vector< RowVector > RowVectors;
		typedef std::vector< SparseVector > SparseVectors;
		typedef std::vector< Matrix > Matrices;

		typedef std::vector< SparseMatrix > SparseMatrices;

		STATISKIT_LINALG_API Vector solve(const Matrix& A, const Vector& b, const solver_type& solver);
		STATISKIT_LINALG_API Matrix solve(const Matrix& A, const Matrix& b, const solver_type& solver);
		STATISKIT_LINALG_API Matrix inverse(const Matrix& A, const solver_type& solver);
	}
}

#ifdef EIGEN_NO_STATIC_ASSERT

#endif
#endif