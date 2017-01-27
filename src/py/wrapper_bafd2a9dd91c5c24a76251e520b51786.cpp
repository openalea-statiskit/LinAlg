#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b24a623518615e698d8e392f48ee79a5(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_564155b656115b17bbb6ccb041960ccb(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > const & instance, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_bafd2a9dd91c5c24a76251e520b51786()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_b24a623518615e698d8e392f48ee79a5)() = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::derived;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_72530ddae2b654a48075cd77444b0fdf)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::derived;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_564155b656115b17bbb6ccb041960ccb)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::const_cast_derived;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_32c7f4432bf6539b94bc7812d7f70a02)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_d4b2767fb8245bd9ba1845009119caa2)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_4d5d67bc9ed8506f8b25e6e5f2e30cc7)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_79788649ebfe50bdab8aa4f27bd9bf4e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > > > class_bafd2a9dd91c5c24a76251e520b51786("_EigenBase_bafd2a9dd91c5c24a76251e520b51786", "", boost::python::no_init);
    class_bafd2a9dd91c5c24a76251e520b51786.def("derived", method_pointer_b24a623518615e698d8e392f48ee79a5, boost::python::return_internal_reference<>(), "");
    class_bafd2a9dd91c5c24a76251e520b51786.def("derived", autowig::method_decorator_b24a623518615e698d8e392f48ee79a5);
    class_bafd2a9dd91c5c24a76251e520b51786.def("derived", method_pointer_72530ddae2b654a48075cd77444b0fdf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bafd2a9dd91c5c24a76251e520b51786.def("const_cast_derived", method_pointer_564155b656115b17bbb6ccb041960ccb, boost::python::return_internal_reference<>(), "");
    class_bafd2a9dd91c5c24a76251e520b51786.def("const_cast_derived", autowig::method_decorator_564155b656115b17bbb6ccb041960ccb);
    class_bafd2a9dd91c5c24a76251e520b51786.def("const_derived", method_pointer_32c7f4432bf6539b94bc7812d7f70a02, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bafd2a9dd91c5c24a76251e520b51786.def("rows", method_pointer_d4b2767fb8245bd9ba1845009119caa2, "");
    class_bafd2a9dd91c5c24a76251e520b51786.def("cols", method_pointer_4d5d67bc9ed8506f8b25e6e5f2e30cc7, "");
    class_bafd2a9dd91c5c24a76251e520b51786.def("size", method_pointer_79788649ebfe50bdab8aa4f27bd9bf4e, "");

}