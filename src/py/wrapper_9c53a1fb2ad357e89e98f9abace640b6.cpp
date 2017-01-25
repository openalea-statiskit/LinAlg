#include "_ieigen.h"


namespace autowig
{
    void method_decorator_fef333bf69cc57f1afd4b52be087ba77(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_719cc71a4c185bbdbbb055a0cade2cbf(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_d50a303842405ba88a8992e7563504b5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_88b13e0d10235868adab2e314ae3780d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_991138181ff15520bb65d0f83a98ce17(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_dd6098c0d84c560c945da2a0e3ebeb62(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_9c40467a4ff15b64989ff1f5dda68728(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > & instance, const float  & param_out)
    { instance.x() = param_out; }
    void method_decorator_5c921b74459155c2a1d7fa5865095b86(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > & instance, const float  & param_out)
    { instance.y() = param_out; }
    void method_decorator_1598da026c465f69bed0080e21392d02(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > & instance, const float  & param_out)
    { instance.z() = param_out; }
    void method_decorator_fd2a520fa2735340b4245f2ef1647104(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > & instance, const float  & param_out)
    { instance.w() = param_out; }
}


void wrapper_9c53a1fb2ad357e89e98f9abace640b6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_fef333bf69cc57f1afd4b52be087ba77)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_719cc71a4c185bbdbbb055a0cade2cbf)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::coeffRefByOuterInner;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_d50a303842405ba88a8992e7563504b5)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_88b13e0d10235868adab2e314ae3780d)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_991138181ff15520bb65d0f83a98ce17)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::operator[];
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_dd6098c0d84c560c945da2a0e3ebeb62)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_9c40467a4ff15b64989ff1f5dda68728)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::x;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_5c921b74459155c2a1d7fa5865095b86)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::y;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_1598da026c465f69bed0080e21392d02)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::z;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_fd2a520fa2735340b4245f2ef1647104)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 > > > class_9c53a1fb2ad357e89e98f9abace640b6("_DenseCoeffsBase_9c53a1fb2ad357e89e98f9abace640b6", "", boost::python::no_init);
    class_9c53a1fb2ad357e89e98f9abace640b6.def("coeff_ref", method_pointer_fef333bf69cc57f1afd4b52be087ba77, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9c53a1fb2ad357e89e98f9abace640b6.def("coeff_ref", autowig::method_decorator_fef333bf69cc57f1afd4b52be087ba77);
    class_9c53a1fb2ad357e89e98f9abace640b6.def("coeff_ref_by_outer_inner", method_pointer_719cc71a4c185bbdbbb055a0cade2cbf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9c53a1fb2ad357e89e98f9abace640b6.def("coeff_ref_by_outer_inner", autowig::method_decorator_719cc71a4c185bbdbbb055a0cade2cbf);
    class_9c53a1fb2ad357e89e98f9abace640b6.def("__call__", method_pointer_d50a303842405ba88a8992e7563504b5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9c53a1fb2ad357e89e98f9abace640b6.def("__call__", autowig::method_decorator_d50a303842405ba88a8992e7563504b5);
    class_9c53a1fb2ad357e89e98f9abace640b6.def("coeff_ref", method_pointer_88b13e0d10235868adab2e314ae3780d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9c53a1fb2ad357e89e98f9abace640b6.def("coeff_ref", autowig::method_decorator_88b13e0d10235868adab2e314ae3780d);
    class_9c53a1fb2ad357e89e98f9abace640b6.def("__getitem__", method_pointer_991138181ff15520bb65d0f83a98ce17, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9c53a1fb2ad357e89e98f9abace640b6.def("__getitem__", autowig::method_decorator_991138181ff15520bb65d0f83a98ce17);
    class_9c53a1fb2ad357e89e98f9abace640b6.def("__call__", method_pointer_dd6098c0d84c560c945da2a0e3ebeb62, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9c53a1fb2ad357e89e98f9abace640b6.def("__call__", autowig::method_decorator_dd6098c0d84c560c945da2a0e3ebeb62);
    class_9c53a1fb2ad357e89e98f9abace640b6.def("x", method_pointer_9c40467a4ff15b64989ff1f5dda68728, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9c53a1fb2ad357e89e98f9abace640b6.def("x", autowig::method_decorator_9c40467a4ff15b64989ff1f5dda68728);
    class_9c53a1fb2ad357e89e98f9abace640b6.def("y", method_pointer_5c921b74459155c2a1d7fa5865095b86, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9c53a1fb2ad357e89e98f9abace640b6.def("y", autowig::method_decorator_5c921b74459155c2a1d7fa5865095b86);
    class_9c53a1fb2ad357e89e98f9abace640b6.def("z", method_pointer_1598da026c465f69bed0080e21392d02, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9c53a1fb2ad357e89e98f9abace640b6.def("z", autowig::method_decorator_1598da026c465f69bed0080e21392d02);
    class_9c53a1fb2ad357e89e98f9abace640b6.def("w", method_pointer_fd2a520fa2735340b4245f2ef1647104, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9c53a1fb2ad357e89e98f9abace640b6.def("w", autowig::method_decorator_fd2a520fa2735340b4245f2ef1647104);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 0 > > >();
    }

}