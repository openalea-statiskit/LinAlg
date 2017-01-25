#include "_ieigen.h"


namespace autowig
{
    void method_decorator_efe72dd993685d41a93939c8f26a32a2(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_c0a2bffe5fa75c50982d69d8ba0c6596(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > const & instance, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_157a6b1f496b5896bb3b6509d960caa4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_efe72dd993685d41a93939c8f26a32a2)() = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::derived;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_e0cf6390b63551f6977a1243bbf0479d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::derived;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_c0a2bffe5fa75c50982d69d8ba0c6596)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_bf73b4855eff5adaaa9006c1d7a4b24e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_ab0be36aa2a75f23bb6d87d2fa68785d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_a8d979d88ce65b30a2b52c3868ad8bc6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_3ad7be4697735cac956ae0d4b04a551a)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > > > class_157a6b1f496b5896bb3b6509d960caa4("_EigenBase_157a6b1f496b5896bb3b6509d960caa4", "", boost::python::no_init);
    class_157a6b1f496b5896bb3b6509d960caa4.def("derived", method_pointer_efe72dd993685d41a93939c8f26a32a2, boost::python::return_internal_reference<>(), "");
    class_157a6b1f496b5896bb3b6509d960caa4.def("derived", autowig::method_decorator_efe72dd993685d41a93939c8f26a32a2);
    class_157a6b1f496b5896bb3b6509d960caa4.def("derived", method_pointer_e0cf6390b63551f6977a1243bbf0479d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_157a6b1f496b5896bb3b6509d960caa4.def("const_cast_derived", method_pointer_c0a2bffe5fa75c50982d69d8ba0c6596, boost::python::return_internal_reference<>(), "");
    class_157a6b1f496b5896bb3b6509d960caa4.def("const_cast_derived", autowig::method_decorator_c0a2bffe5fa75c50982d69d8ba0c6596);
    class_157a6b1f496b5896bb3b6509d960caa4.def("const_derived", method_pointer_bf73b4855eff5adaaa9006c1d7a4b24e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_157a6b1f496b5896bb3b6509d960caa4.def("rows", method_pointer_ab0be36aa2a75f23bb6d87d2fa68785d, "");
    class_157a6b1f496b5896bb3b6509d960caa4.def("cols", method_pointer_a8d979d88ce65b30a2b52c3868ad8bc6, "");
    class_157a6b1f496b5896bb3b6509d960caa4.def("size", method_pointer_3ad7be4697735cac956ae0d4b04a551a, "");

}