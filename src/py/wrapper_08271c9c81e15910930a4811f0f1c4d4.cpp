#include "_ieigen.h"


namespace autowig
{
    void method_decorator_5bc0123cffce522d907412d184441710(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > & instance, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_e75915483aab561b81bff244a183ad93(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > & instance, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_08271c9c81e15910930a4811f0f1c4d4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_5bc0123cffce522d907412d184441710)(class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_e75915483aab561b81bff244a183ad93)(class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > > > > class_08271c9c81e15910930a4811f0f1c4d4("_JacobiSVD_08271c9c81e15910930a4811f0f1c4d4", "", boost::python::no_init);
    class_08271c9c81e15910930a4811f0f1c4d4.def("compute", method_pointer_5bc0123cffce522d907412d184441710, boost::python::return_internal_reference<>(), "");
    class_08271c9c81e15910930a4811f0f1c4d4.def("compute", autowig::method_decorator_5bc0123cffce522d907412d184441710);
    class_08271c9c81e15910930a4811f0f1c4d4.def("compute", method_pointer_e75915483aab561b81bff244a183ad93, boost::python::return_internal_reference<>(), "");
    class_08271c9c81e15910930a4811f0f1c4d4.def("compute", autowig::method_decorator_e75915483aab561b81bff244a183ad93);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 2 > > > >();
    }

}