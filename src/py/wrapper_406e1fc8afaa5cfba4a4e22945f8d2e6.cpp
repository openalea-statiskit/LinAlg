#include "_ieigen.h"


namespace autowig
{
    void method_decorator_00ac8ebf7fd95373b939076d46cff2af(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_40ed210eaa3c55f1b9a38a760845b819(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_406e1fc8afaa5cfba4a4e22945f8d2e6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_00ac8ebf7fd95373b939076d46cff2af)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_563f1dc3f75f507d94731f03e65de139)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_40ed210eaa3c55f1b9a38a760845b819)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_92a32cde4ae55148902fc9b31391b848)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_d655d7da4c5c5473b51d111141e8e47f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_8560b68f072f50f1beaaf3be327bd0fe)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_11a736f99fe85aa5b893fef8a53f2388)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > > > class_406e1fc8afaa5cfba4a4e22945f8d2e6("_EigenBase_406e1fc8afaa5cfba4a4e22945f8d2e6", "", boost::python::no_init);
    class_406e1fc8afaa5cfba4a4e22945f8d2e6.def("derived", method_pointer_00ac8ebf7fd95373b939076d46cff2af, boost::python::return_internal_reference<>(), "");
    class_406e1fc8afaa5cfba4a4e22945f8d2e6.def("derived", autowig::method_decorator_00ac8ebf7fd95373b939076d46cff2af);
    class_406e1fc8afaa5cfba4a4e22945f8d2e6.def("derived", method_pointer_563f1dc3f75f507d94731f03e65de139, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_406e1fc8afaa5cfba4a4e22945f8d2e6.def("const_cast_derived", method_pointer_40ed210eaa3c55f1b9a38a760845b819, boost::python::return_internal_reference<>(), "");
    class_406e1fc8afaa5cfba4a4e22945f8d2e6.def("const_cast_derived", autowig::method_decorator_40ed210eaa3c55f1b9a38a760845b819);
    class_406e1fc8afaa5cfba4a4e22945f8d2e6.def("const_derived", method_pointer_92a32cde4ae55148902fc9b31391b848, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_406e1fc8afaa5cfba4a4e22945f8d2e6.def("rows", method_pointer_d655d7da4c5c5473b51d111141e8e47f, "");
    class_406e1fc8afaa5cfba4a4e22945f8d2e6.def("cols", method_pointer_8560b68f072f50f1beaaf3be327bd0fe, "");
    class_406e1fc8afaa5cfba4a4e22945f8d2e6.def("size", method_pointer_11a736f99fe85aa5b893fef8a53f2388, "");

}