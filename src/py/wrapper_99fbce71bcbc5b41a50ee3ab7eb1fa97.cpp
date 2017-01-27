#include "_ieigen.h"


namespace autowig
{
    void method_decorator_3e60903974d15affb4874d7036057fd7(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_ebbf1ae8e5d15e1a8da93c7904b10a14(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_99fbce71bcbc5b41a50ee3ab7eb1fa97()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_3e60903974d15affb4874d7036057fd7)(class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_ebbf1ae8e5d15e1a8da93c7904b10a14)(class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > > > > class_99fbce71bcbc5b41a50ee3ab7eb1fa97("_JacobiSVD_99fbce71bcbc5b41a50ee3ab7eb1fa97", "", boost::python::no_init);
    class_99fbce71bcbc5b41a50ee3ab7eb1fa97.def("compute", method_pointer_3e60903974d15affb4874d7036057fd7, boost::python::return_internal_reference<>(), "");
    class_99fbce71bcbc5b41a50ee3ab7eb1fa97.def("compute", autowig::method_decorator_3e60903974d15affb4874d7036057fd7);
    class_99fbce71bcbc5b41a50ee3ab7eb1fa97.def("compute", method_pointer_ebbf1ae8e5d15e1a8da93c7904b10a14, boost::python::return_internal_reference<>(), "");
    class_99fbce71bcbc5b41a50ee3ab7eb1fa97.def("compute", autowig::method_decorator_ebbf1ae8e5d15e1a8da93c7904b10a14);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 > > > >();
    }

}