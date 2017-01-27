#include "_ieigen.h"


namespace autowig
{
    void method_decorator_5a1bc44452c7535e834e4a6fba16076b(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_15aa0ce769e858068d86ff50760d4f28(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, double  const & param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_05fcfeee902053c998f5fd461e65e77c(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, double  const & param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_923a6c84463556a78e1154276bcbafe0(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_74f624649dbd585095b9e928152ec4bb(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_f136e4c6d82956d3a6c05650f6fd48db(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_87b4e3512d3d5cf4a7d7750af9ef2be8(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_e3eac3c0866e52c2b8ebc04ab597d6d5()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_3d4d05ffecad58a8a7f8637099940e9d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_2277b3c8b086569cbdff2653f29e60d1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_59719a3238785995a4ffc5b2a1ebd979)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_4357be214dd85e39a019ae2df34d3f0a)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_da80aafa7d215781b9454a17bce8bb32)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_89c4c564532350f791589a871fe7f1a1)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::fill;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_5a1bc44452c7535e834e4a6fba16076b)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_15aa0ce769e858068d86ff50760d4f28)(long int , double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_05fcfeee902053c998f5fd461e65e77c)(double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_923a6c84463556a78e1154276bcbafe0)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_74f624649dbd585095b9e928152ec4bb)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_f136e4c6d82956d3a6c05650f6fd48db)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_c12db40a7f485fb3a08e6668dfe0de7a)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_bee42246eaf55ee1b31b9a80c4405af1)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_2bf5db945f4658688efd1796f8138735)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_bbbdc65fb9125e0580a7748117908837)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_2a51d453407c572ababee8628ce76773)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_88a7934727175ac6b1681309178c938c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_4246b2e9f03c50e597efeec291950a2c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::allFinite;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_87b4e3512d3d5cf4a7d7750af9ef2be8)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::operator*=;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_ab35c515b4765ebf930eb9bae572e840)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::eval;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_bb3fd042cda6581495fb71a6c393edf7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::sum;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_008b17e9886d53e98b7702bd19b7607b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::mean;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_a653d4714fba5350aa35117be6720e98)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::trace;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_fa9ea5ff8881572893fa47a94bd80862)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::prod;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_d7c18cd844ba5120a0a2859d73133cce)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::minCoeff;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_34f35dfa71c756c885b35f9e1ae4fd28)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::maxCoeff;
    double  const & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_6f97c4f9ae5c5a7a998e07707cb01ba7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_9ff8aede58415c4d8f0d52a88bee6ad0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_e97f08cb486c5f58a4ad706c50ccc0c8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_c5fb51680e625fbfaae18ff3de045fdd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_0861435ff236521abf854a9a9ab3a9b2)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 > > > class_e3eac3c0866e52c2b8ebc04ab597d6d5("_DenseBase_e3eac3c0866e52c2b8ebc04ab597d6d5", "", boost::python::no_init);
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("non_zeros", method_pointer_3d4d05ffecad58a8a7f8637099940e9d, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("outer_size", method_pointer_2277b3c8b086569cbdff2653f29e60d1, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("inner_size", method_pointer_59719a3238785995a4ffc5b2a1ebd979, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("resize", method_pointer_4357be214dd85e39a019ae2df34d3f0a, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("resize", method_pointer_da80aafa7d215781b9454a17bce8bb32, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("fill", method_pointer_89c4c564532350f791589a871fe7f1a1, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("set_constant", method_pointer_5a1bc44452c7535e834e4a6fba16076b, boost::python::return_internal_reference<>(), "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("set_constant", autowig::method_decorator_5a1bc44452c7535e834e4a6fba16076b);
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("set_lin_spaced", method_pointer_15aa0ce769e858068d86ff50760d4f28, boost::python::return_internal_reference<>(), "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("set_lin_spaced", autowig::method_decorator_15aa0ce769e858068d86ff50760d4f28);
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("set_lin_spaced", method_pointer_05fcfeee902053c998f5fd461e65e77c, boost::python::return_internal_reference<>(), "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("set_lin_spaced", autowig::method_decorator_05fcfeee902053c998f5fd461e65e77c);
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("set_zero", method_pointer_923a6c84463556a78e1154276bcbafe0, boost::python::return_internal_reference<>(), "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("set_zero", autowig::method_decorator_923a6c84463556a78e1154276bcbafe0);
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("set_ones", method_pointer_74f624649dbd585095b9e928152ec4bb, boost::python::return_internal_reference<>(), "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("set_ones", autowig::method_decorator_74f624649dbd585095b9e928152ec4bb);
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("set_random", method_pointer_f136e4c6d82956d3a6c05650f6fd48db, boost::python::return_internal_reference<>(), "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("set_random", autowig::method_decorator_f136e4c6d82956d3a6c05650f6fd48db);
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("is_much_smaller_than", method_pointer_c12db40a7f485fb3a08e6668dfe0de7a, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("is_approx_to_constant", method_pointer_bee42246eaf55ee1b31b9a80c4405af1, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("is_constant", method_pointer_2bf5db945f4658688efd1796f8138735, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("is_zero", method_pointer_bbbdc65fb9125e0580a7748117908837, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("is_ones", method_pointer_2a51d453407c572ababee8628ce76773, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("has_na_n", method_pointer_88a7934727175ac6b1681309178c938c, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("all_finite", method_pointer_4246b2e9f03c50e597efeec291950a2c, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("__imul__", method_pointer_87b4e3512d3d5cf4a7d7750af9ef2be8, boost::python::return_internal_reference<>(), "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("__imul__", autowig::method_decorator_87b4e3512d3d5cf4a7d7750af9ef2be8);
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("eval", method_pointer_ab35c515b4765ebf930eb9bae572e840, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("sum", method_pointer_bb3fd042cda6581495fb71a6c393edf7, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("mean", method_pointer_008b17e9886d53e98b7702bd19b7607b, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("trace", method_pointer_a653d4714fba5350aa35117be6720e98, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("prod", method_pointer_fa9ea5ff8881572893fa47a94bd80862, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("min_coeff", method_pointer_d7c18cd844ba5120a0a2859d73133cce, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("max_coeff", method_pointer_34f35dfa71c756c885b35f9e1ae4fd28, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("value", method_pointer_6f97c4f9ae5c5a7a998e07707cb01ba7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("all", method_pointer_9ff8aede58415c4d8f0d52a88bee6ad0, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("any", method_pointer_e97f08cb486c5f58a4ad706c50ccc0c8, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("count", method_pointer_c5fb51680e625fbfaae18ff3de045fdd, "");
    class_e3eac3c0866e52c2b8ebc04ab597d6d5.def("reverse_in_place", method_pointer_0861435ff236521abf854a9a9ab3a9b2, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 3 > > >();
    }

}