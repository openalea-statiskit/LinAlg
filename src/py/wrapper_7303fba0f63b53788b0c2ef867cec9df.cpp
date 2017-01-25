#include "_ieigen.h"


namespace autowig
{
    void method_decorator_9c14b4aa48b65a2c9c7aea5d0a279dc0(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_c4b23ff34a025ee29144f4d81402bfde(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_83c6b59a5b895e5ea176319836f0cda8(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, struct ::std::complex< float >  const & param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_96223de631765aa8b12c042132668c2d(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_cda963dc5ff15a069bed81cd9cc772a4(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_01ef3fccf19253f1aa6e998c815b3185(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_728290143d0058fab1aed9e145ef2100(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_7303fba0f63b53788b0c2ef867cec9df()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_219866d4c9e85c8bb9a2f29212b1093c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_feab5fe402355b9bb87f3b8bd9924198)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_30068a0dca2e57639bd6f55190b744b0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_461597a546925be6b1aae77fb0cbc602)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_7249107f77d15a2db3314c6471c55c6c)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_ebf539023308534e99dce0121cc55aab)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_b15e18d638cc5a338ea9483ab0d98fbc)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_9c14b4aa48b65a2c9c7aea5d0a279dc0)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_c4b23ff34a025ee29144f4d81402bfde)(long int , struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_83c6b59a5b895e5ea176319836f0cda8)(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_96223de631765aa8b12c042132668c2d)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_cda963dc5ff15a069bed81cd9cc772a4)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_01ef3fccf19253f1aa6e998c815b3185)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_2287061febb05c38abaa9634a87c62e6)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_a1e17a5348595f40a47abb503251ad50)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_43cf2cbc13365bce9d9dab6cef38c7f1)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_4469f15e7f2e5f75bf1d563ca585db8e)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_bee7fdd96ea85f84bdd3e74e3b901234)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_a58240781594546294f30534f9912860)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_4e98acb0244b50a9b1c9630b3169a47a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_728290143d0058fab1aed9e145ef2100)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_dde8c5e16aec59078a3815ffd9a6da85)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::eval;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_c069f86643bd5befbe223c31b020b124)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::sum;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_85ce0a6759ed5555ae88b31674ec4d8a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::mean;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_a8a2ec19822e5984938916665f8356cf)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::trace;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_0bc1ee2d9b5c54ac9d81fe740079fce3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::prod;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_a426206228db56af825718b8fe5d48d8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::minCoeff;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_331dd66190f851a890631b17870cbbf7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::maxCoeff;
    struct ::std::complex< float >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_631f33c615ad518f87c15705a9edac76)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_28467c111a9f5012b955a2c63819baba)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_5b0509492f0050bca125f2a7365d9b6b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_0f0b805270a1595498f618ebf34046d6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_f0616ab6f499522fa64180d209f55617)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 > > > class_7303fba0f63b53788b0c2ef867cec9df("_DenseBase_7303fba0f63b53788b0c2ef867cec9df", "", boost::python::no_init);
    class_7303fba0f63b53788b0c2ef867cec9df.def("non_zeros", method_pointer_219866d4c9e85c8bb9a2f29212b1093c, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("outer_size", method_pointer_feab5fe402355b9bb87f3b8bd9924198, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("inner_size", method_pointer_30068a0dca2e57639bd6f55190b744b0, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("resize", method_pointer_461597a546925be6b1aae77fb0cbc602, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("resize", method_pointer_7249107f77d15a2db3314c6471c55c6c, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("transpose_in_place", method_pointer_ebf539023308534e99dce0121cc55aab, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("fill", method_pointer_b15e18d638cc5a338ea9483ab0d98fbc, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("set_constant", method_pointer_9c14b4aa48b65a2c9c7aea5d0a279dc0, boost::python::return_internal_reference<>(), "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("set_constant", autowig::method_decorator_9c14b4aa48b65a2c9c7aea5d0a279dc0);
    class_7303fba0f63b53788b0c2ef867cec9df.def("set_lin_spaced", method_pointer_c4b23ff34a025ee29144f4d81402bfde, boost::python::return_internal_reference<>(), "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("set_lin_spaced", autowig::method_decorator_c4b23ff34a025ee29144f4d81402bfde);
    class_7303fba0f63b53788b0c2ef867cec9df.def("set_lin_spaced", method_pointer_83c6b59a5b895e5ea176319836f0cda8, boost::python::return_internal_reference<>(), "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("set_lin_spaced", autowig::method_decorator_83c6b59a5b895e5ea176319836f0cda8);
    class_7303fba0f63b53788b0c2ef867cec9df.def("set_zero", method_pointer_96223de631765aa8b12c042132668c2d, boost::python::return_internal_reference<>(), "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("set_zero", autowig::method_decorator_96223de631765aa8b12c042132668c2d);
    class_7303fba0f63b53788b0c2ef867cec9df.def("set_ones", method_pointer_cda963dc5ff15a069bed81cd9cc772a4, boost::python::return_internal_reference<>(), "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("set_ones", autowig::method_decorator_cda963dc5ff15a069bed81cd9cc772a4);
    class_7303fba0f63b53788b0c2ef867cec9df.def("set_random", method_pointer_01ef3fccf19253f1aa6e998c815b3185, boost::python::return_internal_reference<>(), "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("set_random", autowig::method_decorator_01ef3fccf19253f1aa6e998c815b3185);
    class_7303fba0f63b53788b0c2ef867cec9df.def("is_much_smaller_than", method_pointer_2287061febb05c38abaa9634a87c62e6, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("is_approx_to_constant", method_pointer_a1e17a5348595f40a47abb503251ad50, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("is_constant", method_pointer_43cf2cbc13365bce9d9dab6cef38c7f1, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("is_zero", method_pointer_4469f15e7f2e5f75bf1d563ca585db8e, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("is_ones", method_pointer_bee7fdd96ea85f84bdd3e74e3b901234, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("has_na_n", method_pointer_a58240781594546294f30534f9912860, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("all_finite", method_pointer_4e98acb0244b50a9b1c9630b3169a47a, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("__imul__", method_pointer_728290143d0058fab1aed9e145ef2100, boost::python::return_internal_reference<>(), "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("__imul__", autowig::method_decorator_728290143d0058fab1aed9e145ef2100);
    class_7303fba0f63b53788b0c2ef867cec9df.def("eval", method_pointer_dde8c5e16aec59078a3815ffd9a6da85, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("sum", method_pointer_c069f86643bd5befbe223c31b020b124, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("mean", method_pointer_85ce0a6759ed5555ae88b31674ec4d8a, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("trace", method_pointer_a8a2ec19822e5984938916665f8356cf, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("prod", method_pointer_0bc1ee2d9b5c54ac9d81fe740079fce3, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("min_coeff", method_pointer_a426206228db56af825718b8fe5d48d8, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("max_coeff", method_pointer_331dd66190f851a890631b17870cbbf7, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("value", method_pointer_631f33c615ad518f87c15705a9edac76, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("all", method_pointer_28467c111a9f5012b955a2c63819baba, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("any", method_pointer_5b0509492f0050bca125f2a7365d9b6b, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("count", method_pointer_0f0b805270a1595498f618ebf34046d6, "");
    class_7303fba0f63b53788b0c2ef867cec9df.def("reverse_in_place", method_pointer_f0616ab6f499522fa64180d209f55617, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 3 > > >();
    }

}