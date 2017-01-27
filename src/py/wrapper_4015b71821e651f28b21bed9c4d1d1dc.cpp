#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ae13fa29780151a8b82b0f64b3d58f88(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
// TODO     void method_decorator_a641328a77c65c84b2579f0433944a5a(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO     void method_decorator_e8924534701e5dd4aca61fc14e36f127(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, struct ::std::complex< float >  const & param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_98be59649f2d56f2a334d46044115239(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_bae451e8b908522998302951b794d624(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_78616cd85ce455619ff5ddca9b5e73db(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_18aeedd2ed135fd8b2ab9850232330f7(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_4015b71821e651f28b21bed9c4d1d1dc()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_ea2fe1641ae75a749eb83b1712154dac)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_bfd6fe405e875a01995aa7660cd005dc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_77e8032169af5e1e83b4aab4aa7cb78b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_396dc31d6cca5a99a7cc918da6118498)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_ed03d0a5ae625e3b82ba15bee7892783)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_4028a44e562353cdab6ec0e019408b2e)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_be7ab3a0141a593c9a5d4b83fe0da68b)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_ae13fa29780151a8b82b0f64b3d58f88)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setConstant;
// TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_a641328a77c65c84b2579f0433944a5a)(long int , struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setLinSpaced;
// TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_e8924534701e5dd4aca61fc14e36f127)(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_98be59649f2d56f2a334d46044115239)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_bae451e8b908522998302951b794d624)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_78616cd85ce455619ff5ddca9b5e73db)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_8f6e8f570c8d587587ca5a96ed234729)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_eaea56dba1ab5ffda0f89f389d2ec409)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_dd9a3ae3cd4557a3a980957038605935)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_c01735194d2552b2b7586af6c64fd0b3)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_20e9745b0320555895ddeb3d8d3e291f)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_63b27972745d52e68d07029a206f7d80)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_9539b4815f315763a26027d9bee40184)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_18aeedd2ed135fd8b2ab9850232330f7)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_77a30fd8a06c56c2adc532d5a4501b94)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::eval;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_af4c5e9825e350f994579e2ee941ecb1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::sum;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_206d382cab4b5371bbd305d00cb00d00)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::mean;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_4c1a2afb067855c383c9c40fe6779101)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::trace;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_8de3d30a7c3059639a22fc497b539e13)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::prod;
    struct ::std::complex< float >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_c1068acaab8d5ceca7908286dda057b5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::value;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_075482d0d0405b598e048155c0f976cc)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 > > > class_4015b71821e651f28b21bed9c4d1d1dc("_DenseBase_4015b71821e651f28b21bed9c4d1d1dc", "", boost::python::no_init);
    class_4015b71821e651f28b21bed9c4d1d1dc.def("non_zeros", method_pointer_ea2fe1641ae75a749eb83b1712154dac, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("outer_size", method_pointer_bfd6fe405e875a01995aa7660cd005dc, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("inner_size", method_pointer_77e8032169af5e1e83b4aab4aa7cb78b, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("resize", method_pointer_396dc31d6cca5a99a7cc918da6118498, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("resize", method_pointer_ed03d0a5ae625e3b82ba15bee7892783, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("transpose_in_place", method_pointer_4028a44e562353cdab6ec0e019408b2e, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("fill", method_pointer_be7ab3a0141a593c9a5d4b83fe0da68b, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("set_constant", method_pointer_ae13fa29780151a8b82b0f64b3d58f88, boost::python::return_internal_reference<>(), "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("set_constant", autowig::method_decorator_ae13fa29780151a8b82b0f64b3d58f88);
// TODO // TODO     class_4015b71821e651f28b21bed9c4d1d1dc.def("set_lin_spaced", method_pointer_a641328a77c65c84b2579f0433944a5a, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_4015b71821e651f28b21bed9c4d1d1dc.def("set_lin_spaced", autowig::method_decorator_a641328a77c65c84b2579f0433944a5a);
// TODO // TODO     class_4015b71821e651f28b21bed9c4d1d1dc.def("set_lin_spaced", method_pointer_e8924534701e5dd4aca61fc14e36f127, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_4015b71821e651f28b21bed9c4d1d1dc.def("set_lin_spaced", autowig::method_decorator_e8924534701e5dd4aca61fc14e36f127);
    class_4015b71821e651f28b21bed9c4d1d1dc.def("set_zero", method_pointer_98be59649f2d56f2a334d46044115239, boost::python::return_internal_reference<>(), "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("set_zero", autowig::method_decorator_98be59649f2d56f2a334d46044115239);
    class_4015b71821e651f28b21bed9c4d1d1dc.def("set_ones", method_pointer_bae451e8b908522998302951b794d624, boost::python::return_internal_reference<>(), "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("set_ones", autowig::method_decorator_bae451e8b908522998302951b794d624);
    class_4015b71821e651f28b21bed9c4d1d1dc.def("set_random", method_pointer_78616cd85ce455619ff5ddca9b5e73db, boost::python::return_internal_reference<>(), "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("set_random", autowig::method_decorator_78616cd85ce455619ff5ddca9b5e73db);
    class_4015b71821e651f28b21bed9c4d1d1dc.def("is_much_smaller_than", method_pointer_8f6e8f570c8d587587ca5a96ed234729, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("is_approx_to_constant", method_pointer_eaea56dba1ab5ffda0f89f389d2ec409, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("is_constant", method_pointer_dd9a3ae3cd4557a3a980957038605935, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("is_zero", method_pointer_c01735194d2552b2b7586af6c64fd0b3, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("is_ones", method_pointer_20e9745b0320555895ddeb3d8d3e291f, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("has_na_n", method_pointer_63b27972745d52e68d07029a206f7d80, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("all_finite", method_pointer_9539b4815f315763a26027d9bee40184, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("__imul__", method_pointer_18aeedd2ed135fd8b2ab9850232330f7, boost::python::return_internal_reference<>(), "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("__imul__", autowig::method_decorator_18aeedd2ed135fd8b2ab9850232330f7);
    class_4015b71821e651f28b21bed9c4d1d1dc.def("eval", method_pointer_77a30fd8a06c56c2adc532d5a4501b94, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("sum", method_pointer_af4c5e9825e350f994579e2ee941ecb1, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("mean", method_pointer_206d382cab4b5371bbd305d00cb00d00, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("trace", method_pointer_4c1a2afb067855c383c9c40fe6779101, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("prod", method_pointer_8de3d30a7c3059639a22fc497b539e13, "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("value", method_pointer_c1068acaab8d5ceca7908286dda057b5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4015b71821e651f28b21bed9c4d1d1dc.def("reverse_in_place", method_pointer_075482d0d0405b598e048155c0f976cc, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 3 > > >();
    }

}