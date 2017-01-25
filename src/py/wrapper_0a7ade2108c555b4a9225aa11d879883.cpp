#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c3fd482071bc51b9bcb15b72ae13f089(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_8cacdef349e452ac9894b088e133a024(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_521ad4d5058952529b3d561a34935a80(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, const double  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_289fcd47a8c45e69a3355a1521127d1f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_f96f28619d9150be87a2be7d16575ef8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_0baca53a0dbd543098b98927f2f19118(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_8f33e105cfb95336a790d0f6cfcccf2e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_fd351c977ded5504a68bd9e6118a18a3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_cb4248fa7cee54838059eef3c9f5452d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_275ed683f56755a58325f921aaa1f93f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_ac40161fa2f754e9b8444778fb8befa8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_0a7ade2108c555b4a9225aa11d879883()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_c3fd482071bc51b9bcb15b72ae13f089)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_fdc25758f757586298221e468abd12e3)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_e96946f4a08d55c091b12c815e4a8a58)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_a0b2d4e9757756d4881e7461d9855c6c)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::cols;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_c489f6f62d9254ed9b471857d4817995)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::coeff;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_bf316868c6ae50c287c0f629473273dc)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::coeff;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_8cacdef349e452ac9894b088e133a024)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::coeffRef;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_521ad4d5058952529b3d561a34935a80)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_b0b53c505faa5067b089ca2d73bec941)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_c243fead00855c8ab36a2eb3a737838a)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_c5454f6cb22a512d97c82f9731ac60d1)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_f625712552635e5bb3b11f4bd0400308)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_808aafb7ae995e6aaca386988cce3f34)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_15753e1cb66d5112b82aed886c7c7c26)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_c8c7811d98ae5e23aee30bfc4d19e4a8)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_d809140cc32452d78ace70e5e84f26ec)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_a2e60e76996e5c65a915a81bf23fc091)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_5644a1ec49d45bbd816514ba3f20db9b)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::conservativeResize;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_289fcd47a8c45e69a3355a1521127d1f)(long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_f96f28619d9150be87a2be7d16575ef8)(long int , long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_0baca53a0dbd543098b98927f2f19118)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_8f33e105cfb95336a790d0f6cfcccf2e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_fd351c977ded5504a68bd9e6118a18a3)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_cb4248fa7cee54838059eef3c9f5452d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_275ed683f56755a58325f921aaa1f93f)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setRandom;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_ac40161fa2f754e9b8444778fb8befa8)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setRandom;
    void  (*method_pointer_efb96769d44f5a3f80d30c63cf0ba99d)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > > > class_0a7ade2108c555b4a9225aa11d879883("_PlainObjectBase_0a7ade2108c555b4a9225aa11d879883", "", boost::python::no_init);
    class_0a7ade2108c555b4a9225aa11d879883.def("base", method_pointer_c3fd482071bc51b9bcb15b72ae13f089, boost::python::return_internal_reference<>(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("base", autowig::method_decorator_c3fd482071bc51b9bcb15b72ae13f089);
    class_0a7ade2108c555b4a9225aa11d879883.def("base", method_pointer_fdc25758f757586298221e468abd12e3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("rows", method_pointer_e96946f4a08d55c091b12c815e4a8a58, "");
    class_0a7ade2108c555b4a9225aa11d879883.def("cols", method_pointer_a0b2d4e9757756d4881e7461d9855c6c, "");
    class_0a7ade2108c555b4a9225aa11d879883.def("coeff", method_pointer_c489f6f62d9254ed9b471857d4817995, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("coeff", method_pointer_bf316868c6ae50c287c0f629473273dc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("coeff_ref", method_pointer_8cacdef349e452ac9894b088e133a024, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("coeff_ref", autowig::method_decorator_8cacdef349e452ac9894b088e133a024);
    class_0a7ade2108c555b4a9225aa11d879883.def("coeff_ref", method_pointer_521ad4d5058952529b3d561a34935a80, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("coeff_ref", autowig::method_decorator_521ad4d5058952529b3d561a34935a80);
    class_0a7ade2108c555b4a9225aa11d879883.def("coeff_ref", method_pointer_b0b53c505faa5067b089ca2d73bec941, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("coeff_ref", method_pointer_c243fead00855c8ab36a2eb3a737838a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("resize", method_pointer_c5454f6cb22a512d97c82f9731ac60d1, "");
    class_0a7ade2108c555b4a9225aa11d879883.def("resize", method_pointer_f625712552635e5bb3b11f4bd0400308, "");
    class_0a7ade2108c555b4a9225aa11d879883.def("resize", method_pointer_808aafb7ae995e6aaca386988cce3f34, "");
    class_0a7ade2108c555b4a9225aa11d879883.def("resize", method_pointer_15753e1cb66d5112b82aed886c7c7c26, "");
    class_0a7ade2108c555b4a9225aa11d879883.def("conservative_resize", method_pointer_c8c7811d98ae5e23aee30bfc4d19e4a8, "");
    class_0a7ade2108c555b4a9225aa11d879883.def("conservative_resize", method_pointer_d809140cc32452d78ace70e5e84f26ec, "");
    class_0a7ade2108c555b4a9225aa11d879883.def("conservative_resize", method_pointer_a2e60e76996e5c65a915a81bf23fc091, "");
    class_0a7ade2108c555b4a9225aa11d879883.def("conservative_resize", method_pointer_5644a1ec49d45bbd816514ba3f20db9b, "");
    class_0a7ade2108c555b4a9225aa11d879883.def("set_constant", method_pointer_289fcd47a8c45e69a3355a1521127d1f, boost::python::return_internal_reference<>(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("set_constant", autowig::method_decorator_289fcd47a8c45e69a3355a1521127d1f);
    class_0a7ade2108c555b4a9225aa11d879883.def("set_constant", method_pointer_f96f28619d9150be87a2be7d16575ef8, boost::python::return_internal_reference<>(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("set_constant", autowig::method_decorator_f96f28619d9150be87a2be7d16575ef8);
    class_0a7ade2108c555b4a9225aa11d879883.def("set_zero", method_pointer_0baca53a0dbd543098b98927f2f19118, boost::python::return_internal_reference<>(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("set_zero", autowig::method_decorator_0baca53a0dbd543098b98927f2f19118);
    class_0a7ade2108c555b4a9225aa11d879883.def("set_zero", method_pointer_8f33e105cfb95336a790d0f6cfcccf2e, boost::python::return_internal_reference<>(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("set_zero", autowig::method_decorator_8f33e105cfb95336a790d0f6cfcccf2e);
    class_0a7ade2108c555b4a9225aa11d879883.def("set_ones", method_pointer_fd351c977ded5504a68bd9e6118a18a3, boost::python::return_internal_reference<>(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("set_ones", autowig::method_decorator_fd351c977ded5504a68bd9e6118a18a3);
    class_0a7ade2108c555b4a9225aa11d879883.def("set_ones", method_pointer_cb4248fa7cee54838059eef3c9f5452d, boost::python::return_internal_reference<>(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("set_ones", autowig::method_decorator_cb4248fa7cee54838059eef3c9f5452d);
    class_0a7ade2108c555b4a9225aa11d879883.def("set_random", method_pointer_275ed683f56755a58325f921aaa1f93f, boost::python::return_internal_reference<>(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("set_random", autowig::method_decorator_275ed683f56755a58325f921aaa1f93f);
    class_0a7ade2108c555b4a9225aa11d879883.def("set_random", method_pointer_ac40161fa2f754e9b8444778fb8befa8, boost::python::return_internal_reference<>(), "");
    class_0a7ade2108c555b4a9225aa11d879883.def("set_random", autowig::method_decorator_ac40161fa2f754e9b8444778fb8befa8);
    class_0a7ade2108c555b4a9225aa11d879883.def("check_template_params", method_pointer_efb96769d44f5a3f80d30c63cf0ba99d, "");
    class_0a7ade2108c555b4a9225aa11d879883.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > > >();
    }

}