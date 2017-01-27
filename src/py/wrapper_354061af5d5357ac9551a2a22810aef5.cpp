#include "_ieigen.h"


namespace autowig
{
    void method_decorator_0723a178b4f25b2dbbc32dbfafee3b0a(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > & instance, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_491259a3770251e1bc96ab4c4a0df7da(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > & instance, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_354061af5d5357ac9551a2a22810aef5()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >::*method_pointer_0723a178b4f25b2dbbc32dbfafee3b0a)(class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >::*method_pointer_491259a3770251e1bc96ab4c4a0df7da)(class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > > > > class_354061af5d5357ac9551a2a22810aef5("_JacobiSVD_354061af5d5357ac9551a2a22810aef5", "", boost::python::no_init);
    class_354061af5d5357ac9551a2a22810aef5.def("compute", method_pointer_0723a178b4f25b2dbbc32dbfafee3b0a, boost::python::return_internal_reference<>(), "");
    class_354061af5d5357ac9551a2a22810aef5.def("compute", autowig::method_decorator_0723a178b4f25b2dbbc32dbfafee3b0a);
    class_354061af5d5357ac9551a2a22810aef5.def("compute", method_pointer_491259a3770251e1bc96ab4c4a0df7da, boost::python::return_internal_reference<>(), "");
    class_354061af5d5357ac9551a2a22810aef5.def("compute", autowig::method_decorator_491259a3770251e1bc96ab4c4a0df7da);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 > > > >();
    }

}