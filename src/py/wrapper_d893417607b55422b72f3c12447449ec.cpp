#include "_ieigen.h"


namespace autowig
{
    void method_decorator_92d11fca742b522fa84a2d995ae4d98c(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_ab5d43f89aeb5b02bb2c6e2273e7227a(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_d893417607b55422b72f3c12447449ec()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_92d11fca742b522fa84a2d995ae4d98c)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_d419f0dfdf1754fda1b20338c2dea93a)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_ab5d43f89aeb5b02bb2c6e2273e7227a)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_8c0285c3940252e89ad1452ecd403503)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_31cc7b138a3e5af3ad2d2209cce1f725)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_0e8a6c321d38529eb16f9736e0a41f11)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_4a559803cff65c0db428aa9a21ba0cc6)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > > class_d893417607b55422b72f3c12447449ec("_EigenBase_d893417607b55422b72f3c12447449ec", "", boost::python::no_init);
    class_d893417607b55422b72f3c12447449ec.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >  const & >(""));
    class_d893417607b55422b72f3c12447449ec.def("derived", method_pointer_92d11fca742b522fa84a2d995ae4d98c, boost::python::return_internal_reference<>(), "");
    class_d893417607b55422b72f3c12447449ec.def("derived", autowig::method_decorator_92d11fca742b522fa84a2d995ae4d98c);
    class_d893417607b55422b72f3c12447449ec.def("derived", method_pointer_d419f0dfdf1754fda1b20338c2dea93a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d893417607b55422b72f3c12447449ec.def("const_cast_derived", method_pointer_ab5d43f89aeb5b02bb2c6e2273e7227a, boost::python::return_internal_reference<>(), "");
    class_d893417607b55422b72f3c12447449ec.def("const_cast_derived", autowig::method_decorator_ab5d43f89aeb5b02bb2c6e2273e7227a);
    class_d893417607b55422b72f3c12447449ec.def("const_derived", method_pointer_8c0285c3940252e89ad1452ecd403503, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d893417607b55422b72f3c12447449ec.def("rows", method_pointer_31cc7b138a3e5af3ad2d2209cce1f725, "");
    class_d893417607b55422b72f3c12447449ec.def("cols", method_pointer_0e8a6c321d38529eb16f9736e0a41f11, "");
    class_d893417607b55422b72f3c12447449ec.def("size", method_pointer_4a559803cff65c0db428aa9a21ba0cc6, "");

}