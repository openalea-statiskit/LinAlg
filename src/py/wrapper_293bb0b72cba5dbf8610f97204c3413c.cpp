#include "_ieigen.h"


namespace autowig
{
    void method_decorator_637f450bc2255cf5b6ed7ce01f4c86ba(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_80f0aecdc35d58b4b47102fc81dad6e9(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_293bb0b72cba5dbf8610f97204c3413c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >::*method_pointer_637f450bc2255cf5b6ed7ce01f4c86ba)(class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >::*method_pointer_80f0aecdc35d58b4b47102fc81dad6e9)(class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > > > > class_293bb0b72cba5dbf8610f97204c3413c("_JacobiSVD_293bb0b72cba5dbf8610f97204c3413c", "", boost::python::no_init);
    class_293bb0b72cba5dbf8610f97204c3413c.def("compute", method_pointer_637f450bc2255cf5b6ed7ce01f4c86ba, boost::python::return_internal_reference<>(), "");
    class_293bb0b72cba5dbf8610f97204c3413c.def("compute", autowig::method_decorator_637f450bc2255cf5b6ed7ce01f4c86ba);
    class_293bb0b72cba5dbf8610f97204c3413c.def("compute", method_pointer_80f0aecdc35d58b4b47102fc81dad6e9, boost::python::return_internal_reference<>(), "");
    class_293bb0b72cba5dbf8610f97204c3413c.def("compute", autowig::method_decorator_80f0aecdc35d58b4b47102fc81dad6e9);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > > > >();
    }

}