#include "_ieigen.h"


namespace autowig
{
    void method_decorator_bf35d879de7a58d3ada2b62781b79846(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_dfd3b00c51e2510bba9fb6419f78a6e1(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, double  const & param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_3f95b40dc3a65efc98e75ecc44ae0462(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, double  const & param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_6adec0fa27cd5310aaad5bfa7dbb2239(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_69028ae61331504bb93d2f1d93dafdc7(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_29b4dcbfcb5452bc87819767e7a1f907(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_b674427a05cf5151b8569b1a4fc5fb03(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_37c286070065594fad4ee5b6ca5a91a5()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_d4b0baf204c255c485738cdecf350fb9)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_ecc9b23d1f2d5c0daf773d481f526dbf)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_95c8cfb596dd5c74b0d068c63ca63a2e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_0648516b34da5497a17ef26e08279f3d)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_51ac55aab64d52e39a4635b16dbffa48)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_4fd84575d64b5054bf196df184f9f33a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_c51aeb124f6e549887e7f45f60566505)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::fill;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_bf35d879de7a58d3ada2b62781b79846)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_dfd3b00c51e2510bba9fb6419f78a6e1)(long int , double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_3f95b40dc3a65efc98e75ecc44ae0462)(double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_6adec0fa27cd5310aaad5bfa7dbb2239)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_69028ae61331504bb93d2f1d93dafdc7)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_29b4dcbfcb5452bc87819767e7a1f907)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_4f52af253219569793ca83f5e2ad0cc6)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_4746ee6fcc685e87ace89b2a8fd4c2b9)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_9b1de8d7bc795b74af223efaaf2728a1)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_cae6448becb4596ab7af5be448e36d54)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_21637acd3a2f5d6ea8079e47a66c5ecd)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_3d02af82a56c58a4a0ac1f7b7d90c482)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_36e52dd4703f53e988cab6393e74c921)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::allFinite;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_b674427a05cf5151b8569b1a4fc5fb03)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::operator*=;
    class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_a475e14c6f2a5e309aac5c5178b8a3a4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::eval;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_d8ea4592f42659af8090496e507deedf)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::sum;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_a68797daaf9e5a1a903057ef01035a9b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::mean;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_a13147437f945058934bc5e32dafeb6b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::trace;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_4018ae5542a957bcad5e3cfa590d0c04)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::prod;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_dc492732ec4b565daa9261de8d2b64f6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::minCoeff;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_62438ca17ec657318c7fd89116fc7683)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::maxCoeff;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_35ea6df5e5d6570a8d6b495c2d0b9f74)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_2ee26bfff66e5492b8c58034a97af491)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_65eda98cd8c25f2d83f5b71e80cd2d6a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::*method_pointer_7a02ce7f57b654a7821df6207a9a6d88)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 > > > class_37c286070065594fad4ee5b6ca5a91a5("_DenseBase_37c286070065594fad4ee5b6ca5a91a5", "", boost::python::no_init);
    class_37c286070065594fad4ee5b6ca5a91a5.def("non_zeros", method_pointer_d4b0baf204c255c485738cdecf350fb9, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("outer_size", method_pointer_ecc9b23d1f2d5c0daf773d481f526dbf, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("inner_size", method_pointer_95c8cfb596dd5c74b0d068c63ca63a2e, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("resize", method_pointer_0648516b34da5497a17ef26e08279f3d, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("resize", method_pointer_51ac55aab64d52e39a4635b16dbffa48, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("transpose_in_place", method_pointer_4fd84575d64b5054bf196df184f9f33a, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("fill", method_pointer_c51aeb124f6e549887e7f45f60566505, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("set_constant", method_pointer_bf35d879de7a58d3ada2b62781b79846, boost::python::return_internal_reference<>(), "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("set_constant", autowig::method_decorator_bf35d879de7a58d3ada2b62781b79846);
    class_37c286070065594fad4ee5b6ca5a91a5.def("set_lin_spaced", method_pointer_dfd3b00c51e2510bba9fb6419f78a6e1, boost::python::return_internal_reference<>(), "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("set_lin_spaced", autowig::method_decorator_dfd3b00c51e2510bba9fb6419f78a6e1);
    class_37c286070065594fad4ee5b6ca5a91a5.def("set_lin_spaced", method_pointer_3f95b40dc3a65efc98e75ecc44ae0462, boost::python::return_internal_reference<>(), "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("set_lin_spaced", autowig::method_decorator_3f95b40dc3a65efc98e75ecc44ae0462);
    class_37c286070065594fad4ee5b6ca5a91a5.def("set_zero", method_pointer_6adec0fa27cd5310aaad5bfa7dbb2239, boost::python::return_internal_reference<>(), "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("set_zero", autowig::method_decorator_6adec0fa27cd5310aaad5bfa7dbb2239);
    class_37c286070065594fad4ee5b6ca5a91a5.def("set_ones", method_pointer_69028ae61331504bb93d2f1d93dafdc7, boost::python::return_internal_reference<>(), "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("set_ones", autowig::method_decorator_69028ae61331504bb93d2f1d93dafdc7);
    class_37c286070065594fad4ee5b6ca5a91a5.def("set_random", method_pointer_29b4dcbfcb5452bc87819767e7a1f907, boost::python::return_internal_reference<>(), "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("set_random", autowig::method_decorator_29b4dcbfcb5452bc87819767e7a1f907);
    class_37c286070065594fad4ee5b6ca5a91a5.def("is_much_smaller_than", method_pointer_4f52af253219569793ca83f5e2ad0cc6, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("is_approx_to_constant", method_pointer_4746ee6fcc685e87ace89b2a8fd4c2b9, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("is_constant", method_pointer_9b1de8d7bc795b74af223efaaf2728a1, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("is_zero", method_pointer_cae6448becb4596ab7af5be448e36d54, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("is_ones", method_pointer_21637acd3a2f5d6ea8079e47a66c5ecd, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("has_na_n", method_pointer_3d02af82a56c58a4a0ac1f7b7d90c482, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("all_finite", method_pointer_36e52dd4703f53e988cab6393e74c921, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("__imul__", method_pointer_b674427a05cf5151b8569b1a4fc5fb03, boost::python::return_internal_reference<>(), "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("__imul__", autowig::method_decorator_b674427a05cf5151b8569b1a4fc5fb03);
    class_37c286070065594fad4ee5b6ca5a91a5.def("eval", method_pointer_a475e14c6f2a5e309aac5c5178b8a3a4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("sum", method_pointer_d8ea4592f42659af8090496e507deedf, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("mean", method_pointer_a68797daaf9e5a1a903057ef01035a9b, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("trace", method_pointer_a13147437f945058934bc5e32dafeb6b, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("prod", method_pointer_4018ae5542a957bcad5e3cfa590d0c04, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("min_coeff", method_pointer_dc492732ec4b565daa9261de8d2b64f6, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("max_coeff", method_pointer_62438ca17ec657318c7fd89116fc7683, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("all", method_pointer_35ea6df5e5d6570a8d6b495c2d0b9f74, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("any", method_pointer_2ee26bfff66e5492b8c58034a97af491, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("count", method_pointer_65eda98cd8c25f2d83f5b71e80cd2d6a, "");
    class_37c286070065594fad4ee5b6ca5a91a5.def("reverse_in_place", method_pointer_7a02ce7f57b654a7821df6207a9a6d88, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 > > >();
    }

}