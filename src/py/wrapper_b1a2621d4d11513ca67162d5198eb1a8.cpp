#include "_ieigen.h"


namespace autowig
{
    void method_decorator_18a9af7df41e5fca9bce0481dac52768(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_db8d2f2007445139be965d37127b397f(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_b1a2621d4d11513ca67162d5198eb1a8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_18a9af7df41e5fca9bce0481dac52768)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_4bf19d5af6825699853aaf96cf5cab02)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_db8d2f2007445139be965d37127b397f)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_7be2942caaec5aaa9d169bf7d12e88de)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_71645097c3f45386a4649cc8e7ffd714)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_4f3ea47f5b065acfab139779b60ab345)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::*method_pointer_1e2a9188ff5b5baba3fe2a642b1bb790)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > > class_b1a2621d4d11513ca67162d5198eb1a8("_EigenBase_b1a2621d4d11513ca67162d5198eb1a8", "", boost::python::no_init);
    class_b1a2621d4d11513ca67162d5198eb1a8.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >  const & >(""));
    class_b1a2621d4d11513ca67162d5198eb1a8.def("derived", method_pointer_18a9af7df41e5fca9bce0481dac52768, boost::python::return_internal_reference<>(), "");
    class_b1a2621d4d11513ca67162d5198eb1a8.def("derived", autowig::method_decorator_18a9af7df41e5fca9bce0481dac52768);
    class_b1a2621d4d11513ca67162d5198eb1a8.def("derived", method_pointer_4bf19d5af6825699853aaf96cf5cab02, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b1a2621d4d11513ca67162d5198eb1a8.def("const_cast_derived", method_pointer_db8d2f2007445139be965d37127b397f, boost::python::return_internal_reference<>(), "");
    class_b1a2621d4d11513ca67162d5198eb1a8.def("const_cast_derived", autowig::method_decorator_db8d2f2007445139be965d37127b397f);
    class_b1a2621d4d11513ca67162d5198eb1a8.def("const_derived", method_pointer_7be2942caaec5aaa9d169bf7d12e88de, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b1a2621d4d11513ca67162d5198eb1a8.def("rows", method_pointer_71645097c3f45386a4649cc8e7ffd714, "");
    class_b1a2621d4d11513ca67162d5198eb1a8.def("cols", method_pointer_4f3ea47f5b065acfab139779b60ab345, "");
    class_b1a2621d4d11513ca67162d5198eb1a8.def("size", method_pointer_1e2a9188ff5b5baba3fe2a642b1bb790, "");

}