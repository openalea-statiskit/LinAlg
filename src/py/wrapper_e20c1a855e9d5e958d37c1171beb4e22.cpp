#include "_ieigen.h"


namespace autowig
{
    void method_decorator_104243abe49153ca863e6578771e7733(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_0ff3abe70eb15f2cab10c7835b50fc38(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_545ebe0c6fe95e00992e98f78f698aac(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, struct ::std::complex< float >  const & param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_e5c8fdea03f853d8b947c0132a39f030(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_32e2cb7e3b945989b4116f9c6dec3932(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_178c4dacc36f5c73916ecb7a7b35e1b2(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_1be257a926545664ad8d9e0ae6e147c4(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_e20c1a855e9d5e958d37c1171beb4e22()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_30a336e86f8e58108c4c12f2d300c27f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_e286f875503759088bfd84d3b7efdecf)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_382cd86d39315f7dab9e3d6759d71743)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_d2021944427f59f388473f30350adcbc)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_b0016b0fc53c5bb5a62fc101075cb7b0)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_2952a341206b598c95abe98f6ab4af38)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_37615bc1603b5165b820ddbc033b22c7)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_104243abe49153ca863e6578771e7733)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_0ff3abe70eb15f2cab10c7835b50fc38)(long int , struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_545ebe0c6fe95e00992e98f78f698aac)(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_e5c8fdea03f853d8b947c0132a39f030)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_32e2cb7e3b945989b4116f9c6dec3932)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_178c4dacc36f5c73916ecb7a7b35e1b2)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_e1441adce2dc5a3fa20626a6d6af479d)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_49ba5a881e415f07bc57aa2f8238445f)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_ea66f8fafb9156b3acb8ea7af5a4b02c)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_c49fe1d017d856528cdb4b8c71bf3ccb)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_67b6aa0e624f5cd096a21afc5819439e)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_636258d1be3f5cf3a5262b985210e4bb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_9caa9c2c8ec95dc68905e785c5067be2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_1be257a926545664ad8d9e0ae6e147c4)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_da8bef580d775e40a1bf934a4d680f58)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::eval;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_259ed4854dc151919b90b77736a4f322)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::sum;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_879398fd4168520491751b1154760161)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::mean;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_175fc673244b58828e65937081cce18f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::trace;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_68bbf6117b375c3b903630b4d96695fd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::prod;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_1537f8aec25d50efaf6bf4a9a0a7fbd2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::minCoeff;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_706b81db2cd559cf9a43017b5ce83044)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::maxCoeff;
    struct ::std::complex< float >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_25dea7eec2255288a8de469fd5911e96)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_ce07001ec65c5643abaffdfef73c9524)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_4234ba64152451c1abca67b45815813f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_f3b8e89350565e95832f0afc49168d98)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_a967c16d36075b3283b8a51733b1a58e)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 > > > class_e20c1a855e9d5e958d37c1171beb4e22("_DenseBase_e20c1a855e9d5e958d37c1171beb4e22", "", boost::python::no_init);
    class_e20c1a855e9d5e958d37c1171beb4e22.def("non_zeros", method_pointer_30a336e86f8e58108c4c12f2d300c27f, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("outer_size", method_pointer_e286f875503759088bfd84d3b7efdecf, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("inner_size", method_pointer_382cd86d39315f7dab9e3d6759d71743, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("resize", method_pointer_d2021944427f59f388473f30350adcbc, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("resize", method_pointer_b0016b0fc53c5bb5a62fc101075cb7b0, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("transpose_in_place", method_pointer_2952a341206b598c95abe98f6ab4af38, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("fill", method_pointer_37615bc1603b5165b820ddbc033b22c7, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("set_constant", method_pointer_104243abe49153ca863e6578771e7733, boost::python::return_internal_reference<>(), "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("set_constant", autowig::method_decorator_104243abe49153ca863e6578771e7733);
    class_e20c1a855e9d5e958d37c1171beb4e22.def("set_lin_spaced", method_pointer_0ff3abe70eb15f2cab10c7835b50fc38, boost::python::return_internal_reference<>(), "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("set_lin_spaced", autowig::method_decorator_0ff3abe70eb15f2cab10c7835b50fc38);
    class_e20c1a855e9d5e958d37c1171beb4e22.def("set_lin_spaced", method_pointer_545ebe0c6fe95e00992e98f78f698aac, boost::python::return_internal_reference<>(), "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("set_lin_spaced", autowig::method_decorator_545ebe0c6fe95e00992e98f78f698aac);
    class_e20c1a855e9d5e958d37c1171beb4e22.def("set_zero", method_pointer_e5c8fdea03f853d8b947c0132a39f030, boost::python::return_internal_reference<>(), "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("set_zero", autowig::method_decorator_e5c8fdea03f853d8b947c0132a39f030);
    class_e20c1a855e9d5e958d37c1171beb4e22.def("set_ones", method_pointer_32e2cb7e3b945989b4116f9c6dec3932, boost::python::return_internal_reference<>(), "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("set_ones", autowig::method_decorator_32e2cb7e3b945989b4116f9c6dec3932);
    class_e20c1a855e9d5e958d37c1171beb4e22.def("set_random", method_pointer_178c4dacc36f5c73916ecb7a7b35e1b2, boost::python::return_internal_reference<>(), "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("set_random", autowig::method_decorator_178c4dacc36f5c73916ecb7a7b35e1b2);
    class_e20c1a855e9d5e958d37c1171beb4e22.def("is_much_smaller_than", method_pointer_e1441adce2dc5a3fa20626a6d6af479d, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("is_approx_to_constant", method_pointer_49ba5a881e415f07bc57aa2f8238445f, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("is_constant", method_pointer_ea66f8fafb9156b3acb8ea7af5a4b02c, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("is_zero", method_pointer_c49fe1d017d856528cdb4b8c71bf3ccb, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("is_ones", method_pointer_67b6aa0e624f5cd096a21afc5819439e, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("has_na_n", method_pointer_636258d1be3f5cf3a5262b985210e4bb, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("all_finite", method_pointer_9caa9c2c8ec95dc68905e785c5067be2, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("__imul__", method_pointer_1be257a926545664ad8d9e0ae6e147c4, boost::python::return_internal_reference<>(), "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("__imul__", autowig::method_decorator_1be257a926545664ad8d9e0ae6e147c4);
    class_e20c1a855e9d5e958d37c1171beb4e22.def("eval", method_pointer_da8bef580d775e40a1bf934a4d680f58, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("sum", method_pointer_259ed4854dc151919b90b77736a4f322, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("mean", method_pointer_879398fd4168520491751b1154760161, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("trace", method_pointer_175fc673244b58828e65937081cce18f, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("prod", method_pointer_68bbf6117b375c3b903630b4d96695fd, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("min_coeff", method_pointer_1537f8aec25d50efaf6bf4a9a0a7fbd2, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("max_coeff", method_pointer_706b81db2cd559cf9a43017b5ce83044, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("value", method_pointer_25dea7eec2255288a8de469fd5911e96, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("all", method_pointer_ce07001ec65c5643abaffdfef73c9524, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("any", method_pointer_4234ba64152451c1abca67b45815813f, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("count", method_pointer_f3b8e89350565e95832f0afc49168d98, "");
    class_e20c1a855e9d5e958d37c1171beb4e22.def("reverse_in_place", method_pointer_a967c16d36075b3283b8a51733b1a58e, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 3 > > >();
    }

}