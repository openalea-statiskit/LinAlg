#ifndef STATISKIT_LINALG_OPERATOR_H
#define STATISKIT_LINALG_OPERATOR_H

#include "config.h"
#include "Eigen.h"

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

#endif