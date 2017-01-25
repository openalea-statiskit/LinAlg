#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b0d059b666ef52aebc884b43755f09b5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_6d5c26f17db155a9863ba2119c5d9e13(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_a6919d9e701e513d845810b0f6ed11ce(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_0ed6a467db4154689158000e2d7577ee(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_ca306bae1dcc5a8993ed124ac1ca26d0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_4b9ee4bc6cc95555a30ccbdc5397b565(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_7fa7c3b68c345c6eabbb08bef34bc7a6(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > & instance, const int  & param_out)
    { instance.x() = param_out; }
    void method_decorator_d65d95fb77535a53aa636b5705f9a7b7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > & instance, const int  & param_out)
    { instance.y() = param_out; }
    void method_decorator_b74041dd54cd515280d388fc05c1c679(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > & instance, const int  & param_out)
    { instance.z() = param_out; }
    void method_decorator_4f1ecfeed7775631b905e6763bd79a0b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > & instance, const int  & param_out)
    { instance.w() = param_out; }
}


void wrapper_c1f652b4a2ef59e580a5e2bb5e960ac2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_b0d059b666ef52aebc884b43755f09b5)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_6d5c26f17db155a9863ba2119c5d9e13)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::coeffRefByOuterInner;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_a6919d9e701e513d845810b0f6ed11ce)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_0ed6a467db4154689158000e2d7577ee)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_ca306bae1dcc5a8993ed124ac1ca26d0)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::operator[];
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_4b9ee4bc6cc95555a30ccbdc5397b565)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_7fa7c3b68c345c6eabbb08bef34bc7a6)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::x;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_d65d95fb77535a53aa636b5705f9a7b7)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::y;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_b74041dd54cd515280d388fc05c1c679)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::z;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_4f1ecfeed7775631b905e6763bd79a0b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 > > > class_c1f652b4a2ef59e580a5e2bb5e960ac2("_DenseCoeffsBase_c1f652b4a2ef59e580a5e2bb5e960ac2", "", boost::python::no_init);
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("coeff_ref", method_pointer_b0d059b666ef52aebc884b43755f09b5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("coeff_ref", autowig::method_decorator_b0d059b666ef52aebc884b43755f09b5);
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("coeff_ref_by_outer_inner", method_pointer_6d5c26f17db155a9863ba2119c5d9e13, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("coeff_ref_by_outer_inner", autowig::method_decorator_6d5c26f17db155a9863ba2119c5d9e13);
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("__call__", method_pointer_a6919d9e701e513d845810b0f6ed11ce, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("__call__", autowig::method_decorator_a6919d9e701e513d845810b0f6ed11ce);
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("coeff_ref", method_pointer_0ed6a467db4154689158000e2d7577ee, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("coeff_ref", autowig::method_decorator_0ed6a467db4154689158000e2d7577ee);
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("__getitem__", method_pointer_ca306bae1dcc5a8993ed124ac1ca26d0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("__getitem__", autowig::method_decorator_ca306bae1dcc5a8993ed124ac1ca26d0);
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("__call__", method_pointer_4b9ee4bc6cc95555a30ccbdc5397b565, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("__call__", autowig::method_decorator_4b9ee4bc6cc95555a30ccbdc5397b565);
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("x", method_pointer_7fa7c3b68c345c6eabbb08bef34bc7a6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("x", autowig::method_decorator_7fa7c3b68c345c6eabbb08bef34bc7a6);
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("y", method_pointer_d65d95fb77535a53aa636b5705f9a7b7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("y", autowig::method_decorator_d65d95fb77535a53aa636b5705f9a7b7);
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("z", method_pointer_b74041dd54cd515280d388fc05c1c679, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("z", autowig::method_decorator_b74041dd54cd515280d388fc05c1c679);
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("w", method_pointer_4f1ecfeed7775631b905e6763bd79a0b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c1f652b4a2ef59e580a5e2bb5e960ac2.def("w", autowig::method_decorator_4f1ecfeed7775631b905e6763bd79a0b);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 > > >();
    }

}