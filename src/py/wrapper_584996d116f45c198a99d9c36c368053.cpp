#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b95bc0828d82562f8af9e8521b823dd6(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > & instance, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_bd2f6235ea865fe0b7af10551979a048(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > & instance, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_584996d116f45c198a99d9c36c368053()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >::*method_pointer_b95bc0828d82562f8af9e8521b823dd6)(class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >::*method_pointer_bd2f6235ea865fe0b7af10551979a048)(class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > > > > class_584996d116f45c198a99d9c36c368053("_JacobiSVD_584996d116f45c198a99d9c36c368053", "", boost::python::no_init);
    class_584996d116f45c198a99d9c36c368053.def("compute", method_pointer_b95bc0828d82562f8af9e8521b823dd6, boost::python::return_internal_reference<>(), "");
    class_584996d116f45c198a99d9c36c368053.def("compute", autowig::method_decorator_b95bc0828d82562f8af9e8521b823dd6);
    class_584996d116f45c198a99d9c36c368053.def("compute", method_pointer_bd2f6235ea865fe0b7af10551979a048, boost::python::return_internal_reference<>(), "");
    class_584996d116f45c198a99d9c36c368053.def("compute", autowig::method_decorator_bd2f6235ea865fe0b7af10551979a048);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 2 > > > >();
    }

}