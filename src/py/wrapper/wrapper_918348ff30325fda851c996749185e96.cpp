#include "_linalg.h"

::Eigen::Index  (::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::*method_pointer_70527bf5bb695d679efb4042dfead9f6)()const= &::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::innerStride;
::Eigen::Index  (::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::*method_pointer_bac68aa52de25e2084710766acf939d4)()const= &::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::outerStride;

namespace autowig {
}

void wrapper_918348ff30325fda851c996749185e96(pybind11::module& module)
{

    struct function_group
    {
        static class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  function_c6ce64eaced45cb9a5bb322d54f9e17d(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_0, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_1)
        { return operator-(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  function_95b1ae3590c45e2aac161ecc01203167(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_0, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_1)
        { return operator+(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  function_83174e855feb5e0b999c9b31e753f1b2(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_0, double const & parameter_1)
        { return operator*(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  function_19eb7f79d47e5840ba75a003154179fe(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & parameter_1)
        { return operator*(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  function_401860d2cecb515c8310a336181d69a0(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_0, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_1)
        { return operator*(parameter_0, parameter_1); }
        static class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  function_fb8d31c08aa95954853e293434742330(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & parameter_0, double const & parameter_1)
        { return operator/(parameter_0, parameter_1); }
    };
    pybind11::class_<class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, autowig::HolderType< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Type, class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > class_918348ff30325fda851c996749185e96(module, "_Matrix_918348ff30325fda851c996749185e96", "");
    class_918348ff30325fda851c996749185e96.def(pybind11::init<  >());
    class_918348ff30325fda851c996749185e96.def(pybind11::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >());
    class_918348ff30325fda851c996749185e96.def(pybind11::init< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const & >());
    class_918348ff30325fda851c996749185e96.def(pybind11::init< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const & >());
    class_918348ff30325fda851c996749185e96.def(pybind11::init< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >());
    class_918348ff30325fda851c996749185e96.def(pybind11::init< long int const &, long int const & >());
    class_918348ff30325fda851c996749185e96.def(pybind11::init< class ::Eigen::Product< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const & >());
    class_918348ff30325fda851c996749185e96.def(pybind11::init< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Transpose< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const > const, 6 >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const & >());
    class_918348ff30325fda851c996749185e96.def(pybind11::init< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 5 >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const & >());
    class_918348ff30325fda851c996749185e96.def(pybind11::init< struct ::Eigen::EigenBase< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Transpose< class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, -1, -1, false > const > const, 6 >, class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, -1, -1, false >, 0 > > const & >());
    class_918348ff30325fda851c996749185e96.def(pybind11::init< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 1, -1, -1 >, 2 >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const & >());
    class_918348ff30325fda851c996749185e96.def(pybind11::init< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Transpose< class ::Eigen::Matrix< double, -1, -1, 1, -1, -1 > const > const, 1 >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const & >());
    class_918348ff30325fda851c996749185e96.def(pybind11::init< struct ::Eigen::EigenBase< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 1 >, class ::Eigen::Matrix< double, -1, -1, 1, -1, -1 >, 0 > > const & >());
    class_918348ff30325fda851c996749185e96.def(pybind11::init< struct ::Eigen::EigenBase< class ::Eigen::Product< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 2 >, 0 > > const & >());
    class_918348ff30325fda851c996749185e96.def("inner_stride", method_pointer_70527bf5bb695d679efb4042dfead9f6, "");
    class_918348ff30325fda851c996749185e96.def("outer_stride", method_pointer_bac68aa52de25e2084710766acf939d4, "");
    class_918348ff30325fda851c996749185e96.def("__sub__", function_group::function_c6ce64eaced45cb9a5bb322d54f9e17d, "");
    class_918348ff30325fda851c996749185e96.def("__add__", function_group::function_95b1ae3590c45e2aac161ecc01203167, "");
    class_918348ff30325fda851c996749185e96.def("__mul__", function_group::function_83174e855feb5e0b999c9b31e753f1b2, "");
    class_918348ff30325fda851c996749185e96.def("__mul__", function_group::function_19eb7f79d47e5840ba75a003154179fe, "");
    class_918348ff30325fda851c996749185e96.def("__mul__", function_group::function_401860d2cecb515c8310a336181d69a0, "");
    class_918348ff30325fda851c996749185e96.def("__div__", function_group::function_fb8d31c08aa95954853e293434742330, "");

}