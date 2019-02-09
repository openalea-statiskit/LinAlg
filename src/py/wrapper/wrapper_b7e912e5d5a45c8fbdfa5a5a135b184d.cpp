#include "_linalg.h"

class ::Eigen::SparseVector< double, 0, int > & (::Eigen::EigenBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_7c6f94b0762d5d43b794bf0be1f8ef86)()= &::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > >::derived;
class ::Eigen::SparseVector< double, 0, int > const & (::Eigen::EigenBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_e8b366a119425213bc92add8ed72f4d2)()const= &::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > >::derived;
class ::Eigen::SparseVector< double, 0, int > & (::Eigen::EigenBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_fbe8a630a7525781bdcc6e2b207c0ca3)()const= &::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > >::const_cast_derived;
class ::Eigen::SparseVector< double, 0, int > const & (::Eigen::EigenBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_1ee0e1430f00533ea66c6303d7bf4833)()const= &::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > >::const_derived;
::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > >::Index  (::Eigen::EigenBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_18d6506c917652efa75e0e98465f6b39)()const= &::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > >::rows;
::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > >::Index  (::Eigen::EigenBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_261187bf7c8657d1bb954c7ef21a5c3f)()const= &::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > >::cols;
::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > >::Index  (::Eigen::EigenBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_1adcbed6acbf58a286b0894390420995)()const= &::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > >::size;

namespace autowig {
    void method_decorator_7c6f94b0762d5d43b794bf0be1f8ef86(struct ::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > > & instance, const class ::Eigen::SparseVector< double, 0, int > & param_out) { instance.derived() = param_out; }
    void method_decorator_fbe8a630a7525781bdcc6e2b207c0ca3(struct ::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > > const & instance, const class ::Eigen::SparseVector< double, 0, int > & param_out) { instance.const_cast_derived() = param_out; }
}

void wrapper_b7e912e5d5a45c8fbdfa5a5a135b184d(pybind11::module& module)
{

    pybind11::class_<struct ::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > >, autowig::HolderType< struct ::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > > >::Type > class_b7e912e5d5a45c8fbdfa5a5a135b184d(module, "_EigenBase_b7e912e5d5a45c8fbdfa5a5a135b184d", "");
    class_b7e912e5d5a45c8fbdfa5a5a135b184d.def(pybind11::init< struct ::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > > const & >());
    class_b7e912e5d5a45c8fbdfa5a5a135b184d.def(pybind11::init<  >());
    class_b7e912e5d5a45c8fbdfa5a5a135b184d.def("derived", method_pointer_7c6f94b0762d5d43b794bf0be1f8ef86, pybind11::return_value_policy::reference_internal, "");
    class_b7e912e5d5a45c8fbdfa5a5a135b184d.def("derived", autowig::method_decorator_7c6f94b0762d5d43b794bf0be1f8ef86);
    class_b7e912e5d5a45c8fbdfa5a5a135b184d.def("derived", method_pointer_e8b366a119425213bc92add8ed72f4d2, pybind11::return_value_policy::copy, "");
    class_b7e912e5d5a45c8fbdfa5a5a135b184d.def("const_cast_derived", method_pointer_fbe8a630a7525781bdcc6e2b207c0ca3, pybind11::return_value_policy::reference_internal, "");
    class_b7e912e5d5a45c8fbdfa5a5a135b184d.def("const_cast_derived", autowig::method_decorator_fbe8a630a7525781bdcc6e2b207c0ca3);
    class_b7e912e5d5a45c8fbdfa5a5a135b184d.def("const_derived", method_pointer_1ee0e1430f00533ea66c6303d7bf4833, pybind11::return_value_policy::copy, "");
    class_b7e912e5d5a45c8fbdfa5a5a135b184d.def("rows", method_pointer_18d6506c917652efa75e0e98465f6b39, "");
    class_b7e912e5d5a45c8fbdfa5a5a135b184d.def("cols", method_pointer_261187bf7c8657d1bb954c7ef21a5c3f, "");
    class_b7e912e5d5a45c8fbdfa5a5a135b184d.def("__len__", method_pointer_1adcbed6acbf58a286b0894390420995, "");

}