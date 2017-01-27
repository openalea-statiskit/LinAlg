#include "_ieigen.h"


namespace autowig
{
    void method_decorator_5acdbb1ac9b2547a88ec5c90d677386d(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_9fa3cae92ad755678075f445a19ea9c4(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_61fd5e08d2c2597a908f02aead52f400()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_5acdbb1ac9b2547a88ec5c90d677386d)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_eeff1843d9a15c64a75636f34bc3e15c)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_9fa3cae92ad755678075f445a19ea9c4)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_2e7037aea75053cfa40d53f91cffa3ad)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_13e1a3a1c00250e2a6dd29d406bd261e)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_cd057e39c4e552cc8dff160292dd7aa1)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_d47b67427f115ae7af4e966b361d208e)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > > class_61fd5e08d2c2597a908f02aead52f400("_EigenBase_61fd5e08d2c2597a908f02aead52f400", "", boost::python::no_init);
    class_61fd5e08d2c2597a908f02aead52f400.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >  const & >(""));
    class_61fd5e08d2c2597a908f02aead52f400.def("derived", method_pointer_5acdbb1ac9b2547a88ec5c90d677386d, boost::python::return_internal_reference<>(), "");
    class_61fd5e08d2c2597a908f02aead52f400.def("derived", autowig::method_decorator_5acdbb1ac9b2547a88ec5c90d677386d);
    class_61fd5e08d2c2597a908f02aead52f400.def("derived", method_pointer_eeff1843d9a15c64a75636f34bc3e15c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_61fd5e08d2c2597a908f02aead52f400.def("const_cast_derived", method_pointer_9fa3cae92ad755678075f445a19ea9c4, boost::python::return_internal_reference<>(), "");
    class_61fd5e08d2c2597a908f02aead52f400.def("const_cast_derived", autowig::method_decorator_9fa3cae92ad755678075f445a19ea9c4);
    class_61fd5e08d2c2597a908f02aead52f400.def("const_derived", method_pointer_2e7037aea75053cfa40d53f91cffa3ad, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_61fd5e08d2c2597a908f02aead52f400.def("rows", method_pointer_13e1a3a1c00250e2a6dd29d406bd261e, "");
    class_61fd5e08d2c2597a908f02aead52f400.def("cols", method_pointer_cd057e39c4e552cc8dff160292dd7aa1, "");
    class_61fd5e08d2c2597a908f02aead52f400.def("size", method_pointer_d47b67427f115ae7af4e966b361d208e, "");

}