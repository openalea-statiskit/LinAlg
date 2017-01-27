#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a48a4aa3bad85517b0c87ae27c78dbb4(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_06675bc3f2e15ed498d78a239e6951a2(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_44ef0e199c0c5eb5b851a9e3d0d4d6d8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_01003f936ae85aa6ab18b4507246636a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_e7fb940e776d5a0f9c43e80a0e752918(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_f5a2e17b22145237a23a5dd573a30914(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_41f8f9fb4ab852639a143b65b73c8b00(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > & instance, const float  & param_out)     { instance.x() = param_out; }
    void method_decorator_83c996c9a8465ab8993790e0fcc39f83(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > & instance, const float  & param_out)     { instance.y() = param_out; }
    void method_decorator_9d6933dac670588bb1bb81654da5d484(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > & instance, const float  & param_out)     { instance.z() = param_out; }
// TODO     void method_decorator_ec16ce09d774508190a9d9d2f53d42ac(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > & instance, const float  & param_out)     { instance.w() = param_out; }
}


void wrapper_ad21a0451af25153ae09bd4dbcb13d48()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_a48a4aa3bad85517b0c87ae27c78dbb4)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_06675bc3f2e15ed498d78a239e6951a2)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::coeffRefByOuterInner;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_44ef0e199c0c5eb5b851a9e3d0d4d6d8)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_01003f936ae85aa6ab18b4507246636a)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_e7fb940e776d5a0f9c43e80a0e752918)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::operator[];
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_f5a2e17b22145237a23a5dd573a30914)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_41f8f9fb4ab852639a143b65b73c8b00)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::x;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_83c996c9a8465ab8993790e0fcc39f83)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::y;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_9d6933dac670588bb1bb81654da5d484)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::z;
// TODO // TODO     float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_ec16ce09d774508190a9d9d2f53d42ac)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 > > > class_ad21a0451af25153ae09bd4dbcb13d48("_DenseCoeffsBase_ad21a0451af25153ae09bd4dbcb13d48", "", boost::python::no_init);
    class_ad21a0451af25153ae09bd4dbcb13d48.def("coeff_ref", method_pointer_a48a4aa3bad85517b0c87ae27c78dbb4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ad21a0451af25153ae09bd4dbcb13d48.def("coeff_ref", autowig::method_decorator_a48a4aa3bad85517b0c87ae27c78dbb4);
    class_ad21a0451af25153ae09bd4dbcb13d48.def("coeff_ref_by_outer_inner", method_pointer_06675bc3f2e15ed498d78a239e6951a2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ad21a0451af25153ae09bd4dbcb13d48.def("coeff_ref_by_outer_inner", autowig::method_decorator_06675bc3f2e15ed498d78a239e6951a2);
    class_ad21a0451af25153ae09bd4dbcb13d48.def("__call__", method_pointer_44ef0e199c0c5eb5b851a9e3d0d4d6d8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ad21a0451af25153ae09bd4dbcb13d48.def("__call__", autowig::method_decorator_44ef0e199c0c5eb5b851a9e3d0d4d6d8);
    class_ad21a0451af25153ae09bd4dbcb13d48.def("coeff_ref", method_pointer_01003f936ae85aa6ab18b4507246636a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ad21a0451af25153ae09bd4dbcb13d48.def("coeff_ref", autowig::method_decorator_01003f936ae85aa6ab18b4507246636a);
    class_ad21a0451af25153ae09bd4dbcb13d48.def("__getitem__", method_pointer_e7fb940e776d5a0f9c43e80a0e752918, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ad21a0451af25153ae09bd4dbcb13d48.def("__getitem__", autowig::method_decorator_e7fb940e776d5a0f9c43e80a0e752918);
    class_ad21a0451af25153ae09bd4dbcb13d48.def("__call__", method_pointer_f5a2e17b22145237a23a5dd573a30914, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ad21a0451af25153ae09bd4dbcb13d48.def("__call__", autowig::method_decorator_f5a2e17b22145237a23a5dd573a30914);
    class_ad21a0451af25153ae09bd4dbcb13d48.def("x", method_pointer_41f8f9fb4ab852639a143b65b73c8b00, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ad21a0451af25153ae09bd4dbcb13d48.def("x", autowig::method_decorator_41f8f9fb4ab852639a143b65b73c8b00);
    class_ad21a0451af25153ae09bd4dbcb13d48.def("y", method_pointer_83c996c9a8465ab8993790e0fcc39f83, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ad21a0451af25153ae09bd4dbcb13d48.def("y", autowig::method_decorator_83c996c9a8465ab8993790e0fcc39f83);
    class_ad21a0451af25153ae09bd4dbcb13d48.def("z", method_pointer_9d6933dac670588bb1bb81654da5d484, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ad21a0451af25153ae09bd4dbcb13d48.def("z", autowig::method_decorator_9d6933dac670588bb1bb81654da5d484);
// TODO // TODO     class_ad21a0451af25153ae09bd4dbcb13d48.def("w", method_pointer_ec16ce09d774508190a9d9d2f53d42ac, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO // TODO     class_ad21a0451af25153ae09bd4dbcb13d48.def("w", autowig::method_decorator_ec16ce09d774508190a9d9d2f53d42ac);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 0 > > >();
    }

}