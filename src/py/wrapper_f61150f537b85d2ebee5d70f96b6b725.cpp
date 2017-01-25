#include "_ieigen.h"


namespace autowig
{
    void method_decorator_31bd953102355992ac8a8c58fe042ecd(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_0e926257c500515c9c90ffec3b537df2(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_4014e00edf6653caba55ba14d577ba62(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, struct ::std::complex< double >  const & param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_a8fb6184ce225c86b37a62c31b58f262(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_af82a3541fbe53f186fd0a5aadbd72eb(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_3b4834e99d915a9986f5cf99caa4d5ff(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_bf99fbb710885ea9a8301f9c29789502(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_f61150f537b85d2ebee5d70f96b6b725()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_77e9e5c06ae05032b8192a6d3868384f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_0e7f8df5743a50e286a1eb58288788ce)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_6ac734680cb1590b96d2423b8418b188)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_5186fb35eae358c79920b3268fac65f8)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_f8c2cd825faa5f74bfee3bd4e75c5dd9)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_22d608fdf4b454e391d1563dea9de839)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_0dae779c2c565afeb61511f0660ebae4)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_31bd953102355992ac8a8c58fe042ecd)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_0e926257c500515c9c90ffec3b537df2)(long int , struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_4014e00edf6653caba55ba14d577ba62)(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_a8fb6184ce225c86b37a62c31b58f262)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_af82a3541fbe53f186fd0a5aadbd72eb)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_3b4834e99d915a9986f5cf99caa4d5ff)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_ee789b418850530f80b996601e6908e9)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_8e57dc6c1192542c882a19b3a45d3b61)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_58e7316776415c73816c7887825e6412)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_f6df800b63a354c8967a64e0c064cbcc)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_7acf314c09fa5114be789db3581a20ba)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_762cd537ad2c54848279039111f1b353)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_324c1688869159eab8cb5ffd04b955b3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_bf99fbb710885ea9a8301f9c29789502)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_aad5eb1d6df751d89a23fd7c08036f9b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::eval;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_52263b4ecd1553e89f23e7155a159504)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::sum;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_c5919dbcb7d9591b8db1f986f942b94c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::mean;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_0c12b5d8e0395ca3ad366315a1682157)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::trace;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_5882f081f07754a3b9aa0749e6f6d732)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::prod;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_b2185eb0dd54597abe13e2f1f5d00441)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::minCoeff;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_8c234cd187f65d6c9c06e99d718a7319)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::maxCoeff;
    struct ::std::complex< double >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_0807d561f22052139386e7b126124365)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_7db1a48873655e8f98569bf62e456754)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_d323796c773b5b8a908b5fb3885f681a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_72bcf10ff0225832aaca3cb7aa12bc35)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_942b883aaf06594dbe374f7b2f7326ab)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 > > > class_f61150f537b85d2ebee5d70f96b6b725("_DenseBase_f61150f537b85d2ebee5d70f96b6b725", "", boost::python::no_init);
    class_f61150f537b85d2ebee5d70f96b6b725.def("non_zeros", method_pointer_77e9e5c06ae05032b8192a6d3868384f, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("outer_size", method_pointer_0e7f8df5743a50e286a1eb58288788ce, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("inner_size", method_pointer_6ac734680cb1590b96d2423b8418b188, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("resize", method_pointer_5186fb35eae358c79920b3268fac65f8, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("resize", method_pointer_f8c2cd825faa5f74bfee3bd4e75c5dd9, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("transpose_in_place", method_pointer_22d608fdf4b454e391d1563dea9de839, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("fill", method_pointer_0dae779c2c565afeb61511f0660ebae4, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("set_constant", method_pointer_31bd953102355992ac8a8c58fe042ecd, boost::python::return_internal_reference<>(), "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("set_constant", autowig::method_decorator_31bd953102355992ac8a8c58fe042ecd);
    class_f61150f537b85d2ebee5d70f96b6b725.def("set_lin_spaced", method_pointer_0e926257c500515c9c90ffec3b537df2, boost::python::return_internal_reference<>(), "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("set_lin_spaced", autowig::method_decorator_0e926257c500515c9c90ffec3b537df2);
    class_f61150f537b85d2ebee5d70f96b6b725.def("set_lin_spaced", method_pointer_4014e00edf6653caba55ba14d577ba62, boost::python::return_internal_reference<>(), "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("set_lin_spaced", autowig::method_decorator_4014e00edf6653caba55ba14d577ba62);
    class_f61150f537b85d2ebee5d70f96b6b725.def("set_zero", method_pointer_a8fb6184ce225c86b37a62c31b58f262, boost::python::return_internal_reference<>(), "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("set_zero", autowig::method_decorator_a8fb6184ce225c86b37a62c31b58f262);
    class_f61150f537b85d2ebee5d70f96b6b725.def("set_ones", method_pointer_af82a3541fbe53f186fd0a5aadbd72eb, boost::python::return_internal_reference<>(), "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("set_ones", autowig::method_decorator_af82a3541fbe53f186fd0a5aadbd72eb);
    class_f61150f537b85d2ebee5d70f96b6b725.def("set_random", method_pointer_3b4834e99d915a9986f5cf99caa4d5ff, boost::python::return_internal_reference<>(), "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("set_random", autowig::method_decorator_3b4834e99d915a9986f5cf99caa4d5ff);
    class_f61150f537b85d2ebee5d70f96b6b725.def("is_much_smaller_than", method_pointer_ee789b418850530f80b996601e6908e9, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("is_approx_to_constant", method_pointer_8e57dc6c1192542c882a19b3a45d3b61, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("is_constant", method_pointer_58e7316776415c73816c7887825e6412, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("is_zero", method_pointer_f6df800b63a354c8967a64e0c064cbcc, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("is_ones", method_pointer_7acf314c09fa5114be789db3581a20ba, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("has_na_n", method_pointer_762cd537ad2c54848279039111f1b353, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("all_finite", method_pointer_324c1688869159eab8cb5ffd04b955b3, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("__imul__", method_pointer_bf99fbb710885ea9a8301f9c29789502, boost::python::return_internal_reference<>(), "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("__imul__", autowig::method_decorator_bf99fbb710885ea9a8301f9c29789502);
    class_f61150f537b85d2ebee5d70f96b6b725.def("eval", method_pointer_aad5eb1d6df751d89a23fd7c08036f9b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("sum", method_pointer_52263b4ecd1553e89f23e7155a159504, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("mean", method_pointer_c5919dbcb7d9591b8db1f986f942b94c, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("trace", method_pointer_0c12b5d8e0395ca3ad366315a1682157, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("prod", method_pointer_5882f081f07754a3b9aa0749e6f6d732, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("min_coeff", method_pointer_b2185eb0dd54597abe13e2f1f5d00441, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("max_coeff", method_pointer_8c234cd187f65d6c9c06e99d718a7319, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("value", method_pointer_0807d561f22052139386e7b126124365, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("all", method_pointer_7db1a48873655e8f98569bf62e456754, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("any", method_pointer_d323796c773b5b8a908b5fb3885f681a, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("count", method_pointer_72bcf10ff0225832aaca3cb7aa12bc35, "");
    class_f61150f537b85d2ebee5d70f96b6b725.def("reverse_in_place", method_pointer_942b883aaf06594dbe374f7b2f7326ab, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 3 > > >();
    }

}