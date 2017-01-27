#include "_ieigen.h"


namespace autowig
{
    void method_decorator_370d37b46b295b46b85726d78373e50e(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_45f91e621cba5e189a62e01c0056524f(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > const & instance, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_0078d4763ca35b18b7300c7fb3f8158a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_370d37b46b295b46b85726d78373e50e)() = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::derived;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_75f9ee17e7405783891e4f4f2b863f63)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::derived;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_45f91e621cba5e189a62e01c0056524f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_0f0d0e2eaa3b51ba95a993f5e73bd377)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_eeef4b26c9fc551a990bcee8b8ad744f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_fdb3b169bd375c2890ed97668f18c4ba)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_1b3759fd37265f3bbd7e18abe106a743)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > > > class_0078d4763ca35b18b7300c7fb3f8158a("_EigenBase_0078d4763ca35b18b7300c7fb3f8158a", "", boost::python::no_init);
    class_0078d4763ca35b18b7300c7fb3f8158a.def("derived", method_pointer_370d37b46b295b46b85726d78373e50e, boost::python::return_internal_reference<>(), "");
    class_0078d4763ca35b18b7300c7fb3f8158a.def("derived", autowig::method_decorator_370d37b46b295b46b85726d78373e50e);
    class_0078d4763ca35b18b7300c7fb3f8158a.def("derived", method_pointer_75f9ee17e7405783891e4f4f2b863f63, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0078d4763ca35b18b7300c7fb3f8158a.def("const_cast_derived", method_pointer_45f91e621cba5e189a62e01c0056524f, boost::python::return_internal_reference<>(), "");
    class_0078d4763ca35b18b7300c7fb3f8158a.def("const_cast_derived", autowig::method_decorator_45f91e621cba5e189a62e01c0056524f);
    class_0078d4763ca35b18b7300c7fb3f8158a.def("const_derived", method_pointer_0f0d0e2eaa3b51ba95a993f5e73bd377, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0078d4763ca35b18b7300c7fb3f8158a.def("rows", method_pointer_eeef4b26c9fc551a990bcee8b8ad744f, "");
    class_0078d4763ca35b18b7300c7fb3f8158a.def("cols", method_pointer_fdb3b169bd375c2890ed97668f18c4ba, "");
    class_0078d4763ca35b18b7300c7fb3f8158a.def("size", method_pointer_1b3759fd37265f3bbd7e18abe106a743, "");

}