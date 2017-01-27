#include "_ieigen.h"


namespace autowig
{
    void method_decorator_91ed82ef31c55d96a1c5b152281abfb7(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_88cd62ace2d3519c85e3294dc4b596fe(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_7aea72a2dc1d56e997bf046a624fbe96()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >::*method_pointer_91ed82ef31c55d96a1c5b152281abfb7)(class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >::*method_pointer_88cd62ace2d3519c85e3294dc4b596fe)(class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > > > > class_7aea72a2dc1d56e997bf046a624fbe96("_JacobiSVD_7aea72a2dc1d56e997bf046a624fbe96", "", boost::python::no_init);
    class_7aea72a2dc1d56e997bf046a624fbe96.def("compute", method_pointer_91ed82ef31c55d96a1c5b152281abfb7, boost::python::return_internal_reference<>(), "");
    class_7aea72a2dc1d56e997bf046a624fbe96.def("compute", autowig::method_decorator_91ed82ef31c55d96a1c5b152281abfb7);
    class_7aea72a2dc1d56e997bf046a624fbe96.def("compute", method_pointer_88cd62ace2d3519c85e3294dc4b596fe, boost::python::return_internal_reference<>(), "");
    class_7aea72a2dc1d56e997bf046a624fbe96.def("compute", autowig::method_decorator_88cd62ace2d3519c85e3294dc4b596fe);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 2 > > > >();
    }

}