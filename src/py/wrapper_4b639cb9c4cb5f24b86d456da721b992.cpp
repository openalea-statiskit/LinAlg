#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f36b411db3235221ad6daefd29c8f9f7(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_ee02afe9d2a257d888918a63b1a6ba76(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_7d0496880c535ffb8c7f3622bd3aa508(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, struct ::std::complex< double >  const & param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_31cb869f679e516c86fdf13c14c91632(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_ea5fc4344d4c52ceaac180b61ec8013e(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_bab2b97672f8535c880041a26333d263(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_04018e511a9c5da0aa20129373f93e36(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_4b639cb9c4cb5f24b86d456da721b992()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_fbc60077fb5d59eba460d94ae557ad40)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_3c1c5c5d7668563fab232c2a6ac47b7c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_36fae529296655ac94b5fcd131fd4bb5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_3b7c01093c7950b19a2730d223596681)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_6d54279c850b5484a9baf98b10d09303)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_76357e1687e850aa913bb54c935e44e5)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_6bfb5addbbaf53dcab1870b36a77bd4d)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_f36b411db3235221ad6daefd29c8f9f7)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_ee02afe9d2a257d888918a63b1a6ba76)(long int , struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_7d0496880c535ffb8c7f3622bd3aa508)(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_31cb869f679e516c86fdf13c14c91632)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_ea5fc4344d4c52ceaac180b61ec8013e)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_bab2b97672f8535c880041a26333d263)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_ed146af3c7eb5f519ffb8d08da603d2b)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_992c5aea45015b0aa3a0c8cd7e31eddd)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_8f22a685554e55ca9063232fdab96e51)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_dd2fd5e08d8758a7a4606413f8c3be0f)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_e135a9e3f4b453c29a3b23b4e39d041d)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_d276436bb327585fbcb7e16e1a765a79)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_90157346b9c15147aa7f119d7acab6fc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_04018e511a9c5da0aa20129373f93e36)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_eb29d32e808e52af837f62ad7c5ab1d5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::eval;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_96193f53c31659eeb1d9ab3bb490b058)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::sum;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_6a2ce872ed3c5a3dba49a71e3497c15c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::mean;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_d96674d22fdd580ca5e55cdb62ced5f6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::trace;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_91880692d3d85fc08c6d618f88499df1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::prod;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_c1517a1f07695653a92bfab56ece5386)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::minCoeff;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_385bf81d60d65c039965515b5410b0a5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::maxCoeff;
    struct ::std::complex< double >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_3f9bc78072e65631aa3d22cf10d42545)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_8b393edd39995fd2af607bdcbd59e156)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_bb741c7e79e653f8b6c4170bdd284e15)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_b23ffe4c7d46585c92be47230592a2cc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_a95725a1c0655b43b8c3a94b7696b5c0)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 > > > class_4b639cb9c4cb5f24b86d456da721b992("_DenseBase_4b639cb9c4cb5f24b86d456da721b992", "", boost::python::no_init);
    class_4b639cb9c4cb5f24b86d456da721b992.def("non_zeros", method_pointer_fbc60077fb5d59eba460d94ae557ad40, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("outer_size", method_pointer_3c1c5c5d7668563fab232c2a6ac47b7c, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("inner_size", method_pointer_36fae529296655ac94b5fcd131fd4bb5, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("resize", method_pointer_3b7c01093c7950b19a2730d223596681, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("resize", method_pointer_6d54279c850b5484a9baf98b10d09303, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("transpose_in_place", method_pointer_76357e1687e850aa913bb54c935e44e5, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("fill", method_pointer_6bfb5addbbaf53dcab1870b36a77bd4d, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("set_constant", method_pointer_f36b411db3235221ad6daefd29c8f9f7, boost::python::return_internal_reference<>(), "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("set_constant", autowig::method_decorator_f36b411db3235221ad6daefd29c8f9f7);
    class_4b639cb9c4cb5f24b86d456da721b992.def("set_lin_spaced", method_pointer_ee02afe9d2a257d888918a63b1a6ba76, boost::python::return_internal_reference<>(), "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("set_lin_spaced", autowig::method_decorator_ee02afe9d2a257d888918a63b1a6ba76);
    class_4b639cb9c4cb5f24b86d456da721b992.def("set_lin_spaced", method_pointer_7d0496880c535ffb8c7f3622bd3aa508, boost::python::return_internal_reference<>(), "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("set_lin_spaced", autowig::method_decorator_7d0496880c535ffb8c7f3622bd3aa508);
    class_4b639cb9c4cb5f24b86d456da721b992.def("set_zero", method_pointer_31cb869f679e516c86fdf13c14c91632, boost::python::return_internal_reference<>(), "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("set_zero", autowig::method_decorator_31cb869f679e516c86fdf13c14c91632);
    class_4b639cb9c4cb5f24b86d456da721b992.def("set_ones", method_pointer_ea5fc4344d4c52ceaac180b61ec8013e, boost::python::return_internal_reference<>(), "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("set_ones", autowig::method_decorator_ea5fc4344d4c52ceaac180b61ec8013e);
    class_4b639cb9c4cb5f24b86d456da721b992.def("set_random", method_pointer_bab2b97672f8535c880041a26333d263, boost::python::return_internal_reference<>(), "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("set_random", autowig::method_decorator_bab2b97672f8535c880041a26333d263);
    class_4b639cb9c4cb5f24b86d456da721b992.def("is_much_smaller_than", method_pointer_ed146af3c7eb5f519ffb8d08da603d2b, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("is_approx_to_constant", method_pointer_992c5aea45015b0aa3a0c8cd7e31eddd, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("is_constant", method_pointer_8f22a685554e55ca9063232fdab96e51, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("is_zero", method_pointer_dd2fd5e08d8758a7a4606413f8c3be0f, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("is_ones", method_pointer_e135a9e3f4b453c29a3b23b4e39d041d, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("has_na_n", method_pointer_d276436bb327585fbcb7e16e1a765a79, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("all_finite", method_pointer_90157346b9c15147aa7f119d7acab6fc, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("__imul__", method_pointer_04018e511a9c5da0aa20129373f93e36, boost::python::return_internal_reference<>(), "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("__imul__", autowig::method_decorator_04018e511a9c5da0aa20129373f93e36);
    class_4b639cb9c4cb5f24b86d456da721b992.def("eval", method_pointer_eb29d32e808e52af837f62ad7c5ab1d5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("sum", method_pointer_96193f53c31659eeb1d9ab3bb490b058, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("mean", method_pointer_6a2ce872ed3c5a3dba49a71e3497c15c, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("trace", method_pointer_d96674d22fdd580ca5e55cdb62ced5f6, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("prod", method_pointer_91880692d3d85fc08c6d618f88499df1, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("min_coeff", method_pointer_c1517a1f07695653a92bfab56ece5386, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("max_coeff", method_pointer_385bf81d60d65c039965515b5410b0a5, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("value", method_pointer_3f9bc78072e65631aa3d22cf10d42545, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("all", method_pointer_8b393edd39995fd2af607bdcbd59e156, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("any", method_pointer_bb741c7e79e653f8b6c4170bdd284e15, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("count", method_pointer_b23ffe4c7d46585c92be47230592a2cc, "");
    class_4b639cb9c4cb5f24b86d456da721b992.def("reverse_in_place", method_pointer_a95725a1c0655b43b8c3a94b7696b5c0, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 > > >();
    }

}