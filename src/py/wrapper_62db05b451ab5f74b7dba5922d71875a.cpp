#include "_ieigen.h"


namespace autowig
{
    void method_decorator_7f96fc82dfc35292bf47daeef59736ba(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_ca95327e02d45fd4925e312427bd9b89(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_d85d90cb367f55e7a37d6520ef4fff1e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_91c0705966a75a89be4f9baef49d037c(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_137bd07ef8555acfa7f8b2b2cb9c7561(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_1f9a0dc016cf582994625ff4ae10c3e7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_9d127016ded653a2ac26835f12d85f29(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > & instance, const int  & param_out)
    { instance.x() = param_out; }
    void method_decorator_7e7577e6593e59619c9ddc5c069517ec(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > & instance, const int  & param_out)
    { instance.y() = param_out; }
    void method_decorator_10eb63da755653adb87443ee9a35c5be(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > & instance, const int  & param_out)
    { instance.z() = param_out; }
    void method_decorator_84de30b922825cf0a6c2b26e8562db2b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > & instance, const int  & param_out)
    { instance.w() = param_out; }
}


void wrapper_62db05b451ab5f74b7dba5922d71875a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_7f96fc82dfc35292bf47daeef59736ba)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_ca95327e02d45fd4925e312427bd9b89)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::coeffRefByOuterInner;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_d85d90cb367f55e7a37d6520ef4fff1e)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_91c0705966a75a89be4f9baef49d037c)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_137bd07ef8555acfa7f8b2b2cb9c7561)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::operator[];
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_1f9a0dc016cf582994625ff4ae10c3e7)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_9d127016ded653a2ac26835f12d85f29)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::x;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_7e7577e6593e59619c9ddc5c069517ec)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::y;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_10eb63da755653adb87443ee9a35c5be)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::z;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::*method_pointer_84de30b922825cf0a6c2b26e8562db2b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 > > > class_62db05b451ab5f74b7dba5922d71875a("_DenseCoeffsBase_62db05b451ab5f74b7dba5922d71875a", "", boost::python::no_init);
    class_62db05b451ab5f74b7dba5922d71875a.def("coeff_ref", method_pointer_7f96fc82dfc35292bf47daeef59736ba, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62db05b451ab5f74b7dba5922d71875a.def("coeff_ref", autowig::method_decorator_7f96fc82dfc35292bf47daeef59736ba);
    class_62db05b451ab5f74b7dba5922d71875a.def("coeff_ref_by_outer_inner", method_pointer_ca95327e02d45fd4925e312427bd9b89, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62db05b451ab5f74b7dba5922d71875a.def("coeff_ref_by_outer_inner", autowig::method_decorator_ca95327e02d45fd4925e312427bd9b89);
    class_62db05b451ab5f74b7dba5922d71875a.def("__call__", method_pointer_d85d90cb367f55e7a37d6520ef4fff1e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62db05b451ab5f74b7dba5922d71875a.def("__call__", autowig::method_decorator_d85d90cb367f55e7a37d6520ef4fff1e);
    class_62db05b451ab5f74b7dba5922d71875a.def("coeff_ref", method_pointer_91c0705966a75a89be4f9baef49d037c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62db05b451ab5f74b7dba5922d71875a.def("coeff_ref", autowig::method_decorator_91c0705966a75a89be4f9baef49d037c);
    class_62db05b451ab5f74b7dba5922d71875a.def("__getitem__", method_pointer_137bd07ef8555acfa7f8b2b2cb9c7561, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62db05b451ab5f74b7dba5922d71875a.def("__getitem__", autowig::method_decorator_137bd07ef8555acfa7f8b2b2cb9c7561);
    class_62db05b451ab5f74b7dba5922d71875a.def("__call__", method_pointer_1f9a0dc016cf582994625ff4ae10c3e7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62db05b451ab5f74b7dba5922d71875a.def("__call__", autowig::method_decorator_1f9a0dc016cf582994625ff4ae10c3e7);
    class_62db05b451ab5f74b7dba5922d71875a.def("x", method_pointer_9d127016ded653a2ac26835f12d85f29, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62db05b451ab5f74b7dba5922d71875a.def("x", autowig::method_decorator_9d127016ded653a2ac26835f12d85f29);
    class_62db05b451ab5f74b7dba5922d71875a.def("y", method_pointer_7e7577e6593e59619c9ddc5c069517ec, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62db05b451ab5f74b7dba5922d71875a.def("y", autowig::method_decorator_7e7577e6593e59619c9ddc5c069517ec);
    class_62db05b451ab5f74b7dba5922d71875a.def("z", method_pointer_10eb63da755653adb87443ee9a35c5be, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62db05b451ab5f74b7dba5922d71875a.def("z", autowig::method_decorator_10eb63da755653adb87443ee9a35c5be);
    class_62db05b451ab5f74b7dba5922d71875a.def("w", method_pointer_84de30b922825cf0a6c2b26e8562db2b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62db05b451ab5f74b7dba5922d71875a.def("w", autowig::method_decorator_84de30b922825cf0a6c2b26e8562db2b);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 0 > > >();
    }

}