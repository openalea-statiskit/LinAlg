#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6c7cc826b4b4513fba3503c206cbe84c(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_c9ce23d86d4d5b928ac42512bc3ef2eb(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_2f387f0f90b5597588eb7ef95d34b070()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_6c7cc826b4b4513fba3503c206cbe84c)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_e909314b2c2552cb8db7e4b0bf7ba5d2)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_c9ce23d86d4d5b928ac42512bc3ef2eb)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_a99eff4419c95c28b91021cf5a56d2b6)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_165e6c80553f53428de301d0303cd04c)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_8f3ba3dd47c9579e83749c79a570d56a)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_e419390adc5a573bb04300b3008269a2)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > > class_2f387f0f90b5597588eb7ef95d34b070("_EigenBase_2f387f0f90b5597588eb7ef95d34b070", "", boost::python::no_init);
    class_2f387f0f90b5597588eb7ef95d34b070.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >  const & >(""));
    class_2f387f0f90b5597588eb7ef95d34b070.def("derived", method_pointer_6c7cc826b4b4513fba3503c206cbe84c, boost::python::return_internal_reference<>(), "");
    class_2f387f0f90b5597588eb7ef95d34b070.def("derived", autowig::method_decorator_6c7cc826b4b4513fba3503c206cbe84c);
    class_2f387f0f90b5597588eb7ef95d34b070.def("derived", method_pointer_e909314b2c2552cb8db7e4b0bf7ba5d2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2f387f0f90b5597588eb7ef95d34b070.def("const_cast_derived", method_pointer_c9ce23d86d4d5b928ac42512bc3ef2eb, boost::python::return_internal_reference<>(), "");
    class_2f387f0f90b5597588eb7ef95d34b070.def("const_cast_derived", autowig::method_decorator_c9ce23d86d4d5b928ac42512bc3ef2eb);
    class_2f387f0f90b5597588eb7ef95d34b070.def("const_derived", method_pointer_a99eff4419c95c28b91021cf5a56d2b6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2f387f0f90b5597588eb7ef95d34b070.def("rows", method_pointer_165e6c80553f53428de301d0303cd04c, "");
    class_2f387f0f90b5597588eb7ef95d34b070.def("cols", method_pointer_8f3ba3dd47c9579e83749c79a570d56a, "");
    class_2f387f0f90b5597588eb7ef95d34b070.def("size", method_pointer_e419390adc5a573bb04300b3008269a2, "");

}