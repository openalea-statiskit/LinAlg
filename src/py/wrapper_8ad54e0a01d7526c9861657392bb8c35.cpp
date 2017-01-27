#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e5e3b765683e584a86d83a4458c6642b(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_5336fc10f07551ff8c957d2b1c694136(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > const & instance, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_8ad54e0a01d7526c9861657392bb8c35()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_e5e3b765683e584a86d83a4458c6642b)() = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::derived;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_43829914b6de505992112247520912fe)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::derived;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_5336fc10f07551ff8c957d2b1c694136)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::const_cast_derived;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_8bc0a5978f1a56d8869a76a074c9112c)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_8321239855ff58cfaf79b19c6af38044)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_0023db14a4a65c30a7ad2ddaa1545762)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_4ff739d271715c6ca23fc77762883a86)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > > > class_8ad54e0a01d7526c9861657392bb8c35("_EigenBase_8ad54e0a01d7526c9861657392bb8c35", "", boost::python::no_init);
    class_8ad54e0a01d7526c9861657392bb8c35.def("derived", method_pointer_e5e3b765683e584a86d83a4458c6642b, boost::python::return_internal_reference<>(), "");
    class_8ad54e0a01d7526c9861657392bb8c35.def("derived", autowig::method_decorator_e5e3b765683e584a86d83a4458c6642b);
    class_8ad54e0a01d7526c9861657392bb8c35.def("derived", method_pointer_43829914b6de505992112247520912fe, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8ad54e0a01d7526c9861657392bb8c35.def("const_cast_derived", method_pointer_5336fc10f07551ff8c957d2b1c694136, boost::python::return_internal_reference<>(), "");
    class_8ad54e0a01d7526c9861657392bb8c35.def("const_cast_derived", autowig::method_decorator_5336fc10f07551ff8c957d2b1c694136);
    class_8ad54e0a01d7526c9861657392bb8c35.def("const_derived", method_pointer_8bc0a5978f1a56d8869a76a074c9112c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8ad54e0a01d7526c9861657392bb8c35.def("rows", method_pointer_8321239855ff58cfaf79b19c6af38044, "");
    class_8ad54e0a01d7526c9861657392bb8c35.def("cols", method_pointer_0023db14a4a65c30a7ad2ddaa1545762, "");
    class_8ad54e0a01d7526c9861657392bb8c35.def("size", method_pointer_4ff739d271715c6ca23fc77762883a86, "");

}