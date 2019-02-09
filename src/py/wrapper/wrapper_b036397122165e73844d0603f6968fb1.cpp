#include "_linalg.h"

::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_a471bf37dc9c5fcab46a5544831feb8a)(::Eigen::Index , ::Eigen::Index )const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::rowIndexByOuterInner;
::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_f5ad4ecd5f1a5238a4164e9dd33dfeab)(::Eigen::Index , ::Eigen::Index )const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::colIndexByOuterInner;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_dcc0493a7f7d5f418abed3729e6b66de)(::Eigen::Index , ::Eigen::Index )const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::coeff;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_7585aa6d1b8b5b7c9c81d5af26282daa)(::Eigen::Index , ::Eigen::Index )const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::coeffByOuterInner;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_57152b156e4c53f39a1d21cebd0d9fd1)(::Eigen::Index )const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::coeff;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_442ac24560f55d5dbc7678fb4a31d012)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::x;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_785c9f5390fb5ce2bf0741a90f97f7e9)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::y;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_02bd335c2c28545da006d338dd46d390)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::z;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_34726919fa0b5e2cbc1e53fbfa73783b)()const= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::w;

namespace autowig {
}

void wrapper_b036397122165e73844d0603f6968fb1(pybind11::module& module)
{

    pybind11::class_<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >, autowig::HolderType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > >::Type, struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > class_b036397122165e73844d0603f6968fb1(module, "_DenseCoeffsBase_b036397122165e73844d0603f6968fb1", "");
    class_b036397122165e73844d0603f6968fb1.def(pybind11::init< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const & >());
    class_b036397122165e73844d0603f6968fb1.def(pybind11::init<  >());
    class_b036397122165e73844d0603f6968fb1.def("row_index_by_outer_inner", method_pointer_a471bf37dc9c5fcab46a5544831feb8a, "");
    class_b036397122165e73844d0603f6968fb1.def("col_index_by_outer_inner", method_pointer_f5ad4ecd5f1a5238a4164e9dd33dfeab, "");
    class_b036397122165e73844d0603f6968fb1.def("coeff", method_pointer_dcc0493a7f7d5f418abed3729e6b66de, pybind11::return_value_policy::copy, "");
    class_b036397122165e73844d0603f6968fb1.def("coeff_by_outer_inner", method_pointer_7585aa6d1b8b5b7c9c81d5af26282daa, pybind11::return_value_policy::copy, "");
    class_b036397122165e73844d0603f6968fb1.def("coeff", method_pointer_57152b156e4c53f39a1d21cebd0d9fd1, pybind11::return_value_policy::copy, "");
    class_b036397122165e73844d0603f6968fb1.def("x", method_pointer_442ac24560f55d5dbc7678fb4a31d012, pybind11::return_value_policy::copy, "");
    class_b036397122165e73844d0603f6968fb1.def("y", method_pointer_785c9f5390fb5ce2bf0741a90f97f7e9, pybind11::return_value_policy::copy, "");
    class_b036397122165e73844d0603f6968fb1.def("z", method_pointer_02bd335c2c28545da006d338dd46d390, pybind11::return_value_policy::copy, "");
    class_b036397122165e73844d0603f6968fb1.def("w", method_pointer_34726919fa0b5e2cbc1e53fbfa73783b, pybind11::return_value_policy::copy, "");

}