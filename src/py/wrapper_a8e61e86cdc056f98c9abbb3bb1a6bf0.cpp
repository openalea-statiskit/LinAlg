#include "_ieigen.h"


namespace autowig
{
    void method_decorator_90a61371d5025609aac3abf1b5b0729e(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_5ba33748ba04561d84a9e507c03329c0(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_c513ce73f67c5f75b04649a40803f1ad(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, struct ::std::complex< double >  const & param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_03e8a065837e5225a0ed321061d633e5(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_60add31844df512ba9119080c8cd0fc5(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_6c60601bc96f5bba8022ce4dad8b1234(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_e9f8ba816e5553afb8abf504f95447f8(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_a8e61e86cdc056f98c9abbb3bb1a6bf0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_a0de4f920b975634b3f86d2d901a7f44)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_443ba7023c465df08ac48860697d0f53)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_0481275719f151ecbec2778ba6e302da)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_bf9ef8d08d735682bd57911489264002)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_025b5cfc003a5fbd92691cfe651b1f08)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_8908fefe244652f2919532300d306121)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_8ed633445e4b5f9dadf9b96b3b04279c)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_90a61371d5025609aac3abf1b5b0729e)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_5ba33748ba04561d84a9e507c03329c0)(long int , struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_c513ce73f67c5f75b04649a40803f1ad)(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_03e8a065837e5225a0ed321061d633e5)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_60add31844df512ba9119080c8cd0fc5)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_6c60601bc96f5bba8022ce4dad8b1234)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_b3088663d92a56f2a77c51ab82c08d03)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_f57841f9518f59059b85335cc1e80be3)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_3c33370c75665cf384becaee163a34d8)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_cd82a45a33da550fb7fd1f38c35b42bf)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_173ecbf64b755cae9269ce8b2c5196f6)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_dafefc75fcbf5b50be121e17064fd75a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_7fa82f2094795fb1bcc48fe80be625b4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_e9f8ba816e5553afb8abf504f95447f8)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_6e82a932a9425b3989af1a0dcf7102b8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::eval;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_a23e24f59d2c5685913cc728621820a0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::sum;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_797fa9f19b8e50cf8370d03342f9a665)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::mean;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_f5d063d4ec1e573ab5f041fb364d5c5b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::trace;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_aed4ea09c8005eebb5895b406c63640e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::prod;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_3bfb79b68b875ea3a14c2a6918a7de23)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::minCoeff;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_6b543d17c99e56158411361fb1be2120)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::maxCoeff;
    struct ::std::complex< double >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_0e48d8dc416a54a9ab1d425e36c4c7c4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_bd5a799280c35cf9b2e8049ae7df5891)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_42547e2f4b355b1caeedb001532fc483)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_b0293db7e27754a281ebf18c9c14643f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_b08b0bdbf8c455979670fc82abf1ac6f)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 > > > class_a8e61e86cdc056f98c9abbb3bb1a6bf0("_DenseBase_a8e61e86cdc056f98c9abbb3bb1a6bf0", "", boost::python::no_init);
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("non_zeros", method_pointer_a0de4f920b975634b3f86d2d901a7f44, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("outer_size", method_pointer_443ba7023c465df08ac48860697d0f53, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("inner_size", method_pointer_0481275719f151ecbec2778ba6e302da, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("resize", method_pointer_bf9ef8d08d735682bd57911489264002, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("resize", method_pointer_025b5cfc003a5fbd92691cfe651b1f08, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("transpose_in_place", method_pointer_8908fefe244652f2919532300d306121, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("fill", method_pointer_8ed633445e4b5f9dadf9b96b3b04279c, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("set_constant", method_pointer_90a61371d5025609aac3abf1b5b0729e, boost::python::return_internal_reference<>(), "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("set_constant", autowig::method_decorator_90a61371d5025609aac3abf1b5b0729e);
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("set_lin_spaced", method_pointer_5ba33748ba04561d84a9e507c03329c0, boost::python::return_internal_reference<>(), "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("set_lin_spaced", autowig::method_decorator_5ba33748ba04561d84a9e507c03329c0);
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("set_lin_spaced", method_pointer_c513ce73f67c5f75b04649a40803f1ad, boost::python::return_internal_reference<>(), "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("set_lin_spaced", autowig::method_decorator_c513ce73f67c5f75b04649a40803f1ad);
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("set_zero", method_pointer_03e8a065837e5225a0ed321061d633e5, boost::python::return_internal_reference<>(), "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("set_zero", autowig::method_decorator_03e8a065837e5225a0ed321061d633e5);
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("set_ones", method_pointer_60add31844df512ba9119080c8cd0fc5, boost::python::return_internal_reference<>(), "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("set_ones", autowig::method_decorator_60add31844df512ba9119080c8cd0fc5);
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("set_random", method_pointer_6c60601bc96f5bba8022ce4dad8b1234, boost::python::return_internal_reference<>(), "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("set_random", autowig::method_decorator_6c60601bc96f5bba8022ce4dad8b1234);
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("is_much_smaller_than", method_pointer_b3088663d92a56f2a77c51ab82c08d03, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("is_approx_to_constant", method_pointer_f57841f9518f59059b85335cc1e80be3, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("is_constant", method_pointer_3c33370c75665cf384becaee163a34d8, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("is_zero", method_pointer_cd82a45a33da550fb7fd1f38c35b42bf, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("is_ones", method_pointer_173ecbf64b755cae9269ce8b2c5196f6, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("has_na_n", method_pointer_dafefc75fcbf5b50be121e17064fd75a, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("all_finite", method_pointer_7fa82f2094795fb1bcc48fe80be625b4, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("__imul__", method_pointer_e9f8ba816e5553afb8abf504f95447f8, boost::python::return_internal_reference<>(), "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("__imul__", autowig::method_decorator_e9f8ba816e5553afb8abf504f95447f8);
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("eval", method_pointer_6e82a932a9425b3989af1a0dcf7102b8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("sum", method_pointer_a23e24f59d2c5685913cc728621820a0, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("mean", method_pointer_797fa9f19b8e50cf8370d03342f9a665, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("trace", method_pointer_f5d063d4ec1e573ab5f041fb364d5c5b, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("prod", method_pointer_aed4ea09c8005eebb5895b406c63640e, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("min_coeff", method_pointer_3bfb79b68b875ea3a14c2a6918a7de23, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("max_coeff", method_pointer_6b543d17c99e56158411361fb1be2120, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("value", method_pointer_0e48d8dc416a54a9ab1d425e36c4c7c4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("all", method_pointer_bd5a799280c35cf9b2e8049ae7df5891, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("any", method_pointer_42547e2f4b355b1caeedb001532fc483, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("count", method_pointer_b0293db7e27754a281ebf18c9c14643f, "");
    class_a8e61e86cdc056f98c9abbb3bb1a6bf0.def("reverse_in_place", method_pointer_b08b0bdbf8c455979670fc82abf1ac6f, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 > > >();
    }

}