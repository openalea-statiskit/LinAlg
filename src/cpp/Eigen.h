#ifndef STATISKIT_LINALG_EIGEN_H
#define STATISKIT_LINALG_EIGEN_H

#include <stdexcept>
#undef eigen_assert
#define eigen_assert(x)   if (!(x)) { throw (std::runtime_error("Eigen")); }

#define EIGEN_DEFAULT_DENSE_INDEX_TYPE int

#include <eigen3/Eigen/Dense>

#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
    #ifdef LIBSTATISKIT_LINALG
        #ifdef __GNUC__
            #define STATISKIT_LINALG_API __attribute__ ((dllexport))
            #define STATISKIT_LINALG_IMP
        #else
            #define STATISKIT_LINALG_API __declspec(dllexport)
            #define STATISKIT_LINALG_IMP
        #endif
    #else
        #ifdef __GNUC__
            #define STATISKIT_LINALG_API __attribute__ ((dllimport))
            #define STATISKIT_LINALG_IMP extern
        #else
            #define STATISKIT_LINALG_API __declspec(dllimport)
            #define STATISKIT_LINALG_IMP extern
        #endif
    #endif
#else
    #if __GNUC__ >= 4
        #define STATISKIT_LINALG_API __attribute__ ((visibility ("default")))
    #else
        #define STATISKIT_LINALG_API
    #endif
    #ifdef LIBSTATISKIT_LINALG
        #define STATISKIT_LINALG_IMP
    #else
        #define STATISKIT_LINALG_IMP extern
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

		typedef Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > Matrix;
		typedef Eigen::PartialPivLU< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > PartialPivLUMatrix;
		typedef Eigen::FullPivLU< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > FullPivLUMatrix;
		typedef Eigen::HouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > HouseholderQRMatrix;
		typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > ColPivHouseholderQRMatrix;
		typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > FullPivHouseholderQRMatrix;
		typedef Eigen::LLT< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > LLTMatrix;
		typedef Eigen::LDLT< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > LDLTMatrix;
		typedef Eigen::JacobiSVD< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > JacobiSVDMatrix;

		typedef Eigen::Matrix< double, Eigen::Dynamic, 1 > Vector;

		typedef Eigen::Matrix< double, 1, Eigen::Dynamic > RowVector;

		STATISKIT_LINALG_API Vector solve(const Matrix& A, const Vector& b, const solver_type& solver);
		STATISKIT_LINALG_API Matrix solve(const Matrix& A, const Matrix& b, const solver_type& solver);
	}
}

#ifdef EIGEN_NO_STATIC_ASSERT



#endif
#endif