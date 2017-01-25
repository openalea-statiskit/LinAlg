#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b4cfaf0407d353a29e7768538fb47dd7(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_ce65e72333b050c9bdb7a21792654150(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_d145645857f552efb36b399c47763f1c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_b4cfaf0407d353a29e7768538fb47dd7)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_6fcfebdfd2a1522cbbee5af05c923d10)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_ce65e72333b050c9bdb7a21792654150)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_3746dac817c156098bf210250e40085f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_f11e61d1c22750e6b944629ee6d93633)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_c7ccfddb954b50aaa2dc0341aa399573)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_4219f5cbb18253b99728821b491508f7)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > > > class_d145645857f552efb36b399c47763f1c("_EigenBase_d145645857f552efb36b399c47763f1c", "", boost::python::no_init);
    class_d145645857f552efb36b399c47763f1c.def("derived", method_pointer_b4cfaf0407d353a29e7768538fb47dd7, boost::python::return_internal_reference<>(), "");
    class_d145645857f552efb36b399c47763f1c.def("derived", autowig::method_decorator_b4cfaf0407d353a29e7768538fb47dd7);
    class_d145645857f552efb36b399c47763f1c.def("derived", method_pointer_6fcfebdfd2a1522cbbee5af05c923d10, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d145645857f552efb36b399c47763f1c.def("const_cast_derived", method_pointer_ce65e72333b050c9bdb7a21792654150, boost::python::return_internal_reference<>(), "");
    class_d145645857f552efb36b399c47763f1c.def("const_cast_derived", autowig::method_decorator_ce65e72333b050c9bdb7a21792654150);
    class_d145645857f552efb36b399c47763f1c.def("const_derived", method_pointer_3746dac817c156098bf210250e40085f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d145645857f552efb36b399c47763f1c.def("rows", method_pointer_f11e61d1c22750e6b944629ee6d93633, "");
    class_d145645857f552efb36b399c47763f1c.def("cols", method_pointer_c7ccfddb954b50aaa2dc0341aa399573, "");
    class_d145645857f552efb36b399c47763f1c.def("size", method_pointer_4219f5cbb18253b99728821b491508f7, "");

}