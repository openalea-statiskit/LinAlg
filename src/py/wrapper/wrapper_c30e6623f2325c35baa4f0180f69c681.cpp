#include "_linalg.h"

::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_04ad28d1e7f457549a753ba1be6d9aa6)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::innerStride;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_1fc55617a6c8578a99ccc953e8f5ea17)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::outerStride;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_2f0ca5071aa355eaab41de7e2dcb53fe)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::stride;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_82be5b9248b9547db52e69409a177ac5)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::rowStride;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_62bcd94406d85862bee825ac49b52a6e)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::colStride;

namespace autowig {
}

void wrapper_c30e6623f2325c35baa4f0180f69c681(pybind11::module& module)
{

    pybind11::class_<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >, autowig::HolderType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 > >::Type, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > > class_c30e6623f2325c35baa4f0180f69c681(module, "_DenseCoeffsBase_c30e6623f2325c35baa4f0180f69c681", "");
    class_c30e6623f2325c35baa4f0180f69c681.def(pybind11::init< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 > const & >());
    class_c30e6623f2325c35baa4f0180f69c681.def(pybind11::init<  >());
    class_c30e6623f2325c35baa4f0180f69c681.def("inner_stride", method_pointer_04ad28d1e7f457549a753ba1be6d9aa6, "");
    class_c30e6623f2325c35baa4f0180f69c681.def("outer_stride", method_pointer_1fc55617a6c8578a99ccc953e8f5ea17, "");
    class_c30e6623f2325c35baa4f0180f69c681.def("stride", method_pointer_2f0ca5071aa355eaab41de7e2dcb53fe, "");
    class_c30e6623f2325c35baa4f0180f69c681.def("row_stride", method_pointer_82be5b9248b9547db52e69409a177ac5, "");
    class_c30e6623f2325c35baa4f0180f69c681.def("col_stride", method_pointer_62bcd94406d85862bee825ac49b52a6e, "");

}