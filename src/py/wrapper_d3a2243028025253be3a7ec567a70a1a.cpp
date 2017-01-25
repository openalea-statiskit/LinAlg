#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c2d8c09e95db543a80afece1f3d323e4(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_ac1f6c84189956ac8bb4c5175180aaac(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > const & instance, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_d3a2243028025253be3a7ec567a70a1a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_c2d8c09e95db543a80afece1f3d323e4)() = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::derived;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_54c7f6f5ac26571783c76730846f0111)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::derived;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_ac1f6c84189956ac8bb4c5175180aaac)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::const_cast_derived;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_1f5f32295e5c57699be0e85f63dd7f2e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_6f4fbc3c3fa25b90a513d5fbf841f32d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_fec37440873859f2863d6054607cc11d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_595490df07ce58d0bf3f9a9b85238ff7)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > > > class_d3a2243028025253be3a7ec567a70a1a("_EigenBase_d3a2243028025253be3a7ec567a70a1a", "", boost::python::no_init);
    class_d3a2243028025253be3a7ec567a70a1a.def("derived", method_pointer_c2d8c09e95db543a80afece1f3d323e4, boost::python::return_internal_reference<>(), "");
    class_d3a2243028025253be3a7ec567a70a1a.def("derived", autowig::method_decorator_c2d8c09e95db543a80afece1f3d323e4);
    class_d3a2243028025253be3a7ec567a70a1a.def("derived", method_pointer_54c7f6f5ac26571783c76730846f0111, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d3a2243028025253be3a7ec567a70a1a.def("const_cast_derived", method_pointer_ac1f6c84189956ac8bb4c5175180aaac, boost::python::return_internal_reference<>(), "");
    class_d3a2243028025253be3a7ec567a70a1a.def("const_cast_derived", autowig::method_decorator_ac1f6c84189956ac8bb4c5175180aaac);
    class_d3a2243028025253be3a7ec567a70a1a.def("const_derived", method_pointer_1f5f32295e5c57699be0e85f63dd7f2e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d3a2243028025253be3a7ec567a70a1a.def("rows", method_pointer_6f4fbc3c3fa25b90a513d5fbf841f32d, "");
    class_d3a2243028025253be3a7ec567a70a1a.def("cols", method_pointer_fec37440873859f2863d6054607cc11d, "");
    class_d3a2243028025253be3a7ec567a70a1a.def("size", method_pointer_595490df07ce58d0bf3f9a9b85238ff7, "");

}