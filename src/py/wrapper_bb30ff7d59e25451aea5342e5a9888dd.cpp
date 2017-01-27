#include "_ieigen.h"


namespace autowig
{
    void method_decorator_bc116101c2185c52828c8b3cdb599570(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_056d8fe7a3ed5976981a2eff5a1860e6(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_5f6fddd02ffb53da9bc0cff17636498e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_b928ac2686d75b9ca65b0552e884bfa0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, const double  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_bd6e3664ef555390a63417f9e39cf260(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, const double  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_246d46dcdcb450d981ac73d4182eead4(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, const double  & param_out)     { instance.operator()(param_in_0) = param_out; }
// TODO // TODO     void method_decorator_1b88abcf578a5452b36b3f5f46741237(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > & instance, const double  & param_out)     { instance.x() = param_out; }
// TODO     void method_decorator_7fd331bd085b5b42be2a34500eaacf16(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > & instance, const double  & param_out)     { instance.y() = param_out; }
// TODO     void method_decorator_57373698b5f05fbcaf1b11ee1fd3dbbd(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > & instance, const double  & param_out)     { instance.z() = param_out; }
// TODO     void method_decorator_c26e7e5ff6775c2f9feccf7a01f4e05a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > & instance, const double  & param_out)     { instance.w() = param_out; }
}


void wrapper_bb30ff7d59e25451aea5342e5a9888dd()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_bc116101c2185c52828c8b3cdb599570)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_056d8fe7a3ed5976981a2eff5a1860e6)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::coeffRefByOuterInner;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_5f6fddd02ffb53da9bc0cff17636498e)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_b928ac2686d75b9ca65b0552e884bfa0)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::coeffRef;
// TODO // TODO     double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_bd6e3664ef555390a63417f9e39cf260)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::operator[];
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_246d46dcdcb450d981ac73d4182eead4)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::operator();
// TODO     double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_1b88abcf578a5452b36b3f5f46741237)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::x;
// TODO     double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_7fd331bd085b5b42be2a34500eaacf16)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::y;
// TODO     double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_57373698b5f05fbcaf1b11ee1fd3dbbd)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::z;
// TODO     double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_c26e7e5ff6775c2f9feccf7a01f4e05a)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 > > > class_bb30ff7d59e25451aea5342e5a9888dd("_DenseCoeffsBase_bb30ff7d59e25451aea5342e5a9888dd", "", boost::python::no_init);
    class_bb30ff7d59e25451aea5342e5a9888dd.def("coeff_ref", method_pointer_bc116101c2185c52828c8b3cdb599570, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb30ff7d59e25451aea5342e5a9888dd.def("coeff_ref", autowig::method_decorator_bc116101c2185c52828c8b3cdb599570);
    class_bb30ff7d59e25451aea5342e5a9888dd.def("coeff_ref_by_outer_inner", method_pointer_056d8fe7a3ed5976981a2eff5a1860e6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb30ff7d59e25451aea5342e5a9888dd.def("coeff_ref_by_outer_inner", autowig::method_decorator_056d8fe7a3ed5976981a2eff5a1860e6);
    class_bb30ff7d59e25451aea5342e5a9888dd.def("__call__", method_pointer_5f6fddd02ffb53da9bc0cff17636498e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb30ff7d59e25451aea5342e5a9888dd.def("__call__", autowig::method_decorator_5f6fddd02ffb53da9bc0cff17636498e);
    class_bb30ff7d59e25451aea5342e5a9888dd.def("coeff_ref", method_pointer_b928ac2686d75b9ca65b0552e884bfa0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb30ff7d59e25451aea5342e5a9888dd.def("coeff_ref", autowig::method_decorator_b928ac2686d75b9ca65b0552e884bfa0);
// TODO // TODO     class_bb30ff7d59e25451aea5342e5a9888dd.def("__getitem__", method_pointer_bd6e3664ef555390a63417f9e39cf260, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO // TODO     class_bb30ff7d59e25451aea5342e5a9888dd.def("__getitem__", autowig::method_decorator_bd6e3664ef555390a63417f9e39cf260);
    class_bb30ff7d59e25451aea5342e5a9888dd.def("__call__", method_pointer_246d46dcdcb450d981ac73d4182eead4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb30ff7d59e25451aea5342e5a9888dd.def("__call__", autowig::method_decorator_246d46dcdcb450d981ac73d4182eead4);
// TODO     class_bb30ff7d59e25451aea5342e5a9888dd.def("x", method_pointer_1b88abcf578a5452b36b3f5f46741237, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_bb30ff7d59e25451aea5342e5a9888dd.def("x", autowig::method_decorator_1b88abcf578a5452b36b3f5f46741237);
// TODO     class_bb30ff7d59e25451aea5342e5a9888dd.def("y", method_pointer_7fd331bd085b5b42be2a34500eaacf16, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_bb30ff7d59e25451aea5342e5a9888dd.def("y", autowig::method_decorator_7fd331bd085b5b42be2a34500eaacf16);
// TODO     class_bb30ff7d59e25451aea5342e5a9888dd.def("z", method_pointer_57373698b5f05fbcaf1b11ee1fd3dbbd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_bb30ff7d59e25451aea5342e5a9888dd.def("z", autowig::method_decorator_57373698b5f05fbcaf1b11ee1fd3dbbd);
// TODO     class_bb30ff7d59e25451aea5342e5a9888dd.def("w", method_pointer_c26e7e5ff6775c2f9feccf7a01f4e05a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_bb30ff7d59e25451aea5342e5a9888dd.def("w", autowig::method_decorator_c26e7e5ff6775c2f9feccf7a01f4e05a);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 0 > > >();
    }

}