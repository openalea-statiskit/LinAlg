#include "_linalg.h"



namespace autowig
{

    void method_decorator_0abe4bc2b7c95194b33ed2558c11b382(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_aa901c3f706650b59e9d578772c7613f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_a0c6cf0689e559d3b6188a4a68b5ae0a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, ::Eigen::Index  param_in_0, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_5a3da4d14f4a583b810265b9d2a1ab23(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.x() = param_out; }
    void method_decorator_94cabce2b9ec577ea7316f14a1dc2006(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.y() = param_out; }
    void method_decorator_00d37a65d6cb52b183d99d244ccec5e9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.z() = param_out; }
    void method_decorator_86821c47209a52a2b99a3323f80841a7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > & instance, const ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & param_out)     { instance.w() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > const volatile * get_pointer<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > const volatile >(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_703e23fc0c8d576cb975446e1325f02e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_0abe4bc2b7c95194b33ed2558c11b382)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::coeffRef;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_aa901c3f706650b59e9d578772c7613f)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::coeffRefByOuterInner;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_a0c6cf0689e559d3b6188a4a68b5ae0a)(::Eigen::Index ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::coeffRef;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_5a3da4d14f4a583b810265b9d2a1ab23)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::x;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_94cabce2b9ec577ea7316f14a1dc2006)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::y;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_00d37a65d6cb52b183d99d244ccec5e9)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::z;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::Scalar & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_86821c47209a52a2b99a3323f80841a7)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 >, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > >::Type, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 0 > > > class_703e23fc0c8d576cb975446e1325f02e("_DenseCoeffsBase_703e23fc0c8d576cb975446e1325f02e", "", boost::python::no_init);
    class_703e23fc0c8d576cb975446e1325f02e.def("coeff_ref", method_pointer_0abe4bc2b7c95194b33ed2558c11b382, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_703e23fc0c8d576cb975446e1325f02e.def("coeff_ref", autowig::method_decorator_0abe4bc2b7c95194b33ed2558c11b382);
    class_703e23fc0c8d576cb975446e1325f02e.def("coeff_ref_by_outer_inner", method_pointer_aa901c3f706650b59e9d578772c7613f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_703e23fc0c8d576cb975446e1325f02e.def("coeff_ref_by_outer_inner", autowig::method_decorator_aa901c3f706650b59e9d578772c7613f);
    class_703e23fc0c8d576cb975446e1325f02e.def("coeff_ref", method_pointer_a0c6cf0689e559d3b6188a4a68b5ae0a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_703e23fc0c8d576cb975446e1325f02e.def("coeff_ref", autowig::method_decorator_a0c6cf0689e559d3b6188a4a68b5ae0a);
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