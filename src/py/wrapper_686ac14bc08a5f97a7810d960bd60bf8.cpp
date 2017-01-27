#include "_ieigen.h"


namespace autowig
{
    void method_decorator_256ae9ff267157ce8c9282a40e116f89(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_b89cc28cb256560b9b74e1627b015934(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > const & instance, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_686ac14bc08a5f97a7810d960bd60bf8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_256ae9ff267157ce8c9282a40e116f89)() = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::derived;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_1673287b4a5c50d2b41d4ad1d4670842)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::derived;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_b89cc28cb256560b9b74e1627b015934)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::const_cast_derived;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_ee129d87dcba560b84580243eb16873c)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_b4dda220570a554780bcc645e2ad3e07)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_c08627d21163574e97e63207baab3ca1)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_96d63827476f5a71b10698cac026b836)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > > > class_686ac14bc08a5f97a7810d960bd60bf8("_EigenBase_686ac14bc08a5f97a7810d960bd60bf8", "", boost::python::no_init);
    class_686ac14bc08a5f97a7810d960bd60bf8.def("derived", method_pointer_256ae9ff267157ce8c9282a40e116f89, boost::python::return_internal_reference<>(), "");
    class_686ac14bc08a5f97a7810d960bd60bf8.def("derived", autowig::method_decorator_256ae9ff267157ce8c9282a40e116f89);
    class_686ac14bc08a5f97a7810d960bd60bf8.def("derived", method_pointer_1673287b4a5c50d2b41d4ad1d4670842, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_686ac14bc08a5f97a7810d960bd60bf8.def("const_cast_derived", method_pointer_b89cc28cb256560b9b74e1627b015934, boost::python::return_internal_reference<>(), "");
    class_686ac14bc08a5f97a7810d960bd60bf8.def("const_cast_derived", autowig::method_decorator_b89cc28cb256560b9b74e1627b015934);
    class_686ac14bc08a5f97a7810d960bd60bf8.def("const_derived", method_pointer_ee129d87dcba560b84580243eb16873c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_686ac14bc08a5f97a7810d960bd60bf8.def("rows", method_pointer_b4dda220570a554780bcc645e2ad3e07, "");
    class_686ac14bc08a5f97a7810d960bd60bf8.def("cols", method_pointer_c08627d21163574e97e63207baab3ca1, "");
    class_686ac14bc08a5f97a7810d960bd60bf8.def("size", method_pointer_96d63827476f5a71b10698cac026b836, "");

}