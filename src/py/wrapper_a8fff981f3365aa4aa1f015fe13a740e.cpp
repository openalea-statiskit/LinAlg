#include "_ieigen.h"


namespace autowig
{
    void method_decorator_fb3b5e42385753ab9528659e0f70e7de(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_90665708cd9155e382b55bc40b62cb9c(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_a8fff981f3365aa4aa1f015fe13a740e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_fb3b5e42385753ab9528659e0f70e7de)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_fb3e8d43c39956aca75dff61f0e93815)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_90665708cd9155e382b55bc40b62cb9c)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_2e30020965265545a1c8bc2f7aaae740)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_59dfb483bc9451d38da36bc455207087)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_bfb7024b347b5775bb5a49ceb47434e4)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_7e42f73d300a5a8a8964d914c6cdb700)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > > > class_a8fff981f3365aa4aa1f015fe13a740e("_EigenBase_a8fff981f3365aa4aa1f015fe13a740e", "", boost::python::no_init);
    class_a8fff981f3365aa4aa1f015fe13a740e.def("derived", method_pointer_fb3b5e42385753ab9528659e0f70e7de, boost::python::return_internal_reference<>(), "");
    class_a8fff981f3365aa4aa1f015fe13a740e.def("derived", autowig::method_decorator_fb3b5e42385753ab9528659e0f70e7de);
    class_a8fff981f3365aa4aa1f015fe13a740e.def("derived", method_pointer_fb3e8d43c39956aca75dff61f0e93815, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a8fff981f3365aa4aa1f015fe13a740e.def("const_cast_derived", method_pointer_90665708cd9155e382b55bc40b62cb9c, boost::python::return_internal_reference<>(), "");
    class_a8fff981f3365aa4aa1f015fe13a740e.def("const_cast_derived", autowig::method_decorator_90665708cd9155e382b55bc40b62cb9c);
    class_a8fff981f3365aa4aa1f015fe13a740e.def("const_derived", method_pointer_2e30020965265545a1c8bc2f7aaae740, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a8fff981f3365aa4aa1f015fe13a740e.def("rows", method_pointer_59dfb483bc9451d38da36bc455207087, "");
    class_a8fff981f3365aa4aa1f015fe13a740e.def("cols", method_pointer_bfb7024b347b5775bb5a49ceb47434e4, "");
    class_a8fff981f3365aa4aa1f015fe13a740e.def("size", method_pointer_7e42f73d300a5a8a8964d914c6cdb700, "");

}