#include "_ieigen.h"


namespace autowig
{
    void method_decorator_4df2f46542615825acba86cfa5393637(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_8cc50a64d05a592f8abb24ec952c6f95(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_b5ee18f34a0057c59d79975422c52217()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_4df2f46542615825acba86cfa5393637)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_665d6a5a583f5f6285a5513819e19cc9)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_8cc50a64d05a592f8abb24ec952c6f95)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_d9d04747314650c48014b921a502f70d)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_d6db61b241e950e49a66e12af8de202f)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_019f1568a1695150a6823d6f42422e7a)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_9ebd875627f35e5d98f58f6d081cb6ce)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > > class_b5ee18f34a0057c59d79975422c52217("_EigenBase_b5ee18f34a0057c59d79975422c52217", "", boost::python::no_init);
    class_b5ee18f34a0057c59d79975422c52217.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >  const & >(""));
    class_b5ee18f34a0057c59d79975422c52217.def("derived", method_pointer_4df2f46542615825acba86cfa5393637, boost::python::return_internal_reference<>(), "");
    class_b5ee18f34a0057c59d79975422c52217.def("derived", autowig::method_decorator_4df2f46542615825acba86cfa5393637);
    class_b5ee18f34a0057c59d79975422c52217.def("derived", method_pointer_665d6a5a583f5f6285a5513819e19cc9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b5ee18f34a0057c59d79975422c52217.def("const_cast_derived", method_pointer_8cc50a64d05a592f8abb24ec952c6f95, boost::python::return_internal_reference<>(), "");
    class_b5ee18f34a0057c59d79975422c52217.def("const_cast_derived", autowig::method_decorator_8cc50a64d05a592f8abb24ec952c6f95);
    class_b5ee18f34a0057c59d79975422c52217.def("const_derived", method_pointer_d9d04747314650c48014b921a502f70d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b5ee18f34a0057c59d79975422c52217.def("rows", method_pointer_d6db61b241e950e49a66e12af8de202f, "");
    class_b5ee18f34a0057c59d79975422c52217.def("cols", method_pointer_019f1568a1695150a6823d6f42422e7a, "");
    class_b5ee18f34a0057c59d79975422c52217.def("size", method_pointer_9ebd875627f35e5d98f58f6d081cb6ce, "");

}