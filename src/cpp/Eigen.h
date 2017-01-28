#ifndef STATISKIT_LINALG_EIGEN_H
#define STATISKIT_LINALG_EIGEN_H

#include <stdexcept>
#undef eigen_assert
#define eigen_assert(x)   if (!(x)) { throw (std::runtime_error("Eigen")); }

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

		typedef Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > MatrixXd;
		typedef Eigen::PartialPivLU< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > PartialPivLUMatrixXd;
		typedef Eigen::FullPivLU< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > FullPivLUMatrixXd;
		typedef Eigen::HouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > HouseholderQRMatrixXd;
		typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > ColPivHouseholderQRMatrixXd;
		typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > FullPivHouseholderQRMatrixXd;
		typedef Eigen::LLT< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > LLTMatrixXd;
		typedef Eigen::LDLT< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > LDLTMatrixXd;
		typedef Eigen::JacobiSVD< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > JacobiSVDMatrixXd;

		typedef Eigen::Matrix< double, Eigen::Dynamic, 1 > VectorXd;

		typedef Eigen::Matrix< double, 1, Eigen::Dynamic > RowVectorXd;

		STATISKIT_LINALG_API VectorXd solve(const MatrixXd& A, const VectorXd& b, const solver_type& solver);
		STATISKIT_LINALG_API MatrixXd solve(const MatrixXd& A, const MatrixXd& b, const solver_type& solver);
	}
}

#ifdef EIGEN_NO_STATIC_ASSERT

STATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic >;
STATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::PartialPivLU< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
STATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::FullPivLU< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
STATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::HouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
STATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::ColPivHouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
STATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::FullPivHouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
STATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::LLT< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
STATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::LDLT< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
STATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::JacobiSVD< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
STATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::Matrix< double, Eigen::Dynamic, 1 >;
STATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::Matrix< double, 1, Eigen::Dynamic >;


#endif
#endif