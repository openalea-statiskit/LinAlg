#include "_linalg.h"


namespace autowig
{
    void method_decorator_f43732f846a8545c9ed00719034ff108(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out)     { instance.derived() = param_out; }
    void method_decorator_c6ed876e455d54c0ae9818b8b4f9380e(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_32d9268c82ed5cc19bc33d4ee72a3380()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_f43732f846a8545c9ed00719034ff108)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_246258cef7c45ea79ce67a1111303f20)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_c6ed876e455d54c0ae9818b8b4f9380e)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_926913bd76985ef78586d2563c568a15)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::const_derived;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, autowig::Held< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::Type > class_32d9268c82ed5cc19bc33d4ee72a3380("_EigenBase_32d9268c82ed5cc19bc33d4ee72a3380", "", boost::python::no_init);
    class_32d9268c82ed5cc19bc33d4ee72a3380.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const & >(""));
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("derived", method_pointer_f43732f846a8545c9ed00719034ff108, boost::python::return_internal_reference<>(), "");
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("derived", autowig::method_decorator_f43732f846a8545c9ed00719034ff108);
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("derived", method_pointer_246258cef7c45ea79ce67a1111303f20, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("const_cast_derived", method_pointer_c6ed876e455d54c0ae9818b8b4f9380e, boost::python::return_internal_reference<>(), "");
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("const_cast_derived", autowig::method_decorator_c6ed876e455d54c0ae9818b8b4f9380e);
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("const_derived", method_pointer_926913bd76985ef78586d2563c568a15, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}