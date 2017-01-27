#include "_ieigen.h"


namespace autowig
{
    void method_decorator_0f918d11e41359b69438b5d38b25ed6e(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_41a54733ad97535cbf398e956ada8546(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, float  const & param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_9d615f03ee1c5b718b1e707ce377cbb9(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, float  const & param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_cde1ccf77adc5556b063e1b8e1df09e7(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_8371561f284a55d59049711614ca8938(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_4a4c99428f2a52e292b4c286fbed7b73(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_1e92b96419855f1ca922724316585411(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_5c50129e699053f48405c304aeca75b8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_da1e23051da15ff2ad5fcf96d1a8167d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_8ae0d3bbafe4595e9ff29487782751fc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_db2f400757945b79a28c1f7d4116eacc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_c274b1674a225b51b2c26bed15da99b6)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_b6d82e1f2a0b550e9326e6513b8b8641)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_148e8e614d815b19b37c47c003bdb9c6)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::fill;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_0f918d11e41359b69438b5d38b25ed6e)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_41a54733ad97535cbf398e956ada8546)(long int , float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_9d615f03ee1c5b718b1e707ce377cbb9)(float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_cde1ccf77adc5556b063e1b8e1df09e7)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_8371561f284a55d59049711614ca8938)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_4a4c99428f2a52e292b4c286fbed7b73)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_77bd198093655dc5a2b18a2df8ba3435)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_234ee7fcd0575c3f87b1925de67eb2ac)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_c696a2a3166255f6b51503e9c5c78007)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_36b8760744f15b689a8dce7d387cfc44)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_4da33c02c7ff5f9f82292952502ad72c)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_7703366d4be855cf9600de518ea8534c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_a911b87b8504555589e290ded662f15b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::allFinite;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_1e92b96419855f1ca922724316585411)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::operator*=;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_6b5fd75cdeea5198988a4b833a5885aa)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::eval;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_e0d3516dbfcf5b45a737de4ea1395840)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::sum;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_5851fcac023e51629cefe54c53e11cdb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::mean;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_199dd9a6a48e587885ce2d2b3f3c1deb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::trace;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_1a597731ba135de9b2df2022b1e422d7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::prod;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_9f7c4506381356dc9e046310381a70b5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::minCoeff;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_64bb5553d7b75229a91a4334b3045ea4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::maxCoeff;
    float  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_4ca09dc8ce985804854ae8ea8cdc279a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_025d13ff098b56a185986000f9aee311)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_5c808869505f5f00baa98ae63ab89be2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_50eda35a271d550c820c16a690a2b369)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_02a123d6c4a457cf8dffb43a399bccc7)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 > > > class_5c50129e699053f48405c304aeca75b8("_DenseBase_5c50129e699053f48405c304aeca75b8", "", boost::python::no_init);
    class_5c50129e699053f48405c304aeca75b8.def("non_zeros", method_pointer_da1e23051da15ff2ad5fcf96d1a8167d, "");
    class_5c50129e699053f48405c304aeca75b8.def("outer_size", method_pointer_8ae0d3bbafe4595e9ff29487782751fc, "");
    class_5c50129e699053f48405c304aeca75b8.def("inner_size", method_pointer_db2f400757945b79a28c1f7d4116eacc, "");
    class_5c50129e699053f48405c304aeca75b8.def("resize", method_pointer_c274b1674a225b51b2c26bed15da99b6, "");
    class_5c50129e699053f48405c304aeca75b8.def("resize", method_pointer_b6d82e1f2a0b550e9326e6513b8b8641, "");
    class_5c50129e699053f48405c304aeca75b8.def("fill", method_pointer_148e8e614d815b19b37c47c003bdb9c6, "");
    class_5c50129e699053f48405c304aeca75b8.def("set_constant", method_pointer_0f918d11e41359b69438b5d38b25ed6e, boost::python::return_internal_reference<>(), "");
    class_5c50129e699053f48405c304aeca75b8.def("set_constant", autowig::method_decorator_0f918d11e41359b69438b5d38b25ed6e);
    class_5c50129e699053f48405c304aeca75b8.def("set_lin_spaced", method_pointer_41a54733ad97535cbf398e956ada8546, boost::python::return_internal_reference<>(), "");
    class_5c50129e699053f48405c304aeca75b8.def("set_lin_spaced", autowig::method_decorator_41a54733ad97535cbf398e956ada8546);
    class_5c50129e699053f48405c304aeca75b8.def("set_lin_spaced", method_pointer_9d615f03ee1c5b718b1e707ce377cbb9, boost::python::return_internal_reference<>(), "");
    class_5c50129e699053f48405c304aeca75b8.def("set_lin_spaced", autowig::method_decorator_9d615f03ee1c5b718b1e707ce377cbb9);
    class_5c50129e699053f48405c304aeca75b8.def("set_zero", method_pointer_cde1ccf77adc5556b063e1b8e1df09e7, boost::python::return_internal_reference<>(), "");
    class_5c50129e699053f48405c304aeca75b8.def("set_zero", autowig::method_decorator_cde1ccf77adc5556b063e1b8e1df09e7);
    class_5c50129e699053f48405c304aeca75b8.def("set_ones", method_pointer_8371561f284a55d59049711614ca8938, boost::python::return_internal_reference<>(), "");
    class_5c50129e699053f48405c304aeca75b8.def("set_ones", autowig::method_decorator_8371561f284a55d59049711614ca8938);
    class_5c50129e699053f48405c304aeca75b8.def("set_random", method_pointer_4a4c99428f2a52e292b4c286fbed7b73, boost::python::return_internal_reference<>(), "");
    class_5c50129e699053f48405c304aeca75b8.def("set_random", autowig::method_decorator_4a4c99428f2a52e292b4c286fbed7b73);
    class_5c50129e699053f48405c304aeca75b8.def("is_much_smaller_than", method_pointer_77bd198093655dc5a2b18a2df8ba3435, "");
    class_5c50129e699053f48405c304aeca75b8.def("is_approx_to_constant", method_pointer_234ee7fcd0575c3f87b1925de67eb2ac, "");
    class_5c50129e699053f48405c304aeca75b8.def("is_constant", method_pointer_c696a2a3166255f6b51503e9c5c78007, "");
    class_5c50129e699053f48405c304aeca75b8.def("is_zero", method_pointer_36b8760744f15b689a8dce7d387cfc44, "");
    class_5c50129e699053f48405c304aeca75b8.def("is_ones", method_pointer_4da33c02c7ff5f9f82292952502ad72c, "");
    class_5c50129e699053f48405c304aeca75b8.def("has_na_n", method_pointer_7703366d4be855cf9600de518ea8534c, "");
    class_5c50129e699053f48405c304aeca75b8.def("all_finite", method_pointer_a911b87b8504555589e290ded662f15b, "");
    class_5c50129e699053f48405c304aeca75b8.def("__imul__", method_pointer_1e92b96419855f1ca922724316585411, boost::python::return_internal_reference<>(), "");
    class_5c50129e699053f48405c304aeca75b8.def("__imul__", autowig::method_decorator_1e92b96419855f1ca922724316585411);
    class_5c50129e699053f48405c304aeca75b8.def("eval", method_pointer_6b5fd75cdeea5198988a4b833a5885aa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5c50129e699053f48405c304aeca75b8.def("sum", method_pointer_e0d3516dbfcf5b45a737de4ea1395840, "");
    class_5c50129e699053f48405c304aeca75b8.def("mean", method_pointer_5851fcac023e51629cefe54c53e11cdb, "");
    class_5c50129e699053f48405c304aeca75b8.def("trace", method_pointer_199dd9a6a48e587885ce2d2b3f3c1deb, "");
    class_5c50129e699053f48405c304aeca75b8.def("prod", method_pointer_1a597731ba135de9b2df2022b1e422d7, "");
    class_5c50129e699053f48405c304aeca75b8.def("min_coeff", method_pointer_9f7c4506381356dc9e046310381a70b5, "");
    class_5c50129e699053f48405c304aeca75b8.def("max_coeff", method_pointer_64bb5553d7b75229a91a4334b3045ea4, "");
    class_5c50129e699053f48405c304aeca75b8.def("value", method_pointer_4ca09dc8ce985804854ae8ea8cdc279a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5c50129e699053f48405c304aeca75b8.def("all", method_pointer_025d13ff098b56a185986000f9aee311, "");
    class_5c50129e699053f48405c304aeca75b8.def("any", method_pointer_5c808869505f5f00baa98ae63ab89be2, "");
    class_5c50129e699053f48405c304aeca75b8.def("count", method_pointer_50eda35a271d550c820c16a690a2b369, "");
    class_5c50129e699053f48405c304aeca75b8.def("reverse_in_place", method_pointer_02a123d6c4a457cf8dffb43a399bccc7, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 3 > > >();
    }

}