#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2f9406e1eea25ca59bdd2b3d27500c89(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_0de6024842145b8f864ef0da1f4c82ed(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_2379f98d13935aa6b8678d7d951021e0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_2f9406e1eea25ca59bdd2b3d27500c89)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_91d217d156545a80abc767c71fa451f5)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_0de6024842145b8f864ef0da1f4c82ed)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_687f3751ee0f591da6b1ba424bb32809)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_54607bd43fa75d1d8236863d24c48966)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_b71984bbf70159e693ba534b40f59e60)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_ba0efdd245845ba89d17cddffedbca08)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > > > class_2379f98d13935aa6b8678d7d951021e0("_EigenBase_2379f98d13935aa6b8678d7d951021e0", "", boost::python::no_init);
    class_2379f98d13935aa6b8678d7d951021e0.def("derived", method_pointer_2f9406e1eea25ca59bdd2b3d27500c89, boost::python::return_internal_reference<>(), "");
    class_2379f98d13935aa6b8678d7d951021e0.def("derived", autowig::method_decorator_2f9406e1eea25ca59bdd2b3d27500c89);
    class_2379f98d13935aa6b8678d7d951021e0.def("derived", method_pointer_91d217d156545a80abc767c71fa451f5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2379f98d13935aa6b8678d7d951021e0.def("const_cast_derived", method_pointer_0de6024842145b8f864ef0da1f4c82ed, boost::python::return_internal_reference<>(), "");
    class_2379f98d13935aa6b8678d7d951021e0.def("const_cast_derived", autowig::method_decorator_0de6024842145b8f864ef0da1f4c82ed);
    class_2379f98d13935aa6b8678d7d951021e0.def("const_derived", method_pointer_687f3751ee0f591da6b1ba424bb32809, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2379f98d13935aa6b8678d7d951021e0.def("rows", method_pointer_54607bd43fa75d1d8236863d24c48966, "");
    class_2379f98d13935aa6b8678d7d951021e0.def("cols", method_pointer_b71984bbf70159e693ba534b40f59e60, "");
    class_2379f98d13935aa6b8678d7d951021e0.def("size", method_pointer_ba0efdd245845ba89d17cddffedbca08, "");

}