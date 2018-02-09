#include "operator.h"

statiskit::linalg::Vector operator- (const statiskit::linalg::Vector& a, const statiskit::linalg::Vector& b)
{ return a.operator-(b) ; }

statiskit::linalg::Vector operator+ (const statiskit::linalg::Vector& a, const statiskit::linalg::Vector& b)
{ return a.operator+(b) ; }

statiskit::linalg::Vector operator* (const statiskit::linalg::Vector& a, const double& b)
{ return a.operator*(b) ; }

statiskit::linalg::Matrix operator* (const statiskit::linalg::Vector& a, const statiskit::linalg::RowVector& b)
{ return a.operator*(b) ; }

statiskit::linalg::Vector operator/ (const statiskit::linalg::Vector& a, const double& b)
{ return a.operator/(b) ; }

statiskit::linalg::RowVector operator- (const statiskit::linalg::RowVector& a, const statiskit::linalg::RowVector& b)
{ return a.operator-(b) ; }

statiskit::linalg::RowVector operator+ (const statiskit::linalg::RowVector& a, const statiskit::linalg::RowVector& b)
{ return a.operator+(b) ; }

statiskit::linalg::RowVector operator* (const statiskit::linalg::RowVector& a, const double& b)
{ return a.operator*(b) ; }

double operator* (const statiskit::linalg::RowVector& a, const statiskit::linalg::Vector& b)
{ return a.operator*(b) ; }

statiskit::linalg::RowVector operator* (const statiskit::linalg::RowVector& a, const statiskit::linalg::Matrix& B)
{ return a.operator*(B) ; }

statiskit::linalg::RowVector operator/ (const statiskit::linalg::RowVector& a, const double& b)
{ return a.operator/(b) ; }

statiskit::linalg::Matrix operator- (const statiskit::linalg::Matrix& A, const statiskit::linalg::Matrix& B)
{ return A.operator-(B) ; }

statiskit::linalg::Matrix operator+ (const statiskit::linalg::Matrix& A, const statiskit::linalg::Matrix& B)
{ return A.operator+(B) ; }

statiskit::linalg::Matrix operator* (const statiskit::linalg::Matrix& A, const double& b)
{ return A.operator*(b) ; }

statiskit::linalg::Vector operator* (const statiskit::linalg::Matrix& A, const statiskit::linalg::Vector& b)
{ return A.operator*(b) ; }

statiskit::linalg::Matrix operator* (const statiskit::linalg::Matrix& A, const statiskit::linalg::Matrix& B)
{ return A.operator*(B) ; }

statiskit::linalg::Matrix operator/ (const statiskit::linalg::Matrix& A, const double& b)
{ return A.operator/(b) ; }