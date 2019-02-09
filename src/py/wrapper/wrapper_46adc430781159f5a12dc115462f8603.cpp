#include "_linalg.h"

::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_b24d3c834a6b51e5b46b4749a30aa175)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::innerStride;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_990c8b033ab05876966da2cc89a62433)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::outerStride;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_2837969ed47554b1858d7cdb607e15dd)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::stride;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_4552d83b54e85c07824b25bb4a4a8a5c)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::rowStride;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_bbab27f52f305e13a6f04ee0df9506e9)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >::colStride;

namespace autowig {
}

void wrapper_46adc430781159f5a12dc115462f8603(pybind11::module& module)
{

    pybind11::class_<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 >, autowig::HolderType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 > >::Type, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > > class_46adc430781159f5a12dc115462f8603(module, "_DenseCoeffsBase_46adc430781159f5a12dc115462f8603", "");
    class_46adc430781159f5a12dc115462f8603.def(pybind11::init< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 > const & >());
    class_46adc430781159f5a12dc115462f8603.def(pybind11::init<  >());
    class_46adc430781159f5a12dc115462f8603.def("inner_stride", method_pointer_b24d3c834a6b51e5b46b4749a30aa175, "");
    class_46adc430781159f5a12dc115462f8603.def("outer_stride", method_pointer_990c8b033ab05876966da2cc89a62433, "");
    class_46adc430781159f5a12dc115462f8603.def("stride", method_pointer_2837969ed47554b1858d7cdb607e15dd, "");
    class_46adc430781159f5a12dc115462f8603.def("row_stride", method_pointer_4552d83b54e85c07824b25bb4a4a8a5c, "");
    class_46adc430781159f5a12dc115462f8603.def("col_stride", method_pointer_bbab27f52f305e13a6f04ee0df9506e9, "");

}