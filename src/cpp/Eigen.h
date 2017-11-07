#ifndef STATISKIT_LINALG_EIGEN_H
#define STATISKIT_LINALG_EIGEN_H

#include <stdexcept>
#include <vector>
#include <Eigen/Dense>
#include <Eigen/Sparse>

#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
    #ifdef LIBSTATISKIT_LINALG
        #ifdef __GNUC__
            #define STATISKIT_LINALG_API __attribute__ ((dllexport))
        #else
            #define STATISKIT_LINALG_API __declspec(dllexport)
        #endif
    #else
        #ifdef __GNUC__
            #define STATISKIT_LINALG_API __attribute__ ((dllimport))
        #else
            #define STATISKIT_LINALG_API __declspec(dllimport)
        #endif
    #endif
#else
    #if __GNUC__ >= 4
        #define STATISKIT_LINALG_API __attribute__ ((visibility ("default")))
    #else
        #define STATISKIT_LINALG_API
    #endif
#endif

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


STATISKIT_LINALG_API statiskit::linalg::Vector operator- (const statiskit::linalg::Vector& a, const statiskit::linalg::Vector& b);
STATISKIT_LINALG_API statiskit::linalg::Vector operator+ (const statiskit::linalg::Vector& a, const statiskit::linalg::Vector& b);
STATISKIT_LINALG_API statiskit::linalg::Vector operator* (const statiskit::linalg::Vector& a, const double& b);
STATISKIT_LINALG_API statiskit::linalg::Matrix operator* (const statiskit::linalg::Vector& a, const statiskit::linalg::RowVector& b);
STATISKIT_LINALG_API statiskit::linalg::Vector operator/ (const statiskit::linalg::Vector& a, const double& b);
STATISKIT_LINALG_API statiskit::linalg::RowVector operator- (const statiskit::linalg::RowVector& a, const statiskit::linalg::RowVector& b);
STATISKIT_LINALG_API statiskit::linalg::RowVector operator+ (const statiskit::linalg::RowVector& a, const statiskit::linalg::RowVector& b);
STATISKIT_LINALG_API statiskit::linalg::RowVector operator* (const statiskit::linalg::RowVector& a, const double& b);
STATISKIT_LINALG_API double operator* (const statiskit::linalg::RowVector& a, const statiskit::linalg::Vector& b);
STATISKIT_LINALG_API statiskit::linalg::RowVector operator* (const statiskit::linalg::RowVector& a, const statiskit::linalg::Matrix& B);
STATISKIT_LINALG_API statiskit::linalg::RowVector operator/ (const statiskit::linalg::RowVector& a, const double& b);
STATISKIT_LINALG_API statiskit::linalg::Matrix operator- (const statiskit::linalg::Matrix& A, const statiskit::linalg::Matrix& B);
STATISKIT_LINALG_API statiskit::linalg::Matrix operator+ (const statiskit::linalg::Matrix& A, const statiskit::linalg::Matrix& B);
STATISKIT_LINALG_API statiskit::linalg::Matrix operator* (const statiskit::linalg::Matrix& A, const double& b);
STATISKIT_LINALG_API statiskit::linalg::Vector operator* (const statiskit::linalg::Matrix& A, const statiskit::linalg::Vector& b);
STATISKIT_LINALG_API statiskit::linalg::Matrix operator* (const statiskit::linalg::Matrix& A, const statiskit::linalg::Matrix& B);
STATISKIT_LINALG_API statiskit::linalg::Matrix operator/ (const statiskit::linalg::Matrix& A, const double& b);

#ifdef EIGEN_NO_STATIC_ASSERT

#endif
#endif
