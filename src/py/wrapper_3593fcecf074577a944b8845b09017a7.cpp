#include "_ieigen.h"


namespace autowig
{
    void method_decorator_93f49b1f2e3c57d0bf43b8d7527775aa(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_12cfd3e67f605ac2820fc4cd32d4f914(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > const & instance, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_3593fcecf074577a944b8845b09017a7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_93f49b1f2e3c57d0bf43b8d7527775aa)() = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::derived;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_1c1a072828825779947c159293688bd5)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::derived;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_12cfd3e67f605ac2820fc4cd32d4f914)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::const_cast_derived;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_dc9eb241d28b5452aacbe8f154e26e91)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_71dd38297f215208b9ecbc7dbc858212)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_7c141b6e972058f1a5753214419dd0df)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_3f57f3ab85345d7682fff8b9fe11d11f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > > > class_3593fcecf074577a944b8845b09017a7("_EigenBase_3593fcecf074577a944b8845b09017a7", "", boost::python::no_init);
    class_3593fcecf074577a944b8845b09017a7.def("derived", method_pointer_93f49b1f2e3c57d0bf43b8d7527775aa, boost::python::return_internal_reference<>(), "");
    class_3593fcecf074577a944b8845b09017a7.def("derived", autowig::method_decorator_93f49b1f2e3c57d0bf43b8d7527775aa);
    class_3593fcecf074577a944b8845b09017a7.def("derived", method_pointer_1c1a072828825779947c159293688bd5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3593fcecf074577a944b8845b09017a7.def("const_cast_derived", method_pointer_12cfd3e67f605ac2820fc4cd32d4f914, boost::python::return_internal_reference<>(), "");
    class_3593fcecf074577a944b8845b09017a7.def("const_cast_derived", autowig::method_decorator_12cfd3e67f605ac2820fc4cd32d4f914);
    class_3593fcecf074577a944b8845b09017a7.def("const_derived", method_pointer_dc9eb241d28b5452aacbe8f154e26e91, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3593fcecf074577a944b8845b09017a7.def("rows", method_pointer_71dd38297f215208b9ecbc7dbc858212, "");
    class_3593fcecf074577a944b8845b09017a7.def("cols", method_pointer_7c141b6e972058f1a5753214419dd0df, "");
    class_3593fcecf074577a944b8845b09017a7.def("size", method_pointer_3f57f3ab85345d7682fff8b9fe11d11f, "");

}