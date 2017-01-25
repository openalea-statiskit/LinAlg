#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2486e303ed365ee09210adad9f8e8034(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_b29641dacc3d55c4b2a3ee5f02edb741(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_045951374a5c5acd974884f278fcd57f(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, struct ::std::complex< double >  const & param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_b2555aae150b53c2bfd4b6acff709cab(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_30739afe94e452c284b5916b5d7c37c2(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_94d2b5e4f2da5e2a9de477138b2d459f(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_1e16c00daade5a1699cae0c7cc148903(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_a2d78c86b0f65c8bb352da67061b479a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_14bb6fb2bd7552429087e50a96bcf80f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_02f3ad0956d6534b84dd52c26cf3dccf)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_b5e558646c5e547dac2287455b5f5121)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_3862f4d08b135f1a85835b7e55f1c3ed)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_d47c30b405605c39a520b783e55eb6c2)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_becc1f2366ca5e10a1637dbf99f6ec8c)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_d69b2110c8e95fd0af64a4e76ade3a6e)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_2486e303ed365ee09210adad9f8e8034)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_b29641dacc3d55c4b2a3ee5f02edb741)(long int , struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_045951374a5c5acd974884f278fcd57f)(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_b2555aae150b53c2bfd4b6acff709cab)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_30739afe94e452c284b5916b5d7c37c2)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_94d2b5e4f2da5e2a9de477138b2d459f)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_4c8c47df881d5c13ac5b374c7c5b6a8e)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_4bdb57c627fc5cdfa053af3a4cd0310d)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_ccb1627c64805ceb86795e157ff93841)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_ca469f195df65eee940194dac3fa2fcd)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_771842f68e4b57ff9737abf011b35867)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_a83b275baf115464801979142b2baab9)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_95bc59b07972552aaa916b11f387ce05)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_1e16c00daade5a1699cae0c7cc148903)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_0bd1839c9eaf5567b56af2bccc372cfc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::eval;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_d0bc7fa9827854a0b79312667ac6ee2d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::sum;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_20bf6c715b11587baa4e1ffda5b94c47)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::mean;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_26e7ced1961859199a0021ce2e3c38fb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::trace;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_29abf432ce375fe188bf1703a5acb8ac)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::prod;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_08ae36403eef595c8788436101bd07f3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::minCoeff;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_1fa65d98a91552e49b91f0081ebd19ac)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::maxCoeff;
    struct ::std::complex< double >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_04e0e42b25b553bbb60199a601cda6d4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_0bbc45030aae56e5990dc6e8de423677)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_1b71986e4fce5ce58791fdff2e522276)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_ede7fc1928ad5e4b83c9ddd1dacec3de)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 > >::*method_pointer_f4daad3248825dc2af7ad62c6471f123)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 > > > class_a2d78c86b0f65c8bb352da67061b479a("_DenseBase_a2d78c86b0f65c8bb352da67061b479a", "", boost::python::no_init);
    class_a2d78c86b0f65c8bb352da67061b479a.def("non_zeros", method_pointer_14bb6fb2bd7552429087e50a96bcf80f, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("outer_size", method_pointer_02f3ad0956d6534b84dd52c26cf3dccf, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("inner_size", method_pointer_b5e558646c5e547dac2287455b5f5121, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("resize", method_pointer_3862f4d08b135f1a85835b7e55f1c3ed, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("resize", method_pointer_d47c30b405605c39a520b783e55eb6c2, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("transpose_in_place", method_pointer_becc1f2366ca5e10a1637dbf99f6ec8c, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("fill", method_pointer_d69b2110c8e95fd0af64a4e76ade3a6e, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("set_constant", method_pointer_2486e303ed365ee09210adad9f8e8034, boost::python::return_internal_reference<>(), "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("set_constant", autowig::method_decorator_2486e303ed365ee09210adad9f8e8034);
    class_a2d78c86b0f65c8bb352da67061b479a.def("set_lin_spaced", method_pointer_b29641dacc3d55c4b2a3ee5f02edb741, boost::python::return_internal_reference<>(), "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("set_lin_spaced", autowig::method_decorator_b29641dacc3d55c4b2a3ee5f02edb741);
    class_a2d78c86b0f65c8bb352da67061b479a.def("set_lin_spaced", method_pointer_045951374a5c5acd974884f278fcd57f, boost::python::return_internal_reference<>(), "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("set_lin_spaced", autowig::method_decorator_045951374a5c5acd974884f278fcd57f);
    class_a2d78c86b0f65c8bb352da67061b479a.def("set_zero", method_pointer_b2555aae150b53c2bfd4b6acff709cab, boost::python::return_internal_reference<>(), "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("set_zero", autowig::method_decorator_b2555aae150b53c2bfd4b6acff709cab);
    class_a2d78c86b0f65c8bb352da67061b479a.def("set_ones", method_pointer_30739afe94e452c284b5916b5d7c37c2, boost::python::return_internal_reference<>(), "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("set_ones", autowig::method_decorator_30739afe94e452c284b5916b5d7c37c2);
    class_a2d78c86b0f65c8bb352da67061b479a.def("set_random", method_pointer_94d2b5e4f2da5e2a9de477138b2d459f, boost::python::return_internal_reference<>(), "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("set_random", autowig::method_decorator_94d2b5e4f2da5e2a9de477138b2d459f);
    class_a2d78c86b0f65c8bb352da67061b479a.def("is_much_smaller_than", method_pointer_4c8c47df881d5c13ac5b374c7c5b6a8e, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("is_approx_to_constant", method_pointer_4bdb57c627fc5cdfa053af3a4cd0310d, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("is_constant", method_pointer_ccb1627c64805ceb86795e157ff93841, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("is_zero", method_pointer_ca469f195df65eee940194dac3fa2fcd, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("is_ones", method_pointer_771842f68e4b57ff9737abf011b35867, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("has_na_n", method_pointer_a83b275baf115464801979142b2baab9, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("all_finite", method_pointer_95bc59b07972552aaa916b11f387ce05, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("__imul__", method_pointer_1e16c00daade5a1699cae0c7cc148903, boost::python::return_internal_reference<>(), "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("__imul__", autowig::method_decorator_1e16c00daade5a1699cae0c7cc148903);
    class_a2d78c86b0f65c8bb352da67061b479a.def("eval", method_pointer_0bd1839c9eaf5567b56af2bccc372cfc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("sum", method_pointer_d0bc7fa9827854a0b79312667ac6ee2d, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("mean", method_pointer_20bf6c715b11587baa4e1ffda5b94c47, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("trace", method_pointer_26e7ced1961859199a0021ce2e3c38fb, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("prod", method_pointer_29abf432ce375fe188bf1703a5acb8ac, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("min_coeff", method_pointer_08ae36403eef595c8788436101bd07f3, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("max_coeff", method_pointer_1fa65d98a91552e49b91f0081ebd19ac, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("value", method_pointer_04e0e42b25b553bbb60199a601cda6d4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("all", method_pointer_0bbc45030aae56e5990dc6e8de423677, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("any", method_pointer_1b71986e4fce5ce58791fdff2e522276, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("count", method_pointer_ede7fc1928ad5e4b83c9ddd1dacec3de, "");
    class_a2d78c86b0f65c8bb352da67061b479a.def("reverse_in_place", method_pointer_f4daad3248825dc2af7ad62c6471f123, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 > > >();
    }

}