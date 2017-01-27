#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ee58d747738152b0b1caa8b1a3eba608(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_0e83bf34210f5d5da142dbd626e758e5(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_07520771d4d65f849248f920ce450529()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_ee58d747738152b0b1caa8b1a3eba608)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_6993bc20c9845319a9317d947b2e9907)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_0e83bf34210f5d5da142dbd626e758e5)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_c34e5fdc6947549a94bb6b8c4eaa3ba4)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_1c6796c8a68a537985884860840b2bf0)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_ce271b11541b53759e94c4c79f5934bf)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::*method_pointer_2109c6ebead05b26bda3eb23a43796b6)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > > class_07520771d4d65f849248f920ce450529("_EigenBase_07520771d4d65f849248f920ce450529", "", boost::python::no_init);
    class_07520771d4d65f849248f920ce450529.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >  const & >(""));
    class_07520771d4d65f849248f920ce450529.def("derived", method_pointer_ee58d747738152b0b1caa8b1a3eba608, boost::python::return_internal_reference<>(), "");
    class_07520771d4d65f849248f920ce450529.def("derived", autowig::method_decorator_ee58d747738152b0b1caa8b1a3eba608);
    class_07520771d4d65f849248f920ce450529.def("derived", method_pointer_6993bc20c9845319a9317d947b2e9907, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_07520771d4d65f849248f920ce450529.def("const_cast_derived", method_pointer_0e83bf34210f5d5da142dbd626e758e5, boost::python::return_internal_reference<>(), "");
    class_07520771d4d65f849248f920ce450529.def("const_cast_derived", autowig::method_decorator_0e83bf34210f5d5da142dbd626e758e5);
    class_07520771d4d65f849248f920ce450529.def("const_derived", method_pointer_c34e5fdc6947549a94bb6b8c4eaa3ba4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_07520771d4d65f849248f920ce450529.def("rows", method_pointer_1c6796c8a68a537985884860840b2bf0, "");
    class_07520771d4d65f849248f920ce450529.def("cols", method_pointer_ce271b11541b53759e94c4c79f5934bf, "");
    class_07520771d4d65f849248f920ce450529.def("size", method_pointer_2109c6ebead05b26bda3eb23a43796b6, "");

}