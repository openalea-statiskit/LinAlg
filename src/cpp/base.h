#ifndef IEGEN_H
#define IEGEN_H

#include <eigen3/Eigen/Dense>

#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
  #ifdef LIBIEIGEN
    #ifdef __GNUC__
      #define IEIGEN_API __attribute__ ((dllexport))
      #define IEIGEN_IMP
    #else
      #define IEIGEN_API __declspec(dllexport)
      #define IEIGEN_IMP
    #endif
  #else
    #ifdef __GNUC__
      #define IEIGEN_API __attribute__ ((dllimport))
      #define IEIGEN_IMP extern
    #else
      #define IEIGEN_API __declspec(dllimport)
      #define IEIGEN_IMP extern
    #endif
  #endif
  #define DLL_LOCAL
#else
  #if __GNUC__ >= 4
    #define IEIGEN_API __attribute__ ((visibility ("default")))
  #else
    #define IEIGEN_API
  #endif
  #ifdef LIBIEIGEN
    #define IEIGEN_IMP
  #else
    #define IEIGEN_IMP extern
  #endif
#endif

namespace ieigen
{
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< int, 2, 2 >;
	typedef Eigen::Matrix< int, 2, 2 > Matrix2i;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< int, 2, 1 >;
	typedef Eigen::Matrix< int, 2, 1 > Vector2i;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< int, 1, 2 >;
	typedef Eigen::Matrix< int, 1, 2 > RowVector2i;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< float, 2, 2 >;
	typedef Eigen::Matrix< float, 2, 2 > Matrix2f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< float, 2, 2 > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< float, 2, 2 > > PartialPivLUMatrix2f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< float, 2, 2 > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< float, 2, 2 > > FullPivLUMatrix2f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< float, 2, 2 > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< float, 2, 2 > > HouseholderQRMatrix2f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< float, 2, 2 > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< float, 2, 2 > > ColPivHouseholderQRMatrix2f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< float, 2, 2 > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< float, 2, 2 > > FullPivHouseholderQRMatrix2f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< float, 2, 2 > >;
	typedef Eigen::LLT< Eigen::Matrix< float, 2, 2 > > LLTMatrix2f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< float, 2, 2 > >;
	typedef Eigen::LDLT< Eigen::Matrix< float, 2, 2 > > LDLTMatrix2f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< float, 2, 2 > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< float, 2, 2 > > JacobiSVDMatrix2f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< float, 2, 1 >;
	typedef Eigen::Matrix< float, 2, 1 > Vector2f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< float, 1, 2 >;
	typedef Eigen::Matrix< float, 1, 2 > RowVector2f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< double, 2, 2 >;
	typedef Eigen::Matrix< double, 2, 2 > Matrix2d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< double, 2, 2 > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< double, 2, 2 > > PartialPivLUMatrix2d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< double, 2, 2 > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< double, 2, 2 > > FullPivLUMatrix2d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< double, 2, 2 > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< double, 2, 2 > > HouseholderQRMatrix2d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< double, 2, 2 > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< double, 2, 2 > > ColPivHouseholderQRMatrix2d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< double, 2, 2 > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< double, 2, 2 > > FullPivHouseholderQRMatrix2d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< double, 2, 2 > >;
	typedef Eigen::LLT< Eigen::Matrix< double, 2, 2 > > LLTMatrix2d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< double, 2, 2 > >;
	typedef Eigen::LDLT< Eigen::Matrix< double, 2, 2 > > LDLTMatrix2d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< double, 2, 2 > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< double, 2, 2 > > JacobiSVDMatrix2d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< double, 2, 1 >;
	typedef Eigen::Matrix< double, 2, 1 > Vector2d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< double, 1, 2 >;
	typedef Eigen::Matrix< double, 1, 2 > RowVector2d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<float>, 2, 2 >;
	typedef Eigen::Matrix< std::complex<float>, 2, 2 > Matrix2cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< std::complex<float>, 2, 2 > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< std::complex<float>, 2, 2 > > PartialPivLUMatrix2cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< std::complex<float>, 2, 2 > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< std::complex<float>, 2, 2 > > FullPivLUMatrix2cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< std::complex<float>, 2, 2 > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< std::complex<float>, 2, 2 > > HouseholderQRMatrix2cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<float>, 2, 2 > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<float>, 2, 2 > > ColPivHouseholderQRMatrix2cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<float>, 2, 2 > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<float>, 2, 2 > > FullPivHouseholderQRMatrix2cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< std::complex<float>, 2, 2 > >;
	typedef Eigen::LLT< Eigen::Matrix< std::complex<float>, 2, 2 > > LLTMatrix2cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< std::complex<float>, 2, 2 > >;
	typedef Eigen::LDLT< Eigen::Matrix< std::complex<float>, 2, 2 > > LDLTMatrix2cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< std::complex<float>, 2, 2 > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< std::complex<float>, 2, 2 > > JacobiSVDMatrix2cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<float>, 2, 1 >;
	typedef Eigen::Matrix< std::complex<float>, 2, 1 > Vector2cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<float>, 1, 2 >;
	typedef Eigen::Matrix< std::complex<float>, 1, 2 > RowVector2cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<double>, 2, 2 >;
	typedef Eigen::Matrix< std::complex<double>, 2, 2 > Matrix2cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< std::complex<double>, 2, 2 > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< std::complex<double>, 2, 2 > > PartialPivLUMatrix2cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< std::complex<double>, 2, 2 > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< std::complex<double>, 2, 2 > > FullPivLUMatrix2cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< std::complex<double>, 2, 2 > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< std::complex<double>, 2, 2 > > HouseholderQRMatrix2cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<double>, 2, 2 > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<double>, 2, 2 > > ColPivHouseholderQRMatrix2cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<double>, 2, 2 > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<double>, 2, 2 > > FullPivHouseholderQRMatrix2cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< std::complex<double>, 2, 2 > >;
	typedef Eigen::LLT< Eigen::Matrix< std::complex<double>, 2, 2 > > LLTMatrix2cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< std::complex<double>, 2, 2 > >;
	typedef Eigen::LDLT< Eigen::Matrix< std::complex<double>, 2, 2 > > LDLTMatrix2cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< std::complex<double>, 2, 2 > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< std::complex<double>, 2, 2 > > JacobiSVDMatrix2cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<double>, 2, 1 >;
	typedef Eigen::Matrix< std::complex<double>, 2, 1 > Vector2cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<double>, 1, 2 >;
	typedef Eigen::Matrix< std::complex<double>, 1, 2 > RowVector2cd;

	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< int, 3, 3 >;
	typedef Eigen::Matrix< int, 3, 3 > Matrix3i;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< int, 3, 1 >;
	typedef Eigen::Matrix< int, 3, 1 > Vector3i;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< int, 1, 3 >;
	typedef Eigen::Matrix< int, 1, 3 > RowVector3i;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< float, 3, 3 >;
	typedef Eigen::Matrix< float, 3, 3 > Matrix3f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< float, 3, 3 > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< float, 3, 3 > > PartialPivLUMatrix3f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< float, 3, 3 > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< float, 3, 3 > > FullPivLUMatrix3f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< float, 3, 3 > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< float, 3, 3 > > HouseholderQRMatrix3f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< float, 3, 3 > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< float, 3, 3 > > ColPivHouseholderQRMatrix3f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< float, 3, 3 > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< float, 3, 3 > > FullPivHouseholderQRMatrix3f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< float, 3, 3 > >;
	typedef Eigen::LLT< Eigen::Matrix< float, 3, 3 > > LLTMatrix3f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< float, 3, 3 > >;
	typedef Eigen::LDLT< Eigen::Matrix< float, 3, 3 > > LDLTMatrix3f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< float, 3, 3 > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< float, 3, 3 > > JacobiSVDMatrix3f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< float, 3, 1 >;
	typedef Eigen::Matrix< float, 3, 1 > Vector3f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< float, 1, 3 >;
	typedef Eigen::Matrix< float, 1, 3 > RowVector3f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< double, 3, 3 >;
	typedef Eigen::Matrix< double, 3, 3 > Matrix3d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< double, 3, 3 > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< double, 3, 3 > > PartialPivLUMatrix3d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< double, 3, 3 > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< double, 3, 3 > > FullPivLUMatrix3d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< double, 3, 3 > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< double, 3, 3 > > HouseholderQRMatrix3d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< double, 3, 3 > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< double, 3, 3 > > ColPivHouseholderQRMatrix3d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< double, 3, 3 > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< double, 3, 3 > > FullPivHouseholderQRMatrix3d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< double, 3, 3 > >;
	typedef Eigen::LLT< Eigen::Matrix< double, 3, 3 > > LLTMatrix3d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< double, 3, 3 > >;
	typedef Eigen::LDLT< Eigen::Matrix< double, 3, 3 > > LDLTMatrix3d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< double, 3, 3 > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< double, 3, 3 > > JacobiSVDMatrix3d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< double, 3, 1 >;
	typedef Eigen::Matrix< double, 3, 1 > Vector3d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< double, 1, 3 >;
	typedef Eigen::Matrix< double, 1, 3 > RowVector3d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<float>, 3, 3 >;
	typedef Eigen::Matrix< std::complex<float>, 3, 3 > Matrix3cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< std::complex<float>, 3, 3 > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< std::complex<float>, 3, 3 > > PartialPivLUMatrix3cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< std::complex<float>, 3, 3 > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< std::complex<float>, 3, 3 > > FullPivLUMatrix3cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< std::complex<float>, 3, 3 > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< std::complex<float>, 3, 3 > > HouseholderQRMatrix3cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<float>, 3, 3 > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<float>, 3, 3 > > ColPivHouseholderQRMatrix3cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<float>, 3, 3 > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<float>, 3, 3 > > FullPivHouseholderQRMatrix3cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< std::complex<float>, 3, 3 > >;
	typedef Eigen::LLT< Eigen::Matrix< std::complex<float>, 3, 3 > > LLTMatrix3cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< std::complex<float>, 3, 3 > >;
	typedef Eigen::LDLT< Eigen::Matrix< std::complex<float>, 3, 3 > > LDLTMatrix3cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< std::complex<float>, 3, 3 > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< std::complex<float>, 3, 3 > > JacobiSVDMatrix3cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<float>, 3, 1 >;
	typedef Eigen::Matrix< std::complex<float>, 3, 1 > Vector3cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<float>, 1, 3 >;
	typedef Eigen::Matrix< std::complex<float>, 1, 3 > RowVector3cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<double>, 3, 3 >;
	typedef Eigen::Matrix< std::complex<double>, 3, 3 > Matrix3cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< std::complex<double>, 3, 3 > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< std::complex<double>, 3, 3 > > PartialPivLUMatrix3cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< std::complex<double>, 3, 3 > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< std::complex<double>, 3, 3 > > FullPivLUMatrix3cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< std::complex<double>, 3, 3 > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< std::complex<double>, 3, 3 > > HouseholderQRMatrix3cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<double>, 3, 3 > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<double>, 3, 3 > > ColPivHouseholderQRMatrix3cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<double>, 3, 3 > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<double>, 3, 3 > > FullPivHouseholderQRMatrix3cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< std::complex<double>, 3, 3 > >;
	typedef Eigen::LLT< Eigen::Matrix< std::complex<double>, 3, 3 > > LLTMatrix3cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< std::complex<double>, 3, 3 > >;
	typedef Eigen::LDLT< Eigen::Matrix< std::complex<double>, 3, 3 > > LDLTMatrix3cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< std::complex<double>, 3, 3 > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< std::complex<double>, 3, 3 > > JacobiSVDMatrix3cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<double>, 3, 1 >;
	typedef Eigen::Matrix< std::complex<double>, 3, 1 > Vector3cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<double>, 1, 3 >;
	typedef Eigen::Matrix< std::complex<double>, 1, 3 > RowVector3cd;

	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< int, 4, 4 >;
	typedef Eigen::Matrix< int, 4, 4 > Matrix4i;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< int, 4, 1 >;
	typedef Eigen::Matrix< int, 4, 1 > Vector4i;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< int, 1, 4 >;
	typedef Eigen::Matrix< int, 1, 4 > RowVector4i;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< float, 4, 4 >;
	typedef Eigen::Matrix< float, 4, 4 > Matrix4f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< float, 4, 4 > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< float, 4, 4 > > PartialPivLUMatrix4f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< float, 4, 4 > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< float, 4, 4 > > FullPivLUMatrix4f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< float, 4, 4 > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< float, 4, 4 > > HouseholderQRMatrix4f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< float, 4, 4 > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< float, 4, 4 > > ColPivHouseholderQRMatrix4f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< float, 4, 4 > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< float, 4, 4 > > FullPivHouseholderQRMatrix4f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< float, 4, 4 > >;
	typedef Eigen::LLT< Eigen::Matrix< float, 4, 4 > > LLTMatrix4f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< float, 4, 4 > >;
	typedef Eigen::LDLT< Eigen::Matrix< float, 4, 4 > > LDLTMatrix4f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< float, 4, 4 > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< float, 4, 4 > > JacobiSVDMatrix4f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< float, 4, 1 >;
	typedef Eigen::Matrix< float, 4, 1 > Vector4f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< float, 1, 4 >;
	typedef Eigen::Matrix< float, 1, 4 > RowVector4f;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< double, 4, 4 >;
	typedef Eigen::Matrix< double, 4, 4 > Matrix4d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< double, 4, 4 > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< double, 4, 4 > > PartialPivLUMatrix4d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< double, 4, 4 > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< double, 4, 4 > > FullPivLUMatrix4d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< double, 4, 4 > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< double, 4, 4 > > HouseholderQRMatrix4d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< double, 4, 4 > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< double, 4, 4 > > ColPivHouseholderQRMatrix4d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< double, 4, 4 > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< double, 4, 4 > > FullPivHouseholderQRMatrix4d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< double, 4, 4 > >;
	typedef Eigen::LLT< Eigen::Matrix< double, 4, 4 > > LLTMatrix4d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< double, 4, 4 > >;
	typedef Eigen::LDLT< Eigen::Matrix< double, 4, 4 > > LDLTMatrix4d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< double, 4, 4 > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< double, 4, 4 > > JacobiSVDMatrix4d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< double, 4, 1 >;
	typedef Eigen::Matrix< double, 4, 1 > Vector4d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< double, 1, 4 >;
	typedef Eigen::Matrix< double, 1, 4 > RowVector4d;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<float>, 4, 4 >;
	typedef Eigen::Matrix< std::complex<float>, 4, 4 > Matrix4cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< std::complex<float>, 4, 4 > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< std::complex<float>, 4, 4 > > PartialPivLUMatrix4cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< std::complex<float>, 4, 4 > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< std::complex<float>, 4, 4 > > FullPivLUMatrix4cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< std::complex<float>, 4, 4 > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< std::complex<float>, 4, 4 > > HouseholderQRMatrix4cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<float>, 4, 4 > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<float>, 4, 4 > > ColPivHouseholderQRMatrix4cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<float>, 4, 4 > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<float>, 4, 4 > > FullPivHouseholderQRMatrix4cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< std::complex<float>, 4, 4 > >;
	typedef Eigen::LLT< Eigen::Matrix< std::complex<float>, 4, 4 > > LLTMatrix4cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< std::complex<float>, 4, 4 > >;
	typedef Eigen::LDLT< Eigen::Matrix< std::complex<float>, 4, 4 > > LDLTMatrix4cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< std::complex<float>, 4, 4 > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< std::complex<float>, 4, 4 > > JacobiSVDMatrix4cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<float>, 4, 1 >;
	typedef Eigen::Matrix< std::complex<float>, 4, 1 > Vector4cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<float>, 1, 4 >;
	typedef Eigen::Matrix< std::complex<float>, 1, 4 > RowVector4cf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<double>, 4, 4 >;
	typedef Eigen::Matrix< std::complex<double>, 4, 4 > Matrix4cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< std::complex<double>, 4, 4 > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< std::complex<double>, 4, 4 > > PartialPivLUMatrix4cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< std::complex<double>, 4, 4 > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< std::complex<double>, 4, 4 > > FullPivLUMatrix4cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< std::complex<double>, 4, 4 > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< std::complex<double>, 4, 4 > > HouseholderQRMatrix4cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<double>, 4, 4 > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<double>, 4, 4 > > ColPivHouseholderQRMatrix4cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<double>, 4, 4 > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<double>, 4, 4 > > FullPivHouseholderQRMatrix4cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< std::complex<double>, 4, 4 > >;
	typedef Eigen::LLT< Eigen::Matrix< std::complex<double>, 4, 4 > > LLTMatrix4cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< std::complex<double>, 4, 4 > >;
	typedef Eigen::LDLT< Eigen::Matrix< std::complex<double>, 4, 4 > > LDLTMatrix4cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< std::complex<double>, 4, 4 > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< std::complex<double>, 4, 4 > > JacobiSVDMatrix4cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<double>, 4, 1 >;
	typedef Eigen::Matrix< std::complex<double>, 4, 1 > Vector4cd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<double>, 1, 4 >;
	typedef Eigen::Matrix< std::complex<double>, 1, 4 > RowVector4cd;

	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< int, Eigen::Dynamic, Eigen::Dynamic >;
	typedef Eigen::Matrix< int, Eigen::Dynamic, Eigen::Dynamic > MatrixXi;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< int, Eigen::Dynamic, 1 >;
	typedef Eigen::Matrix< int, Eigen::Dynamic, 1 > VectorXi;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< int, 1, Eigen::Dynamic >;
	typedef Eigen::Matrix< int, 1, Eigen::Dynamic > RowVectorXi;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic >;
	typedef Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > MatrixXf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > > PartialPivLUMatrixXf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > > FullPivLUMatrixXf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > > HouseholderQRMatrixXf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > > ColPivHouseholderQRMatrixXf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > > FullPivHouseholderQRMatrixXf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::LLT< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > > LLTMatrixXf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::LDLT< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > > LDLTMatrixXf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< float, Eigen::Dynamic, Eigen::Dynamic > > JacobiSVDMatrixXf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< float, Eigen::Dynamic, 1 >;
	typedef Eigen::Matrix< float, Eigen::Dynamic, 1 > VectorXf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< float, 1, Eigen::Dynamic >;
	typedef Eigen::Matrix< float, 1, Eigen::Dynamic > RowVectorXf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic >;
	typedef Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > MatrixXd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > PartialPivLUMatrixXd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > FullPivLUMatrixXd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > HouseholderQRMatrixXd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > ColPivHouseholderQRMatrixXd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > FullPivHouseholderQRMatrixXd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::LLT< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > LLTMatrixXd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::LDLT< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > LDLTMatrixXd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > > JacobiSVDMatrixXd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< double, Eigen::Dynamic, 1 >;
	typedef Eigen::Matrix< double, Eigen::Dynamic, 1 > VectorXd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< double, 1, Eigen::Dynamic >;
	typedef Eigen::Matrix< double, 1, Eigen::Dynamic > RowVectorXd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic >;
	typedef Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > MatrixXcf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > > PartialPivLUMatrixXcf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > > FullPivLUMatrixXcf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > > HouseholderQRMatrixXcf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > > ColPivHouseholderQRMatrixXcf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > > FullPivHouseholderQRMatrixXcf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::LLT< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > > LLTMatrixXcf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::LDLT< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > > LDLTMatrixXcf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< std::complex<float>, Eigen::Dynamic, Eigen::Dynamic > > JacobiSVDMatrixXcf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<float>, Eigen::Dynamic, 1 >;
	typedef Eigen::Matrix< std::complex<float>, Eigen::Dynamic, 1 > VectorXcf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<float>, 1, Eigen::Dynamic >;
	typedef Eigen::Matrix< std::complex<float>, 1, Eigen::Dynamic > RowVectorXcf;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic >;
	typedef Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > MatrixXcd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::PartialPivLU< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::PartialPivLU< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > > PartialPivLUMatrixXcd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivLU< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::FullPivLU< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > > FullPivLUMatrixXcd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::HouseholderQR< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::HouseholderQR< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > > HouseholderQRMatrixXcd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::ColPivHouseholderQR< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > > ColPivHouseholderQRMatrixXcd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::FullPivHouseholderQR< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > > FullPivHouseholderQRMatrixXcd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LLT< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::LLT< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > > LLTMatrixXcd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::LDLT< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::LDLT< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > > LDLTMatrixXcd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::JacobiSVD< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > >;
	typedef Eigen::JacobiSVD< Eigen::Matrix< std::complex<double>, Eigen::Dynamic, Eigen::Dynamic > > JacobiSVDMatrixXcd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<double>, Eigen::Dynamic, 1 >;
	typedef Eigen::Matrix< std::complex<double>, Eigen::Dynamic, 1 > VectorXcd;
	// IEIGEN_IMP template class IEIGEN_API Eigen::Matrix< std::complex<double>, 1, Eigen::Dynamic >;
	typedef Eigen::Matrix< std::complex<double>, 1, Eigen::Dynamic > RowVectorXcd;


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
	IEIGEN_API Matrix2f solve(const Matrix2f& A, const Matrix2f& b, const solver_type& solver);
	IEIGEN_API Vector2d solve(const Matrix2d& A, const Vector2d& b, const solver_type& solver);
	IEIGEN_API Matrix2d solve(const Matrix2d& A, const Matrix2d& b, const solver_type& solver);
	IEIGEN_API Vector2cf solve(const Matrix2cf& A, const Vector2cf& b, const solver_type& solver);
	IEIGEN_API Matrix2cf solve(const Matrix2cf& A, const Matrix2cf& b, const solver_type& solver);
	IEIGEN_API Vector2cd solve(const Matrix2cd& A, const Vector2cd& b, const solver_type& solver);
	IEIGEN_API Matrix2cd solve(const Matrix2cd& A, const Matrix2cd& b, const solver_type& solver);
	IEIGEN_API Vector3f solve(const Matrix3f& A, const Vector3f& b, const solver_type& solver);
	IEIGEN_API Matrix3f solve(const Matrix3f& A, const Matrix3f& b, const solver_type& solver);
	IEIGEN_API Vector3d solve(const Matrix3d& A, const Vector3d& b, const solver_type& solver);
	IEIGEN_API Matrix3d solve(const Matrix3d& A, const Matrix3d& b, const solver_type& solver);
	IEIGEN_API Vector3cf solve(const Matrix3cf& A, const Vector3cf& b, const solver_type& solver);
	IEIGEN_API Matrix3cf solve(const Matrix3cf& A, const Matrix3cf& b, const solver_type& solver);
	IEIGEN_API Vector3cd solve(const Matrix3cd& A, const Vector3cd& b, const solver_type& solver);
	IEIGEN_API Matrix3cd solve(const Matrix3cd& A, const Matrix3cd& b, const solver_type& solver);
	IEIGEN_API Vector4f solve(const Matrix4f& A, const Vector4f& b, const solver_type& solver);
	IEIGEN_API Matrix4f solve(const Matrix4f& A, const Matrix4f& b, const solver_type& solver);
	IEIGEN_API Vector4d solve(const Matrix4d& A, const Vector4d& b, const solver_type& solver);
	IEIGEN_API Matrix4d solve(const Matrix4d& A, const Matrix4d& b, const solver_type& solver);
	IEIGEN_API Vector4cf solve(const Matrix4cf& A, const Vector4cf& b, const solver_type& solver);
	IEIGEN_API Matrix4cf solve(const Matrix4cf& A, const Matrix4cf& b, const solver_type& solver);
	IEIGEN_API Vector4cd solve(const Matrix4cd& A, const Vector4cd& b, const solver_type& solver);
	IEIGEN_API Matrix4cd solve(const Matrix4cd& A, const Matrix4cd& b, const solver_type& solver);
	IEIGEN_API VectorXf solve(const MatrixXf& A, const VectorXf& b, const solver_type& solver);
	IEIGEN_API MatrixXf solve(const MatrixXf& A, const MatrixXf& b, const solver_type& solver);
	IEIGEN_API VectorXd solve(const MatrixXd& A, const VectorXd& b, const solver_type& solver);
	IEIGEN_API MatrixXd solve(const MatrixXd& A, const MatrixXd& b, const solver_type& solver);
	IEIGEN_API VectorXcf solve(const MatrixXcf& A, const VectorXcf& b, const solver_type& solver);
	IEIGEN_API MatrixXcf solve(const MatrixXcf& A, const MatrixXcf& b, const solver_type& solver);
	IEIGEN_API VectorXcd solve(const MatrixXcd& A, const VectorXcd& b, const solver_type& solver);
	IEIGEN_API MatrixXcd solve(const MatrixXcd& A, const MatrixXcd& b, const solver_type& solver);
}

#endif