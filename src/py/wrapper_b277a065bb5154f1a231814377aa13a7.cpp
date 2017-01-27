#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d1fd068c85f25981af2b315d8b45c15c(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_a92c52213cb3595584a237b632580c78(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_b277a065bb5154f1a231814377aa13a7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_d1fd068c85f25981af2b315d8b45c15c)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_0423c309b3bd50af81c3e1fac0cef7bc)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_a92c52213cb3595584a237b632580c78)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_d63f15e06c16515c8d05699beb77485c)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_125dfdf0cf9f5dc1ab1e26435aa97d9e)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_0f6148412cb553608d28e97ca46af32b)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::*method_pointer_37fc7d4c2b535efbae9c5b9621a9192b)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > > class_b277a065bb5154f1a231814377aa13a7("_EigenBase_b277a065bb5154f1a231814377aa13a7", "", boost::python::no_init);
    class_b277a065bb5154f1a231814377aa13a7.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >  const & >(""));
    class_b277a065bb5154f1a231814377aa13a7.def("derived", method_pointer_d1fd068c85f25981af2b315d8b45c15c, boost::python::return_internal_reference<>(), "");
    class_b277a065bb5154f1a231814377aa13a7.def("derived", autowig::method_decorator_d1fd068c85f25981af2b315d8b45c15c);
    class_b277a065bb5154f1a231814377aa13a7.def("derived", method_pointer_0423c309b3bd50af81c3e1fac0cef7bc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b277a065bb5154f1a231814377aa13a7.def("const_cast_derived", method_pointer_a92c52213cb3595584a237b632580c78, boost::python::return_internal_reference<>(), "");
    class_b277a065bb5154f1a231814377aa13a7.def("const_cast_derived", autowig::method_decorator_a92c52213cb3595584a237b632580c78);
    class_b277a065bb5154f1a231814377aa13a7.def("const_derived", method_pointer_d63f15e06c16515c8d05699beb77485c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b277a065bb5154f1a231814377aa13a7.def("rows", method_pointer_125dfdf0cf9f5dc1ab1e26435aa97d9e, "");
    class_b277a065bb5154f1a231814377aa13a7.def("cols", method_pointer_0f6148412cb553608d28e97ca46af32b, "");
    class_b277a065bb5154f1a231814377aa13a7.def("size", method_pointer_37fc7d4c2b535efbae9c5b9621a9192b, "");

}