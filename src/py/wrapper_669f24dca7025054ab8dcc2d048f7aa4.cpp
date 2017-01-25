#include "_ieigen.h"


namespace autowig
{
    void method_decorator_422b02c5d64f5dc3b950403e2f64cc6b(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_15f450e71ab756ad9f4e5074e0f7956a(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > const & instance, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_669f24dca7025054ab8dcc2d048f7aa4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_422b02c5d64f5dc3b950403e2f64cc6b)() = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::derived;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_e97fce5a8a53511b861db9152c1d5f6f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::derived;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_15f450e71ab756ad9f4e5074e0f7956a)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_71ab21eb920d593ba302520320dfcb3d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_0096889ebf245679ac6a388c2ce4fdc2)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_ab85fb9891db570ba71d9fa5a1aba0c5)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_a1c364c7c04955d6a62f6eda352e43b8)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > > > class_669f24dca7025054ab8dcc2d048f7aa4("_EigenBase_669f24dca7025054ab8dcc2d048f7aa4", "", boost::python::no_init);
    class_669f24dca7025054ab8dcc2d048f7aa4.def("derived", method_pointer_422b02c5d64f5dc3b950403e2f64cc6b, boost::python::return_internal_reference<>(), "");
    class_669f24dca7025054ab8dcc2d048f7aa4.def("derived", autowig::method_decorator_422b02c5d64f5dc3b950403e2f64cc6b);
    class_669f24dca7025054ab8dcc2d048f7aa4.def("derived", method_pointer_e97fce5a8a53511b861db9152c1d5f6f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_669f24dca7025054ab8dcc2d048f7aa4.def("const_cast_derived", method_pointer_15f450e71ab756ad9f4e5074e0f7956a, boost::python::return_internal_reference<>(), "");
    class_669f24dca7025054ab8dcc2d048f7aa4.def("const_cast_derived", autowig::method_decorator_15f450e71ab756ad9f4e5074e0f7956a);
    class_669f24dca7025054ab8dcc2d048f7aa4.def("const_derived", method_pointer_71ab21eb920d593ba302520320dfcb3d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_669f24dca7025054ab8dcc2d048f7aa4.def("rows", method_pointer_0096889ebf245679ac6a388c2ce4fdc2, "");
    class_669f24dca7025054ab8dcc2d048f7aa4.def("cols", method_pointer_ab85fb9891db570ba71d9fa5a1aba0c5, "");
    class_669f24dca7025054ab8dcc2d048f7aa4.def("size", method_pointer_a1c364c7c04955d6a62f6eda352e43b8, "");

}