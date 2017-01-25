#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2ac28ed486c3546ea2049abbff6b7795(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_4d385f682c155a2a90126d36366b938d(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > const & instance, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_1da5d44a35ca56e39435239271232201()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_2ac28ed486c3546ea2049abbff6b7795)() = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::derived;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_723e6721778f5dd486568e003d1971bb)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::derived;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_4d385f682c155a2a90126d36366b938d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::const_cast_derived;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_7c7052e8578b5f768ac80026e861e1f3)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_7a17350975665ef295e87bc3a1dd1231)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_4e4a05b63baf51bfbb3382fa47618e8c)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_ceadfe764827515385ea6a773f99b872)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > > > class_1da5d44a35ca56e39435239271232201("_EigenBase_1da5d44a35ca56e39435239271232201", "", boost::python::no_init);
    class_1da5d44a35ca56e39435239271232201.def("derived", method_pointer_2ac28ed486c3546ea2049abbff6b7795, boost::python::return_internal_reference<>(), "");
    class_1da5d44a35ca56e39435239271232201.def("derived", autowig::method_decorator_2ac28ed486c3546ea2049abbff6b7795);
    class_1da5d44a35ca56e39435239271232201.def("derived", method_pointer_723e6721778f5dd486568e003d1971bb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1da5d44a35ca56e39435239271232201.def("const_cast_derived", method_pointer_4d385f682c155a2a90126d36366b938d, boost::python::return_internal_reference<>(), "");
    class_1da5d44a35ca56e39435239271232201.def("const_cast_derived", autowig::method_decorator_4d385f682c155a2a90126d36366b938d);
    class_1da5d44a35ca56e39435239271232201.def("const_derived", method_pointer_7c7052e8578b5f768ac80026e861e1f3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1da5d44a35ca56e39435239271232201.def("rows", method_pointer_7a17350975665ef295e87bc3a1dd1231, "");
    class_1da5d44a35ca56e39435239271232201.def("cols", method_pointer_4e4a05b63baf51bfbb3382fa47618e8c, "");
    class_1da5d44a35ca56e39435239271232201.def("size", method_pointer_ceadfe764827515385ea6a773f99b872, "");

}