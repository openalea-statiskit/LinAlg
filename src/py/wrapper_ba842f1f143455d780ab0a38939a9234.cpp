#include "_linalg.h"


namespace autowig
{
    void method_decorator_75e385c9409f5665be3cc295752cbe9c(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out)     { instance.derived() = param_out; }
    void method_decorator_3bf257cd57fa53c1b4b86fb3b32bbd51(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_ba842f1f143455d780ab0a38939a9234()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_75e385c9409f5665be3cc295752cbe9c)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_d6168f453aad5eb78568cd9d26b96d63)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_3bf257cd57fa53c1b4b86fb3b32bbd51)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_4f1ecfdd623653459de65cb3563e6d0b)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::const_derived;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, autowig::Held< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::Type > class_ba842f1f143455d780ab0a38939a9234("_EigenBase_ba842f1f143455d780ab0a38939a9234", "", boost::python::no_init);
    class_ba842f1f143455d780ab0a38939a9234.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const & >(""));
    class_ba842f1f143455d780ab0a38939a9234.def("derived", method_pointer_75e385c9409f5665be3cc295752cbe9c, boost::python::return_internal_reference<>(), "");
    class_ba842f1f143455d780ab0a38939a9234.def("derived", autowig::method_decorator_75e385c9409f5665be3cc295752cbe9c);
    class_ba842f1f143455d780ab0a38939a9234.def("derived", method_pointer_d6168f453aad5eb78568cd9d26b96d63, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ba842f1f143455d780ab0a38939a9234.def("const_cast_derived", method_pointer_3bf257cd57fa53c1b4b86fb3b32bbd51, boost::python::return_internal_reference<>(), "");
    class_ba842f1f143455d780ab0a38939a9234.def("const_cast_derived", autowig::method_decorator_3bf257cd57fa53c1b4b86fb3b32bbd51);
    class_ba842f1f143455d780ab0a38939a9234.def("const_derived", method_pointer_4f1ecfdd623653459de65cb3563e6d0b, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}