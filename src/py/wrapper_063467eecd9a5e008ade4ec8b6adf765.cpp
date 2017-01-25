#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6def6ab0636d5ac7a0773d708a40cbf1(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_7c3a78a7b7355193b8672dd6b1ff685f(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, int  const & param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_a9e8a04f15445e068806d7d6254f8e34(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, int  const & param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_7e8dae139d9153d4bb534d2506ef224c(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_ed59a5cc0a96589c830762dc0e340094(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_dbc8ddcf1d075e1ea357cefb9b9db99f(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_cef8537f279c5d4a9a206017e0cc4af7(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_063467eecd9a5e008ade4ec8b6adf765()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_6705f1574359569db08019fd89846399)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_c6a4b26fbebb54668f2c9e58eced8a79)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_8b0df504da14555eb58db0759a0b534f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_273833c32ab1506d907646b2db21cd0b)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_36c6fd1d00de5222ace13566dad5fbee)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_ede5f0ef5a6c5337b3451456c2d2b7a1)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_b2707ec3de355becb614084a001aa4cd)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::fill;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_6def6ab0636d5ac7a0773d708a40cbf1)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_7c3a78a7b7355193b8672dd6b1ff685f)(long int , int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_a9e8a04f15445e068806d7d6254f8e34)(int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_7e8dae139d9153d4bb534d2506ef224c)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_ed59a5cc0a96589c830762dc0e340094)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_dbc8ddcf1d075e1ea357cefb9b9db99f)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_1164f3658626599b81a71da39f1df6b7)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_4eb54fdc1e1c50d496cb06303ea8a3cb)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_56815eb0ac225031aaa6126c86d4e72f)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_d7c60a63626f56debec76e2971062620)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_c1b6a8117e7f5f8aac42b296709ccdd1)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_8835e6c0f2f0547c8bf7da09a073bca8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_6ff3a6690856512e96d8588687d845a5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::allFinite;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_cef8537f279c5d4a9a206017e0cc4af7)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::operator*=;
    class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_0f51e3615ae95060bcccd6f147ad9894)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::eval;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_71095206c2f9552f84650be11a1125d6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::sum;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_73bac28d6da2501aa52c06392873bd1b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::mean;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_f91399286cf65db0847ec11980038592)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::trace;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_eadaa41b2f4554cf91388c1d4bce2e23)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::prod;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_f47b499d7a0a55d9910519a9f6669c35)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::minCoeff;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_dd9892c5800255c1b228ee271eae3219)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::maxCoeff;
    int  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_19e5cb6df8185a61b4176aee26998693)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_d24d27ec45855c8cb46ef8ec189f2e0e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_3292c3b4975852dab5cee4190d39120b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_c80e23149c0059159b89946e4a8fa4bc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::*method_pointer_1eeda9e935fa5b6f8b0723dc6ad83c7f)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 > > > class_063467eecd9a5e008ade4ec8b6adf765("_DenseBase_063467eecd9a5e008ade4ec8b6adf765", "", boost::python::no_init);
    class_063467eecd9a5e008ade4ec8b6adf765.def("non_zeros", method_pointer_6705f1574359569db08019fd89846399, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("outer_size", method_pointer_c6a4b26fbebb54668f2c9e58eced8a79, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("inner_size", method_pointer_8b0df504da14555eb58db0759a0b534f, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("resize", method_pointer_273833c32ab1506d907646b2db21cd0b, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("resize", method_pointer_36c6fd1d00de5222ace13566dad5fbee, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("transpose_in_place", method_pointer_ede5f0ef5a6c5337b3451456c2d2b7a1, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("fill", method_pointer_b2707ec3de355becb614084a001aa4cd, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("set_constant", method_pointer_6def6ab0636d5ac7a0773d708a40cbf1, boost::python::return_internal_reference<>(), "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("set_constant", autowig::method_decorator_6def6ab0636d5ac7a0773d708a40cbf1);
    class_063467eecd9a5e008ade4ec8b6adf765.def("set_lin_spaced", method_pointer_7c3a78a7b7355193b8672dd6b1ff685f, boost::python::return_internal_reference<>(), "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("set_lin_spaced", autowig::method_decorator_7c3a78a7b7355193b8672dd6b1ff685f);
    class_063467eecd9a5e008ade4ec8b6adf765.def("set_lin_spaced", method_pointer_a9e8a04f15445e068806d7d6254f8e34, boost::python::return_internal_reference<>(), "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("set_lin_spaced", autowig::method_decorator_a9e8a04f15445e068806d7d6254f8e34);
    class_063467eecd9a5e008ade4ec8b6adf765.def("set_zero", method_pointer_7e8dae139d9153d4bb534d2506ef224c, boost::python::return_internal_reference<>(), "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("set_zero", autowig::method_decorator_7e8dae139d9153d4bb534d2506ef224c);
    class_063467eecd9a5e008ade4ec8b6adf765.def("set_ones", method_pointer_ed59a5cc0a96589c830762dc0e340094, boost::python::return_internal_reference<>(), "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("set_ones", autowig::method_decorator_ed59a5cc0a96589c830762dc0e340094);
    class_063467eecd9a5e008ade4ec8b6adf765.def("set_random", method_pointer_dbc8ddcf1d075e1ea357cefb9b9db99f, boost::python::return_internal_reference<>(), "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("set_random", autowig::method_decorator_dbc8ddcf1d075e1ea357cefb9b9db99f);
    class_063467eecd9a5e008ade4ec8b6adf765.def("is_much_smaller_than", method_pointer_1164f3658626599b81a71da39f1df6b7, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("is_approx_to_constant", method_pointer_4eb54fdc1e1c50d496cb06303ea8a3cb, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("is_constant", method_pointer_56815eb0ac225031aaa6126c86d4e72f, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("is_zero", method_pointer_d7c60a63626f56debec76e2971062620, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("is_ones", method_pointer_c1b6a8117e7f5f8aac42b296709ccdd1, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("has_na_n", method_pointer_8835e6c0f2f0547c8bf7da09a073bca8, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("all_finite", method_pointer_6ff3a6690856512e96d8588687d845a5, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("__imul__", method_pointer_cef8537f279c5d4a9a206017e0cc4af7, boost::python::return_internal_reference<>(), "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("__imul__", autowig::method_decorator_cef8537f279c5d4a9a206017e0cc4af7);
    class_063467eecd9a5e008ade4ec8b6adf765.def("eval", method_pointer_0f51e3615ae95060bcccd6f147ad9894, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("sum", method_pointer_71095206c2f9552f84650be11a1125d6, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("mean", method_pointer_73bac28d6da2501aa52c06392873bd1b, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("trace", method_pointer_f91399286cf65db0847ec11980038592, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("prod", method_pointer_eadaa41b2f4554cf91388c1d4bce2e23, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("min_coeff", method_pointer_f47b499d7a0a55d9910519a9f6669c35, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("max_coeff", method_pointer_dd9892c5800255c1b228ee271eae3219, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("value", method_pointer_19e5cb6df8185a61b4176aee26998693, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("all", method_pointer_d24d27ec45855c8cb46ef8ec189f2e0e, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("any", method_pointer_3292c3b4975852dab5cee4190d39120b, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("count", method_pointer_c80e23149c0059159b89946e4a8fa4bc, "");
    class_063467eecd9a5e008ade4ec8b6adf765.def("reverse_in_place", method_pointer_1eeda9e935fa5b6f8b0723dc6ad83c7f, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 3 > > >();
    }

}