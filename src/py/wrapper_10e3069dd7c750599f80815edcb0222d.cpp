#include "_ieigen.h"


namespace autowig
{
    void method_decorator_92a91a3f986f5e949ac497964883e91e(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_02051b77ec855485855b94ab7855397a(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_4c4c5b8e98ad57779494b98b5ff34e43(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, struct ::std::complex< float >  const & param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_2acc997fdc6e5c88a31c3351eb3a1a6b(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_c7313b956f7e5309826e0dfc45e89912(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_fc4e9751fa4e51eb8738f2e1d6dbd3df(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_95d681dad2475cc7a68a235e249169d6(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_10e3069dd7c750599f80815edcb0222d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_cef796c9b3df579098aa1525e5446be0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_12d6f20d11445b909b0ead6e193131da)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_be660544161954859a07053b1f170a0d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_e9fab72f49005bdab0bcaf006ef74407)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_c9a74622bc4553ad913c5eb361b287a3)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_25e822aa0aca584fbbecfe7a3c9f2f97)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_df96423611e9563a9c510e1ad259ff6a)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_92a91a3f986f5e949ac497964883e91e)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_02051b77ec855485855b94ab7855397a)(long int , struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_4c4c5b8e98ad57779494b98b5ff34e43)(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_2acc997fdc6e5c88a31c3351eb3a1a6b)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_c7313b956f7e5309826e0dfc45e89912)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_fc4e9751fa4e51eb8738f2e1d6dbd3df)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_638aa03eca24560e85185838e662ac74)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_7371bcb61e9957f29d4e94799b7dc4e4)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_e578f3bb3487515680cb44128149da1d)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_76351fa333735a17af23645a47012b18)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_1836d0349e0451d4b0fb63718ea4f74a)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_fce22e5ea353591da024aaf4a17cd454)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_a6192a36783552bfb2a757f1916b31ad)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_95d681dad2475cc7a68a235e249169d6)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_8a8b9b917c765ac3bba21f30951a9bcc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::eval;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_4ac018056b2850e9aedca86646aa6ec4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::sum;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_5b3d3368400f564ba3eabcb50d124ceb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::mean;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_caf43e2e625e58e5a80b59d999e53ffc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::trace;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_e1514e5c1fdb53aeba2f2640a0d471fd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::prod;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_444aeae7f59b57f9bb0b12115f053c58)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::minCoeff;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_8b2da6cb53b35c4da199004e876c4a62)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::maxCoeff;
    struct ::std::complex< float >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_10fed5924cf957f198b01175124b0e9a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_33298838c88d550b8828ab90abf6b2a0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_50de951c9ea85ef7b862ba72ba77fa40)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_bfd6ef3ea5345364b35316be9e5f8828)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_5b1f8802faae58fda4423988ead9f750)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 > > > class_10e3069dd7c750599f80815edcb0222d("_DenseBase_10e3069dd7c750599f80815edcb0222d", "", boost::python::no_init);
    class_10e3069dd7c750599f80815edcb0222d.def("non_zeros", method_pointer_cef796c9b3df579098aa1525e5446be0, "");
    class_10e3069dd7c750599f80815edcb0222d.def("outer_size", method_pointer_12d6f20d11445b909b0ead6e193131da, "");
    class_10e3069dd7c750599f80815edcb0222d.def("inner_size", method_pointer_be660544161954859a07053b1f170a0d, "");
    class_10e3069dd7c750599f80815edcb0222d.def("resize", method_pointer_e9fab72f49005bdab0bcaf006ef74407, "");
    class_10e3069dd7c750599f80815edcb0222d.def("resize", method_pointer_c9a74622bc4553ad913c5eb361b287a3, "");
    class_10e3069dd7c750599f80815edcb0222d.def("transpose_in_place", method_pointer_25e822aa0aca584fbbecfe7a3c9f2f97, "");
    class_10e3069dd7c750599f80815edcb0222d.def("fill", method_pointer_df96423611e9563a9c510e1ad259ff6a, "");
    class_10e3069dd7c750599f80815edcb0222d.def("set_constant", method_pointer_92a91a3f986f5e949ac497964883e91e, boost::python::return_internal_reference<>(), "");
    class_10e3069dd7c750599f80815edcb0222d.def("set_constant", autowig::method_decorator_92a91a3f986f5e949ac497964883e91e);
    class_10e3069dd7c750599f80815edcb0222d.def("set_lin_spaced", method_pointer_02051b77ec855485855b94ab7855397a, boost::python::return_internal_reference<>(), "");
    class_10e3069dd7c750599f80815edcb0222d.def("set_lin_spaced", autowig::method_decorator_02051b77ec855485855b94ab7855397a);
    class_10e3069dd7c750599f80815edcb0222d.def("set_lin_spaced", method_pointer_4c4c5b8e98ad57779494b98b5ff34e43, boost::python::return_internal_reference<>(), "");
    class_10e3069dd7c750599f80815edcb0222d.def("set_lin_spaced", autowig::method_decorator_4c4c5b8e98ad57779494b98b5ff34e43);
    class_10e3069dd7c750599f80815edcb0222d.def("set_zero", method_pointer_2acc997fdc6e5c88a31c3351eb3a1a6b, boost::python::return_internal_reference<>(), "");
    class_10e3069dd7c750599f80815edcb0222d.def("set_zero", autowig::method_decorator_2acc997fdc6e5c88a31c3351eb3a1a6b);
    class_10e3069dd7c750599f80815edcb0222d.def("set_ones", method_pointer_c7313b956f7e5309826e0dfc45e89912, boost::python::return_internal_reference<>(), "");
    class_10e3069dd7c750599f80815edcb0222d.def("set_ones", autowig::method_decorator_c7313b956f7e5309826e0dfc45e89912);
    class_10e3069dd7c750599f80815edcb0222d.def("set_random", method_pointer_fc4e9751fa4e51eb8738f2e1d6dbd3df, boost::python::return_internal_reference<>(), "");
    class_10e3069dd7c750599f80815edcb0222d.def("set_random", autowig::method_decorator_fc4e9751fa4e51eb8738f2e1d6dbd3df);
    class_10e3069dd7c750599f80815edcb0222d.def("is_much_smaller_than", method_pointer_638aa03eca24560e85185838e662ac74, "");
    class_10e3069dd7c750599f80815edcb0222d.def("is_approx_to_constant", method_pointer_7371bcb61e9957f29d4e94799b7dc4e4, "");
    class_10e3069dd7c750599f80815edcb0222d.def("is_constant", method_pointer_e578f3bb3487515680cb44128149da1d, "");
    class_10e3069dd7c750599f80815edcb0222d.def("is_zero", method_pointer_76351fa333735a17af23645a47012b18, "");
    class_10e3069dd7c750599f80815edcb0222d.def("is_ones", method_pointer_1836d0349e0451d4b0fb63718ea4f74a, "");
    class_10e3069dd7c750599f80815edcb0222d.def("has_na_n", method_pointer_fce22e5ea353591da024aaf4a17cd454, "");
    class_10e3069dd7c750599f80815edcb0222d.def("all_finite", method_pointer_a6192a36783552bfb2a757f1916b31ad, "");
    class_10e3069dd7c750599f80815edcb0222d.def("__imul__", method_pointer_95d681dad2475cc7a68a235e249169d6, boost::python::return_internal_reference<>(), "");
    class_10e3069dd7c750599f80815edcb0222d.def("__imul__", autowig::method_decorator_95d681dad2475cc7a68a235e249169d6);
    class_10e3069dd7c750599f80815edcb0222d.def("eval", method_pointer_8a8b9b917c765ac3bba21f30951a9bcc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_10e3069dd7c750599f80815edcb0222d.def("sum", method_pointer_4ac018056b2850e9aedca86646aa6ec4, "");
    class_10e3069dd7c750599f80815edcb0222d.def("mean", method_pointer_5b3d3368400f564ba3eabcb50d124ceb, "");
    class_10e3069dd7c750599f80815edcb0222d.def("trace", method_pointer_caf43e2e625e58e5a80b59d999e53ffc, "");
    class_10e3069dd7c750599f80815edcb0222d.def("prod", method_pointer_e1514e5c1fdb53aeba2f2640a0d471fd, "");
    class_10e3069dd7c750599f80815edcb0222d.def("min_coeff", method_pointer_444aeae7f59b57f9bb0b12115f053c58, "");
    class_10e3069dd7c750599f80815edcb0222d.def("max_coeff", method_pointer_8b2da6cb53b35c4da199004e876c4a62, "");
    class_10e3069dd7c750599f80815edcb0222d.def("value", method_pointer_10fed5924cf957f198b01175124b0e9a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_10e3069dd7c750599f80815edcb0222d.def("all", method_pointer_33298838c88d550b8828ab90abf6b2a0, "");
    class_10e3069dd7c750599f80815edcb0222d.def("any", method_pointer_50de951c9ea85ef7b862ba72ba77fa40, "");
    class_10e3069dd7c750599f80815edcb0222d.def("count", method_pointer_bfd6ef3ea5345364b35316be9e5f8828, "");
    class_10e3069dd7c750599f80815edcb0222d.def("reverse_in_place", method_pointer_5b1f8802faae58fda4423988ead9f750, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 3 > > >();
    }

}