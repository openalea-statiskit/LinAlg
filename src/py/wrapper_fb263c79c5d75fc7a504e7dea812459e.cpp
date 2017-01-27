#include "_ieigen.h"


namespace autowig
{
    void method_decorator_7e9efe1e41b951628b7989d25341ca73(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_910f1b2a4c2e5216bdd539776243ba42(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_fb263c79c5d75fc7a504e7dea812459e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_7e9efe1e41b951628b7989d25341ca73)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_b26cebd0c8045680942b62d11632d836)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_910f1b2a4c2e5216bdd539776243ba42)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_c9ce3cbf34ee532ba899c28ab0361a0a)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_5ca1e4c5737c54538dc02d9ba936d441)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_c4ce7b90925350c991657de0f47191d4)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > > >::*method_pointer_3b7d2de1590959c284ed0bfc8453b8f2)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > > class_fb263c79c5d75fc7a504e7dea812459e("_EigenBase_fb263c79c5d75fc7a504e7dea812459e", "", boost::python::no_init);
    class_fb263c79c5d75fc7a504e7dea812459e.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >  const & >(""));
    class_fb263c79c5d75fc7a504e7dea812459e.def("derived", method_pointer_7e9efe1e41b951628b7989d25341ca73, boost::python::return_internal_reference<>(), "");
    class_fb263c79c5d75fc7a504e7dea812459e.def("derived", autowig::method_decorator_7e9efe1e41b951628b7989d25341ca73);
    class_fb263c79c5d75fc7a504e7dea812459e.def("derived", method_pointer_b26cebd0c8045680942b62d11632d836, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fb263c79c5d75fc7a504e7dea812459e.def("const_cast_derived", method_pointer_910f1b2a4c2e5216bdd539776243ba42, boost::python::return_internal_reference<>(), "");
    class_fb263c79c5d75fc7a504e7dea812459e.def("const_cast_derived", autowig::method_decorator_910f1b2a4c2e5216bdd539776243ba42);
    class_fb263c79c5d75fc7a504e7dea812459e.def("const_derived", method_pointer_c9ce3cbf34ee532ba899c28ab0361a0a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fb263c79c5d75fc7a504e7dea812459e.def("rows", method_pointer_5ca1e4c5737c54538dc02d9ba936d441, "");
    class_fb263c79c5d75fc7a504e7dea812459e.def("cols", method_pointer_c4ce7b90925350c991657de0f47191d4, "");
    class_fb263c79c5d75fc7a504e7dea812459e.def("size", method_pointer_3b7d2de1590959c284ed0bfc8453b8f2, "");

}