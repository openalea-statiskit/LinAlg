#include "_ieigen.h"


namespace autowig
{
    void method_decorator_447fd71e04e7532aa79afea4d19178c1(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_b8058f48e7c75420b80cf73b684fa886(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_211ec95e61175a3d9ce949f19f379739()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_447fd71e04e7532aa79afea4d19178c1)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_c014198532275fde9bc5a0a8b0bc2387)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_b8058f48e7c75420b80cf73b684fa886)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_46bcc43e3be559878fa19e7e2571ac17)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_8cfa082d402d502b812bf3abf51732e6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_04fe9bdb563e58d49f3e64b1dd17e745)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_7874b967a0ce52b8bff045600d57ba92)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > > > class_211ec95e61175a3d9ce949f19f379739("_EigenBase_211ec95e61175a3d9ce949f19f379739", "", boost::python::no_init);
    class_211ec95e61175a3d9ce949f19f379739.def("derived", method_pointer_447fd71e04e7532aa79afea4d19178c1, boost::python::return_internal_reference<>(), "");
    class_211ec95e61175a3d9ce949f19f379739.def("derived", autowig::method_decorator_447fd71e04e7532aa79afea4d19178c1);
    class_211ec95e61175a3d9ce949f19f379739.def("derived", method_pointer_c014198532275fde9bc5a0a8b0bc2387, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_211ec95e61175a3d9ce949f19f379739.def("const_cast_derived", method_pointer_b8058f48e7c75420b80cf73b684fa886, boost::python::return_internal_reference<>(), "");
    class_211ec95e61175a3d9ce949f19f379739.def("const_cast_derived", autowig::method_decorator_b8058f48e7c75420b80cf73b684fa886);
    class_211ec95e61175a3d9ce949f19f379739.def("const_derived", method_pointer_46bcc43e3be559878fa19e7e2571ac17, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_211ec95e61175a3d9ce949f19f379739.def("rows", method_pointer_8cfa082d402d502b812bf3abf51732e6, "");
    class_211ec95e61175a3d9ce949f19f379739.def("cols", method_pointer_04fe9bdb563e58d49f3e64b1dd17e745, "");
    class_211ec95e61175a3d9ce949f19f379739.def("size", method_pointer_7874b967a0ce52b8bff045600d57ba92, "");

}