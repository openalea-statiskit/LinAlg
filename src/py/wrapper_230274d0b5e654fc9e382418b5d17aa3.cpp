#include "_ieigen.h"


namespace autowig
{
    void method_decorator_de49d1a0208458c48f2c006db05198f2(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_3740488d2b1e5b70a861e818f00e6a17(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_2dfee3f20d235fb2864b4e1fe66b5be8(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, struct ::std::complex< double >  const & param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_a3ba086c713156b79f5269e91df214d9(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_91aa4923708c56728cdb0f96a5361b47(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_815692d56bbf51b889ed4ef395a10212(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_b3a37d3dd7105e0bbc6c2195689bc86b(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_230274d0b5e654fc9e382418b5d17aa3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_a68ca307ce7959e1ab644d93397a1fb8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_6f4b1a8416015e70b0e13c88d6d9c3fc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_f03946b7c46554f2ba4edd2f737d0470)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_0222072fd38e5e24b0ef3ff74cd6f2ed)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_a9e92b73a22953c7b61733941433840a)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_5b253d05b8a45717b4a3e12c547fa025)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_ceaf56f6fa9759f38efc619da2ad1a94)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_de49d1a0208458c48f2c006db05198f2)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_3740488d2b1e5b70a861e818f00e6a17)(long int , struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_2dfee3f20d235fb2864b4e1fe66b5be8)(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_a3ba086c713156b79f5269e91df214d9)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_91aa4923708c56728cdb0f96a5361b47)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_815692d56bbf51b889ed4ef395a10212)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_05c8e48fc3c25afca35ebe96c0a952f3)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_5865225c6cf555028304fa3f82c8203c)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_3e9d80bf4133595d8170c4638c6490b3)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_6371ac5d9ac059dba83841b97b5643ad)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_dba0a0eb333c5a7f831d83c829c6a213)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_23d777eea6135d2ead92b19b9e453eef)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_db6ab89bdbbc5b6bb628f0dd990a5b9b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_b3a37d3dd7105e0bbc6c2195689bc86b)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_c3168d6cdb0e5dafa2c2265241078c27)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::eval;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_23f0b53a3d485b509e01ea4a85131ea8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::sum;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_06bf26876be3558293d55f85b532acab)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::mean;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_163a5c4576f553c0a95e2be7fe6ce9d6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::trace;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_2438e65a5d995f3fb2bda63a6bcb4d7f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::prod;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_c9c74f66046d5723b228222f9aca536b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::minCoeff;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_12859956e28a5e07ace86353281047ad)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::maxCoeff;
    struct ::std::complex< double >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_2a1de60497e45a02ae198e1e6872c934)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_8ae2166cdcf457a9b000b9dee9a60153)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_ec6d7452d08b5639824ebc56964f4453)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_0144a685156d5f95b2f265c9d3d13a7e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_c4ea84c98fa35c4bbc03bbdddc24024d)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 > > > class_230274d0b5e654fc9e382418b5d17aa3("_DenseBase_230274d0b5e654fc9e382418b5d17aa3", "", boost::python::no_init);
    class_230274d0b5e654fc9e382418b5d17aa3.def("non_zeros", method_pointer_a68ca307ce7959e1ab644d93397a1fb8, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("outer_size", method_pointer_6f4b1a8416015e70b0e13c88d6d9c3fc, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("inner_size", method_pointer_f03946b7c46554f2ba4edd2f737d0470, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("resize", method_pointer_0222072fd38e5e24b0ef3ff74cd6f2ed, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("resize", method_pointer_a9e92b73a22953c7b61733941433840a, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("transpose_in_place", method_pointer_5b253d05b8a45717b4a3e12c547fa025, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("fill", method_pointer_ceaf56f6fa9759f38efc619da2ad1a94, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("set_constant", method_pointer_de49d1a0208458c48f2c006db05198f2, boost::python::return_internal_reference<>(), "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("set_constant", autowig::method_decorator_de49d1a0208458c48f2c006db05198f2);
    class_230274d0b5e654fc9e382418b5d17aa3.def("set_lin_spaced", method_pointer_3740488d2b1e5b70a861e818f00e6a17, boost::python::return_internal_reference<>(), "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("set_lin_spaced", autowig::method_decorator_3740488d2b1e5b70a861e818f00e6a17);
    class_230274d0b5e654fc9e382418b5d17aa3.def("set_lin_spaced", method_pointer_2dfee3f20d235fb2864b4e1fe66b5be8, boost::python::return_internal_reference<>(), "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("set_lin_spaced", autowig::method_decorator_2dfee3f20d235fb2864b4e1fe66b5be8);
    class_230274d0b5e654fc9e382418b5d17aa3.def("set_zero", method_pointer_a3ba086c713156b79f5269e91df214d9, boost::python::return_internal_reference<>(), "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("set_zero", autowig::method_decorator_a3ba086c713156b79f5269e91df214d9);
    class_230274d0b5e654fc9e382418b5d17aa3.def("set_ones", method_pointer_91aa4923708c56728cdb0f96a5361b47, boost::python::return_internal_reference<>(), "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("set_ones", autowig::method_decorator_91aa4923708c56728cdb0f96a5361b47);
    class_230274d0b5e654fc9e382418b5d17aa3.def("set_random", method_pointer_815692d56bbf51b889ed4ef395a10212, boost::python::return_internal_reference<>(), "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("set_random", autowig::method_decorator_815692d56bbf51b889ed4ef395a10212);
    class_230274d0b5e654fc9e382418b5d17aa3.def("is_much_smaller_than", method_pointer_05c8e48fc3c25afca35ebe96c0a952f3, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("is_approx_to_constant", method_pointer_5865225c6cf555028304fa3f82c8203c, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("is_constant", method_pointer_3e9d80bf4133595d8170c4638c6490b3, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("is_zero", method_pointer_6371ac5d9ac059dba83841b97b5643ad, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("is_ones", method_pointer_dba0a0eb333c5a7f831d83c829c6a213, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("has_na_n", method_pointer_23d777eea6135d2ead92b19b9e453eef, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("all_finite", method_pointer_db6ab89bdbbc5b6bb628f0dd990a5b9b, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("__imul__", method_pointer_b3a37d3dd7105e0bbc6c2195689bc86b, boost::python::return_internal_reference<>(), "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("__imul__", autowig::method_decorator_b3a37d3dd7105e0bbc6c2195689bc86b);
    class_230274d0b5e654fc9e382418b5d17aa3.def("eval", method_pointer_c3168d6cdb0e5dafa2c2265241078c27, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("sum", method_pointer_23f0b53a3d485b509e01ea4a85131ea8, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("mean", method_pointer_06bf26876be3558293d55f85b532acab, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("trace", method_pointer_163a5c4576f553c0a95e2be7fe6ce9d6, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("prod", method_pointer_2438e65a5d995f3fb2bda63a6bcb4d7f, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("min_coeff", method_pointer_c9c74f66046d5723b228222f9aca536b, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("max_coeff", method_pointer_12859956e28a5e07ace86353281047ad, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("value", method_pointer_2a1de60497e45a02ae198e1e6872c934, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("all", method_pointer_8ae2166cdcf457a9b000b9dee9a60153, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("any", method_pointer_ec6d7452d08b5639824ebc56964f4453, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("count", method_pointer_0144a685156d5f95b2f265c9d3d13a7e, "");
    class_230274d0b5e654fc9e382418b5d17aa3.def("reverse_in_place", method_pointer_c4ea84c98fa35c4bbc03bbdddc24024d, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >, 3 > > >();
    }

}