#include "_ieigen.h"


namespace autowig
{
    void method_decorator_0ff3cb34518f5490ac8f77234929343a(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_740a5af38ba350d788bd7ff7a3941ed1(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_0327122c84f85984b1645826324414f9(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, struct ::std::complex< float >  const & param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_4eb1772d1e615ff19a304ac56d84b7ec(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_faf481e7062e5fb6bb71f675f5ca1c09(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_d119c9853d8b5c0797c264b305e5a2d4(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_862326fe3e4c52caa4be924edac42e43(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_0bf0c55fdfa654db80052295bae5918f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_d23d6d8420da5b87bb68cbbc64d644c8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_eb7054437de95c4d8108ec5b0e0828dd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_6952716f70425513ba0ac6e2cdbed995)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_8ef1ea0b425854c3ba59db2a92bff73d)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_810db94cd7c75c9091a52f1ca4f4333a)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_6d1b498804e05a25af3e5d6a7efaaaeb)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_bc7752b6aebd5e5ea5042353e0df785f)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_0ff3cb34518f5490ac8f77234929343a)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_740a5af38ba350d788bd7ff7a3941ed1)(long int , struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_0327122c84f85984b1645826324414f9)(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_4eb1772d1e615ff19a304ac56d84b7ec)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_faf481e7062e5fb6bb71f675f5ca1c09)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_d119c9853d8b5c0797c264b305e5a2d4)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_ac76b92a583e5ed69f0f40c625d7710e)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_c901fc37481d51e4be38007a232bf6ab)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_ce1ea23577f253a9a22e124c7603c589)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_c87e05a5971b591fb0a1436eef64196b)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_99dc5f77781c55019dd0c6f9aaf350e6)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_6adf402a5d8d5a7abd35582d34a886e5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_b998defcf4d4554ca1569b0757f8b51b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_862326fe3e4c52caa4be924edac42e43)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_03cda523f8105c6d92d95d812fac5060)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::eval;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_e23d13373ef55882978f0ce31e74dbde)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::sum;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_e5d37dfee0645244b147f6e04fcc4b5e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::mean;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_886e6a4a2feb5853ba16c32ec8ed5a87)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::trace;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_50b098c78c0153cf9dd51da300492935)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::prod;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_acf0c93b445658adb49d63c2f307bdb4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::minCoeff;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_c5c7145e2cbc5ffa80388a57569f5f0f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::maxCoeff;
    struct ::std::complex< float >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_0285e590b97a59eba937faa3e88f059e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_ee5eddf0b2a35403b5301f6c31f9751d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_045ea5f390d15b12a623dd82c5139e9a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_d98c301046475935b15a7c0aa7695dbd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 > >::*method_pointer_5b8ccea86ebc55f0a9be7780d06600d0)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 > > > class_0bf0c55fdfa654db80052295bae5918f("_DenseBase_0bf0c55fdfa654db80052295bae5918f", "", boost::python::no_init);
    class_0bf0c55fdfa654db80052295bae5918f.def("non_zeros", method_pointer_d23d6d8420da5b87bb68cbbc64d644c8, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("outer_size", method_pointer_eb7054437de95c4d8108ec5b0e0828dd, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("inner_size", method_pointer_6952716f70425513ba0ac6e2cdbed995, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("resize", method_pointer_8ef1ea0b425854c3ba59db2a92bff73d, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("resize", method_pointer_810db94cd7c75c9091a52f1ca4f4333a, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("transpose_in_place", method_pointer_6d1b498804e05a25af3e5d6a7efaaaeb, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("fill", method_pointer_bc7752b6aebd5e5ea5042353e0df785f, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("set_constant", method_pointer_0ff3cb34518f5490ac8f77234929343a, boost::python::return_internal_reference<>(), "");
    class_0bf0c55fdfa654db80052295bae5918f.def("set_constant", autowig::method_decorator_0ff3cb34518f5490ac8f77234929343a);
    class_0bf0c55fdfa654db80052295bae5918f.def("set_lin_spaced", method_pointer_740a5af38ba350d788bd7ff7a3941ed1, boost::python::return_internal_reference<>(), "");
    class_0bf0c55fdfa654db80052295bae5918f.def("set_lin_spaced", autowig::method_decorator_740a5af38ba350d788bd7ff7a3941ed1);
    class_0bf0c55fdfa654db80052295bae5918f.def("set_lin_spaced", method_pointer_0327122c84f85984b1645826324414f9, boost::python::return_internal_reference<>(), "");
    class_0bf0c55fdfa654db80052295bae5918f.def("set_lin_spaced", autowig::method_decorator_0327122c84f85984b1645826324414f9);
    class_0bf0c55fdfa654db80052295bae5918f.def("set_zero", method_pointer_4eb1772d1e615ff19a304ac56d84b7ec, boost::python::return_internal_reference<>(), "");
    class_0bf0c55fdfa654db80052295bae5918f.def("set_zero", autowig::method_decorator_4eb1772d1e615ff19a304ac56d84b7ec);
    class_0bf0c55fdfa654db80052295bae5918f.def("set_ones", method_pointer_faf481e7062e5fb6bb71f675f5ca1c09, boost::python::return_internal_reference<>(), "");
    class_0bf0c55fdfa654db80052295bae5918f.def("set_ones", autowig::method_decorator_faf481e7062e5fb6bb71f675f5ca1c09);
    class_0bf0c55fdfa654db80052295bae5918f.def("set_random", method_pointer_d119c9853d8b5c0797c264b305e5a2d4, boost::python::return_internal_reference<>(), "");
    class_0bf0c55fdfa654db80052295bae5918f.def("set_random", autowig::method_decorator_d119c9853d8b5c0797c264b305e5a2d4);
    class_0bf0c55fdfa654db80052295bae5918f.def("is_much_smaller_than", method_pointer_ac76b92a583e5ed69f0f40c625d7710e, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("is_approx_to_constant", method_pointer_c901fc37481d51e4be38007a232bf6ab, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("is_constant", method_pointer_ce1ea23577f253a9a22e124c7603c589, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("is_zero", method_pointer_c87e05a5971b591fb0a1436eef64196b, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("is_ones", method_pointer_99dc5f77781c55019dd0c6f9aaf350e6, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("has_na_n", method_pointer_6adf402a5d8d5a7abd35582d34a886e5, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("all_finite", method_pointer_b998defcf4d4554ca1569b0757f8b51b, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("__imul__", method_pointer_862326fe3e4c52caa4be924edac42e43, boost::python::return_internal_reference<>(), "");
    class_0bf0c55fdfa654db80052295bae5918f.def("__imul__", autowig::method_decorator_862326fe3e4c52caa4be924edac42e43);
    class_0bf0c55fdfa654db80052295bae5918f.def("eval", method_pointer_03cda523f8105c6d92d95d812fac5060, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0bf0c55fdfa654db80052295bae5918f.def("sum", method_pointer_e23d13373ef55882978f0ce31e74dbde, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("mean", method_pointer_e5d37dfee0645244b147f6e04fcc4b5e, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("trace", method_pointer_886e6a4a2feb5853ba16c32ec8ed5a87, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("prod", method_pointer_50b098c78c0153cf9dd51da300492935, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("min_coeff", method_pointer_acf0c93b445658adb49d63c2f307bdb4, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("max_coeff", method_pointer_c5c7145e2cbc5ffa80388a57569f5f0f, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("value", method_pointer_0285e590b97a59eba937faa3e88f059e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0bf0c55fdfa654db80052295bae5918f.def("all", method_pointer_ee5eddf0b2a35403b5301f6c31f9751d, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("any", method_pointer_045ea5f390d15b12a623dd82c5139e9a, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("count", method_pointer_d98c301046475935b15a7c0aa7695dbd, "");
    class_0bf0c55fdfa654db80052295bae5918f.def("reverse_in_place", method_pointer_5b8ccea86ebc55f0a9be7780d06600d0, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 3 > > >();
    }

}