#ifndef AUTOWIG__LINALG
#define AUTOWIG__LINALG

#include <boost/python.hpp>
#include <type_traits>
#include <statiskit/linalg/Eigen.h>

namespace autowig
{
     template<class T> struct Held {
        typedef T* Type;
        static bool const is_class = false;
    };
}

#endif