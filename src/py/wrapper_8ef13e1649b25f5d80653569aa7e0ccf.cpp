#include "_ieigen.h"


namespace autowig
{
    void method_decorator_260839c2bc58590f8b45325f0cf4693c(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_bd60e3cc514258dda7f0b0a1b1b2b2ed(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_7cf93527880c553186dd54f4cfbf333f(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, struct ::std::complex< float >  const & param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_db4c8fdb26b65fb09b58465d46d515a0(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_4e0d416dd15f55f98c2f9870b5e9d9ba(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_eac29b1d12175f8fac73299d56a164c8(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_e1f7d22b6aa0555db51cd44ef1fb5df2(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_8ef13e1649b25f5d80653569aa7e0ccf()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_e5446213756f5851b8a3cc4c6c757beb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_c6c75018c7305e5b9db93fda08635e9c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_162645d92d395ea9955298c6e97ee143)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_d563a94a4e7a52d29d244e091fe38440)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_9759b3830be35d37a546a6e30f16bb8c)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_099e5d309c3c5d938c72cea3123acbe6)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_a316d9ec28c15d878c09f35503ae1fda)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_260839c2bc58590f8b45325f0cf4693c)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_bd60e3cc514258dda7f0b0a1b1b2b2ed)(long int , struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_7cf93527880c553186dd54f4cfbf333f)(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_db4c8fdb26b65fb09b58465d46d515a0)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_4e0d416dd15f55f98c2f9870b5e9d9ba)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_eac29b1d12175f8fac73299d56a164c8)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_17c93385f64f53f6b0eeeb91661f4610)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_509140de117554828616538893165e0d)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_66bc9f77af57509c8bd23398deedfb7e)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_6d82da904c5a56c4823208865f9b8ed0)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_64ddf14c3d7f5b9195779a080401358d)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_e15dfcff463d51bcb772ac7b2ebdabea)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_c36112b93d5a54538df5e4921d6553b7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_e1f7d22b6aa0555db51cd44ef1fb5df2)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_271b76799c2a50faa6498c4afc2222b6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::eval;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_ac2223c089435ed4a78ed4a8b5c46dff)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::sum;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_e99a8b9efe0454b1a9691026c9f68563)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::mean;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_12eda3290cda5fd2b3f5183e68271da7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::trace;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_c596a5318d2957eea49564e16b79c86f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::prod;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_5c67a808701258879ddd94e250c5bc42)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::minCoeff;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_a522742c3258597da3893bdd5477e161)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::maxCoeff;
    struct ::std::complex< float >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_204bcfcabc1e561ca7a41931239efb75)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_5bffe09739e955138716250961193c3f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_a7df2bec5ca55fa4826646126de5e1f6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_412e33a95f455c24812628471885814b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 > >::*method_pointer_b03c65417ecb55aa9eef99e6daacd7e8)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 > > > class_8ef13e1649b25f5d80653569aa7e0ccf("_DenseBase_8ef13e1649b25f5d80653569aa7e0ccf", "", boost::python::no_init);
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("non_zeros", method_pointer_e5446213756f5851b8a3cc4c6c757beb, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("outer_size", method_pointer_c6c75018c7305e5b9db93fda08635e9c, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("inner_size", method_pointer_162645d92d395ea9955298c6e97ee143, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("resize", method_pointer_d563a94a4e7a52d29d244e091fe38440, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("resize", method_pointer_9759b3830be35d37a546a6e30f16bb8c, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("transpose_in_place", method_pointer_099e5d309c3c5d938c72cea3123acbe6, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("fill", method_pointer_a316d9ec28c15d878c09f35503ae1fda, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("set_constant", method_pointer_260839c2bc58590f8b45325f0cf4693c, boost::python::return_internal_reference<>(), "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("set_constant", autowig::method_decorator_260839c2bc58590f8b45325f0cf4693c);
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("set_lin_spaced", method_pointer_bd60e3cc514258dda7f0b0a1b1b2b2ed, boost::python::return_internal_reference<>(), "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("set_lin_spaced", autowig::method_decorator_bd60e3cc514258dda7f0b0a1b1b2b2ed);
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("set_lin_spaced", method_pointer_7cf93527880c553186dd54f4cfbf333f, boost::python::return_internal_reference<>(), "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("set_lin_spaced", autowig::method_decorator_7cf93527880c553186dd54f4cfbf333f);
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("set_zero", method_pointer_db4c8fdb26b65fb09b58465d46d515a0, boost::python::return_internal_reference<>(), "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("set_zero", autowig::method_decorator_db4c8fdb26b65fb09b58465d46d515a0);
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("set_ones", method_pointer_4e0d416dd15f55f98c2f9870b5e9d9ba, boost::python::return_internal_reference<>(), "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("set_ones", autowig::method_decorator_4e0d416dd15f55f98c2f9870b5e9d9ba);
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("set_random", method_pointer_eac29b1d12175f8fac73299d56a164c8, boost::python::return_internal_reference<>(), "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("set_random", autowig::method_decorator_eac29b1d12175f8fac73299d56a164c8);
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("is_much_smaller_than", method_pointer_17c93385f64f53f6b0eeeb91661f4610, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("is_approx_to_constant", method_pointer_509140de117554828616538893165e0d, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("is_constant", method_pointer_66bc9f77af57509c8bd23398deedfb7e, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("is_zero", method_pointer_6d82da904c5a56c4823208865f9b8ed0, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("is_ones", method_pointer_64ddf14c3d7f5b9195779a080401358d, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("has_na_n", method_pointer_e15dfcff463d51bcb772ac7b2ebdabea, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("all_finite", method_pointer_c36112b93d5a54538df5e4921d6553b7, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("__imul__", method_pointer_e1f7d22b6aa0555db51cd44ef1fb5df2, boost::python::return_internal_reference<>(), "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("__imul__", autowig::method_decorator_e1f7d22b6aa0555db51cd44ef1fb5df2);
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("eval", method_pointer_271b76799c2a50faa6498c4afc2222b6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("sum", method_pointer_ac2223c089435ed4a78ed4a8b5c46dff, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("mean", method_pointer_e99a8b9efe0454b1a9691026c9f68563, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("trace", method_pointer_12eda3290cda5fd2b3f5183e68271da7, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("prod", method_pointer_c596a5318d2957eea49564e16b79c86f, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("min_coeff", method_pointer_5c67a808701258879ddd94e250c5bc42, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("max_coeff", method_pointer_a522742c3258597da3893bdd5477e161, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("value", method_pointer_204bcfcabc1e561ca7a41931239efb75, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("all", method_pointer_5bffe09739e955138716250961193c3f, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("any", method_pointer_a7df2bec5ca55fa4826646126de5e1f6, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("count", method_pointer_412e33a95f455c24812628471885814b, "");
    class_8ef13e1649b25f5d80653569aa7e0ccf.def("reverse_in_place", method_pointer_b03c65417ecb55aa9eef99e6daacd7e8, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 3 > > >();
    }

}