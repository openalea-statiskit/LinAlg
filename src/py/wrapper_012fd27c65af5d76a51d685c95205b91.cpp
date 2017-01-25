#include "_ieigen.h"


namespace autowig
{
    void method_decorator_67ca2169f27b5a07af00aef0ca874175(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_e8b172b3a59a5d338eb26d517f214590(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, float  const & param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_c601287ab12b576f9fd9aa2e88dfa1b0(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, float  const & param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_0e287d8bb3655f0b865a125440043702(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_1b71ce43e9c3530a960c7c2dfc30197d(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_e1788abacee75e1daa8903f37b27b0d0(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_a18689c78f755438814d304b5864f8c7(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_012fd27c65af5d76a51d685c95205b91()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_ccdcb16a75e15317afe55a0a100de9ff)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_af232324ce465ece8f192d4de137b45b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_731ee04f0c0b50f18b5b28068d5fa0f2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_0b65ba736b115e88bee5fcad26227eea)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_d152393558fa5c64b97bfd4f00ccdc3e)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_fbecfac5588e501789fab356786b2da6)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_6a5efc34bce25fa8b4f5baeba8722bc4)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::fill;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_67ca2169f27b5a07af00aef0ca874175)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setConstant;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_e8b172b3a59a5d338eb26d517f214590)(long int , float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_c601287ab12b576f9fd9aa2e88dfa1b0)(float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_0e287d8bb3655f0b865a125440043702)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_1b71ce43e9c3530a960c7c2dfc30197d)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_e1788abacee75e1daa8903f37b27b0d0)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_967eb6e6398c53c8bb96e2e58fd69ef6)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_3c2e28bbaf1950b7be62fb2cacf23e49)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_aa8adc8fc790564d8dcd6f330cb7f14e)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_c978847ba3f050a686a9b6e2c75a3abb)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_6ea420d3576451919807e8f2abf58207)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_72645555c3f450f9827808e5adb255b9)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_ee47afaab1ad5c14b2b8c36d9d4cd497)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::allFinite;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_a18689c78f755438814d304b5864f8c7)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::operator*=;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_ceb20b6a54b55118bb93e2fa9f66b8ca)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::eval;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_e687856b5b555f75973b4a0a95799236)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::sum;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_87007aa9f70555bc97a9cc6b160dae95)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::mean;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_c7ea96a718725e14ade7038b4a2cdb86)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::trace;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_6d7031af719050ccaaa36f7d67e4d54d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::prod;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_023761ec2cd8544b974ec37ae0dab293)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::minCoeff;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_7b12eef7f2d1536c9084367cdc04e4bc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::maxCoeff;
    float  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_976352b2f6de5581a7afffbce82e1a12)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_04fa383617f65575bb4030c6ff40172b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_e03cde90c81450dbb1416c3dff8780a2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_5408f672942b55a8b8768601486cedad)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_df12c502c43657438539948b400ff3dd)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 > > > class_012fd27c65af5d76a51d685c95205b91("_DenseBase_012fd27c65af5d76a51d685c95205b91", "", boost::python::no_init);
    class_012fd27c65af5d76a51d685c95205b91.def("non_zeros", method_pointer_ccdcb16a75e15317afe55a0a100de9ff, "");
    class_012fd27c65af5d76a51d685c95205b91.def("outer_size", method_pointer_af232324ce465ece8f192d4de137b45b, "");
    class_012fd27c65af5d76a51d685c95205b91.def("inner_size", method_pointer_731ee04f0c0b50f18b5b28068d5fa0f2, "");
    class_012fd27c65af5d76a51d685c95205b91.def("resize", method_pointer_0b65ba736b115e88bee5fcad26227eea, "");
    class_012fd27c65af5d76a51d685c95205b91.def("resize", method_pointer_d152393558fa5c64b97bfd4f00ccdc3e, "");
    class_012fd27c65af5d76a51d685c95205b91.def("transpose_in_place", method_pointer_fbecfac5588e501789fab356786b2da6, "");
    class_012fd27c65af5d76a51d685c95205b91.def("fill", method_pointer_6a5efc34bce25fa8b4f5baeba8722bc4, "");
    class_012fd27c65af5d76a51d685c95205b91.def("set_constant", method_pointer_67ca2169f27b5a07af00aef0ca874175, boost::python::return_internal_reference<>(), "");
    class_012fd27c65af5d76a51d685c95205b91.def("set_constant", autowig::method_decorator_67ca2169f27b5a07af00aef0ca874175);
    class_012fd27c65af5d76a51d685c95205b91.def("set_lin_spaced", method_pointer_e8b172b3a59a5d338eb26d517f214590, boost::python::return_internal_reference<>(), "");
    class_012fd27c65af5d76a51d685c95205b91.def("set_lin_spaced", autowig::method_decorator_e8b172b3a59a5d338eb26d517f214590);
    class_012fd27c65af5d76a51d685c95205b91.def("set_lin_spaced", method_pointer_c601287ab12b576f9fd9aa2e88dfa1b0, boost::python::return_internal_reference<>(), "");
    class_012fd27c65af5d76a51d685c95205b91.def("set_lin_spaced", autowig::method_decorator_c601287ab12b576f9fd9aa2e88dfa1b0);
    class_012fd27c65af5d76a51d685c95205b91.def("set_zero", method_pointer_0e287d8bb3655f0b865a125440043702, boost::python::return_internal_reference<>(), "");
    class_012fd27c65af5d76a51d685c95205b91.def("set_zero", autowig::method_decorator_0e287d8bb3655f0b865a125440043702);
    class_012fd27c65af5d76a51d685c95205b91.def("set_ones", method_pointer_1b71ce43e9c3530a960c7c2dfc30197d, boost::python::return_internal_reference<>(), "");
    class_012fd27c65af5d76a51d685c95205b91.def("set_ones", autowig::method_decorator_1b71ce43e9c3530a960c7c2dfc30197d);
    class_012fd27c65af5d76a51d685c95205b91.def("set_random", method_pointer_e1788abacee75e1daa8903f37b27b0d0, boost::python::return_internal_reference<>(), "");
    class_012fd27c65af5d76a51d685c95205b91.def("set_random", autowig::method_decorator_e1788abacee75e1daa8903f37b27b0d0);
    class_012fd27c65af5d76a51d685c95205b91.def("is_much_smaller_than", method_pointer_967eb6e6398c53c8bb96e2e58fd69ef6, "");
    class_012fd27c65af5d76a51d685c95205b91.def("is_approx_to_constant", method_pointer_3c2e28bbaf1950b7be62fb2cacf23e49, "");
    class_012fd27c65af5d76a51d685c95205b91.def("is_constant", method_pointer_aa8adc8fc790564d8dcd6f330cb7f14e, "");
    class_012fd27c65af5d76a51d685c95205b91.def("is_zero", method_pointer_c978847ba3f050a686a9b6e2c75a3abb, "");
    class_012fd27c65af5d76a51d685c95205b91.def("is_ones", method_pointer_6ea420d3576451919807e8f2abf58207, "");
    class_012fd27c65af5d76a51d685c95205b91.def("has_na_n", method_pointer_72645555c3f450f9827808e5adb255b9, "");
    class_012fd27c65af5d76a51d685c95205b91.def("all_finite", method_pointer_ee47afaab1ad5c14b2b8c36d9d4cd497, "");
    class_012fd27c65af5d76a51d685c95205b91.def("__imul__", method_pointer_a18689c78f755438814d304b5864f8c7, boost::python::return_internal_reference<>(), "");
    class_012fd27c65af5d76a51d685c95205b91.def("__imul__", autowig::method_decorator_a18689c78f755438814d304b5864f8c7);
    class_012fd27c65af5d76a51d685c95205b91.def("eval", method_pointer_ceb20b6a54b55118bb93e2fa9f66b8ca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_012fd27c65af5d76a51d685c95205b91.def("sum", method_pointer_e687856b5b555f75973b4a0a95799236, "");
    class_012fd27c65af5d76a51d685c95205b91.def("mean", method_pointer_87007aa9f70555bc97a9cc6b160dae95, "");
    class_012fd27c65af5d76a51d685c95205b91.def("trace", method_pointer_c7ea96a718725e14ade7038b4a2cdb86, "");
    class_012fd27c65af5d76a51d685c95205b91.def("prod", method_pointer_6d7031af719050ccaaa36f7d67e4d54d, "");
    class_012fd27c65af5d76a51d685c95205b91.def("min_coeff", method_pointer_023761ec2cd8544b974ec37ae0dab293, "");
    class_012fd27c65af5d76a51d685c95205b91.def("max_coeff", method_pointer_7b12eef7f2d1536c9084367cdc04e4bc, "");
    class_012fd27c65af5d76a51d685c95205b91.def("value", method_pointer_976352b2f6de5581a7afffbce82e1a12, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_012fd27c65af5d76a51d685c95205b91.def("all", method_pointer_04fa383617f65575bb4030c6ff40172b, "");
    class_012fd27c65af5d76a51d685c95205b91.def("any", method_pointer_e03cde90c81450dbb1416c3dff8780a2, "");
    class_012fd27c65af5d76a51d685c95205b91.def("count", method_pointer_5408f672942b55a8b8768601486cedad, "");
    class_012fd27c65af5d76a51d685c95205b91.def("reverse_in_place", method_pointer_df12c502c43657438539948b400ff3dd, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 3 > > >();
    }

}