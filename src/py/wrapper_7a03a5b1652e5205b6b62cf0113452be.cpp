#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6f0ae6a8ee3b5395b198fd06f947028a(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_59799e3ebc815243a38e7e19b3c07295(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_7a03a5b1652e5205b6b62cf0113452be()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_6f0ae6a8ee3b5395b198fd06f947028a)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_e39b2b148ae05139b2f8194cde5d7b42)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_59799e3ebc815243a38e7e19b3c07295)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_fdb3e03eba785ca2a9534c11ddd696c1)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_10fd9d8449375d129d875226f68cad37)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_26b0982f022b53bda5c185bea9511ed8)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::*method_pointer_bc88747046705d5ca9cc7ea9a1d2a4ef)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > > > class_7a03a5b1652e5205b6b62cf0113452be("_EigenBase_7a03a5b1652e5205b6b62cf0113452be", "", boost::python::no_init);
    class_7a03a5b1652e5205b6b62cf0113452be.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >  const & >(""));
    class_7a03a5b1652e5205b6b62cf0113452be.def("derived", method_pointer_6f0ae6a8ee3b5395b198fd06f947028a, boost::python::return_internal_reference<>(), "");
    class_7a03a5b1652e5205b6b62cf0113452be.def("derived", autowig::method_decorator_6f0ae6a8ee3b5395b198fd06f947028a);
    class_7a03a5b1652e5205b6b62cf0113452be.def("derived", method_pointer_e39b2b148ae05139b2f8194cde5d7b42, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7a03a5b1652e5205b6b62cf0113452be.def("const_cast_derived", method_pointer_59799e3ebc815243a38e7e19b3c07295, boost::python::return_internal_reference<>(), "");
    class_7a03a5b1652e5205b6b62cf0113452be.def("const_cast_derived", autowig::method_decorator_59799e3ebc815243a38e7e19b3c07295);
    class_7a03a5b1652e5205b6b62cf0113452be.def("const_derived", method_pointer_fdb3e03eba785ca2a9534c11ddd696c1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7a03a5b1652e5205b6b62cf0113452be.def("rows", method_pointer_10fd9d8449375d129d875226f68cad37, "");
    class_7a03a5b1652e5205b6b62cf0113452be.def("cols", method_pointer_26b0982f022b53bda5c185bea9511ed8, "");
    class_7a03a5b1652e5205b6b62cf0113452be.def("size", method_pointer_bc88747046705d5ca9cc7ea9a1d2a4ef, "");

}