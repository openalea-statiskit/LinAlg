#include "_ieigen.h"


namespace autowig
{
    void method_decorator_da297672a8c0553db3aefc19ccea9d4a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_dc30f2a6042a5557afd607b05eb3501d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_306253c539c255df99995412adbe846e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_a783f05d61bc5b829a57e8916fae96cf(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_adf5d20915d759d5bc3132b633a027ef(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_d0c1ba37f9115d15afc77fc13abefbae(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_a2822b460959566aaca031994556d9a5(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_575aec4b98425d9eae840f8fc753762e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_5adb96909f1e57b996c0957ab9d39cc0(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_d811516d7d1a52f89fac26e8fc348152(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_266adec1a79754c5bc913fdf9b2dadf6(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_cbf9bf99b26f523a9523158a68921ee0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_da297672a8c0553db3aefc19ccea9d4a)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_6f06a8015b2e5247aef7e0866d934745)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_cd93d83e5f3d5def8d372c6e5a91d296)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_ddc36cc3ed57532dab3f381c3db50efa)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::cols;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_53e1b6b463ea5ef4935658280d126897)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::coeff;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_705eedf0e2f6511b9c44d04202e1d1ad)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::coeff;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_dc30f2a6042a5557afd607b05eb3501d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_306253c539c255df99995412adbe846e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_7eca87928d8d5218b9f24a6610fc4e0b)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_7bf9f08cade95211aa5b6098dd5691e5)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::coeffRef;
    struct ::std::complex< double >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_96d267680ced59bd9b43d1fb966e3086)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::data;
    struct ::std::complex< double >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_c090c5632cc451609c27676f6d840eff)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_7d8362b750d95e00b09c700ab871b895)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_415f5a42fe1351559ee39009ecf60457)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_b65cf7835ab255599ee30190e52f5af8)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_7655ac313cb85ece83e21f3a8e2764da)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_c49b2c5ffbd25aeb997470a0b95072f5)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_a6dc22dd99b0591880bc82a90ddff111)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_afd4c6a67086560bb2f47f715e1c77f0)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_32e33bbfe43f5ae0a77d311ef7692a2f)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_a783f05d61bc5b829a57e8916fae96cf)(long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_adf5d20915d759d5bc3132b633a027ef)(long int , long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_d0c1ba37f9115d15afc77fc13abefbae)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_a2822b460959566aaca031994556d9a5)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_575aec4b98425d9eae840f8fc753762e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_5adb96909f1e57b996c0957ab9d39cc0)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_d811516d7d1a52f89fac26e8fc348152)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_266adec1a79754c5bc913fdf9b2dadf6)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setRandom;
    void  (*method_pointer_a6c81230436652fb90a8f07d595b6838)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > > > class_cbf9bf99b26f523a9523158a68921ee0("_PlainObjectBase_cbf9bf99b26f523a9523158a68921ee0", "", boost::python::no_init);
    class_cbf9bf99b26f523a9523158a68921ee0.def("base", method_pointer_da297672a8c0553db3aefc19ccea9d4a, boost::python::return_internal_reference<>(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("base", autowig::method_decorator_da297672a8c0553db3aefc19ccea9d4a);
    class_cbf9bf99b26f523a9523158a68921ee0.def("base", method_pointer_6f06a8015b2e5247aef7e0866d934745, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("rows", method_pointer_cd93d83e5f3d5def8d372c6e5a91d296, "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("cols", method_pointer_ddc36cc3ed57532dab3f381c3db50efa, "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("coeff", method_pointer_53e1b6b463ea5ef4935658280d126897, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("coeff", method_pointer_705eedf0e2f6511b9c44d04202e1d1ad, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("coeff_ref", method_pointer_dc30f2a6042a5557afd607b05eb3501d, boost::python::return_internal_reference<>(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("coeff_ref", autowig::method_decorator_dc30f2a6042a5557afd607b05eb3501d);
    class_cbf9bf99b26f523a9523158a68921ee0.def("coeff_ref", method_pointer_306253c539c255df99995412adbe846e, boost::python::return_internal_reference<>(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("coeff_ref", autowig::method_decorator_306253c539c255df99995412adbe846e);
    class_cbf9bf99b26f523a9523158a68921ee0.def("coeff_ref", method_pointer_7eca87928d8d5218b9f24a6610fc4e0b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("coeff_ref", method_pointer_7bf9f08cade95211aa5b6098dd5691e5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("data", method_pointer_96d267680ced59bd9b43d1fb966e3086, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("data", method_pointer_c090c5632cc451609c27676f6d840eff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("resize", method_pointer_7d8362b750d95e00b09c700ab871b895, "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("resize", method_pointer_415f5a42fe1351559ee39009ecf60457, "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("resize", method_pointer_b65cf7835ab255599ee30190e52f5af8, "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("resize", method_pointer_7655ac313cb85ece83e21f3a8e2764da, "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("conservative_resize", method_pointer_c49b2c5ffbd25aeb997470a0b95072f5, "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("conservative_resize", method_pointer_a6dc22dd99b0591880bc82a90ddff111, "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("conservative_resize", method_pointer_afd4c6a67086560bb2f47f715e1c77f0, "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("conservative_resize", method_pointer_32e33bbfe43f5ae0a77d311ef7692a2f, "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_constant", method_pointer_a783f05d61bc5b829a57e8916fae96cf, boost::python::return_internal_reference<>(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_constant", autowig::method_decorator_a783f05d61bc5b829a57e8916fae96cf);
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_constant", method_pointer_adf5d20915d759d5bc3132b633a027ef, boost::python::return_internal_reference<>(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_constant", autowig::method_decorator_adf5d20915d759d5bc3132b633a027ef);
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_zero", method_pointer_d0c1ba37f9115d15afc77fc13abefbae, boost::python::return_internal_reference<>(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_zero", autowig::method_decorator_d0c1ba37f9115d15afc77fc13abefbae);
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_zero", method_pointer_a2822b460959566aaca031994556d9a5, boost::python::return_internal_reference<>(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_zero", autowig::method_decorator_a2822b460959566aaca031994556d9a5);
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_ones", method_pointer_575aec4b98425d9eae840f8fc753762e, boost::python::return_internal_reference<>(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_ones", autowig::method_decorator_575aec4b98425d9eae840f8fc753762e);
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_ones", method_pointer_5adb96909f1e57b996c0957ab9d39cc0, boost::python::return_internal_reference<>(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_ones", autowig::method_decorator_5adb96909f1e57b996c0957ab9d39cc0);
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_random", method_pointer_d811516d7d1a52f89fac26e8fc348152, boost::python::return_internal_reference<>(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_random", autowig::method_decorator_d811516d7d1a52f89fac26e8fc348152);
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_random", method_pointer_266adec1a79754c5bc913fdf9b2dadf6, boost::python::return_internal_reference<>(), "");
    class_cbf9bf99b26f523a9523158a68921ee0.def("set_random", autowig::method_decorator_266adec1a79754c5bc913fdf9b2dadf6);
    class_cbf9bf99b26f523a9523158a68921ee0.def("check_template_params", method_pointer_a6c81230436652fb90a8f07d595b6838, "");
    class_cbf9bf99b26f523a9523158a68921ee0.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > > >();
    }

}