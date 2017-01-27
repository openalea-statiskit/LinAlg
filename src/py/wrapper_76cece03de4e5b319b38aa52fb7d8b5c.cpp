#include "_ieigen.h"


namespace autowig
{
    void method_decorator_8555dfb1148e5a8eaeeac5429b1caa5c(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
// TODO     void method_decorator_a760bd58980f57838a313613864d7fc9(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, double  const & param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO     void method_decorator_f9b654e955c758ee8945014a61f2dfb0(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, double  const & param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_00f096d998315918b16373d87dd33459(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_c8ff36ca2db954d98f4fb8cf2c01f3ff(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_c17e9972630550eba1d63964044bbb57(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_4851284ba669525ab50fe703941d206d(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_76cece03de4e5b319b38aa52fb7d8b5c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_4def67648a495d658580f192458f272e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_90d3a4782ff45aeab4700e07ee208042)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_f42337159f0b5cd6bb8273c50fb44d1a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_83671fe9552a54578922dc4e18b9b418)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_94bed52f29025b738ac7e9efd0614439)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_e6193ebaba2b53409b71c3192de9ad97)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_3e446f12776556c3811b2db15aea544e)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::fill;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_8555dfb1148e5a8eaeeac5429b1caa5c)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setConstant;
// TODO // TODO     class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_a760bd58980f57838a313613864d7fc9)(long int , double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setLinSpaced;
// TODO // TODO     class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_f9b654e955c758ee8945014a61f2dfb0)(double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_00f096d998315918b16373d87dd33459)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setZero;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_c8ff36ca2db954d98f4fb8cf2c01f3ff)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setOnes;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_c17e9972630550eba1d63964044bbb57)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_b0e3df6dd33b5fdd9415c3db46bbeec9)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_a9d77927bc995f2daf54db139558c059)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_758e110ae2aa5707a2394f9b3e883ca4)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_3256672d00965768af32192f5a143372)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_a4fd68f0d06a574fa03f4b14a2332fcf)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_8a315ce5726c551c9d93034abed2da65)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_58c4e61fa75f51389134e925436ef144)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::allFinite;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_4851284ba669525ab50fe703941d206d)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::operator*=;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_8cc78d7ab050502ab8332d1762e2d2e6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::eval;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_0b7bd3d68ed751ecadea114a27343b15)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::sum;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_bdb397331ee654328ad4d537d0210c1f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::mean;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_d21f9518b56456e79e6ad0a8ef10abce)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::trace;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_c6adca9fd4fa55b1b930bbc91c179b49)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::prod;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_e4783cdd73155c1fa716eae58af9b5d1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::minCoeff;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_770a9138c367565ea98e1234834ff47f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::maxCoeff;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_efbe29291a115dfb998d4f353a7f99ab)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_42f38207237c5d37ba1b370d8a93d715)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_30b1a9ad415c53eb9707c5e867f71d69)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_05d07cd4e6d85e67a7fb3d4d78991985)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 > > > class_76cece03de4e5b319b38aa52fb7d8b5c("_DenseBase_76cece03de4e5b319b38aa52fb7d8b5c", "", boost::python::no_init);
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("non_zeros", method_pointer_4def67648a495d658580f192458f272e, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("outer_size", method_pointer_90d3a4782ff45aeab4700e07ee208042, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("inner_size", method_pointer_f42337159f0b5cd6bb8273c50fb44d1a, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("resize", method_pointer_83671fe9552a54578922dc4e18b9b418, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("resize", method_pointer_94bed52f29025b738ac7e9efd0614439, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("transpose_in_place", method_pointer_e6193ebaba2b53409b71c3192de9ad97, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("fill", method_pointer_3e446f12776556c3811b2db15aea544e, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("set_constant", method_pointer_8555dfb1148e5a8eaeeac5429b1caa5c, boost::python::return_internal_reference<>(), "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("set_constant", autowig::method_decorator_8555dfb1148e5a8eaeeac5429b1caa5c);
// TODO // TODO     class_76cece03de4e5b319b38aa52fb7d8b5c.def("set_lin_spaced", method_pointer_a760bd58980f57838a313613864d7fc9, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_76cece03de4e5b319b38aa52fb7d8b5c.def("set_lin_spaced", autowig::method_decorator_a760bd58980f57838a313613864d7fc9);
// TODO // TODO     class_76cece03de4e5b319b38aa52fb7d8b5c.def("set_lin_spaced", method_pointer_f9b654e955c758ee8945014a61f2dfb0, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_76cece03de4e5b319b38aa52fb7d8b5c.def("set_lin_spaced", autowig::method_decorator_f9b654e955c758ee8945014a61f2dfb0);
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("set_zero", method_pointer_00f096d998315918b16373d87dd33459, boost::python::return_internal_reference<>(), "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("set_zero", autowig::method_decorator_00f096d998315918b16373d87dd33459);
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("set_ones", method_pointer_c8ff36ca2db954d98f4fb8cf2c01f3ff, boost::python::return_internal_reference<>(), "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("set_ones", autowig::method_decorator_c8ff36ca2db954d98f4fb8cf2c01f3ff);
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("set_random", method_pointer_c17e9972630550eba1d63964044bbb57, boost::python::return_internal_reference<>(), "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("set_random", autowig::method_decorator_c17e9972630550eba1d63964044bbb57);
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("is_much_smaller_than", method_pointer_b0e3df6dd33b5fdd9415c3db46bbeec9, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("is_approx_to_constant", method_pointer_a9d77927bc995f2daf54db139558c059, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("is_constant", method_pointer_758e110ae2aa5707a2394f9b3e883ca4, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("is_zero", method_pointer_3256672d00965768af32192f5a143372, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("is_ones", method_pointer_a4fd68f0d06a574fa03f4b14a2332fcf, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("has_na_n", method_pointer_8a315ce5726c551c9d93034abed2da65, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("all_finite", method_pointer_58c4e61fa75f51389134e925436ef144, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("__imul__", method_pointer_4851284ba669525ab50fe703941d206d, boost::python::return_internal_reference<>(), "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("__imul__", autowig::method_decorator_4851284ba669525ab50fe703941d206d);
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("eval", method_pointer_8cc78d7ab050502ab8332d1762e2d2e6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("sum", method_pointer_0b7bd3d68ed751ecadea114a27343b15, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("mean", method_pointer_bdb397331ee654328ad4d537d0210c1f, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("trace", method_pointer_d21f9518b56456e79e6ad0a8ef10abce, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("prod", method_pointer_c6adca9fd4fa55b1b930bbc91c179b49, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("min_coeff", method_pointer_e4783cdd73155c1fa716eae58af9b5d1, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("max_coeff", method_pointer_770a9138c367565ea98e1234834ff47f, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("all", method_pointer_efbe29291a115dfb998d4f353a7f99ab, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("any", method_pointer_42f38207237c5d37ba1b370d8a93d715, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("count", method_pointer_30b1a9ad415c53eb9707c5e867f71d69, "");
    class_76cece03de4e5b319b38aa52fb7d8b5c.def("reverse_in_place", method_pointer_05d07cd4e6d85e67a7fb3d4d78991985, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 3 > > >();
    }

}