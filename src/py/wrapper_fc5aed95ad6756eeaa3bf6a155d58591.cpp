#include "_ieigen.h"


namespace autowig
{
    void method_decorator_389da244494054999392be6d6d2751b8(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_23be30daf6615a95b0b106330647fbd0(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_fc5aed95ad6756eeaa3bf6a155d58591()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >::*method_pointer_389da244494054999392be6d6d2751b8)(class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >::*method_pointer_23be30daf6615a95b0b106330647fbd0)(class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > > > > class_fc5aed95ad6756eeaa3bf6a155d58591("_JacobiSVD_fc5aed95ad6756eeaa3bf6a155d58591", "", boost::python::no_init);
    class_fc5aed95ad6756eeaa3bf6a155d58591.def("compute", method_pointer_389da244494054999392be6d6d2751b8, boost::python::return_internal_reference<>(), "");
    class_fc5aed95ad6756eeaa3bf6a155d58591.def("compute", autowig::method_decorator_389da244494054999392be6d6d2751b8);
    class_fc5aed95ad6756eeaa3bf6a155d58591.def("compute", method_pointer_23be30daf6615a95b0b106330647fbd0, boost::python::return_internal_reference<>(), "");
    class_fc5aed95ad6756eeaa3bf6a155d58591.def("compute", autowig::method_decorator_23be30daf6615a95b0b106330647fbd0);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 2 > > > >();
    }

}