#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f2aa4b1e7e3156058b92f50cc88bcdd8(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_84bbf520aa9f56e29e2c21997bf03e71(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_f3971027242f5872a6a35149cb9e865f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_f2aa4b1e7e3156058b92f50cc88bcdd8)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_9b038e377bef577091b1b3ef2aa5d1a6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_84bbf520aa9f56e29e2c21997bf03e71)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_e65a122c76f4551ea800c1bbc72b7ce8)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_aa79550474f35b5d9c1acbe66fbed0da)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_f8a01a7b55a25dfe8bf7ddba47386733)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_29af05caa8755aa4b2653c4215a645ae)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > > > class_f3971027242f5872a6a35149cb9e865f("_EigenBase_f3971027242f5872a6a35149cb9e865f", "", boost::python::no_init);
    class_f3971027242f5872a6a35149cb9e865f.def("derived", method_pointer_f2aa4b1e7e3156058b92f50cc88bcdd8, boost::python::return_internal_reference<>(), "");
    class_f3971027242f5872a6a35149cb9e865f.def("derived", autowig::method_decorator_f2aa4b1e7e3156058b92f50cc88bcdd8);
    class_f3971027242f5872a6a35149cb9e865f.def("derived", method_pointer_9b038e377bef577091b1b3ef2aa5d1a6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f3971027242f5872a6a35149cb9e865f.def("const_cast_derived", method_pointer_84bbf520aa9f56e29e2c21997bf03e71, boost::python::return_internal_reference<>(), "");
    class_f3971027242f5872a6a35149cb9e865f.def("const_cast_derived", autowig::method_decorator_84bbf520aa9f56e29e2c21997bf03e71);
    class_f3971027242f5872a6a35149cb9e865f.def("const_derived", method_pointer_e65a122c76f4551ea800c1bbc72b7ce8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f3971027242f5872a6a35149cb9e865f.def("rows", method_pointer_aa79550474f35b5d9c1acbe66fbed0da, "");
    class_f3971027242f5872a6a35149cb9e865f.def("cols", method_pointer_f8a01a7b55a25dfe8bf7ddba47386733, "");
    class_f3971027242f5872a6a35149cb9e865f.def("size", method_pointer_29af05caa8755aa4b2653c4215a645ae, "");

}