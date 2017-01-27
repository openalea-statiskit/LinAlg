#include "_ieigen.h"


namespace autowig
{
    void method_decorator_0170acf858ec5d70841bac4ec139920e(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_937f540cae195ba68cb73cf11bfda9d7(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, double  const & param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_d39f15f03841542ebe698932d367e030(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, double  const & param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_e1506790eec85485af705e1b0298005a(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_dc9b36d1372d565e990e68d571af1a61(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_e7f666976ade550a8f24213cb14d0797(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_77fe337a86a25be083388b960c969921(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_714ba257c8705e178ffd59cb8157bce9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_2729ed96df2b5633add12f6f43ebc57e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_6a6567f0c72c536f9eef1242f721bbcc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_f93bc9d130c05952a866a84837f23e0c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_43fd988e9a3d50edb4e1676fbcfb1c4f)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_645b55fcbf81551897ebaf6814eee9ab)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_f7e99e807d1a58b28e9e82eebbef2f5a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_749f87c3230e555092b897d729123858)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::fill;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_0170acf858ec5d70841bac4ec139920e)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_937f540cae195ba68cb73cf11bfda9d7)(long int , double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_d39f15f03841542ebe698932d367e030)(double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_e1506790eec85485af705e1b0298005a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_dc9b36d1372d565e990e68d571af1a61)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_e7f666976ade550a8f24213cb14d0797)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_8b5d7e6e3e8253509f754cd05cd7f9e9)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_4736552fe2c557abb02d46bd58441f50)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_a97378dd97da5b3aa6c874405d2c78e5)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_6b955a4f804e5c69ba4958b50345b769)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_e6089ec90dcd53419981c32a4bee1bdc)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_7e84a54e6a2c51edbe44477976f03a3c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_8f12106f843b574cbab5f4790e061926)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::allFinite;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_77fe337a86a25be083388b960c969921)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::operator*=;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_65fe07ab00205ec6bd87fee0e2e8cf69)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::eval;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_6b315f6c05165ad881b9f79f7262cab6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::sum;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_31022689a8c3512d9f6aa1c6cd696f53)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::mean;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_038856ce4f3c59e8a7b6f448855c98ff)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::trace;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_05ac035de7895eefad9c892d14f54b51)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::prod;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_3fbd4f0bdce654728a62bc17a7dbf5b9)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::minCoeff;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_b4452c184fdf5a59aac3854dee2c4e65)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::maxCoeff;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_317974a2e8d756e9a9df83e1ba1e232e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_ac00afe1d93a5746a0d6459b1a0bf1b8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_44688e88791853a3945b5fc9594effbd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_8517d5f9537d54a9a563f36019251134)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 > > > class_714ba257c8705e178ffd59cb8157bce9("_DenseBase_714ba257c8705e178ffd59cb8157bce9", "", boost::python::no_init);
    class_714ba257c8705e178ffd59cb8157bce9.def("non_zeros", method_pointer_2729ed96df2b5633add12f6f43ebc57e, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("outer_size", method_pointer_6a6567f0c72c536f9eef1242f721bbcc, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("inner_size", method_pointer_f93bc9d130c05952a866a84837f23e0c, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("resize", method_pointer_43fd988e9a3d50edb4e1676fbcfb1c4f, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("resize", method_pointer_645b55fcbf81551897ebaf6814eee9ab, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("transpose_in_place", method_pointer_f7e99e807d1a58b28e9e82eebbef2f5a, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("fill", method_pointer_749f87c3230e555092b897d729123858, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("set_constant", method_pointer_0170acf858ec5d70841bac4ec139920e, boost::python::return_internal_reference<>(), "");
    class_714ba257c8705e178ffd59cb8157bce9.def("set_constant", autowig::method_decorator_0170acf858ec5d70841bac4ec139920e);
    class_714ba257c8705e178ffd59cb8157bce9.def("set_lin_spaced", method_pointer_937f540cae195ba68cb73cf11bfda9d7, boost::python::return_internal_reference<>(), "");
    class_714ba257c8705e178ffd59cb8157bce9.def("set_lin_spaced", autowig::method_decorator_937f540cae195ba68cb73cf11bfda9d7);
    class_714ba257c8705e178ffd59cb8157bce9.def("set_lin_spaced", method_pointer_d39f15f03841542ebe698932d367e030, boost::python::return_internal_reference<>(), "");
    class_714ba257c8705e178ffd59cb8157bce9.def("set_lin_spaced", autowig::method_decorator_d39f15f03841542ebe698932d367e030);
    class_714ba257c8705e178ffd59cb8157bce9.def("set_zero", method_pointer_e1506790eec85485af705e1b0298005a, boost::python::return_internal_reference<>(), "");
    class_714ba257c8705e178ffd59cb8157bce9.def("set_zero", autowig::method_decorator_e1506790eec85485af705e1b0298005a);
    class_714ba257c8705e178ffd59cb8157bce9.def("set_ones", method_pointer_dc9b36d1372d565e990e68d571af1a61, boost::python::return_internal_reference<>(), "");
    class_714ba257c8705e178ffd59cb8157bce9.def("set_ones", autowig::method_decorator_dc9b36d1372d565e990e68d571af1a61);
    class_714ba257c8705e178ffd59cb8157bce9.def("set_random", method_pointer_e7f666976ade550a8f24213cb14d0797, boost::python::return_internal_reference<>(), "");
    class_714ba257c8705e178ffd59cb8157bce9.def("set_random", autowig::method_decorator_e7f666976ade550a8f24213cb14d0797);
    class_714ba257c8705e178ffd59cb8157bce9.def("is_much_smaller_than", method_pointer_8b5d7e6e3e8253509f754cd05cd7f9e9, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("is_approx_to_constant", method_pointer_4736552fe2c557abb02d46bd58441f50, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("is_constant", method_pointer_a97378dd97da5b3aa6c874405d2c78e5, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("is_zero", method_pointer_6b955a4f804e5c69ba4958b50345b769, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("is_ones", method_pointer_e6089ec90dcd53419981c32a4bee1bdc, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("has_na_n", method_pointer_7e84a54e6a2c51edbe44477976f03a3c, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("all_finite", method_pointer_8f12106f843b574cbab5f4790e061926, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("__imul__", method_pointer_77fe337a86a25be083388b960c969921, boost::python::return_internal_reference<>(), "");
    class_714ba257c8705e178ffd59cb8157bce9.def("__imul__", autowig::method_decorator_77fe337a86a25be083388b960c969921);
    class_714ba257c8705e178ffd59cb8157bce9.def("eval", method_pointer_65fe07ab00205ec6bd87fee0e2e8cf69, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_714ba257c8705e178ffd59cb8157bce9.def("sum", method_pointer_6b315f6c05165ad881b9f79f7262cab6, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("mean", method_pointer_31022689a8c3512d9f6aa1c6cd696f53, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("trace", method_pointer_038856ce4f3c59e8a7b6f448855c98ff, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("prod", method_pointer_05ac035de7895eefad9c892d14f54b51, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("min_coeff", method_pointer_3fbd4f0bdce654728a62bc17a7dbf5b9, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("max_coeff", method_pointer_b4452c184fdf5a59aac3854dee2c4e65, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("all", method_pointer_317974a2e8d756e9a9df83e1ba1e232e, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("any", method_pointer_ac00afe1d93a5746a0d6459b1a0bf1b8, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("count", method_pointer_44688e88791853a3945b5fc9594effbd, "");
    class_714ba257c8705e178ffd59cb8157bce9.def("reverse_in_place", method_pointer_8517d5f9537d54a9a563f36019251134, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >, 3 > > >();
    }

}