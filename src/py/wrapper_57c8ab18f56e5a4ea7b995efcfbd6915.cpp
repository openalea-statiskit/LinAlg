#include "_ieigen.h"


namespace autowig
{
    void method_decorator_4f421ae118a1562ab4e952c596553d1d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_10911bbf1f025da5bc957a957d5e88d7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_cc96b69a4f455abf85cb240b08140c9c(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_aa709da8584d5b128c257249f06cbec1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_a3148c98f5e450809be968ec59b743dd(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_53b7eee2bc38581c9d872c6f7ae99b79(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_6d6ee7b154af57fc928cc6a4cbdb62b6(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > & instance, const int  & param_out)
    { instance.x() = param_out; }
    void method_decorator_2b33efb3ffa259babda746dc0c5ebdbe(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > & instance, const int  & param_out)
    { instance.y() = param_out; }
    void method_decorator_262a2cdead345f89b51f8b9a0535bb10(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > & instance, const int  & param_out)
    { instance.z() = param_out; }
    void method_decorator_afb8e0f1abe15131b391489378e4b8f3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > & instance, const int  & param_out)
    { instance.w() = param_out; }
}


void wrapper_57c8ab18f56e5a4ea7b995efcfbd6915()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_4f421ae118a1562ab4e952c596553d1d)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_10911bbf1f025da5bc957a957d5e88d7)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::coeffRefByOuterInner;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_cc96b69a4f455abf85cb240b08140c9c)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_aa709da8584d5b128c257249f06cbec1)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_a3148c98f5e450809be968ec59b743dd)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::operator[];
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_53b7eee2bc38581c9d872c6f7ae99b79)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_6d6ee7b154af57fc928cc6a4cbdb62b6)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::x;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_2b33efb3ffa259babda746dc0c5ebdbe)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::y;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_262a2cdead345f89b51f8b9a0535bb10)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::z;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_afb8e0f1abe15131b391489378e4b8f3)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 > > > class_57c8ab18f56e5a4ea7b995efcfbd6915("_DenseCoeffsBase_57c8ab18f56e5a4ea7b995efcfbd6915", "", boost::python::no_init);
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("coeff_ref", method_pointer_4f421ae118a1562ab4e952c596553d1d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("coeff_ref", autowig::method_decorator_4f421ae118a1562ab4e952c596553d1d);
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("coeff_ref_by_outer_inner", method_pointer_10911bbf1f025da5bc957a957d5e88d7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("coeff_ref_by_outer_inner", autowig::method_decorator_10911bbf1f025da5bc957a957d5e88d7);
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("__call__", method_pointer_cc96b69a4f455abf85cb240b08140c9c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("__call__", autowig::method_decorator_cc96b69a4f455abf85cb240b08140c9c);
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("coeff_ref", method_pointer_aa709da8584d5b128c257249f06cbec1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("coeff_ref", autowig::method_decorator_aa709da8584d5b128c257249f06cbec1);
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("__getitem__", method_pointer_a3148c98f5e450809be968ec59b743dd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("__getitem__", autowig::method_decorator_a3148c98f5e450809be968ec59b743dd);
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("__call__", method_pointer_53b7eee2bc38581c9d872c6f7ae99b79, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("__call__", autowig::method_decorator_53b7eee2bc38581c9d872c6f7ae99b79);
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("x", method_pointer_6d6ee7b154af57fc928cc6a4cbdb62b6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("x", autowig::method_decorator_6d6ee7b154af57fc928cc6a4cbdb62b6);
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("y", method_pointer_2b33efb3ffa259babda746dc0c5ebdbe, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("y", autowig::method_decorator_2b33efb3ffa259babda746dc0c5ebdbe);
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("z", method_pointer_262a2cdead345f89b51f8b9a0535bb10, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("z", autowig::method_decorator_262a2cdead345f89b51f8b9a0535bb10);
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("w", method_pointer_afb8e0f1abe15131b391489378e4b8f3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_57c8ab18f56e5a4ea7b995efcfbd6915.def("w", autowig::method_decorator_afb8e0f1abe15131b391489378e4b8f3);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 > > >();
    }

}