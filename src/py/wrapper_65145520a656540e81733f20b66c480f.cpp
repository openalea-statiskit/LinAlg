#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f2a8d74908fa5552b9affa165ca3b639(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_e09330f011895df2aa344c0c7ad8a99d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_0eb81ba443f65ab7a8096da4c7410703(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_be43ce0a909c55af83ec6b36cebfe3ea(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_30a778bd93aa5028ba6cc3f159767e38(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_e7330dc1185357e5b1bf07b7ed2d57ff(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_e9abcccae1be52c2a2920922947502a9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_57ef695a91ce54ac8c2e6b722f691d31(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_e7849e08662d5e1a92d1258d8c35fde2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_e3e0e57c035d58c4b36ee80d7a88681e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_df703e6d5d475254b956314db95477d8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_65145520a656540e81733f20b66c480f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_f2a8d74908fa5552b9affa165ca3b639)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_33dc7d8074dc5e5e91372843afe1d81a)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_1059fbbc7dc25601b428995b8728ac0c)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_b90dcc934a5f59efa91b0d51eaa6e036)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::cols;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_6baf87f152d1575fa895e64f788f5b49)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::coeff;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_6df1629bc104571fb66dbdb67925602b)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::coeff;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_e09330f011895df2aa344c0c7ad8a99d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_0eb81ba443f65ab7a8096da4c7410703)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_23a857009d2f5c63b56020299369594b)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_d8e71bfe669358fba4cca788ffa387e8)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::coeffRef;
    struct ::std::complex< double >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_d19a9762f5b358ecba0e5954c0081217)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::data;
    struct ::std::complex< double >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_e62512d9f94e555ea114c343e615a35c)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_67a9fe33eebf58e3a4ef38e9ca26832e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_d144ae3ff067533699310bc51dc78a9d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_9dc79530ec285709bf1aaf3717c0adbb)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_60ee5cbf8a285a629a1083cbd7ba3cc6)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_a340f1e5edde5e1f9e532f2a6507212f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_de4adb274d725acf848b721e5c91fe3f)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_278c84c1e59b57139c86aa328cdcf5fd)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_f90b41da00da52bd973dffa10b38b13e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_be43ce0a909c55af83ec6b36cebfe3ea)(long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_30a778bd93aa5028ba6cc3f159767e38)(long int , long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_e7330dc1185357e5b1bf07b7ed2d57ff)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_e9abcccae1be52c2a2920922947502a9)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_57ef695a91ce54ac8c2e6b722f691d31)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_e7849e08662d5e1a92d1258d8c35fde2)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_e3e0e57c035d58c4b36ee80d7a88681e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_df703e6d5d475254b956314db95477d8)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setRandom;
    void  (*method_pointer_0e42c4eebaf5500380572fac8299f859)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > class_65145520a656540e81733f20b66c480f("_PlainObjectBase_65145520a656540e81733f20b66c480f", "", boost::python::no_init);
    class_65145520a656540e81733f20b66c480f.def("base", method_pointer_f2a8d74908fa5552b9affa165ca3b639, boost::python::return_internal_reference<>(), "");
    class_65145520a656540e81733f20b66c480f.def("base", autowig::method_decorator_f2a8d74908fa5552b9affa165ca3b639);
    class_65145520a656540e81733f20b66c480f.def("base", method_pointer_33dc7d8074dc5e5e91372843afe1d81a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_65145520a656540e81733f20b66c480f.def("rows", method_pointer_1059fbbc7dc25601b428995b8728ac0c, "");
    class_65145520a656540e81733f20b66c480f.def("cols", method_pointer_b90dcc934a5f59efa91b0d51eaa6e036, "");
    class_65145520a656540e81733f20b66c480f.def("coeff", method_pointer_6baf87f152d1575fa895e64f788f5b49, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_65145520a656540e81733f20b66c480f.def("coeff", method_pointer_6df1629bc104571fb66dbdb67925602b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_65145520a656540e81733f20b66c480f.def("coeff_ref", method_pointer_e09330f011895df2aa344c0c7ad8a99d, boost::python::return_internal_reference<>(), "");
    class_65145520a656540e81733f20b66c480f.def("coeff_ref", autowig::method_decorator_e09330f011895df2aa344c0c7ad8a99d);
    class_65145520a656540e81733f20b66c480f.def("coeff_ref", method_pointer_0eb81ba443f65ab7a8096da4c7410703, boost::python::return_internal_reference<>(), "");
    class_65145520a656540e81733f20b66c480f.def("coeff_ref", autowig::method_decorator_0eb81ba443f65ab7a8096da4c7410703);
    class_65145520a656540e81733f20b66c480f.def("coeff_ref", method_pointer_23a857009d2f5c63b56020299369594b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_65145520a656540e81733f20b66c480f.def("coeff_ref", method_pointer_d8e71bfe669358fba4cca788ffa387e8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_65145520a656540e81733f20b66c480f.def("data", method_pointer_d19a9762f5b358ecba0e5954c0081217, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_65145520a656540e81733f20b66c480f.def("data", method_pointer_e62512d9f94e555ea114c343e615a35c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_65145520a656540e81733f20b66c480f.def("resize", method_pointer_67a9fe33eebf58e3a4ef38e9ca26832e, "");
    class_65145520a656540e81733f20b66c480f.def("resize", method_pointer_d144ae3ff067533699310bc51dc78a9d, "");
    class_65145520a656540e81733f20b66c480f.def("resize", method_pointer_9dc79530ec285709bf1aaf3717c0adbb, "");
    class_65145520a656540e81733f20b66c480f.def("resize", method_pointer_60ee5cbf8a285a629a1083cbd7ba3cc6, "");
    class_65145520a656540e81733f20b66c480f.def("conservative_resize", method_pointer_a340f1e5edde5e1f9e532f2a6507212f, "");
    class_65145520a656540e81733f20b66c480f.def("conservative_resize", method_pointer_de4adb274d725acf848b721e5c91fe3f, "");
    class_65145520a656540e81733f20b66c480f.def("conservative_resize", method_pointer_278c84c1e59b57139c86aa328cdcf5fd, "");
    class_65145520a656540e81733f20b66c480f.def("conservative_resize", method_pointer_f90b41da00da52bd973dffa10b38b13e, "");
    class_65145520a656540e81733f20b66c480f.def("set_constant", method_pointer_be43ce0a909c55af83ec6b36cebfe3ea, boost::python::return_internal_reference<>(), "");
    class_65145520a656540e81733f20b66c480f.def("set_constant", autowig::method_decorator_be43ce0a909c55af83ec6b36cebfe3ea);
    class_65145520a656540e81733f20b66c480f.def("set_constant", method_pointer_30a778bd93aa5028ba6cc3f159767e38, boost::python::return_internal_reference<>(), "");
    class_65145520a656540e81733f20b66c480f.def("set_constant", autowig::method_decorator_30a778bd93aa5028ba6cc3f159767e38);
    class_65145520a656540e81733f20b66c480f.def("set_zero", method_pointer_e7330dc1185357e5b1bf07b7ed2d57ff, boost::python::return_internal_reference<>(), "");
    class_65145520a656540e81733f20b66c480f.def("set_zero", autowig::method_decorator_e7330dc1185357e5b1bf07b7ed2d57ff);
    class_65145520a656540e81733f20b66c480f.def("set_zero", method_pointer_e9abcccae1be52c2a2920922947502a9, boost::python::return_internal_reference<>(), "");
    class_65145520a656540e81733f20b66c480f.def("set_zero", autowig::method_decorator_e9abcccae1be52c2a2920922947502a9);
    class_65145520a656540e81733f20b66c480f.def("set_ones", method_pointer_57ef695a91ce54ac8c2e6b722f691d31, boost::python::return_internal_reference<>(), "");
    class_65145520a656540e81733f20b66c480f.def("set_ones", autowig::method_decorator_57ef695a91ce54ac8c2e6b722f691d31);
    class_65145520a656540e81733f20b66c480f.def("set_ones", method_pointer_e7849e08662d5e1a92d1258d8c35fde2, boost::python::return_internal_reference<>(), "");
    class_65145520a656540e81733f20b66c480f.def("set_ones", autowig::method_decorator_e7849e08662d5e1a92d1258d8c35fde2);
    class_65145520a656540e81733f20b66c480f.def("set_random", method_pointer_e3e0e57c035d58c4b36ee80d7a88681e, boost::python::return_internal_reference<>(), "");
    class_65145520a656540e81733f20b66c480f.def("set_random", autowig::method_decorator_e3e0e57c035d58c4b36ee80d7a88681e);
    class_65145520a656540e81733f20b66c480f.def("set_random", method_pointer_df703e6d5d475254b956314db95477d8, boost::python::return_internal_reference<>(), "");
    class_65145520a656540e81733f20b66c480f.def("set_random", autowig::method_decorator_df703e6d5d475254b956314db95477d8);
    class_65145520a656540e81733f20b66c480f.def("check_template_params", method_pointer_0e42c4eebaf5500380572fac8299f859, "");
    class_65145520a656540e81733f20b66c480f.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > >();
    }

}