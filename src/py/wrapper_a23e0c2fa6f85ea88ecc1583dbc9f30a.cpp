#include "_ieigen.h"


namespace autowig
{
    void method_decorator_fa325084014d5591a07c834720d18429(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_8595480f178c5a8d9afcb801fbcc0071(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_a23e0c2fa6f85ea88ecc1583dbc9f30a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_fa325084014d5591a07c834720d18429)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_ee6c6a0c54cf5c4980074241cb16c32f)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_8595480f178c5a8d9afcb801fbcc0071)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_ab1310bd2713530a8ea026265e30d8c6)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_3e3c9513db85568c8e46b88132d13d12)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_5c0b258f54f052fca432a8e0d8df42ef)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_e1e10767f9055c269f9ce807f1d091f7)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > > class_a23e0c2fa6f85ea88ecc1583dbc9f30a("_EigenBase_a23e0c2fa6f85ea88ecc1583dbc9f30a", "", boost::python::no_init);
    class_a23e0c2fa6f85ea88ecc1583dbc9f30a.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >  const & >(""));
    class_a23e0c2fa6f85ea88ecc1583dbc9f30a.def("derived", method_pointer_fa325084014d5591a07c834720d18429, boost::python::return_internal_reference<>(), "");
    class_a23e0c2fa6f85ea88ecc1583dbc9f30a.def("derived", autowig::method_decorator_fa325084014d5591a07c834720d18429);
    class_a23e0c2fa6f85ea88ecc1583dbc9f30a.def("derived", method_pointer_ee6c6a0c54cf5c4980074241cb16c32f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a23e0c2fa6f85ea88ecc1583dbc9f30a.def("const_cast_derived", method_pointer_8595480f178c5a8d9afcb801fbcc0071, boost::python::return_internal_reference<>(), "");
    class_a23e0c2fa6f85ea88ecc1583dbc9f30a.def("const_cast_derived", autowig::method_decorator_8595480f178c5a8d9afcb801fbcc0071);
    class_a23e0c2fa6f85ea88ecc1583dbc9f30a.def("const_derived", method_pointer_ab1310bd2713530a8ea026265e30d8c6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a23e0c2fa6f85ea88ecc1583dbc9f30a.def("rows", method_pointer_3e3c9513db85568c8e46b88132d13d12, "");
    class_a23e0c2fa6f85ea88ecc1583dbc9f30a.def("cols", method_pointer_5c0b258f54f052fca432a8e0d8df42ef, "");
    class_a23e0c2fa6f85ea88ecc1583dbc9f30a.def("size", method_pointer_e1e10767f9055c269f9ce807f1d091f7, "");

}