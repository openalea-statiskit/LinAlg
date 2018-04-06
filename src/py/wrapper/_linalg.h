#ifndef AUTOWIG__LINALG
#define AUTOWIG__LINALG

#include <boost/python.hpp>
#include <type_traits>
#include <statiskit/linalg/Eigen.h>
#include <statiskit/linalg/config.h>
#include <statiskit/linalg/operator.h>
#include <memory>

namespace autowig
{
     template<class T> struct Held {
        typedef std::shared_ptr< T > Type;
        static bool const is_class = true;
    };
}

#endif