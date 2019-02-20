#pragma once

#include <pybind11/pybind11.h>

#include <memory>
#include <statiskit/linalg/Eigen.h>
#include <statiskit/linalg/config.h>
#include <statiskit/linalg/operator.h>

namespace autowig
{
    template<class T> struct HolderType {
        typedef std::unique_ptr< T > Type;
    };

    template<class T> struct NoDeleteHolderType {
        typedef std::unique_ptr< T, pybind11::nodelete > Type;
    };
}