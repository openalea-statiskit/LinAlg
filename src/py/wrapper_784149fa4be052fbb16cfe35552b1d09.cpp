#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2bba7bb8ac8c59e2947c85067c83269b(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_ae287addc12958afbb382026c32e5192(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > const & instance, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_784149fa4be052fbb16cfe35552b1d09()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_2bba7bb8ac8c59e2947c85067c83269b)() = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::derived;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_d0bf4abb1d9c5e0dbfc4918de422b043)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::derived;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_ae287addc12958afbb382026c32e5192)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_b8caf8ac2f9f5f8e990908fdfc91a0a6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_16eedd1980da5baa8c50d1c97d724064)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_bd3ad8734e38535b8ac045923d615907)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_9e3944916dac56a0a315b73f3a556870)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > > > class_784149fa4be052fbb16cfe35552b1d09("_EigenBase_784149fa4be052fbb16cfe35552b1d09", "", boost::python::no_init);
    class_784149fa4be052fbb16cfe35552b1d09.def("derived", method_pointer_2bba7bb8ac8c59e2947c85067c83269b, boost::python::return_internal_reference<>(), "");
    class_784149fa4be052fbb16cfe35552b1d09.def("derived", autowig::method_decorator_2bba7bb8ac8c59e2947c85067c83269b);
    class_784149fa4be052fbb16cfe35552b1d09.def("derived", method_pointer_d0bf4abb1d9c5e0dbfc4918de422b043, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_784149fa4be052fbb16cfe35552b1d09.def("const_cast_derived", method_pointer_ae287addc12958afbb382026c32e5192, boost::python::return_internal_reference<>(), "");
    class_784149fa4be052fbb16cfe35552b1d09.def("const_cast_derived", autowig::method_decorator_ae287addc12958afbb382026c32e5192);
    class_784149fa4be052fbb16cfe35552b1d09.def("const_derived", method_pointer_b8caf8ac2f9f5f8e990908fdfc91a0a6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_784149fa4be052fbb16cfe35552b1d09.def("rows", method_pointer_16eedd1980da5baa8c50d1c97d724064, "");
    class_784149fa4be052fbb16cfe35552b1d09.def("cols", method_pointer_bd3ad8734e38535b8ac045923d615907, "");
    class_784149fa4be052fbb16cfe35552b1d09.def("size", method_pointer_9e3944916dac56a0a315b73f3a556870, "");

}