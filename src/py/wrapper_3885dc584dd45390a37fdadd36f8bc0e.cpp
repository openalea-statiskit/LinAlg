#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d0fa6c6bce62510883de0bb6fa134315(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_a166583f53325a81b9b3cf22936bac9e(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_b47c8154b9e15661bd34dab20a3710f5(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, struct ::std::complex< double >  const & param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_055b7484e8015f139cccc51561b5682a(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_67c1bc8f45095c9a89ce763644255cd4(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_c8e93e01ea2b5681a350d2478ae15917(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_cdff03bdb84058c6b6470753fc645064(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_3885dc584dd45390a37fdadd36f8bc0e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_588e4b01c80953afbc06378e7f50b0bd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_d7fd50452ea15b7c89230cd4f3e6f56d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_ed42391d7ecf52cfafc9d4eb3b247f17)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_20d20feec3cd5e9ba56e94fddd60015d)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_a751ff1bb0885b928399af75c84cbe32)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_f20d039df14a57929e0163509b99bc27)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_a08d156c0479508d93a133aff3506f82)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_d0fa6c6bce62510883de0bb6fa134315)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_a166583f53325a81b9b3cf22936bac9e)(long int , struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_b47c8154b9e15661bd34dab20a3710f5)(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_055b7484e8015f139cccc51561b5682a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_67c1bc8f45095c9a89ce763644255cd4)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_c8e93e01ea2b5681a350d2478ae15917)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_990ac3bb48b65e30930875c70d70a6aa)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_56ac199d0b275e8b9a555d0d334fd34c)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_64ec5fca3403563280b1ed7607df8291)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_e4d5a27a3b625ad495b8b3c86ce2c108)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_092bb02538485c788c36b783f9e2d2f5)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_cadbf3a8d98355f2b1707a4e2f88af3b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_37dd8537ffd6524bada7ffa304433e01)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_cdff03bdb84058c6b6470753fc645064)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_8c73516db3345e3b834c8498410e4503)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::eval;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_015172c116ba5ba68d7e613227c7ce14)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::sum;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_a7bd36c8f1605e02be08f0146f0432e9)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::mean;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_4f7d12a0d961584e91be3e16fe9d59c1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::trace;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_c4ab851a967d523084db75d306b82d21)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::prod;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_b63e56b6bf1e5703a1232bf89f39a516)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::minCoeff;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_a93654fe27295e738529cd04fe2b9d8a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::maxCoeff;
    struct ::std::complex< double >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_9b430254bd7753f5beeaf8761bd3f62b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_7c80dbecca765c4daf51f8db64b8e975)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_fed006f4ee6c5656a3d33222e3ded3db)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_6230e5ba42c4566d8f601cbd177567a5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 1, 0, 3, 1 > >::*method_pointer_0f15b2bc064759fda436c4387c70cd26)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 > > > class_3885dc584dd45390a37fdadd36f8bc0e("_DenseBase_3885dc584dd45390a37fdadd36f8bc0e", "", boost::python::no_init);
    class_3885dc584dd45390a37fdadd36f8bc0e.def("non_zeros", method_pointer_588e4b01c80953afbc06378e7f50b0bd, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("outer_size", method_pointer_d7fd50452ea15b7c89230cd4f3e6f56d, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("inner_size", method_pointer_ed42391d7ecf52cfafc9d4eb3b247f17, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("resize", method_pointer_20d20feec3cd5e9ba56e94fddd60015d, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("resize", method_pointer_a751ff1bb0885b928399af75c84cbe32, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("transpose_in_place", method_pointer_f20d039df14a57929e0163509b99bc27, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("fill", method_pointer_a08d156c0479508d93a133aff3506f82, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("set_constant", method_pointer_d0fa6c6bce62510883de0bb6fa134315, boost::python::return_internal_reference<>(), "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("set_constant", autowig::method_decorator_d0fa6c6bce62510883de0bb6fa134315);
    class_3885dc584dd45390a37fdadd36f8bc0e.def("set_lin_spaced", method_pointer_a166583f53325a81b9b3cf22936bac9e, boost::python::return_internal_reference<>(), "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("set_lin_spaced", autowig::method_decorator_a166583f53325a81b9b3cf22936bac9e);
    class_3885dc584dd45390a37fdadd36f8bc0e.def("set_lin_spaced", method_pointer_b47c8154b9e15661bd34dab20a3710f5, boost::python::return_internal_reference<>(), "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("set_lin_spaced", autowig::method_decorator_b47c8154b9e15661bd34dab20a3710f5);
    class_3885dc584dd45390a37fdadd36f8bc0e.def("set_zero", method_pointer_055b7484e8015f139cccc51561b5682a, boost::python::return_internal_reference<>(), "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("set_zero", autowig::method_decorator_055b7484e8015f139cccc51561b5682a);
    class_3885dc584dd45390a37fdadd36f8bc0e.def("set_ones", method_pointer_67c1bc8f45095c9a89ce763644255cd4, boost::python::return_internal_reference<>(), "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("set_ones", autowig::method_decorator_67c1bc8f45095c9a89ce763644255cd4);
    class_3885dc584dd45390a37fdadd36f8bc0e.def("set_random", method_pointer_c8e93e01ea2b5681a350d2478ae15917, boost::python::return_internal_reference<>(), "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("set_random", autowig::method_decorator_c8e93e01ea2b5681a350d2478ae15917);
    class_3885dc584dd45390a37fdadd36f8bc0e.def("is_much_smaller_than", method_pointer_990ac3bb48b65e30930875c70d70a6aa, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("is_approx_to_constant", method_pointer_56ac199d0b275e8b9a555d0d334fd34c, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("is_constant", method_pointer_64ec5fca3403563280b1ed7607df8291, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("is_zero", method_pointer_e4d5a27a3b625ad495b8b3c86ce2c108, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("is_ones", method_pointer_092bb02538485c788c36b783f9e2d2f5, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("has_na_n", method_pointer_cadbf3a8d98355f2b1707a4e2f88af3b, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("all_finite", method_pointer_37dd8537ffd6524bada7ffa304433e01, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("__imul__", method_pointer_cdff03bdb84058c6b6470753fc645064, boost::python::return_internal_reference<>(), "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("__imul__", autowig::method_decorator_cdff03bdb84058c6b6470753fc645064);
    class_3885dc584dd45390a37fdadd36f8bc0e.def("eval", method_pointer_8c73516db3345e3b834c8498410e4503, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("sum", method_pointer_015172c116ba5ba68d7e613227c7ce14, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("mean", method_pointer_a7bd36c8f1605e02be08f0146f0432e9, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("trace", method_pointer_4f7d12a0d961584e91be3e16fe9d59c1, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("prod", method_pointer_c4ab851a967d523084db75d306b82d21, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("min_coeff", method_pointer_b63e56b6bf1e5703a1232bf89f39a516, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("max_coeff", method_pointer_a93654fe27295e738529cd04fe2b9d8a, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("value", method_pointer_9b430254bd7753f5beeaf8761bd3f62b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("all", method_pointer_7c80dbecca765c4daf51f8db64b8e975, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("any", method_pointer_fed006f4ee6c5656a3d33222e3ded3db, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("count", method_pointer_6230e5ba42c4566d8f601cbd177567a5, "");
    class_3885dc584dd45390a37fdadd36f8bc0e.def("reverse_in_place", method_pointer_0f15b2bc064759fda436c4387c70cd26, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >, 3 > > >();
    }

}