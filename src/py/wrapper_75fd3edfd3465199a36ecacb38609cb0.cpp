#include "_linalg.h"


namespace autowig
{
    void method_decorator_68d85a34c1a255a58ea399d7fe7b9047(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_0, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setConstant(param_in_0) = param_out; }
// TODO     void method_decorator_2831294de6cc569d958b7497f7871190(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_1, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_2, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO     void method_decorator_2cfb4850bb805967aa58381e8bb635de(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_0, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_1, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_00f3160044d4558facc67f69559dcb7c(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setZero() = param_out; }
    void method_decorator_99e5908d68725ab5ada6afe12f280908(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_c3d8db9bdc3d58d1b14d34ca21427491(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_84fc10f6be7858ac936740809659ca4a(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_0, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_75fd3edfd3465199a36ecacb38609cb0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_93823be0b363515cabd733ac64c6720a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::nonZeros;
    ::Eigen::Index  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_796f96533e1851dbba52009274ee47ee)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::outerSize;
    ::Eigen::Index  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_4dc49c1bbb345f4798936cac5b0cf9c4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_df1ad13c2ee553fca934c0bc21483a5d)(::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_344086564940540cac5aac8fb93c2ffb)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_91a058ac571456329d37caac8240dc53)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_52a1bb28372f5d6dae0f94ad3f08d302)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::fill;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_68d85a34c1a255a58ea399d7fe7b9047)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setConstant;
// TODO     class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2831294de6cc569d958b7497f7871190)(::Eigen::Index , ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setLinSpaced;
// TODO     class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2cfb4850bb805967aa58381e8bb635de)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_00f3160044d4558facc67f69559dcb7c)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_99e5908d68725ab5ada6afe12f280908)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_c3d8db9bdc3d58d1b14d34ca21427491)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_30254a49ca9b50d88f67604c32b60ac6)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_bce0f51c4f7154b19822781108b9c059)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_9a61dd318e175f249b20bf00f0efde37)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f1d008a1a32c5d28a897aed9e1a730d2)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_bf552c53df825979b9e085285c3c6026)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_c92826ef61885ef28d78f2c6fc6c5a95)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f9798ffb67ba5be998bf5d5feafaf825)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::allFinite;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_84fc10f6be7858ac936740809659ca4a)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::operator*=;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::EvalReturnType  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_d7a529bed6b9547bb727ff827575186c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::eval;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_b79e588b565259379bda88f51361b5be)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::sum;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_4ca2a092bad25d13ae91a1335bf4e643)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::mean;
    // ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_275e0b51404a524fa623780e37202749)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::trace;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_81534b949ddb56139c8b21cf8dd5038d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::prod;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_0bd71b55dc765f809ab0e8db521e256f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::minCoeff;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_7eced26452115cdca737a1ed31183d46)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::maxCoeff;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::CoeffReturnType  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_4cbf2f4d26e555f98e2216875c06c58f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2b7f78e830885c00b2e086f54aea4d73)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_17ddc3343e6655e9bfe774cb1025220f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::any;
    ::Eigen::Index  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_89a6fd460a82536daba4829091ab4e35)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_a0e81e98e7a350488b7cd41eadd4f570)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 > > > class_75fd3edfd3465199a36ecacb38609cb0("_DenseBase_75fd3edfd3465199a36ecacb38609cb0", "", boost::python::no_init);
    class_75fd3edfd3465199a36ecacb38609cb0.def("non_zeros", method_pointer_93823be0b363515cabd733ac64c6720a, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("outer_size", method_pointer_796f96533e1851dbba52009274ee47ee, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("inner_size", method_pointer_4dc49c1bbb345f4798936cac5b0cf9c4, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("resize", method_pointer_df1ad13c2ee553fca934c0bc21483a5d, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("resize", method_pointer_344086564940540cac5aac8fb93c2ffb, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("transpose_in_place", method_pointer_91a058ac571456329d37caac8240dc53, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("fill", method_pointer_52a1bb28372f5d6dae0f94ad3f08d302, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_constant", method_pointer_68d85a34c1a255a58ea399d7fe7b9047, boost::python::return_internal_reference<>(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_constant", autowig::method_decorator_68d85a34c1a255a58ea399d7fe7b9047);
// TODO     class_75fd3edfd3465199a36ecacb38609cb0.def("set_lin_spaced", method_pointer_2831294de6cc569d958b7497f7871190, boost::python::return_internal_reference<>(), "");
// TODO     class_75fd3edfd3465199a36ecacb38609cb0.def("set_lin_spaced", autowig::method_decorator_2831294de6cc569d958b7497f7871190);
// TODO     class_75fd3edfd3465199a36ecacb38609cb0.def("set_lin_spaced", method_pointer_2cfb4850bb805967aa58381e8bb635de, boost::python::return_internal_reference<>(), "");
// TODO     class_75fd3edfd3465199a36ecacb38609cb0.def("set_lin_spaced", autowig::method_decorator_2cfb4850bb805967aa58381e8bb635de);
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_zero", method_pointer_00f3160044d4558facc67f69559dcb7c, boost::python::return_internal_reference<>(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_zero", autowig::method_decorator_00f3160044d4558facc67f69559dcb7c);
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_ones", method_pointer_99e5908d68725ab5ada6afe12f280908, boost::python::return_internal_reference<>(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_ones", autowig::method_decorator_99e5908d68725ab5ada6afe12f280908);
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_random", method_pointer_c3d8db9bdc3d58d1b14d34ca21427491, boost::python::return_internal_reference<>(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_random", autowig::method_decorator_c3d8db9bdc3d58d1b14d34ca21427491);
    class_75fd3edfd3465199a36ecacb38609cb0.def("is_much_smaller_than", method_pointer_30254a49ca9b50d88f67604c32b60ac6, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("is_approx_to_constant", method_pointer_bce0f51c4f7154b19822781108b9c059, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("is_constant", method_pointer_9a61dd318e175f249b20bf00f0efde37, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("is_zero", method_pointer_f1d008a1a32c5d28a897aed9e1a730d2, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("is_ones", method_pointer_bf552c53df825979b9e085285c3c6026, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("has_na_n", method_pointer_c92826ef61885ef28d78f2c6fc6c5a95, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("all_finite", method_pointer_f9798ffb67ba5be998bf5d5feafaf825, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("__imul__", method_pointer_84fc10f6be7858ac936740809659ca4a, boost::python::return_internal_reference<>(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("__imul__", autowig::method_decorator_84fc10f6be7858ac936740809659ca4a);
    class_75fd3edfd3465199a36ecacb38609cb0.def("eval", method_pointer_d7a529bed6b9547bb727ff827575186c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("sum", method_pointer_b79e588b565259379bda88f51361b5be, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("mean", method_pointer_4ca2a092bad25d13ae91a1335bf4e643, "");
    // class_75fd3edfd3465199a36ecacb38609cb0.def("trace", method_pointer_275e0b51404a524fa623780e37202749, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("prod", method_pointer_81534b949ddb56139c8b21cf8dd5038d, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("min_coeff", method_pointer_0bd71b55dc765f809ab0e8db521e256f, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("max_coeff", method_pointer_7eced26452115cdca737a1ed31183d46, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("value", method_pointer_4cbf2f4d26e555f98e2216875c06c58f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("all", method_pointer_2b7f78e830885c00b2e086f54aea4d73, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("any", method_pointer_17ddc3343e6655e9bfe774cb1025220f, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("count", method_pointer_89a6fd460a82536daba4829091ab4e35, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("reverse_in_place", method_pointer_a0e81e98e7a350488b7cd41eadd4f570, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 > > >();
    }

}