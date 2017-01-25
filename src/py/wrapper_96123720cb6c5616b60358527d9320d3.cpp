#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6eda9f0f6e05545cbc15b5d887500ad8(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_ae2fd93730c95f50a82958d30a6fc5dd(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, float  const & param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_4d75fa98b48c5e1ea1e2a8efc383bd37(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, float  const & param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_5afc84783b0057d09723efebb1c56fbf(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_b6c46c2c2c0157a4a07fc9ba41065c6b(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_676b770df1d4527dbe72905e397d869d(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_7be9f4b23f5a5973826b4e8030b4f8a9(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_96123720cb6c5616b60358527d9320d3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_d379cbda644c58468df91f2d271c6e3b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_f1ef763000495c09824631267fb15b94)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_5e3dd6d3a37b5fdcbb918ef730deb605)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_f24dd8556c4255adae92a241ac3c08e9)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_e4e5af48f7905bd2bdef4085da897c1e)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_0ac65792f37450cb88b3763fe12a0ef7)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_b0181741ecea52eaa4b239c4463a0651)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::fill;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_6eda9f0f6e05545cbc15b5d887500ad8)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_ae2fd93730c95f50a82958d30a6fc5dd)(long int , float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_4d75fa98b48c5e1ea1e2a8efc383bd37)(float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_5afc84783b0057d09723efebb1c56fbf)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_b6c46c2c2c0157a4a07fc9ba41065c6b)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_676b770df1d4527dbe72905e397d869d)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_f24633af0a825919b60987452ceb9196)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_6eb2c2524bc758d494e8f66b10a44df3)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_6af87d87b24f58ffb9c0758ae091d617)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_0e2390052aa257c09b2c7389f355f7cd)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_20db6b0c5bf4579491a1f43a99a5df30)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_b24e0de6f7025f6aa93cebf86a8b9d71)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_80f5fb1c04b65e45aee427f46cae7771)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::allFinite;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_7be9f4b23f5a5973826b4e8030b4f8a9)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::operator*=;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_87f6bf0a5c9e5588992be3c4cfee2420)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::eval;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_79cb0273a1745bc0b6a4143fd72bb8ec)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::sum;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_ef16233a3851573aa6d55c27734f4f2e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::mean;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_c9f5d26d9aed535b92fad09c83aeb345)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::trace;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_6c3524831a82565faf4d23728332f29e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::prod;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_eb434b6809db5ed9b019866943bf8998)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::minCoeff;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_ff0ec9a59d9a5d289f08c54c25656097)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::maxCoeff;
    float  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_fd7092db3b7d5a6888bcc5bbf0b7a97b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_d04f58ead7fa5ec59d6dd4186f5586f5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_da43bd8cd7e052f0ace96681c94b0192)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_8dffb7a854775bd7825ceff1d56b0d11)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_89f22fb02aef5db7879a3f550dfeeedf)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 > > > class_96123720cb6c5616b60358527d9320d3("_DenseBase_96123720cb6c5616b60358527d9320d3", "", boost::python::no_init);
    class_96123720cb6c5616b60358527d9320d3.def("non_zeros", method_pointer_d379cbda644c58468df91f2d271c6e3b, "");
    class_96123720cb6c5616b60358527d9320d3.def("outer_size", method_pointer_f1ef763000495c09824631267fb15b94, "");
    class_96123720cb6c5616b60358527d9320d3.def("inner_size", method_pointer_5e3dd6d3a37b5fdcbb918ef730deb605, "");
    class_96123720cb6c5616b60358527d9320d3.def("resize", method_pointer_f24dd8556c4255adae92a241ac3c08e9, "");
    class_96123720cb6c5616b60358527d9320d3.def("resize", method_pointer_e4e5af48f7905bd2bdef4085da897c1e, "");
    class_96123720cb6c5616b60358527d9320d3.def("transpose_in_place", method_pointer_0ac65792f37450cb88b3763fe12a0ef7, "");
    class_96123720cb6c5616b60358527d9320d3.def("fill", method_pointer_b0181741ecea52eaa4b239c4463a0651, "");
    class_96123720cb6c5616b60358527d9320d3.def("set_constant", method_pointer_6eda9f0f6e05545cbc15b5d887500ad8, boost::python::return_internal_reference<>(), "");
    class_96123720cb6c5616b60358527d9320d3.def("set_constant", autowig::method_decorator_6eda9f0f6e05545cbc15b5d887500ad8);
    class_96123720cb6c5616b60358527d9320d3.def("set_lin_spaced", method_pointer_ae2fd93730c95f50a82958d30a6fc5dd, boost::python::return_internal_reference<>(), "");
    class_96123720cb6c5616b60358527d9320d3.def("set_lin_spaced", autowig::method_decorator_ae2fd93730c95f50a82958d30a6fc5dd);
    class_96123720cb6c5616b60358527d9320d3.def("set_lin_spaced", method_pointer_4d75fa98b48c5e1ea1e2a8efc383bd37, boost::python::return_internal_reference<>(), "");
    class_96123720cb6c5616b60358527d9320d3.def("set_lin_spaced", autowig::method_decorator_4d75fa98b48c5e1ea1e2a8efc383bd37);
    class_96123720cb6c5616b60358527d9320d3.def("set_zero", method_pointer_5afc84783b0057d09723efebb1c56fbf, boost::python::return_internal_reference<>(), "");
    class_96123720cb6c5616b60358527d9320d3.def("set_zero", autowig::method_decorator_5afc84783b0057d09723efebb1c56fbf);
    class_96123720cb6c5616b60358527d9320d3.def("set_ones", method_pointer_b6c46c2c2c0157a4a07fc9ba41065c6b, boost::python::return_internal_reference<>(), "");
    class_96123720cb6c5616b60358527d9320d3.def("set_ones", autowig::method_decorator_b6c46c2c2c0157a4a07fc9ba41065c6b);
    class_96123720cb6c5616b60358527d9320d3.def("set_random", method_pointer_676b770df1d4527dbe72905e397d869d, boost::python::return_internal_reference<>(), "");
    class_96123720cb6c5616b60358527d9320d3.def("set_random", autowig::method_decorator_676b770df1d4527dbe72905e397d869d);
    class_96123720cb6c5616b60358527d9320d3.def("is_much_smaller_than", method_pointer_f24633af0a825919b60987452ceb9196, "");
    class_96123720cb6c5616b60358527d9320d3.def("is_approx_to_constant", method_pointer_6eb2c2524bc758d494e8f66b10a44df3, "");
    class_96123720cb6c5616b60358527d9320d3.def("is_constant", method_pointer_6af87d87b24f58ffb9c0758ae091d617, "");
    class_96123720cb6c5616b60358527d9320d3.def("is_zero", method_pointer_0e2390052aa257c09b2c7389f355f7cd, "");
    class_96123720cb6c5616b60358527d9320d3.def("is_ones", method_pointer_20db6b0c5bf4579491a1f43a99a5df30, "");
    class_96123720cb6c5616b60358527d9320d3.def("has_na_n", method_pointer_b24e0de6f7025f6aa93cebf86a8b9d71, "");
    class_96123720cb6c5616b60358527d9320d3.def("all_finite", method_pointer_80f5fb1c04b65e45aee427f46cae7771, "");
    class_96123720cb6c5616b60358527d9320d3.def("__imul__", method_pointer_7be9f4b23f5a5973826b4e8030b4f8a9, boost::python::return_internal_reference<>(), "");
    class_96123720cb6c5616b60358527d9320d3.def("__imul__", autowig::method_decorator_7be9f4b23f5a5973826b4e8030b4f8a9);
    class_96123720cb6c5616b60358527d9320d3.def("eval", method_pointer_87f6bf0a5c9e5588992be3c4cfee2420, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_96123720cb6c5616b60358527d9320d3.def("sum", method_pointer_79cb0273a1745bc0b6a4143fd72bb8ec, "");
    class_96123720cb6c5616b60358527d9320d3.def("mean", method_pointer_ef16233a3851573aa6d55c27734f4f2e, "");
    class_96123720cb6c5616b60358527d9320d3.def("trace", method_pointer_c9f5d26d9aed535b92fad09c83aeb345, "");
    class_96123720cb6c5616b60358527d9320d3.def("prod", method_pointer_6c3524831a82565faf4d23728332f29e, "");
    class_96123720cb6c5616b60358527d9320d3.def("min_coeff", method_pointer_eb434b6809db5ed9b019866943bf8998, "");
    class_96123720cb6c5616b60358527d9320d3.def("max_coeff", method_pointer_ff0ec9a59d9a5d289f08c54c25656097, "");
    class_96123720cb6c5616b60358527d9320d3.def("value", method_pointer_fd7092db3b7d5a6888bcc5bbf0b7a97b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_96123720cb6c5616b60358527d9320d3.def("all", method_pointer_d04f58ead7fa5ec59d6dd4186f5586f5, "");
    class_96123720cb6c5616b60358527d9320d3.def("any", method_pointer_da43bd8cd7e052f0ace96681c94b0192, "");
    class_96123720cb6c5616b60358527d9320d3.def("count", method_pointer_8dffb7a854775bd7825ceff1d56b0d11, "");
    class_96123720cb6c5616b60358527d9320d3.def("reverse_in_place", method_pointer_89f22fb02aef5db7879a3f550dfeeedf, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >, 3 > > >();
    }

}