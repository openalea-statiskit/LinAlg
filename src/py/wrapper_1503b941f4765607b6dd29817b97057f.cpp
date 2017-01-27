#include "_ieigen.h"


namespace autowig
{
    void method_decorator_4b5db77b21eb502ea55f1d94d32f6d3d(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_9f354f0d36ae5facb035f3e3d0d089a4(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > const & instance, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_1503b941f4765607b6dd29817b97057f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_4b5db77b21eb502ea55f1d94d32f6d3d)() = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::derived;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_49a79db3ceac59b398b534aee1b2194b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::derived;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_9f354f0d36ae5facb035f3e3d0d089a4)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::const_cast_derived;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_ac72270814a950668a3e93dfe5d10e28)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_569459d5a3205e9ca2259a87dd9dc4d4)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_282270bc2be65e38948d9365ec08caa6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_8c25d942b1755103aca5d2f6d90c6ffc)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > class_1503b941f4765607b6dd29817b97057f("_EigenBase_1503b941f4765607b6dd29817b97057f", "", boost::python::no_init);
    class_1503b941f4765607b6dd29817b97057f.def("derived", method_pointer_4b5db77b21eb502ea55f1d94d32f6d3d, boost::python::return_internal_reference<>(), "");
    class_1503b941f4765607b6dd29817b97057f.def("derived", autowig::method_decorator_4b5db77b21eb502ea55f1d94d32f6d3d);
    class_1503b941f4765607b6dd29817b97057f.def("derived", method_pointer_49a79db3ceac59b398b534aee1b2194b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1503b941f4765607b6dd29817b97057f.def("const_cast_derived", method_pointer_9f354f0d36ae5facb035f3e3d0d089a4, boost::python::return_internal_reference<>(), "");
    class_1503b941f4765607b6dd29817b97057f.def("const_cast_derived", autowig::method_decorator_9f354f0d36ae5facb035f3e3d0d089a4);
    class_1503b941f4765607b6dd29817b97057f.def("const_derived", method_pointer_ac72270814a950668a3e93dfe5d10e28, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1503b941f4765607b6dd29817b97057f.def("rows", method_pointer_569459d5a3205e9ca2259a87dd9dc4d4, "");
    class_1503b941f4765607b6dd29817b97057f.def("cols", method_pointer_282270bc2be65e38948d9365ec08caa6, "");
    class_1503b941f4765607b6dd29817b97057f.def("size", method_pointer_8c25d942b1755103aca5d2f6d90c6ffc, "");

}