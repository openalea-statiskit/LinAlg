#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c5015d814c2a53d086459f3f35812574(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_65c7b29cbc8b5e85b44c08dda5463b59(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > const & instance, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_f5655c6d2ead5f6f8dc3219dc9d54b15()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_c5015d814c2a53d086459f3f35812574)() = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::derived;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_abdd2baabada59c791e3a2701135f8e3)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::derived;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_65c7b29cbc8b5e85b44c08dda5463b59)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::const_cast_derived;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_f533b73638fc5d84a151acd149689b82)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_7fa47c67963f58078dcacbcb402cdeb8)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_f210235b4050548fad047350dfa83847)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_757c27bb3be558e987b8f8c74fe53533)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > > > class_f5655c6d2ead5f6f8dc3219dc9d54b15("_EigenBase_f5655c6d2ead5f6f8dc3219dc9d54b15", "", boost::python::no_init);
    class_f5655c6d2ead5f6f8dc3219dc9d54b15.def("derived", method_pointer_c5015d814c2a53d086459f3f35812574, boost::python::return_internal_reference<>(), "");
    class_f5655c6d2ead5f6f8dc3219dc9d54b15.def("derived", autowig::method_decorator_c5015d814c2a53d086459f3f35812574);
    class_f5655c6d2ead5f6f8dc3219dc9d54b15.def("derived", method_pointer_abdd2baabada59c791e3a2701135f8e3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f5655c6d2ead5f6f8dc3219dc9d54b15.def("const_cast_derived", method_pointer_65c7b29cbc8b5e85b44c08dda5463b59, boost::python::return_internal_reference<>(), "");
    class_f5655c6d2ead5f6f8dc3219dc9d54b15.def("const_cast_derived", autowig::method_decorator_65c7b29cbc8b5e85b44c08dda5463b59);
    class_f5655c6d2ead5f6f8dc3219dc9d54b15.def("const_derived", method_pointer_f533b73638fc5d84a151acd149689b82, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f5655c6d2ead5f6f8dc3219dc9d54b15.def("rows", method_pointer_7fa47c67963f58078dcacbcb402cdeb8, "");
    class_f5655c6d2ead5f6f8dc3219dc9d54b15.def("cols", method_pointer_f210235b4050548fad047350dfa83847, "");
    class_f5655c6d2ead5f6f8dc3219dc9d54b15.def("size", method_pointer_757c27bb3be558e987b8f8c74fe53533, "");

}