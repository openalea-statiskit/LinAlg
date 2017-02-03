#include "_linalg.h"


namespace autowig
{
    void method_decorator_c5aafab32d3c5afea1867d0f3914b875(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_1001a94c2f2555a1a1b864f9369fce48(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_163d5dfaf06157cca55fd1c9cb03123e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_5a3da4d14f4a583b810265b9d2a1ab23(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.x() = param_out; }
    void method_decorator_94cabce2b9ec577ea7316f14a1dc2006(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.y() = param_out; }
    void method_decorator_00d37a65d6cb52b183d99d244ccec5e9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.z() = param_out; }
    void method_decorator_86821c47209a52a2b99a3323f80841a7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.w() = param_out; }
}


void wrapper_703e23fc0c8d576cb975446e1325f02e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_c5aafab32d3c5afea1867d0f3914b875)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::coeffRef;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_1001a94c2f2555a1a1b864f9369fce48)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::coeffRefByOuterInner;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_163d5dfaf06157cca55fd1c9cb03123e)(::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::coeffRef;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_5a3da4d14f4a583b810265b9d2a1ab23)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::x;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_94cabce2b9ec577ea7316f14a1dc2006)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::y;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_00d37a65d6cb52b183d99d244ccec5e9)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::z;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_86821c47209a52a2b99a3323f80841a7)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > >::Type, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > > > class_703e23fc0c8d576cb975446e1325f02e("_DenseCoeffsBase_703e23fc0c8d576cb975446e1325f02e", "", boost::python::no_init);
    class_703e23fc0c8d576cb975446e1325f02e.def("coeff_ref", method_pointer_c5aafab32d3c5afea1867d0f3914b875, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_703e23fc0c8d576cb975446e1325f02e.def("coeff_ref", autowig::method_decorator_c5aafab32d3c5afea1867d0f3914b875);
    class_703e23fc0c8d576cb975446e1325f02e.def("coeff_ref_by_outer_inner", method_pointer_1001a94c2f2555a1a1b864f9369fce48, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_703e23fc0c8d576cb975446e1325f02e.def("coeff_ref_by_outer_inner", autowig::method_decorator_1001a94c2f2555a1a1b864f9369fce48);
    class_703e23fc0c8d576cb975446e1325f02e.def("coeff_ref", method_pointer_163d5dfaf06157cca55fd1c9cb03123e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_703e23fc0c8d576cb975446e1325f02e.def("coeff_ref", autowig::method_decorator_163d5dfaf06157cca55fd1c9cb03123e);
    class_703e23fc0c8d576cb975446e1325f02e.def("x", method_pointer_5a3da4d14f4a583b810265b9d2a1ab23, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_703e23fc0c8d576cb975446e1325f02e.def("x", autowig::method_decorator_5a3da4d14f4a583b810265b9d2a1ab23);
    class_703e23fc0c8d576cb975446e1325f02e.def("y", method_pointer_94cabce2b9ec577ea7316f14a1dc2006, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_703e23fc0c8d576cb975446e1325f02e.def("y", autowig::method_decorator_94cabce2b9ec577ea7316f14a1dc2006);
    class_703e23fc0c8d576cb975446e1325f02e.def("z", method_pointer_00d37a65d6cb52b183d99d244ccec5e9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_703e23fc0c8d576cb975446e1325f02e.def("z", autowig::method_decorator_00d37a65d6cb52b183d99d244ccec5e9);
    class_703e23fc0c8d576cb975446e1325f02e.def("w", method_pointer_86821c47209a52a2b99a3323f80841a7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_703e23fc0c8d576cb975446e1325f02e.def("w", autowig::method_decorator_86821c47209a52a2b99a3323f80841a7);

    if(autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > >::Type, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > >::Type >();
    }

}