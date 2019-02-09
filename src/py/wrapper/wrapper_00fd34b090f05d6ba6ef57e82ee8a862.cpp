#include "_linalg.h"

::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_b89a91381bb550af88a87e69abfa25ec)(::Eigen::Index , ::Eigen::Index )= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::coeffRef;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_b3d256f2389f5e81a25df698f94e7827)(::Eigen::Index , ::Eigen::Index )= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::coeffRefByOuterInner;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_39930814a13e5ec09ef713caefe9d695)(::Eigen::Index )= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::coeffRef;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_4542f240c1f653a3a7f0de9c578b174f)()= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::x;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_13040b74b470529fbbcdd18c2a2b8c22)()= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::y;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_08cdb4e61d9f570486ba51b37e70efd7)()= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::z;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_1545022e4592504daea517fdbfb3cbae)()= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >::w;

namespace autowig {
    void method_decorator_b89a91381bb550af88a87e69abfa25ec(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, double param_out) { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_b3d256f2389f5e81a25df698f94e7827(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, double param_out) { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_39930814a13e5ec09ef713caefe9d695(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, ::Eigen::Index  param_in_0, double param_out) { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_4542f240c1f653a3a7f0de9c578b174f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, double param_out) { instance.x() = param_out; }
    void method_decorator_13040b74b470529fbbcdd18c2a2b8c22(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, double param_out) { instance.y() = param_out; }
    void method_decorator_08cdb4e61d9f570486ba51b37e70efd7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, double param_out) { instance.z() = param_out; }
    void method_decorator_1545022e4592504daea517fdbfb3cbae(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > & instance, double param_out) { instance.w() = param_out; }
}

void wrapper_00fd34b090f05d6ba6ef57e82ee8a862(pybind11::module& module)
{

    pybind11::class_<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 >, autowig::HolderType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > >::Type, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > > class_00fd34b090f05d6ba6ef57e82ee8a862(module, "_DenseCoeffsBase_00fd34b090f05d6ba6ef57e82ee8a862", "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def(pybind11::init< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 1 > const & >());
    class_00fd34b090f05d6ba6ef57e82ee8a862.def(pybind11::init<  >());
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("coeff_ref", method_pointer_b89a91381bb550af88a87e69abfa25ec, pybind11::return_value_policy::copy, "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("coeff_ref", autowig::method_decorator_b89a91381bb550af88a87e69abfa25ec);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("coeff_ref_by_outer_inner", method_pointer_b3d256f2389f5e81a25df698f94e7827, pybind11::return_value_policy::copy, "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("coeff_ref_by_outer_inner", autowig::method_decorator_b3d256f2389f5e81a25df698f94e7827);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("coeff_ref", method_pointer_39930814a13e5ec09ef713caefe9d695, pybind11::return_value_policy::copy, "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("coeff_ref", autowig::method_decorator_39930814a13e5ec09ef713caefe9d695);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("x", method_pointer_4542f240c1f653a3a7f0de9c578b174f, pybind11::return_value_policy::copy, "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("x", autowig::method_decorator_4542f240c1f653a3a7f0de9c578b174f);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("y", method_pointer_13040b74b470529fbbcdd18c2a2b8c22, pybind11::return_value_policy::copy, "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("y", autowig::method_decorator_13040b74b470529fbbcdd18c2a2b8c22);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("z", method_pointer_08cdb4e61d9f570486ba51b37e70efd7, pybind11::return_value_policy::copy, "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("z", autowig::method_decorator_08cdb4e61d9f570486ba51b37e70efd7);
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("w", method_pointer_1545022e4592504daea517fdbfb3cbae, pybind11::return_value_policy::copy, "");
    class_00fd34b090f05d6ba6ef57e82ee8a862.def("w", autowig::method_decorator_1545022e4592504daea517fdbfb3cbae);

}