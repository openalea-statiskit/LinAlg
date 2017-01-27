#include "_ieigen.h"


namespace autowig
{
    void method_decorator_fdf57efa35d254e18507bf43e6cf3904(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_d997b91982bf5b089914ffa67f8aa7a6(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_ee78ce0b1584542fb6c28472a319921a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_fdf57efa35d254e18507bf43e6cf3904)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_5eb6834ed7b55b039e870667653952c4)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_d997b91982bf5b089914ffa67f8aa7a6)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_fb415da6abde5a3689591f56d5ec75b9)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_09509b9f18825080a8dfa15928e8e7c7)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_f95a2a2e8b7a5c58a78dd2449e4890b4)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_06f236512c465cf998eecf5be59b21f5)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > > class_ee78ce0b1584542fb6c28472a319921a("_EigenBase_ee78ce0b1584542fb6c28472a319921a", "", boost::python::no_init);
    class_ee78ce0b1584542fb6c28472a319921a.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >  const & >(""));
    class_ee78ce0b1584542fb6c28472a319921a.def("derived", method_pointer_fdf57efa35d254e18507bf43e6cf3904, boost::python::return_internal_reference<>(), "");
    class_ee78ce0b1584542fb6c28472a319921a.def("derived", autowig::method_decorator_fdf57efa35d254e18507bf43e6cf3904);
    class_ee78ce0b1584542fb6c28472a319921a.def("derived", method_pointer_5eb6834ed7b55b039e870667653952c4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ee78ce0b1584542fb6c28472a319921a.def("const_cast_derived", method_pointer_d997b91982bf5b089914ffa67f8aa7a6, boost::python::return_internal_reference<>(), "");
    class_ee78ce0b1584542fb6c28472a319921a.def("const_cast_derived", autowig::method_decorator_d997b91982bf5b089914ffa67f8aa7a6);
    class_ee78ce0b1584542fb6c28472a319921a.def("const_derived", method_pointer_fb415da6abde5a3689591f56d5ec75b9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ee78ce0b1584542fb6c28472a319921a.def("rows", method_pointer_09509b9f18825080a8dfa15928e8e7c7, "");
    class_ee78ce0b1584542fb6c28472a319921a.def("cols", method_pointer_f95a2a2e8b7a5c58a78dd2449e4890b4, "");
    class_ee78ce0b1584542fb6c28472a319921a.def("size", method_pointer_06f236512c465cf998eecf5be59b21f5, "");

}