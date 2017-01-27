#include "_ieigen.h"


namespace autowig
{
    void method_decorator_89a98d5ca1d7557b99b137c879e58587(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_1beba690227a53e8b26eb0d7a1bf9a44(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > const & instance, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_da32049738e05308a9ee0623114e75a8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_89a98d5ca1d7557b99b137c879e58587)() = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::derived;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_37b9a5de2f73550a9ae7fc8f1bc51f6a)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::derived;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_1beba690227a53e8b26eb0d7a1bf9a44)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::const_cast_derived;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_102bf9d51d9c51cbb777bc25a0a501f8)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_c8363221607757cbbefefe4251987669)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_35853b1f6721506da5df87e60f9d2255)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_f9836e914e73506ca4a3e399a68a26c4)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > > > class_da32049738e05308a9ee0623114e75a8("_EigenBase_da32049738e05308a9ee0623114e75a8", "", boost::python::no_init);
    class_da32049738e05308a9ee0623114e75a8.def("derived", method_pointer_89a98d5ca1d7557b99b137c879e58587, boost::python::return_internal_reference<>(), "");
    class_da32049738e05308a9ee0623114e75a8.def("derived", autowig::method_decorator_89a98d5ca1d7557b99b137c879e58587);
    class_da32049738e05308a9ee0623114e75a8.def("derived", method_pointer_37b9a5de2f73550a9ae7fc8f1bc51f6a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_da32049738e05308a9ee0623114e75a8.def("const_cast_derived", method_pointer_1beba690227a53e8b26eb0d7a1bf9a44, boost::python::return_internal_reference<>(), "");
    class_da32049738e05308a9ee0623114e75a8.def("const_cast_derived", autowig::method_decorator_1beba690227a53e8b26eb0d7a1bf9a44);
    class_da32049738e05308a9ee0623114e75a8.def("const_derived", method_pointer_102bf9d51d9c51cbb777bc25a0a501f8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_da32049738e05308a9ee0623114e75a8.def("rows", method_pointer_c8363221607757cbbefefe4251987669, "");
    class_da32049738e05308a9ee0623114e75a8.def("cols", method_pointer_35853b1f6721506da5df87e60f9d2255, "");
    class_da32049738e05308a9ee0623114e75a8.def("size", method_pointer_f9836e914e73506ca4a3e399a68a26c4, "");

}