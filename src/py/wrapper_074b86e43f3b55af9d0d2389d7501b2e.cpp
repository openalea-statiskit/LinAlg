#include "_linalg.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > const volatile * get_pointer<class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > const volatile >(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    void method_decorator_b73c0647a05c57868956b08ed38c68df(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & param_in_0, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_79231cb54bc157de9d2b960d209a3eb6(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & param_in_1, ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & param_in_2, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_49502506d826516390d2ded376295092(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & param_in_0, ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & param_in_1, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_d06e0df9ebb9532584049ec859efe667(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setZero() = param_out; }
    void method_decorator_ea523bbce5665972867ec31f4966fc65(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_33d909a7291358608708d63899b43227(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_bf4a014eabaf514180575773e679568c(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const & param_in_0, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_074b86e43f3b55af9d0d2389d7501b2e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_2c13cb573c06566e9db7ff04e908ce49)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::nonZeros;
    ::Eigen::Index  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_7a86a549a92b5dc7bdbe201717ad505b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::outerSize;
    ::Eigen::Index  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_7e39eb629a7a5eb29e16bff9226c766f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_431c2aa8d32f5304950c1e3145f4b512)(::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_cd9080927b435d30b2ad601f31cb27e0)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_1b6aa159101e51ffaffb45eb0d659902)(::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::fill;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_b73c0647a05c57868956b08ed38c68df)(::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_79231cb54bc157de9d2b960d209a3eb6)(::Eigen::Index , ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_49502506d826516390d2ded376295092)(::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_d06e0df9ebb9532584049ec859efe667)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_ea523bbce5665972867ec31f4966fc65)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_33d909a7291358608708d63899b43227)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_55004a8dee235985b634468b162a8b09)(::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_95cce56787bb5b3eae18f50284ba2dda)(::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_ccf79736540656e9b3270a5d6215a4a3)(::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_888fc140ed4053e6917e50149aedcd00)(::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_2e7baf9d21565842b3713032856fd5f7)(::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_b476280740be5f659216bcbf3b7ddc0d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_8063668f11ec520a8ef972f6490d0c8f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::allFinite;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_bf4a014eabaf514180575773e679568c)(::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::operator*=;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::EvalReturnType  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_b197b8501ada56aead2d8c19fa6b562b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::eval;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_1171c92cae0c5d08b892a6378cbfde50)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::sum;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_d2e9bdb1ce8c5f6a9f9be4f8d509aff8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::mean;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_0340574a2d975c3c9b0a270adaa96142)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::prod;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_e98ce54647675e8594bfe78a94aa3a7b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::minCoeff;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_fb3efa9d98e3530d84cc590cec4831fa)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::maxCoeff;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::CoeffReturnType  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_466c3b647b975460883a76e699ffb8ec)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_0f045d7519f653be8820a4da31cac56c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_6bf1c1acc06d59f6babe46ce4683791f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::any;
    ::Eigen::Index  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_90128e4bea075c4f9bfafbe0e641b8c7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_e05f29c826f05af0a876f00b47c63a32)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >, autowig::Held< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::Type, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 > > > class_074b86e43f3b55af9d0d2389d7501b2e("_DenseBase_074b86e43f3b55af9d0d2389d7501b2e", "", boost::python::no_init);
    class_074b86e43f3b55af9d0d2389d7501b2e.def("non_zeros", method_pointer_2c13cb573c06566e9db7ff04e908ce49, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("outer_size", method_pointer_7a86a549a92b5dc7bdbe201717ad505b, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("inner_size", method_pointer_7e39eb629a7a5eb29e16bff9226c766f, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("resize", method_pointer_431c2aa8d32f5304950c1e3145f4b512, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("resize", method_pointer_cd9080927b435d30b2ad601f31cb27e0, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("fill", method_pointer_1b6aa159101e51ffaffb45eb0d659902, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("set_constant", method_pointer_b73c0647a05c57868956b08ed38c68df, boost::python::return_internal_reference<>(), "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("set_constant", autowig::method_decorator_b73c0647a05c57868956b08ed38c68df);
    class_074b86e43f3b55af9d0d2389d7501b2e.def("set_lin_spaced", method_pointer_79231cb54bc157de9d2b960d209a3eb6, boost::python::return_internal_reference<>(), "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("set_lin_spaced", autowig::method_decorator_79231cb54bc157de9d2b960d209a3eb6);
    class_074b86e43f3b55af9d0d2389d7501b2e.def("set_lin_spaced", method_pointer_49502506d826516390d2ded376295092, boost::python::return_internal_reference<>(), "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("set_lin_spaced", autowig::method_decorator_49502506d826516390d2ded376295092);
    class_074b86e43f3b55af9d0d2389d7501b2e.def("set_zero", method_pointer_d06e0df9ebb9532584049ec859efe667, boost::python::return_internal_reference<>(), "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("set_zero", autowig::method_decorator_d06e0df9ebb9532584049ec859efe667);
    class_074b86e43f3b55af9d0d2389d7501b2e.def("set_ones", method_pointer_ea523bbce5665972867ec31f4966fc65, boost::python::return_internal_reference<>(), "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("set_ones", autowig::method_decorator_ea523bbce5665972867ec31f4966fc65);
    class_074b86e43f3b55af9d0d2389d7501b2e.def("set_random", method_pointer_33d909a7291358608708d63899b43227, boost::python::return_internal_reference<>(), "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("set_random", autowig::method_decorator_33d909a7291358608708d63899b43227);
    class_074b86e43f3b55af9d0d2389d7501b2e.def("is_much_smaller_than", method_pointer_55004a8dee235985b634468b162a8b09, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("is_approx_to_constant", method_pointer_95cce56787bb5b3eae18f50284ba2dda, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("is_constant", method_pointer_ccf79736540656e9b3270a5d6215a4a3, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("is_zero", method_pointer_888fc140ed4053e6917e50149aedcd00, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("is_ones", method_pointer_2e7baf9d21565842b3713032856fd5f7, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("has_na_n", method_pointer_b476280740be5f659216bcbf3b7ddc0d, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("all_finite", method_pointer_8063668f11ec520a8ef972f6490d0c8f, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("__imul__", method_pointer_bf4a014eabaf514180575773e679568c, boost::python::return_internal_reference<>(), "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("__imul__", autowig::method_decorator_bf4a014eabaf514180575773e679568c);
    class_074b86e43f3b55af9d0d2389d7501b2e.def("eval", method_pointer_b197b8501ada56aead2d8c19fa6b562b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("sum", method_pointer_1171c92cae0c5d08b892a6378cbfde50, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("mean", method_pointer_d2e9bdb1ce8c5f6a9f9be4f8d509aff8, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("prod", method_pointer_0340574a2d975c3c9b0a270adaa96142, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("min_coeff", method_pointer_e98ce54647675e8594bfe78a94aa3a7b, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("max_coeff", method_pointer_fb3efa9d98e3530d84cc590cec4831fa, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("value", method_pointer_466c3b647b975460883a76e699ffb8ec, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("all", method_pointer_0f045d7519f653be8820a4da31cac56c, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("any", method_pointer_6bf1c1acc06d59f6babe46ce4683791f, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("count", method_pointer_90128e4bea075c4f9bfafbe0e641b8c7, "");
    class_074b86e43f3b55af9d0d2389d7501b2e.def("reverse_in_place", method_pointer_e05f29c826f05af0a876f00b47c63a32, "");

    if(autowig::Held< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::Type, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 > >::Type >();
    }

}