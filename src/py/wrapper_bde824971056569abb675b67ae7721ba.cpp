#include "_ieigen.h"


namespace autowig
{
    void method_decorator_12cb72785f925a6db3e44fb9199d54ac(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_1e7fbe82f5fb549d858928f65d163232(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_bde824971056569abb675b67ae7721ba()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_12cb72785f925a6db3e44fb9199d54ac)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_332f0b0c42bc5e359d519dd527c06e84)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_1e7fbe82f5fb549d858928f65d163232)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_f387d63701ac544ca9240ffdda4cbeae)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_4b943da4986c5441abcdb38d0ffb87c8)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_7c551efadce850bf8710c983e58b21ca)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::*method_pointer_513ea1e1761d5b61afa21bfa2cd0dc13)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > > class_bde824971056569abb675b67ae7721ba("_EigenBase_bde824971056569abb675b67ae7721ba", "", boost::python::no_init);
    class_bde824971056569abb675b67ae7721ba.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >  const & >(""));
    class_bde824971056569abb675b67ae7721ba.def("derived", method_pointer_12cb72785f925a6db3e44fb9199d54ac, boost::python::return_internal_reference<>(), "");
    class_bde824971056569abb675b67ae7721ba.def("derived", autowig::method_decorator_12cb72785f925a6db3e44fb9199d54ac);
    class_bde824971056569abb675b67ae7721ba.def("derived", method_pointer_332f0b0c42bc5e359d519dd527c06e84, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bde824971056569abb675b67ae7721ba.def("const_cast_derived", method_pointer_1e7fbe82f5fb549d858928f65d163232, boost::python::return_internal_reference<>(), "");
    class_bde824971056569abb675b67ae7721ba.def("const_cast_derived", autowig::method_decorator_1e7fbe82f5fb549d858928f65d163232);
    class_bde824971056569abb675b67ae7721ba.def("const_derived", method_pointer_f387d63701ac544ca9240ffdda4cbeae, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bde824971056569abb675b67ae7721ba.def("rows", method_pointer_4b943da4986c5441abcdb38d0ffb87c8, "");
    class_bde824971056569abb675b67ae7721ba.def("cols", method_pointer_7c551efadce850bf8710c983e58b21ca, "");
    class_bde824971056569abb675b67ae7721ba.def("size", method_pointer_513ea1e1761d5b61afa21bfa2cd0dc13, "");

}