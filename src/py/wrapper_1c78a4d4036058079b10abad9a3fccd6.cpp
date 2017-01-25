#include "_ieigen.h"


namespace autowig
{
    void method_decorator_5c210f37bd4b54e899184b1d93fdf942(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_20dbfe332e865ba6bbd550d3c8b38839(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_d859b824fe4f52179034abac9587c358(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, struct ::std::complex< double >  const & param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_86f8956503fb5f8d8ab5c3b3cb422f9b(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_7d939f7ab4b656f7b7f60c215b960492(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_2da8983bf41250f5b49adaed4bd58cd7(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_eb58bd55b137582fb27aea9384656314(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_1c78a4d4036058079b10abad9a3fccd6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_abaa77571a8054b3ba079852e9648f62)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_17b7a5dda06a5bd5a7d4b0189a0d633c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_e5162cb0a05e51188f47edd092757da5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_3c5f5b92b8215696a1343bf5fc38a19a)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_7215eb1167975661a0c6d9e42efe1889)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_ac24b93f43d15ae6b8f43adc84907468)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_c2666a153ba45db1bd5dfeb7c5a8339d)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_5c210f37bd4b54e899184b1d93fdf942)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_20dbfe332e865ba6bbd550d3c8b38839)(long int , struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_d859b824fe4f52179034abac9587c358)(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_86f8956503fb5f8d8ab5c3b3cb422f9b)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_7d939f7ab4b656f7b7f60c215b960492)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_2da8983bf41250f5b49adaed4bd58cd7)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_6813973c4e7e5b329d528f32143c4ed2)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_c5fa8e0370db546d881d4a7abe33f91b)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_0833382b6ccc51699aff936f1d0bae76)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_524d02ca79aa59a89378ccbee8d119be)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_5851cddd9f7d5a39ae7ed78e8e6b98ed)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_3875bee378a453b5a18e21d8d12217d6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_371581fb8a0c5eebbe5974cdb7e30edd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_eb58bd55b137582fb27aea9384656314)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_2f838d595f02589183cd7f42f182eac2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::eval;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_8c1318ffb3bb546da9c3f37d8af1e2f4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::sum;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_dbc0de6f0c1e528d91e41acc1b183511)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::mean;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_8507b1431de45b8bbb06bdba64629102)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::trace;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_f5186cec1f68524cbd54c30919808bcc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::prod;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_034a26ee6ceb544888df93b9781fc571)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::minCoeff;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_76e9294f1f9453a4a7a9d338fa87cfc6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::maxCoeff;
    struct ::std::complex< double >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_e89f342851bd5defb7c091fc11ad1c5e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_629b84ee94345aefa759313fe348cb60)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_3cc9dda295b95b43b1dbbdf20939456c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_5b54bcca6e205ff3b8a826414cad86ed)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_dda13455f80c5850b446a3a318cc0292)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 > > > class_1c78a4d4036058079b10abad9a3fccd6("_DenseBase_1c78a4d4036058079b10abad9a3fccd6", "", boost::python::no_init);
    class_1c78a4d4036058079b10abad9a3fccd6.def("non_zeros", method_pointer_abaa77571a8054b3ba079852e9648f62, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("outer_size", method_pointer_17b7a5dda06a5bd5a7d4b0189a0d633c, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("inner_size", method_pointer_e5162cb0a05e51188f47edd092757da5, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("resize", method_pointer_3c5f5b92b8215696a1343bf5fc38a19a, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("resize", method_pointer_7215eb1167975661a0c6d9e42efe1889, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("transpose_in_place", method_pointer_ac24b93f43d15ae6b8f43adc84907468, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("fill", method_pointer_c2666a153ba45db1bd5dfeb7c5a8339d, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("set_constant", method_pointer_5c210f37bd4b54e899184b1d93fdf942, boost::python::return_internal_reference<>(), "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("set_constant", autowig::method_decorator_5c210f37bd4b54e899184b1d93fdf942);
    class_1c78a4d4036058079b10abad9a3fccd6.def("set_lin_spaced", method_pointer_20dbfe332e865ba6bbd550d3c8b38839, boost::python::return_internal_reference<>(), "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("set_lin_spaced", autowig::method_decorator_20dbfe332e865ba6bbd550d3c8b38839);
    class_1c78a4d4036058079b10abad9a3fccd6.def("set_lin_spaced", method_pointer_d859b824fe4f52179034abac9587c358, boost::python::return_internal_reference<>(), "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("set_lin_spaced", autowig::method_decorator_d859b824fe4f52179034abac9587c358);
    class_1c78a4d4036058079b10abad9a3fccd6.def("set_zero", method_pointer_86f8956503fb5f8d8ab5c3b3cb422f9b, boost::python::return_internal_reference<>(), "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("set_zero", autowig::method_decorator_86f8956503fb5f8d8ab5c3b3cb422f9b);
    class_1c78a4d4036058079b10abad9a3fccd6.def("set_ones", method_pointer_7d939f7ab4b656f7b7f60c215b960492, boost::python::return_internal_reference<>(), "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("set_ones", autowig::method_decorator_7d939f7ab4b656f7b7f60c215b960492);
    class_1c78a4d4036058079b10abad9a3fccd6.def("set_random", method_pointer_2da8983bf41250f5b49adaed4bd58cd7, boost::python::return_internal_reference<>(), "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("set_random", autowig::method_decorator_2da8983bf41250f5b49adaed4bd58cd7);
    class_1c78a4d4036058079b10abad9a3fccd6.def("is_much_smaller_than", method_pointer_6813973c4e7e5b329d528f32143c4ed2, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("is_approx_to_constant", method_pointer_c5fa8e0370db546d881d4a7abe33f91b, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("is_constant", method_pointer_0833382b6ccc51699aff936f1d0bae76, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("is_zero", method_pointer_524d02ca79aa59a89378ccbee8d119be, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("is_ones", method_pointer_5851cddd9f7d5a39ae7ed78e8e6b98ed, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("has_na_n", method_pointer_3875bee378a453b5a18e21d8d12217d6, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("all_finite", method_pointer_371581fb8a0c5eebbe5974cdb7e30edd, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("__imul__", method_pointer_eb58bd55b137582fb27aea9384656314, boost::python::return_internal_reference<>(), "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("__imul__", autowig::method_decorator_eb58bd55b137582fb27aea9384656314);
    class_1c78a4d4036058079b10abad9a3fccd6.def("eval", method_pointer_2f838d595f02589183cd7f42f182eac2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("sum", method_pointer_8c1318ffb3bb546da9c3f37d8af1e2f4, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("mean", method_pointer_dbc0de6f0c1e528d91e41acc1b183511, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("trace", method_pointer_8507b1431de45b8bbb06bdba64629102, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("prod", method_pointer_f5186cec1f68524cbd54c30919808bcc, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("min_coeff", method_pointer_034a26ee6ceb544888df93b9781fc571, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("max_coeff", method_pointer_76e9294f1f9453a4a7a9d338fa87cfc6, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("value", method_pointer_e89f342851bd5defb7c091fc11ad1c5e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("all", method_pointer_629b84ee94345aefa759313fe348cb60, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("any", method_pointer_3cc9dda295b95b43b1dbbdf20939456c, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("count", method_pointer_5b54bcca6e205ff3b8a826414cad86ed, "");
    class_1c78a4d4036058079b10abad9a3fccd6.def("reverse_in_place", method_pointer_dda13455f80c5850b446a3a318cc0292, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 3 > > >();
    }

}