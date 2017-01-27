#include "_ieigen.h"


namespace autowig
{
    void method_decorator_29431dce29255fa387c04774c38909a4(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_027346568b3b586da0ccc52767365316(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_a172715767365f958e63329ec5a0bcf7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_29431dce29255fa387c04774c38909a4)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_5a8b85c8348751d6b76ec907599d1493)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_027346568b3b586da0ccc52767365316)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_14804306f8f25539a0c049bdcc9a6d41)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_dd8297630d8f5cc8925f93f86e46675c)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_2414126f58eb5f7289bf7e23b519545b)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::*method_pointer_334919fec4365da3b4513ff3e63c444b)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > > class_a172715767365f958e63329ec5a0bcf7("_EigenBase_a172715767365f958e63329ec5a0bcf7", "", boost::python::no_init);
    class_a172715767365f958e63329ec5a0bcf7.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >  const & >(""));
    class_a172715767365f958e63329ec5a0bcf7.def("derived", method_pointer_29431dce29255fa387c04774c38909a4, boost::python::return_internal_reference<>(), "");
    class_a172715767365f958e63329ec5a0bcf7.def("derived", autowig::method_decorator_29431dce29255fa387c04774c38909a4);
    class_a172715767365f958e63329ec5a0bcf7.def("derived", method_pointer_5a8b85c8348751d6b76ec907599d1493, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a172715767365f958e63329ec5a0bcf7.def("const_cast_derived", method_pointer_027346568b3b586da0ccc52767365316, boost::python::return_internal_reference<>(), "");
    class_a172715767365f958e63329ec5a0bcf7.def("const_cast_derived", autowig::method_decorator_027346568b3b586da0ccc52767365316);
    class_a172715767365f958e63329ec5a0bcf7.def("const_derived", method_pointer_14804306f8f25539a0c049bdcc9a6d41, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a172715767365f958e63329ec5a0bcf7.def("rows", method_pointer_dd8297630d8f5cc8925f93f86e46675c, "");
    class_a172715767365f958e63329ec5a0bcf7.def("cols", method_pointer_2414126f58eb5f7289bf7e23b519545b, "");
    class_a172715767365f958e63329ec5a0bcf7.def("size", method_pointer_334919fec4365da3b4513ff3e63c444b, "");

}