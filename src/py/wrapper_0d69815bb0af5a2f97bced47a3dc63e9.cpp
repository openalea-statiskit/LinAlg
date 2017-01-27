#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2a734e0a500d5ed18d84a994b541c01b(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_a3b4a35ede145986a7f45be8c91ae20b(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > const & instance, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_0d69815bb0af5a2f97bced47a3dc63e9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_2a734e0a500d5ed18d84a994b541c01b)() = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::derived;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_c6759fda08da59eab0e88565ec335e4a)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::derived;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_a3b4a35ede145986a7f45be8c91ae20b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::const_cast_derived;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_ad2c0e3e108e57b7b9f24a87111de6c6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_afcb379dfa2a55a8becfa3c76b35b3bb)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_d77b3dee38565d7f9f41a2c5e97434fc)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_d760347b24075783a9dccc341e09182c)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > class_0d69815bb0af5a2f97bced47a3dc63e9("_EigenBase_0d69815bb0af5a2f97bced47a3dc63e9", "", boost::python::no_init);
    class_0d69815bb0af5a2f97bced47a3dc63e9.def("derived", method_pointer_2a734e0a500d5ed18d84a994b541c01b, boost::python::return_internal_reference<>(), "");
    class_0d69815bb0af5a2f97bced47a3dc63e9.def("derived", autowig::method_decorator_2a734e0a500d5ed18d84a994b541c01b);
    class_0d69815bb0af5a2f97bced47a3dc63e9.def("derived", method_pointer_c6759fda08da59eab0e88565ec335e4a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0d69815bb0af5a2f97bced47a3dc63e9.def("const_cast_derived", method_pointer_a3b4a35ede145986a7f45be8c91ae20b, boost::python::return_internal_reference<>(), "");
    class_0d69815bb0af5a2f97bced47a3dc63e9.def("const_cast_derived", autowig::method_decorator_a3b4a35ede145986a7f45be8c91ae20b);
    class_0d69815bb0af5a2f97bced47a3dc63e9.def("const_derived", method_pointer_ad2c0e3e108e57b7b9f24a87111de6c6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0d69815bb0af5a2f97bced47a3dc63e9.def("rows", method_pointer_afcb379dfa2a55a8becfa3c76b35b3bb, "");
    class_0d69815bb0af5a2f97bced47a3dc63e9.def("cols", method_pointer_d77b3dee38565d7f9f41a2c5e97434fc, "");
    class_0d69815bb0af5a2f97bced47a3dc63e9.def("size", method_pointer_d760347b24075783a9dccc341e09182c, "");

}