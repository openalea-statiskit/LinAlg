#include "_ieigen.h"


namespace autowig
{
    void method_decorator_7523096e29ca5813af69ea1e786e2735(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_28c8bd9052925962a2d81671f57ed414(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_2285c40e652958e0b0de5d6b7cd2e721(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, struct ::std::complex< float >  const & param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_0cd2e4574ed550759522af5a1e3f5531(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_69d50f0599d1553085a54b1fc40bf558(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_744048d661095122b336a7e33c474a72(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_fe3c5f247cca5c829a0300ae2237249b(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_3b93152ef411528c9246990a0e13441e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_f2e49d2ef2105a069d644767df5dc11a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_e8430a4092a75b67bd5105fd9973ef13)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_4872fcee015459ed8198da250bc588c1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_9eda0cdd5b0559ed95f97a03a77aeaf2)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_9a25f7ee4ad15104ada3dc8f091938aa)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_b34e23f7c41c50a3983f2799d8dd83bc)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_807a7347eb4c5c80884eec0f85c612eb)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_7523096e29ca5813af69ea1e786e2735)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_28c8bd9052925962a2d81671f57ed414)(long int , struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_2285c40e652958e0b0de5d6b7cd2e721)(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_0cd2e4574ed550759522af5a1e3f5531)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_69d50f0599d1553085a54b1fc40bf558)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_744048d661095122b336a7e33c474a72)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_cd2e44f5de7f5ad1a751e645d8440858)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_4d6402b82d8c5113a27435e0a2862264)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_819da713966751e0bc647f1e6916422b)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_67fbd8c5a4225cd2ad18fc12136d3bd7)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_834638eb7c6452099be4818f45876851)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_ee458dfd6ade53f59731b5267313fe7e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_6c90368e1c695043aec75ac4f67653ac)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_fe3c5f247cca5c829a0300ae2237249b)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_1e488f6eba49545fb37c4e991e18c1b6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::eval;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_b1df702818b45611b56744dd6d7785b8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::sum;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_8b991b1c6c9e52c0821014118c785646)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::mean;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_7b4941d9b6315105982d28ad3d55011c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::trace;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_3d4e3e9c830651d2abb58fbde8aeff2d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::prod;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_3fc375ffe20350e49fc73f78cb45a6ab)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::minCoeff;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_e94938433a7a5531ac56b7600c05c8b2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::maxCoeff;
    struct ::std::complex< float >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_3bb59c7c13fc5c1999a41952fd3bd3c6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_1a77cf6106ab577f9aaf89ae57bc37e7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_849a68282b245f1488401d3b46823683)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_5990cea6db725606ba11dfb275584533)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_5c8367752eeb5ed7b4e80c791bcb6cb5)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 > > > class_3b93152ef411528c9246990a0e13441e("_DenseBase_3b93152ef411528c9246990a0e13441e", "", boost::python::no_init);
    class_3b93152ef411528c9246990a0e13441e.def("non_zeros", method_pointer_f2e49d2ef2105a069d644767df5dc11a, "");
    class_3b93152ef411528c9246990a0e13441e.def("outer_size", method_pointer_e8430a4092a75b67bd5105fd9973ef13, "");
    class_3b93152ef411528c9246990a0e13441e.def("inner_size", method_pointer_4872fcee015459ed8198da250bc588c1, "");
    class_3b93152ef411528c9246990a0e13441e.def("resize", method_pointer_9eda0cdd5b0559ed95f97a03a77aeaf2, "");
    class_3b93152ef411528c9246990a0e13441e.def("resize", method_pointer_9a25f7ee4ad15104ada3dc8f091938aa, "");
    class_3b93152ef411528c9246990a0e13441e.def("transpose_in_place", method_pointer_b34e23f7c41c50a3983f2799d8dd83bc, "");
    class_3b93152ef411528c9246990a0e13441e.def("fill", method_pointer_807a7347eb4c5c80884eec0f85c612eb, "");
    class_3b93152ef411528c9246990a0e13441e.def("set_constant", method_pointer_7523096e29ca5813af69ea1e786e2735, boost::python::return_internal_reference<>(), "");
    class_3b93152ef411528c9246990a0e13441e.def("set_constant", autowig::method_decorator_7523096e29ca5813af69ea1e786e2735);
    class_3b93152ef411528c9246990a0e13441e.def("set_lin_spaced", method_pointer_28c8bd9052925962a2d81671f57ed414, boost::python::return_internal_reference<>(), "");
    class_3b93152ef411528c9246990a0e13441e.def("set_lin_spaced", autowig::method_decorator_28c8bd9052925962a2d81671f57ed414);
    class_3b93152ef411528c9246990a0e13441e.def("set_lin_spaced", method_pointer_2285c40e652958e0b0de5d6b7cd2e721, boost::python::return_internal_reference<>(), "");
    class_3b93152ef411528c9246990a0e13441e.def("set_lin_spaced", autowig::method_decorator_2285c40e652958e0b0de5d6b7cd2e721);
    class_3b93152ef411528c9246990a0e13441e.def("set_zero", method_pointer_0cd2e4574ed550759522af5a1e3f5531, boost::python::return_internal_reference<>(), "");
    class_3b93152ef411528c9246990a0e13441e.def("set_zero", autowig::method_decorator_0cd2e4574ed550759522af5a1e3f5531);
    class_3b93152ef411528c9246990a0e13441e.def("set_ones", method_pointer_69d50f0599d1553085a54b1fc40bf558, boost::python::return_internal_reference<>(), "");
    class_3b93152ef411528c9246990a0e13441e.def("set_ones", autowig::method_decorator_69d50f0599d1553085a54b1fc40bf558);
    class_3b93152ef411528c9246990a0e13441e.def("set_random", method_pointer_744048d661095122b336a7e33c474a72, boost::python::return_internal_reference<>(), "");
    class_3b93152ef411528c9246990a0e13441e.def("set_random", autowig::method_decorator_744048d661095122b336a7e33c474a72);
    class_3b93152ef411528c9246990a0e13441e.def("is_much_smaller_than", method_pointer_cd2e44f5de7f5ad1a751e645d8440858, "");
    class_3b93152ef411528c9246990a0e13441e.def("is_approx_to_constant", method_pointer_4d6402b82d8c5113a27435e0a2862264, "");
    class_3b93152ef411528c9246990a0e13441e.def("is_constant", method_pointer_819da713966751e0bc647f1e6916422b, "");
    class_3b93152ef411528c9246990a0e13441e.def("is_zero", method_pointer_67fbd8c5a4225cd2ad18fc12136d3bd7, "");
    class_3b93152ef411528c9246990a0e13441e.def("is_ones", method_pointer_834638eb7c6452099be4818f45876851, "");
    class_3b93152ef411528c9246990a0e13441e.def("has_na_n", method_pointer_ee458dfd6ade53f59731b5267313fe7e, "");
    class_3b93152ef411528c9246990a0e13441e.def("all_finite", method_pointer_6c90368e1c695043aec75ac4f67653ac, "");
    class_3b93152ef411528c9246990a0e13441e.def("__imul__", method_pointer_fe3c5f247cca5c829a0300ae2237249b, boost::python::return_internal_reference<>(), "");
    class_3b93152ef411528c9246990a0e13441e.def("__imul__", autowig::method_decorator_fe3c5f247cca5c829a0300ae2237249b);
    class_3b93152ef411528c9246990a0e13441e.def("eval", method_pointer_1e488f6eba49545fb37c4e991e18c1b6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3b93152ef411528c9246990a0e13441e.def("sum", method_pointer_b1df702818b45611b56744dd6d7785b8, "");
    class_3b93152ef411528c9246990a0e13441e.def("mean", method_pointer_8b991b1c6c9e52c0821014118c785646, "");
    class_3b93152ef411528c9246990a0e13441e.def("trace", method_pointer_7b4941d9b6315105982d28ad3d55011c, "");
    class_3b93152ef411528c9246990a0e13441e.def("prod", method_pointer_3d4e3e9c830651d2abb58fbde8aeff2d, "");
    class_3b93152ef411528c9246990a0e13441e.def("min_coeff", method_pointer_3fc375ffe20350e49fc73f78cb45a6ab, "");
    class_3b93152ef411528c9246990a0e13441e.def("max_coeff", method_pointer_e94938433a7a5531ac56b7600c05c8b2, "");
    class_3b93152ef411528c9246990a0e13441e.def("value", method_pointer_3bb59c7c13fc5c1999a41952fd3bd3c6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3b93152ef411528c9246990a0e13441e.def("all", method_pointer_1a77cf6106ab577f9aaf89ae57bc37e7, "");
    class_3b93152ef411528c9246990a0e13441e.def("any", method_pointer_849a68282b245f1488401d3b46823683, "");
    class_3b93152ef411528c9246990a0e13441e.def("count", method_pointer_5990cea6db725606ba11dfb275584533, "");
    class_3b93152ef411528c9246990a0e13441e.def("reverse_in_place", method_pointer_5c8367752eeb5ed7b4e80c791bcb6cb5, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 3 > > >();
    }

}