#ifndef IEGEN_H
#define IEGEN_H

#include <eigen3/Eigen/Dense>

#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
  #ifdef LIBIEIGEN
    #ifdef __GNUC__
      #define IEIGEN_API __attribute__ ((dllexport))
    #else
      #define IEIGEN_API __declspec(dllexport)
    #endif
  #else
    #ifdef __GNUC__
      #define IEIGEN_API __attribute__ ((dllimport))
    #else
      #define IEIGEN_API __declspec(dllimport)
    #endif
  #endif
  #define DLL_LOCAL
#else
  #if __GNUC__ >= 4
    #define IEIGEN_API __attribute__ ((visibility ("default")))
  #else
    #define IEIGEN_API
  #endif
#endif

namespace ieigen
{
	typedef Eigen::Matrix< int, 2, 2> Matrix2i;
	typedef Eigen::Matrix< int, 2, 1> Vector2i;
	typedef Eigen::Matrix< int, 1, 2> RowVector2i;
	typedef Eigen::Matrix< float, 2, 2> Matrix2f;
	typedef Eigen::Matrix< float, 2, 1> Vector2f;
	typedef Eigen::Matrix< float, 1, 2> RowVector2f;
	typedef Eigen::Matrix< double, 2, 2> Matrix2d;
	typedef Eigen::Matrix< double, 2, 1> Vector2d;
	typedef Eigen::Matrix< double, 1, 2> RowVector2d;
	typedef Eigen::Matrix< std::complex<float>, 2, 2> Matrix2cf;
	typedef Eigen::Matrix< std::complex<float>, 2, 1> Vector2cf;
	typedef Eigen::Matrix< std::complex<float>, 1, 2> RowVector2cf;
	typedef Eigen::Matrix< std::complex<double>, 2, 2> Matrix2cd;
	typedef Eigen::Matrix< std::complex<double>, 2, 1> Vector2cd;
	typedef Eigen::Matrix< std::complex<double>, 1, 2> RowVector2cd;

	typedef Eigen::Matrix< int, 3, 3> Matrix3i;
	typedef Eigen::Matrix< int, 3, 1> Vector3i;
	typedef Eigen::Matrix< int, 1, 3> RowVector3i;
	typedef Eigen::Matrix< float, 3, 3> Matrix3f;
	typedef Eigen::Matrix< float, 3, 1> Vector3f;
	typedef Eigen::Matrix< float, 1, 3> RowVector3f;
	typedef Eigen::Matrix< double, 3, 3> Matrix3d;
	typedef Eigen::Matrix< double, 3, 1> Vector3d;
	typedef Eigen::Matrix< double, 1, 3> RowVector3d;
	typedef Eigen::Matrix< std::complex<float>, 3, 3> Matrix3cf;
	typedef Eigen::Matrix< std::complex<float>, 3, 1> Vector3cf;
	typedef Eigen::Matrix< std::complex<float>, 1, 3> RowVector3cf;
	typedef Eigen::Matrix< std::complex<double>, 3, 3> Matrix3cd;
	typedef Eigen::Matrix< std::complex<double>, 3, 1> Vector3cd;
	typedef Eigen::Matrix< std::complex<double>, 1, 3> RowVector3cd;

	typedef Eigen::Matrix< int, 4, 4> Matrix4i;
	typedef Eigen::Matrix< int, 4, 1> Vector4i;
	typedef Eigen::Matrix< int, 1, 4> RowVector4i;
	typedef Eigen::Matrix< float, 4, 4> Matrix4f;
	typedef Eigen::Matrix< float, 4, 1> Vector4f;
	typedef Eigen::Matrix< float, 1, 4> RowVector4f;
	typedef Eigen::Matrix< double, 4, 4> Matrix4d;
	typedef Eigen::Matrix< double, 4, 1> Vector4d;
	typedef Eigen::Matrix< double, 1, 4> RowVector4d;
	typedef Eigen::Matrix< std::complex<float>, 4, 4> Matrix4cf;
	typedef Eigen::Matrix< std::complex<float>, 4, 1> Vector4cf;
	typedef Eigen::Matrix< std::complex<float>, 1, 4> RowVector4cf;
	typedef Eigen::Matrix< std::complex<double>, 4, 4> Matrix4cd;
	typedef Eigen::Matrix< std::complex<double>, 4, 1> Vector4cd;
	typedef Eigen::Matrix< std::complex<double>, 1, 4> RowVector4cd;

	typedef Eigen::Matrix< int, Eigen::Dynamic, Eigen::Dynamic> MatrixXi;
	typedef Eigen::Matrix< int, Eigen::Dynamic, 1> VectorXi;
	typedef Eigen::Matrix< int, 1, Eigen::Dynamic> RowVectorXi;
	typedef Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic> MatrixXf;
	typedef Eigen::Matrix< float, Eigen::Dynamic, 1> VectorXf;
	typedef Eigen::Matrix< float, 1, Eigen::Dynamic> RowVectorXf;
	typedef Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic> MatrixXd;
	typedef Eigen::Matrix< double, Eigen::Dynamic, 1> VectorXd;
	typedef Eigen::Matrix< double, 1, Eigen::Dynamic> RowVectorXd;
	typedef Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic> MatrixXcf;
	typedef Eigen::Matrix< std::complex<float>, Eigen::Dynamic, 1> VectorXcf;
	typedef Eigen::Matrix< std::complex<float>, 1, Eigen::Dynamic> RowVectorXcf;
	typedef Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic> MatrixXcd;
	typedef Eigen::Matrix< std::complex<double>, Eigen::Dynamic, 1> VectorXcd;
	typedef Eigen::Matrix< std::complex<double>, 1, Eigen::Dynamic> RowVectorXcd;


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

	IEIGEN_API Vector2f solve(const Matrix2f& A, const Vector2f& b, const solver_type& solver);
	IEIGEN_API Vector2d solve(const Matrix2d& A, const Vector2d& b, const solver_type& solver);
	IEIGEN_API Vector2cf solve(const Matrix2cf& A, const Vector2cf& b, const solver_type& solver);
	IEIGEN_API Vector2cd solve(const Matrix2cd& A, const Vector2cd& b, const solver_type& solver);
	IEIGEN_API Vector3f solve(const Matrix3f& A, const Vector3f& b, const solver_type& solver);
	IEIGEN_API Vector3d solve(const Matrix3d& A, const Vector3d& b, const solver_type& solver);
	IEIGEN_API Vector3cf solve(const Matrix3cf& A, const Vector3cf& b, const solver_type& solver);
	IEIGEN_API Vector3cd solve(const Matrix3cd& A, const Vector3cd& b, const solver_type& solver);
	IEIGEN_API Vector4f solve(const Matrix4f& A, const Vector4f& b, const solver_type& solver);
	IEIGEN_API Vector4d solve(const Matrix4d& A, const Vector4d& b, const solver_type& solver);
	IEIGEN_API Vector4cf solve(const Matrix4cf& A, const Vector4cf& b, const solver_type& solver);
	IEIGEN_API Vector4cd solve(const Matrix4cd& A, const Vector4cd& b, const solver_type& solver);
	IEIGEN_API VectorXf solve(const MatrixXf& A, const VectorXf& b, const solver_type& solver);
	IEIGEN_API VectorXd solve(const MatrixXd& A, const VectorXd& b, const solver_type& solver);
	IEIGEN_API VectorXcf solve(const MatrixXcf& A, const VectorXcf& b, const solver_type& solver);
	IEIGEN_API VectorXcd solve(const MatrixXcd& A, const VectorXcd& b, const solver_type& solver);
}

#endif