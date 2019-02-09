#include "_linalg.h"

::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_abdb55eb7a7e58efa2c22856be348ad7)(::Eigen::Index , ::Eigen::Index )const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::rowIndexByOuterInner;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_7f1df0d07d9655efad838e25045656fd)(::Eigen::Index , ::Eigen::Index )const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::colIndexByOuterInner;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_a2e05f34c3d656a99e6287a07e490751)(::Eigen::Index , ::Eigen::Index )const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::coeff;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_9d6293f6c2f350fb87fd83412732a6b5)(::Eigen::Index , ::Eigen::Index )const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::coeffByOuterInner;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_cf9ae89f5c675695ab83a8b359e82a9a)(::Eigen::Index )const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::coeff;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_7cf441bca0ec558d8d0ca273ae4d2335)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::x;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_a252e18613ce52f0af2dc157a0f3194b)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::y;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_4a25e7c718915ecaafc19b0ff6c56404)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::z;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_d504b4534126599aa72eeaffbe5d711b)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::w;

namespace autowig {
}

void wrapper_acfd714a9c0854cfb56aa7e4c3f02c5b(pybind11::module& module)
{

    pybind11::class_<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >, autowig::HolderType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > >::Type, struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > class_acfd714a9c0854cfb56aa7e4c3f02c5b(module, "_DenseCoeffsBase_acfd714a9c0854cfb56aa7e4c3f02c5b", "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def(pybind11::init< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > const & >());
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def(pybind11::init<  >());
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("row_index_by_outer_inner", method_pointer_abdb55eb7a7e58efa2c22856be348ad7, "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("col_index_by_outer_inner", method_pointer_7f1df0d07d9655efad838e25045656fd, "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("coeff", method_pointer_a2e05f34c3d656a99e6287a07e490751, pybind11::return_value_policy::copy, "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("coeff_by_outer_inner", method_pointer_9d6293f6c2f350fb87fd83412732a6b5, pybind11::return_value_policy::copy, "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("coeff", method_pointer_cf9ae89f5c675695ab83a8b359e82a9a, pybind11::return_value_policy::copy, "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("x", method_pointer_7cf441bca0ec558d8d0ca273ae4d2335, pybind11::return_value_policy::copy, "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("y", method_pointer_a252e18613ce52f0af2dc157a0f3194b, pybind11::return_value_policy::copy, "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("z", method_pointer_4a25e7c718915ecaafc19b0ff6c56404, pybind11::return_value_policy::copy, "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("w", method_pointer_d504b4534126599aa72eeaffbe5d711b, pybind11::return_value_policy::copy, "");

}