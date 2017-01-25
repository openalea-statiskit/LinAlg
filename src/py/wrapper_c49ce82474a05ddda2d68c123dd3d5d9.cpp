#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f69b4e92bfe857cca8b46f937cbff65d(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_db1c4b93d2dc5ddf88facb69e44030b7(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, float  const & param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_9780313862f455f9be3a94897a038a41(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, float  const & param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_71e733a9993e5422ac7a396ef4fea71c(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_10c50d08459057a1916ecb076e1c15bf(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_4ae44dd82541540b9d216efd3a3100fb(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_e20262d5bc7b57f49a7f19c73e27dce5(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_c49ce82474a05ddda2d68c123dd3d5d9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_4c1c01958de8551a895f2090892b36ac)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_9082a44ab2995c3d9c986a15ffbcdb03)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_ca433bf8e3715b228495caa3a0021b15)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_11e1afe7b6e05a0f9a7e84fee3f701c4)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_4cec43986bed5585b7e821c8ed18869e)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_fff18a991bbe5431a0ed2ab2aac48289)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_62492f2af83e51768c4cbb0ecf73e10a)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::fill;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_f69b4e92bfe857cca8b46f937cbff65d)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setConstant;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_db1c4b93d2dc5ddf88facb69e44030b7)(long int , float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_9780313862f455f9be3a94897a038a41)(float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_71e733a9993e5422ac7a396ef4fea71c)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setZero;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_10c50d08459057a1916ecb076e1c15bf)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setOnes;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_4ae44dd82541540b9d216efd3a3100fb)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_2d5efbfda81152b085cea869669d4311)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_c4c0c27472c45687966c4fa28490d611)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_b9e2458699a45901a40b4278665a73ef)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_756fb0a6ff7c5ca6a395a6f3f0f9a247)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_af93292b8896514c82a13e17f8667510)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_3c39a529e70d5ebead40f3c184789579)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_9eda17145b13514f86bdbefd1cfb3d77)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::allFinite;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_e20262d5bc7b57f49a7f19c73e27dce5)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::operator*=;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_384435012f695ccaac605bb6bd094e64)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::eval;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_69c17d92cbb250859559f3467cc9fa39)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::sum;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_bd2fb40f35a653b68d7256e0070cb792)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::mean;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_0649ac31dc4d503d985040a61905e4a2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::trace;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_123e2a1f45e15e5395bed69a526f60dd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::prod;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_bc954cafbe025df1a4e3f049fb8a89f9)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::minCoeff;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_456f8abcdadc50ffa17d4cf5479ae13b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::maxCoeff;
    float  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_d17ca2e1cde25c08bac994c4f497346e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_f1602da784c25c0da34e67f57be07a51)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_ef2f25c097c35fecaded2de2568c7a88)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_04b4706885605c499d81afc4c0af94fb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_2f5d51dbf17f5913b210d514624b9aa6)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 > > > class_c49ce82474a05ddda2d68c123dd3d5d9("_DenseBase_c49ce82474a05ddda2d68c123dd3d5d9", "", boost::python::no_init);
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("non_zeros", method_pointer_4c1c01958de8551a895f2090892b36ac, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("outer_size", method_pointer_9082a44ab2995c3d9c986a15ffbcdb03, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("inner_size", method_pointer_ca433bf8e3715b228495caa3a0021b15, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("resize", method_pointer_11e1afe7b6e05a0f9a7e84fee3f701c4, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("resize", method_pointer_4cec43986bed5585b7e821c8ed18869e, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("transpose_in_place", method_pointer_fff18a991bbe5431a0ed2ab2aac48289, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("fill", method_pointer_62492f2af83e51768c4cbb0ecf73e10a, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("set_constant", method_pointer_f69b4e92bfe857cca8b46f937cbff65d, boost::python::return_internal_reference<>(), "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("set_constant", autowig::method_decorator_f69b4e92bfe857cca8b46f937cbff65d);
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("set_lin_spaced", method_pointer_db1c4b93d2dc5ddf88facb69e44030b7, boost::python::return_internal_reference<>(), "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("set_lin_spaced", autowig::method_decorator_db1c4b93d2dc5ddf88facb69e44030b7);
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("set_lin_spaced", method_pointer_9780313862f455f9be3a94897a038a41, boost::python::return_internal_reference<>(), "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("set_lin_spaced", autowig::method_decorator_9780313862f455f9be3a94897a038a41);
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("set_zero", method_pointer_71e733a9993e5422ac7a396ef4fea71c, boost::python::return_internal_reference<>(), "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("set_zero", autowig::method_decorator_71e733a9993e5422ac7a396ef4fea71c);
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("set_ones", method_pointer_10c50d08459057a1916ecb076e1c15bf, boost::python::return_internal_reference<>(), "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("set_ones", autowig::method_decorator_10c50d08459057a1916ecb076e1c15bf);
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("set_random", method_pointer_4ae44dd82541540b9d216efd3a3100fb, boost::python::return_internal_reference<>(), "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("set_random", autowig::method_decorator_4ae44dd82541540b9d216efd3a3100fb);
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("is_much_smaller_than", method_pointer_2d5efbfda81152b085cea869669d4311, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("is_approx_to_constant", method_pointer_c4c0c27472c45687966c4fa28490d611, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("is_constant", method_pointer_b9e2458699a45901a40b4278665a73ef, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("is_zero", method_pointer_756fb0a6ff7c5ca6a395a6f3f0f9a247, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("is_ones", method_pointer_af93292b8896514c82a13e17f8667510, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("has_na_n", method_pointer_3c39a529e70d5ebead40f3c184789579, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("all_finite", method_pointer_9eda17145b13514f86bdbefd1cfb3d77, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("__imul__", method_pointer_e20262d5bc7b57f49a7f19c73e27dce5, boost::python::return_internal_reference<>(), "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("__imul__", autowig::method_decorator_e20262d5bc7b57f49a7f19c73e27dce5);
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("eval", method_pointer_384435012f695ccaac605bb6bd094e64, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("sum", method_pointer_69c17d92cbb250859559f3467cc9fa39, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("mean", method_pointer_bd2fb40f35a653b68d7256e0070cb792, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("trace", method_pointer_0649ac31dc4d503d985040a61905e4a2, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("prod", method_pointer_123e2a1f45e15e5395bed69a526f60dd, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("min_coeff", method_pointer_bc954cafbe025df1a4e3f049fb8a89f9, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("max_coeff", method_pointer_456f8abcdadc50ffa17d4cf5479ae13b, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("value", method_pointer_d17ca2e1cde25c08bac994c4f497346e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("all", method_pointer_f1602da784c25c0da34e67f57be07a51, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("any", method_pointer_ef2f25c097c35fecaded2de2568c7a88, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("count", method_pointer_04b4706885605c499d81afc4c0af94fb, "");
    class_c49ce82474a05ddda2d68c123dd3d5d9.def("reverse_in_place", method_pointer_2f5d51dbf17f5913b210d514624b9aa6, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 3 > > >();
    }

}