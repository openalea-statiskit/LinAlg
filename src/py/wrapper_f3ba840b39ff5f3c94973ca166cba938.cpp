#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ef10b9e2b9a5589f875b606ce22da463(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_ae6395158a42517eaab3fafeb3ff9c6a(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > const & instance, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_f3ba840b39ff5f3c94973ca166cba938()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_ef10b9e2b9a5589f875b606ce22da463)() = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::derived;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_f3e9d6fc0cdb5ff6910f49e32a662132)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::derived;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_ae6395158a42517eaab3fafeb3ff9c6a)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::const_cast_derived;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_1526979e4d195bb98114abe3bdd498f5)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_bbf700973d6c5c09a7f48fc309325327)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_1cc247e889d753f1b9c0a0aa0b78d078)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_7a499291d74a5292a05770b674d0657b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > class_f3ba840b39ff5f3c94973ca166cba938("_EigenBase_f3ba840b39ff5f3c94973ca166cba938", "", boost::python::no_init);
    class_f3ba840b39ff5f3c94973ca166cba938.def("derived", method_pointer_ef10b9e2b9a5589f875b606ce22da463, boost::python::return_internal_reference<>(), "");
    class_f3ba840b39ff5f3c94973ca166cba938.def("derived", autowig::method_decorator_ef10b9e2b9a5589f875b606ce22da463);
    class_f3ba840b39ff5f3c94973ca166cba938.def("derived", method_pointer_f3e9d6fc0cdb5ff6910f49e32a662132, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f3ba840b39ff5f3c94973ca166cba938.def("const_cast_derived", method_pointer_ae6395158a42517eaab3fafeb3ff9c6a, boost::python::return_internal_reference<>(), "");
    class_f3ba840b39ff5f3c94973ca166cba938.def("const_cast_derived", autowig::method_decorator_ae6395158a42517eaab3fafeb3ff9c6a);
    class_f3ba840b39ff5f3c94973ca166cba938.def("const_derived", method_pointer_1526979e4d195bb98114abe3bdd498f5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f3ba840b39ff5f3c94973ca166cba938.def("rows", method_pointer_bbf700973d6c5c09a7f48fc309325327, "");
    class_f3ba840b39ff5f3c94973ca166cba938.def("cols", method_pointer_1cc247e889d753f1b9c0a0aa0b78d078, "");
    class_f3ba840b39ff5f3c94973ca166cba938.def("size", method_pointer_7a499291d74a5292a05770b674d0657b, "");

}