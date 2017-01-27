#include "_ieigen.h"


namespace autowig
{
    void method_decorator_83b74450a76c582db35d6a0f6b8c0ad0(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_9eedb5be91f25a96b7b1b2b6384c4802(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > const & instance, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_752672c63add5500b608039b1ffdb972()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_83b74450a76c582db35d6a0f6b8c0ad0)() = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::derived;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_3c29f66d9e6a50069e80331b3fedd9e8)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::derived;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_9eedb5be91f25a96b7b1b2b6384c4802)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_b47f2cef6171535e9427affc1278991b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_bbb8d3d4c79e543e92099fd813976251)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_0da74a25594459e3877577d25b428d3e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_04d62a8c300c5793ac5ad30d89727631)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > > > class_752672c63add5500b608039b1ffdb972("_EigenBase_752672c63add5500b608039b1ffdb972", "", boost::python::no_init);
    class_752672c63add5500b608039b1ffdb972.def("derived", method_pointer_83b74450a76c582db35d6a0f6b8c0ad0, boost::python::return_internal_reference<>(), "");
    class_752672c63add5500b608039b1ffdb972.def("derived", autowig::method_decorator_83b74450a76c582db35d6a0f6b8c0ad0);
    class_752672c63add5500b608039b1ffdb972.def("derived", method_pointer_3c29f66d9e6a50069e80331b3fedd9e8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_752672c63add5500b608039b1ffdb972.def("const_cast_derived", method_pointer_9eedb5be91f25a96b7b1b2b6384c4802, boost::python::return_internal_reference<>(), "");
    class_752672c63add5500b608039b1ffdb972.def("const_cast_derived", autowig::method_decorator_9eedb5be91f25a96b7b1b2b6384c4802);
    class_752672c63add5500b608039b1ffdb972.def("const_derived", method_pointer_b47f2cef6171535e9427affc1278991b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_752672c63add5500b608039b1ffdb972.def("rows", method_pointer_bbb8d3d4c79e543e92099fd813976251, "");
    class_752672c63add5500b608039b1ffdb972.def("cols", method_pointer_0da74a25594459e3877577d25b428d3e, "");
    class_752672c63add5500b608039b1ffdb972.def("size", method_pointer_04d62a8c300c5793ac5ad30d89727631, "");

}