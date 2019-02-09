#include "_linalg.h"

::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_1eac69b4d5cd55b6aacfa2c119d86d49)(::Eigen::Index , ::Eigen::Index )= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_698db319b8a856828be47b12e53e3037)(::Eigen::Index , ::Eigen::Index )= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::coeffRefByOuterInner;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_21a59b136e535260b209603244e4cb56)(::Eigen::Index )= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_1654307e924d5077956b3b657bcafc10)()= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::x;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_a324ad395ced5de798499ff9d6f53152)()= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::y;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_10c9596210da594188ef90fc98d3486d)()= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::z;
::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_5ba2982c02675f059d431d5b45ce8370)()= &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::w;

namespace autowig {
    void method_decorator_1eac69b4d5cd55b6aacfa2c119d86d49(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, double param_out) { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_698db319b8a856828be47b12e53e3037(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, double param_out) { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_21a59b136e535260b209603244e4cb56(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, double param_out) { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_1654307e924d5077956b3b657bcafc10(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, double param_out) { instance.x() = param_out; }
    void method_decorator_a324ad395ced5de798499ff9d6f53152(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, double param_out) { instance.y() = param_out; }
    void method_decorator_10c9596210da594188ef90fc98d3486d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, double param_out) { instance.z() = param_out; }
    void method_decorator_5ba2982c02675f059d431d5b45ce8370(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > & instance, double param_out) { instance.w() = param_out; }
}

void wrapper_ef3a9184ff095382ae59f98b7ee1ca0e(pybind11::module& module)
{

    pybind11::class_<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, autowig::HolderType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >::Type, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > > class_ef3a9184ff095382ae59f98b7ee1ca0e(module, "_DenseCoeffsBase_ef3a9184ff095382ae59f98b7ee1ca0e", "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def(pybind11::init< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const & >());
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def(pybind11::init<  >());
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", method_pointer_1eac69b4d5cd55b6aacfa2c119d86d49, pybind11::return_value_policy::copy, "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", autowig::method_decorator_1eac69b4d5cd55b6aacfa2c119d86d49);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref_by_outer_inner", method_pointer_698db319b8a856828be47b12e53e3037, pybind11::return_value_policy::copy, "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref_by_outer_inner", autowig::method_decorator_698db319b8a856828be47b12e53e3037);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", method_pointer_21a59b136e535260b209603244e4cb56, pybind11::return_value_policy::copy, "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("coeff_ref", autowig::method_decorator_21a59b136e535260b209603244e4cb56);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("x", method_pointer_1654307e924d5077956b3b657bcafc10, pybind11::return_value_policy::copy, "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("x", autowig::method_decorator_1654307e924d5077956b3b657bcafc10);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("y", method_pointer_a324ad395ced5de798499ff9d6f53152, pybind11::return_value_policy::copy, "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("y", autowig::method_decorator_a324ad395ced5de798499ff9d6f53152);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("z", method_pointer_10c9596210da594188ef90fc98d3486d, pybind11::return_value_policy::copy, "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("z", autowig::method_decorator_10c9596210da594188ef90fc98d3486d);
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("w", method_pointer_5ba2982c02675f059d431d5b45ce8370, pybind11::return_value_policy::copy, "");
    class_ef3a9184ff095382ae59f98b7ee1ca0e.def("w", autowig::method_decorator_5ba2982c02675f059d431d5b45ce8370);

}