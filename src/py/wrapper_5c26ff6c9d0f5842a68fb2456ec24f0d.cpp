#include "_ieigen.h"


namespace autowig
{
    void method_decorator_18beec3de20f57859d82c0048c35c6cf(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > & instance, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_bd76fd41988c59dba6cd52a38b8b3a90(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > & instance, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_5c26ff6c9d0f5842a68fb2456ec24f0d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >::*method_pointer_18beec3de20f57859d82c0048c35c6cf)(class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >::*method_pointer_bd76fd41988c59dba6cd52a38b8b3a90)(class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > > > > class_5c26ff6c9d0f5842a68fb2456ec24f0d("_JacobiSVD_5c26ff6c9d0f5842a68fb2456ec24f0d", "", boost::python::no_init);
    class_5c26ff6c9d0f5842a68fb2456ec24f0d.def("compute", method_pointer_18beec3de20f57859d82c0048c35c6cf, boost::python::return_internal_reference<>(), "");
    class_5c26ff6c9d0f5842a68fb2456ec24f0d.def("compute", autowig::method_decorator_18beec3de20f57859d82c0048c35c6cf);
    class_5c26ff6c9d0f5842a68fb2456ec24f0d.def("compute", method_pointer_bd76fd41988c59dba6cd52a38b8b3a90, boost::python::return_internal_reference<>(), "");
    class_5c26ff6c9d0f5842a68fb2456ec24f0d.def("compute", autowig::method_decorator_bd76fd41988c59dba6cd52a38b8b3a90);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 2 > > > >();
    }

}