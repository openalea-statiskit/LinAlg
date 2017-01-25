#include "_ieigen.h"


namespace autowig
{
    void method_decorator_510c0d76b5745ec0bf9537b80a65261d(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_a1743884222e503eabfba35306f1bdcc(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, double  const & param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_7f7b596c2d075a72acfc90465747207c(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, double  const & param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_6a5b7033e36c51528604fd276b73d730(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_469b3a47a4ab508f96986d89c9f369a6(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_1480bbef216050b7a4ce50bdb608d4d7(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_2bfeef7b055b5746b313d5773a2f196a(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_9fd37260c59456ba93ad549094b92e9d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_04049c142b55524784abd79d8e5ddcdf)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_14c1dc859c095a36a7a2bed9b3a91849)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_5b07e4e168f857d79bf13fb3b4d54667)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_b9a28b41fd735906aa0fe670d8d28bd6)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_cb39abe3b4775f55a1be448375290ffb)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_5873a77352b150e6a2cf5b800ff00a66)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_7794754cec2959bd90fe7a763399fb8b)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::fill;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_510c0d76b5745ec0bf9537b80a65261d)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_a1743884222e503eabfba35306f1bdcc)(long int , double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_7f7b596c2d075a72acfc90465747207c)(double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_6a5b7033e36c51528604fd276b73d730)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_469b3a47a4ab508f96986d89c9f369a6)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_1480bbef216050b7a4ce50bdb608d4d7)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_755d8cee9a205bd092fc9b7e94426450)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_14fc05b5c5a65e989e54a1e7e5c6f505)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_1e6925160cd8579e9d82435c7914cccc)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_b2b21bc6260b53a8b02d8b8b13da7d20)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_8ab7b5658b8f5f1cb1b03b8318dff1c3)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_d05b481864ef507492da0d280b446b33)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_a78c9de726215afdac309dea191a39be)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::allFinite;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_2bfeef7b055b5746b313d5773a2f196a)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::operator*=;
    class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_ec3e57e5b6d2542cb0be31a9bad576a4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::eval;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_50b8169708a3502a9d53aa08696a43c6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::sum;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_74bd473a605e5c1b9a4ce5a5584aada4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::mean;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_b22b835e12a451acb4ca27cf0efe6b6e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::trace;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_0cba2b865a48584f80c8b25f25b8adbe)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::prod;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_470dba003f045db5bfd61cf77c8149c1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::minCoeff;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_50bdc88dc9c35c6d91771005e512c553)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::maxCoeff;
    double  const & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_daee11129b9a5742bf6ff65c9d5ffbf7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_c0937563fe225fe4a1f62b1df670c4b0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_5b4f7450513b5d778af8642094970c60)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_5d4353151c4c5b57be9e4fe1c7ec48bc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::*method_pointer_b815cd708b135ebc8699ba7041162fd7)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 > > > class_9fd37260c59456ba93ad549094b92e9d("_DenseBase_9fd37260c59456ba93ad549094b92e9d", "", boost::python::no_init);
    class_9fd37260c59456ba93ad549094b92e9d.def("non_zeros", method_pointer_04049c142b55524784abd79d8e5ddcdf, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("outer_size", method_pointer_14c1dc859c095a36a7a2bed9b3a91849, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("inner_size", method_pointer_5b07e4e168f857d79bf13fb3b4d54667, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("resize", method_pointer_b9a28b41fd735906aa0fe670d8d28bd6, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("resize", method_pointer_cb39abe3b4775f55a1be448375290ffb, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("transpose_in_place", method_pointer_5873a77352b150e6a2cf5b800ff00a66, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("fill", method_pointer_7794754cec2959bd90fe7a763399fb8b, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("set_constant", method_pointer_510c0d76b5745ec0bf9537b80a65261d, boost::python::return_internal_reference<>(), "");
    class_9fd37260c59456ba93ad549094b92e9d.def("set_constant", autowig::method_decorator_510c0d76b5745ec0bf9537b80a65261d);
    class_9fd37260c59456ba93ad549094b92e9d.def("set_lin_spaced", method_pointer_a1743884222e503eabfba35306f1bdcc, boost::python::return_internal_reference<>(), "");
    class_9fd37260c59456ba93ad549094b92e9d.def("set_lin_spaced", autowig::method_decorator_a1743884222e503eabfba35306f1bdcc);
    class_9fd37260c59456ba93ad549094b92e9d.def("set_lin_spaced", method_pointer_7f7b596c2d075a72acfc90465747207c, boost::python::return_internal_reference<>(), "");
    class_9fd37260c59456ba93ad549094b92e9d.def("set_lin_spaced", autowig::method_decorator_7f7b596c2d075a72acfc90465747207c);
    class_9fd37260c59456ba93ad549094b92e9d.def("set_zero", method_pointer_6a5b7033e36c51528604fd276b73d730, boost::python::return_internal_reference<>(), "");
    class_9fd37260c59456ba93ad549094b92e9d.def("set_zero", autowig::method_decorator_6a5b7033e36c51528604fd276b73d730);
    class_9fd37260c59456ba93ad549094b92e9d.def("set_ones", method_pointer_469b3a47a4ab508f96986d89c9f369a6, boost::python::return_internal_reference<>(), "");
    class_9fd37260c59456ba93ad549094b92e9d.def("set_ones", autowig::method_decorator_469b3a47a4ab508f96986d89c9f369a6);
    class_9fd37260c59456ba93ad549094b92e9d.def("set_random", method_pointer_1480bbef216050b7a4ce50bdb608d4d7, boost::python::return_internal_reference<>(), "");
    class_9fd37260c59456ba93ad549094b92e9d.def("set_random", autowig::method_decorator_1480bbef216050b7a4ce50bdb608d4d7);
    class_9fd37260c59456ba93ad549094b92e9d.def("is_much_smaller_than", method_pointer_755d8cee9a205bd092fc9b7e94426450, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("is_approx_to_constant", method_pointer_14fc05b5c5a65e989e54a1e7e5c6f505, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("is_constant", method_pointer_1e6925160cd8579e9d82435c7914cccc, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("is_zero", method_pointer_b2b21bc6260b53a8b02d8b8b13da7d20, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("is_ones", method_pointer_8ab7b5658b8f5f1cb1b03b8318dff1c3, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("has_na_n", method_pointer_d05b481864ef507492da0d280b446b33, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("all_finite", method_pointer_a78c9de726215afdac309dea191a39be, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("__imul__", method_pointer_2bfeef7b055b5746b313d5773a2f196a, boost::python::return_internal_reference<>(), "");
    class_9fd37260c59456ba93ad549094b92e9d.def("__imul__", autowig::method_decorator_2bfeef7b055b5746b313d5773a2f196a);
    class_9fd37260c59456ba93ad549094b92e9d.def("eval", method_pointer_ec3e57e5b6d2542cb0be31a9bad576a4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9fd37260c59456ba93ad549094b92e9d.def("sum", method_pointer_50b8169708a3502a9d53aa08696a43c6, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("mean", method_pointer_74bd473a605e5c1b9a4ce5a5584aada4, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("trace", method_pointer_b22b835e12a451acb4ca27cf0efe6b6e, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("prod", method_pointer_0cba2b865a48584f80c8b25f25b8adbe, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("min_coeff", method_pointer_470dba003f045db5bfd61cf77c8149c1, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("max_coeff", method_pointer_50bdc88dc9c35c6d91771005e512c553, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("value", method_pointer_daee11129b9a5742bf6ff65c9d5ffbf7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9fd37260c59456ba93ad549094b92e9d.def("all", method_pointer_c0937563fe225fe4a1f62b1df670c4b0, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("any", method_pointer_5b4f7450513b5d778af8642094970c60, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("count", method_pointer_5d4353151c4c5b57be9e4fe1c7ec48bc, "");
    class_9fd37260c59456ba93ad549094b92e9d.def("reverse_in_place", method_pointer_b815cd708b135ebc8699ba7041162fd7, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 3 > > >();
    }

}