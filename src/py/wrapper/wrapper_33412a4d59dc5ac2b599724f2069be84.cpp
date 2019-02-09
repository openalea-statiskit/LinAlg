#include "_linalg.h"

::Eigen::Index  (::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::*method_pointer_29ad5c75651e5bfca25c9ed2fe07208f)()const= &::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::innerStride;
::Eigen::Index  (::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::*method_pointer_11c42683f43052dfad6288abded43253)()const= &::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::outerStride;

namespace autowig {
}

void wrapper_33412a4d59dc5ac2b599724f2069be84(pybind11::module& module)
{

    struct function_group
    {
        static class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  function_80b79e7f0f8752d2bde4c3dc1ede5760(class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > const & parameter_0, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > const & parameter_1)
        { return operator-(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  function_c5b0ab538ad2591fb1cc4f82b9c1e744(class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > const & parameter_0, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > const & parameter_1)
        { return operator+(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  function_e10f3cbab9cf5175b08493584e3b4a43(class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > const & parameter_0, double const & parameter_1)
        { return operator*(parameter_0, parameter_1); }
        static double  function_cdcdb470c4d9573683327f0fe36a1b8a(class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > const & parameter_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & parameter_1)
        { return operator*(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  function_94c681ad489f5cbda16d98d0c101ab41(class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > const & parameter_0, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_1)
        { return operator*(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  function_f1c1747bee00530584a8d6aa11a3a2ef(class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > const & parameter_0, double const & parameter_1)
        { return operator/(parameter_0, parameter_1); }
    };
    pybind11::class_<class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, autowig::HolderType< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Type, class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > class_33412a4d59dc5ac2b599724f2069be84(module, "_Matrix_33412a4d59dc5ac2b599724f2069be84", "");
    class_33412a4d59dc5ac2b599724f2069be84.def(pybind11::init<  >());
    class_33412a4d59dc5ac2b599724f2069be84.def(pybind11::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >());
    class_33412a4d59dc5ac2b599724f2069be84.def(pybind11::init< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar const &, ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar const &, ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar const & >());
    class_33412a4d59dc5ac2b599724f2069be84.def(pybind11::init< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar const &, ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar const &, ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar const &, ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >::Scalar const & >());
    class_33412a4d59dc5ac2b599724f2069be84.def(pybind11::init< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > const & >());
    class_33412a4d59dc5ac2b599724f2069be84.def(pybind11::init< long int const & >());
    class_33412a4d59dc5ac2b599724f2069be84.def(pybind11::init< class ::Eigen::Product< class ::Eigen::Block< class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 1, -1, -1 >, 1, -1, true >, 1, -1, false >, class ::Eigen::TriangularView< class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 1, -1, -1 >, -1, -1, false >, 2 >, 0 > const & >());
    class_33412a4d59dc5ac2b599724f2069be84.def("inner_stride", method_pointer_29ad5c75651e5bfca25c9ed2fe07208f, "");
    class_33412a4d59dc5ac2b599724f2069be84.def("outer_stride", method_pointer_11c42683f43052dfad6288abded43253, "");
    class_33412a4d59dc5ac2b599724f2069be84.def("__sub__", function_group::function_80b79e7f0f8752d2bde4c3dc1ede5760, "");
    class_33412a4d59dc5ac2b599724f2069be84.def("__add__", function_group::function_c5b0ab538ad2591fb1cc4f82b9c1e744, "");
    class_33412a4d59dc5ac2b599724f2069be84.def("__mul__", function_group::function_e10f3cbab9cf5175b08493584e3b4a43, "");
    class_33412a4d59dc5ac2b599724f2069be84.def("__mul__", function_group::function_cdcdb470c4d9573683327f0fe36a1b8a, "");
    class_33412a4d59dc5ac2b599724f2069be84.def("__mul__", function_group::function_94c681ad489f5cbda16d98d0c101ab41, "");
    class_33412a4d59dc5ac2b599724f2069be84.def("__div__", function_group::function_f1c1747bee00530584a8d6aa11a3a2ef, "");

}