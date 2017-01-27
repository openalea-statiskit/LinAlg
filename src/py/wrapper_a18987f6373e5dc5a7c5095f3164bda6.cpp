#include "_ieigen.h"


namespace autowig
{
    void method_decorator_3acdef046bb05901817a2153a090a585(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_d6bca8bfadfa59918ad43c89cab63f80(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > const & instance, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_a18987f6373e5dc5a7c5095f3164bda6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_3acdef046bb05901817a2153a090a585)() = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::derived;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_f55a6f0c0376519680b4dfe105e6775b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::derived;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_d6bca8bfadfa59918ad43c89cab63f80)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::const_cast_derived;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_7fb2b8875e3c5a19921481756b3ed6e3)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_bc0be85bf2a35695a9426044adb0b9a6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_35e549f8f3ca56f5ad44bdd1d00495f9)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_24cdb9aa7ede5720899f66e72f154f49)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > > > class_a18987f6373e5dc5a7c5095f3164bda6("_EigenBase_a18987f6373e5dc5a7c5095f3164bda6", "", boost::python::no_init);
    class_a18987f6373e5dc5a7c5095f3164bda6.def("derived", method_pointer_3acdef046bb05901817a2153a090a585, boost::python::return_internal_reference<>(), "");
    class_a18987f6373e5dc5a7c5095f3164bda6.def("derived", autowig::method_decorator_3acdef046bb05901817a2153a090a585);
    class_a18987f6373e5dc5a7c5095f3164bda6.def("derived", method_pointer_f55a6f0c0376519680b4dfe105e6775b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a18987f6373e5dc5a7c5095f3164bda6.def("const_cast_derived", method_pointer_d6bca8bfadfa59918ad43c89cab63f80, boost::python::return_internal_reference<>(), "");
    class_a18987f6373e5dc5a7c5095f3164bda6.def("const_cast_derived", autowig::method_decorator_d6bca8bfadfa59918ad43c89cab63f80);
    class_a18987f6373e5dc5a7c5095f3164bda6.def("const_derived", method_pointer_7fb2b8875e3c5a19921481756b3ed6e3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a18987f6373e5dc5a7c5095f3164bda6.def("rows", method_pointer_bc0be85bf2a35695a9426044adb0b9a6, "");
    class_a18987f6373e5dc5a7c5095f3164bda6.def("cols", method_pointer_35e549f8f3ca56f5ad44bdd1d00495f9, "");
    class_a18987f6373e5dc5a7c5095f3164bda6.def("size", method_pointer_24cdb9aa7ede5720899f66e72f154f49, "");

}