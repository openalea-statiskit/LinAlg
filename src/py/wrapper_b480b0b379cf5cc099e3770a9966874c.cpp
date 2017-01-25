#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f86f535089c55d2b93dd11d1f7f243d1(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_a1c388a6f91d58d28b92cf8263f4c321(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, float  const & param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_e8de5fca38e75e3bbc3700df6f535e3c(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, float  const & param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_41500ebf10645cc7afb28bdbb6714744(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_e415a0fb01a35b6d91b7ebd80e057c59(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_82e27278be9e5e9eac3e44d3e7681da4(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_fa9badc73509583b98112fe1e7275fac(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_b480b0b379cf5cc099e3770a9966874c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_358c049d7db15c73878742104b71d107)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_957ea31c4b1c50f8a6e031bfd37686bd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_21d5dc1ed1165dfbbe65ff889573a50a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_c962837d59235392bd0d99eebe8b609e)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_c92f37a1c02954fc9ee1e52a0803c249)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_9607de72722b5a729e7b02ceeb25d086)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_c96f76ca68a75f80b2eee16707326237)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::fill;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_f86f535089c55d2b93dd11d1f7f243d1)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_a1c388a6f91d58d28b92cf8263f4c321)(long int , float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_e8de5fca38e75e3bbc3700df6f535e3c)(float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_41500ebf10645cc7afb28bdbb6714744)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_e415a0fb01a35b6d91b7ebd80e057c59)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_82e27278be9e5e9eac3e44d3e7681da4)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_f244eb19953c5c49bc56bc238485bad9)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_9a2cc673730f5b9380080f734ec50962)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_511b90f9c05054498022ae054d2a6730)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_ed3eba24a483525e8c6107b35008c201)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_b0ac193e416d515089f6a2fca2d35778)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_6516260e4f3b5a2086e56f66e2815cc5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_48176bc652f7592595d355d0b797962b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::allFinite;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_fa9badc73509583b98112fe1e7275fac)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::operator*=;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_38196b1948315fa3bf2ee0750a81aec2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::eval;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_ab6628e73a2c5d7199a4c4caa9ac0aa6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::sum;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_be51dac4029d5debbdda3e9c08b3673d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::mean;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_0a38be1a52b3518a95b3b9561f0c84ef)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::trace;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_99cb6b81dda15bff82e85b18ac5b45e8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::prod;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_75ccc6c97ec0535488fd14607415373f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::minCoeff;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_7251e721bddb53fdafe1eedd228524df)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::maxCoeff;
    float  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_185aed3612f55cf782b22cf45f11b9f0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_9f518865356d5fc99d41a1fe79d41338)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_134f54c648a7546e9a32e21ae16a30c8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_a048a4b5bf6e5a2da166e265b78a52be)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_47e9e0dbae5e5be3a5f2905327429c10)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 > > > class_b480b0b379cf5cc099e3770a9966874c("_DenseBase_b480b0b379cf5cc099e3770a9966874c", "", boost::python::no_init);
    class_b480b0b379cf5cc099e3770a9966874c.def("non_zeros", method_pointer_358c049d7db15c73878742104b71d107, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("outer_size", method_pointer_957ea31c4b1c50f8a6e031bfd37686bd, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("inner_size", method_pointer_21d5dc1ed1165dfbbe65ff889573a50a, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("resize", method_pointer_c962837d59235392bd0d99eebe8b609e, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("resize", method_pointer_c92f37a1c02954fc9ee1e52a0803c249, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("transpose_in_place", method_pointer_9607de72722b5a729e7b02ceeb25d086, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("fill", method_pointer_c96f76ca68a75f80b2eee16707326237, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("set_constant", method_pointer_f86f535089c55d2b93dd11d1f7f243d1, boost::python::return_internal_reference<>(), "");
    class_b480b0b379cf5cc099e3770a9966874c.def("set_constant", autowig::method_decorator_f86f535089c55d2b93dd11d1f7f243d1);
    class_b480b0b379cf5cc099e3770a9966874c.def("set_lin_spaced", method_pointer_a1c388a6f91d58d28b92cf8263f4c321, boost::python::return_internal_reference<>(), "");
    class_b480b0b379cf5cc099e3770a9966874c.def("set_lin_spaced", autowig::method_decorator_a1c388a6f91d58d28b92cf8263f4c321);
    class_b480b0b379cf5cc099e3770a9966874c.def("set_lin_spaced", method_pointer_e8de5fca38e75e3bbc3700df6f535e3c, boost::python::return_internal_reference<>(), "");
    class_b480b0b379cf5cc099e3770a9966874c.def("set_lin_spaced", autowig::method_decorator_e8de5fca38e75e3bbc3700df6f535e3c);
    class_b480b0b379cf5cc099e3770a9966874c.def("set_zero", method_pointer_41500ebf10645cc7afb28bdbb6714744, boost::python::return_internal_reference<>(), "");
    class_b480b0b379cf5cc099e3770a9966874c.def("set_zero", autowig::method_decorator_41500ebf10645cc7afb28bdbb6714744);
    class_b480b0b379cf5cc099e3770a9966874c.def("set_ones", method_pointer_e415a0fb01a35b6d91b7ebd80e057c59, boost::python::return_internal_reference<>(), "");
    class_b480b0b379cf5cc099e3770a9966874c.def("set_ones", autowig::method_decorator_e415a0fb01a35b6d91b7ebd80e057c59);
    class_b480b0b379cf5cc099e3770a9966874c.def("set_random", method_pointer_82e27278be9e5e9eac3e44d3e7681da4, boost::python::return_internal_reference<>(), "");
    class_b480b0b379cf5cc099e3770a9966874c.def("set_random", autowig::method_decorator_82e27278be9e5e9eac3e44d3e7681da4);
    class_b480b0b379cf5cc099e3770a9966874c.def("is_much_smaller_than", method_pointer_f244eb19953c5c49bc56bc238485bad9, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("is_approx_to_constant", method_pointer_9a2cc673730f5b9380080f734ec50962, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("is_constant", method_pointer_511b90f9c05054498022ae054d2a6730, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("is_zero", method_pointer_ed3eba24a483525e8c6107b35008c201, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("is_ones", method_pointer_b0ac193e416d515089f6a2fca2d35778, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("has_na_n", method_pointer_6516260e4f3b5a2086e56f66e2815cc5, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("all_finite", method_pointer_48176bc652f7592595d355d0b797962b, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("__imul__", method_pointer_fa9badc73509583b98112fe1e7275fac, boost::python::return_internal_reference<>(), "");
    class_b480b0b379cf5cc099e3770a9966874c.def("__imul__", autowig::method_decorator_fa9badc73509583b98112fe1e7275fac);
    class_b480b0b379cf5cc099e3770a9966874c.def("eval", method_pointer_38196b1948315fa3bf2ee0750a81aec2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b480b0b379cf5cc099e3770a9966874c.def("sum", method_pointer_ab6628e73a2c5d7199a4c4caa9ac0aa6, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("mean", method_pointer_be51dac4029d5debbdda3e9c08b3673d, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("trace", method_pointer_0a38be1a52b3518a95b3b9561f0c84ef, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("prod", method_pointer_99cb6b81dda15bff82e85b18ac5b45e8, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("min_coeff", method_pointer_75ccc6c97ec0535488fd14607415373f, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("max_coeff", method_pointer_7251e721bddb53fdafe1eedd228524df, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("value", method_pointer_185aed3612f55cf782b22cf45f11b9f0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b480b0b379cf5cc099e3770a9966874c.def("all", method_pointer_9f518865356d5fc99d41a1fe79d41338, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("any", method_pointer_134f54c648a7546e9a32e21ae16a30c8, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("count", method_pointer_a048a4b5bf6e5a2da166e265b78a52be, "");
    class_b480b0b379cf5cc099e3770a9966874c.def("reverse_in_place", method_pointer_47e9e0dbae5e5be3a5f2905327429c10, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, 3 > > >();
    }

}