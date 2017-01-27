#include "_ieigen.h"


namespace autowig
{
    void method_decorator_3ecede47163f5aadba5f8e9da2fdd73f(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
// TODO // TODO     void method_decorator_b9bf8a9da82652e2bdb9b4701a215913(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO // TODO // TODO // TODO     void method_decorator_a0b952f1ed8259908301ffcab8b9e913(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, struct ::std::complex< double >  const & param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_7afb4a98c5fa5a3bb42b558a43b036ec(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_1645e7371c0c5103ab3ac0786630e025(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_bb0eec4b8a3153328dbd46d786a87012(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_223c79c244d45f30bd545ce97631b15d(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_e9c720199aea52a1988a16e144cd876f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_fc030cf914b253d5b25d055ad49f43fd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_71d303bd8e3a52cc8774e1f5454b9d98)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_7fd76c7ceff45cda82354a0e74ecc301)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_99f7d1b4d69b5548b5b158f8fc1a03a9)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_4af410ce3c6a5c7f974bdadbbbcd3e25)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_c0d25c34ceb554278c442dfac53c769d)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_4f113f55fe8a5a18a14041d3e6915b93)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_3ecede47163f5aadba5f8e9da2fdd73f)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setConstant;
// TODO // TODO // TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_b9bf8a9da82652e2bdb9b4701a215913)(long int , struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setLinSpaced;
// TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_a0b952f1ed8259908301ffcab8b9e913)(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_7afb4a98c5fa5a3bb42b558a43b036ec)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_1645e7371c0c5103ab3ac0786630e025)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_bb0eec4b8a3153328dbd46d786a87012)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_834720e1a1665db89629cfe7b693a6b5)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_9a62ff77c030568e99aea53a99943021)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_92fa39b787fc5b418b5f01e03ba1170e)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_dafe57e9544c5540834e96d96c19812e)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_e6d7e714681d5b299fe51f9e0dfe34b5)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_541fc627ceae5ba48274f49f64f9eff7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_9bf8ee4095475a70afca6448d63b1e75)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_223c79c244d45f30bd545ce97631b15d)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_2ac232193e7b561eb0cce07569594e0f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::eval;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_b4c7f02133725ea1a61674e01195d044)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::sum;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_cf917fe08221534cb0366aa409cb1194)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::mean;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_e134717a788253338b157fac7d7a4b5d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::trace;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_b1b9eddecebe5b978f35c196df00f99a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::prod;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_826fead33cef54fc9fb92c29f8941a00)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 > > > class_e9c720199aea52a1988a16e144cd876f("_DenseBase_e9c720199aea52a1988a16e144cd876f", "", boost::python::no_init);
    class_e9c720199aea52a1988a16e144cd876f.def("non_zeros", method_pointer_fc030cf914b253d5b25d055ad49f43fd, "");
    class_e9c720199aea52a1988a16e144cd876f.def("outer_size", method_pointer_71d303bd8e3a52cc8774e1f5454b9d98, "");
    class_e9c720199aea52a1988a16e144cd876f.def("inner_size", method_pointer_7fd76c7ceff45cda82354a0e74ecc301, "");
    class_e9c720199aea52a1988a16e144cd876f.def("resize", method_pointer_99f7d1b4d69b5548b5b158f8fc1a03a9, "");
    class_e9c720199aea52a1988a16e144cd876f.def("resize", method_pointer_4af410ce3c6a5c7f974bdadbbbcd3e25, "");
    class_e9c720199aea52a1988a16e144cd876f.def("transpose_in_place", method_pointer_c0d25c34ceb554278c442dfac53c769d, "");
    class_e9c720199aea52a1988a16e144cd876f.def("fill", method_pointer_4f113f55fe8a5a18a14041d3e6915b93, "");
    class_e9c720199aea52a1988a16e144cd876f.def("set_constant", method_pointer_3ecede47163f5aadba5f8e9da2fdd73f, boost::python::return_internal_reference<>(), "");
    class_e9c720199aea52a1988a16e144cd876f.def("set_constant", autowig::method_decorator_3ecede47163f5aadba5f8e9da2fdd73f);
// TODO // TODO     class_e9c720199aea52a1988a16e144cd876f.def("set_lin_spaced", method_pointer_b9bf8a9da82652e2bdb9b4701a215913, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_e9c720199aea52a1988a16e144cd876f.def("set_lin_spaced", autowig::method_decorator_b9bf8a9da82652e2bdb9b4701a215913);
// TODO     class_e9c720199aea52a1988a16e144cd876f.def("set_lin_spaced", method_pointer_a0b952f1ed8259908301ffcab8b9e913, boost::python::return_internal_reference<>(), "");
// TODO     class_e9c720199aea52a1988a16e144cd876f.def("set_lin_spaced", autowig::method_decorator_a0b952f1ed8259908301ffcab8b9e913);
    class_e9c720199aea52a1988a16e144cd876f.def("set_zero", method_pointer_7afb4a98c5fa5a3bb42b558a43b036ec, boost::python::return_internal_reference<>(), "");
    class_e9c720199aea52a1988a16e144cd876f.def("set_zero", autowig::method_decorator_7afb4a98c5fa5a3bb42b558a43b036ec);
    class_e9c720199aea52a1988a16e144cd876f.def("set_ones", method_pointer_1645e7371c0c5103ab3ac0786630e025, boost::python::return_internal_reference<>(), "");
    class_e9c720199aea52a1988a16e144cd876f.def("set_ones", autowig::method_decorator_1645e7371c0c5103ab3ac0786630e025);
    class_e9c720199aea52a1988a16e144cd876f.def("set_random", method_pointer_bb0eec4b8a3153328dbd46d786a87012, boost::python::return_internal_reference<>(), "");
    class_e9c720199aea52a1988a16e144cd876f.def("set_random", autowig::method_decorator_bb0eec4b8a3153328dbd46d786a87012);
    class_e9c720199aea52a1988a16e144cd876f.def("is_much_smaller_than", method_pointer_834720e1a1665db89629cfe7b693a6b5, "");
    class_e9c720199aea52a1988a16e144cd876f.def("is_approx_to_constant", method_pointer_9a62ff77c030568e99aea53a99943021, "");
    class_e9c720199aea52a1988a16e144cd876f.def("is_constant", method_pointer_92fa39b787fc5b418b5f01e03ba1170e, "");
    class_e9c720199aea52a1988a16e144cd876f.def("is_zero", method_pointer_dafe57e9544c5540834e96d96c19812e, "");
    class_e9c720199aea52a1988a16e144cd876f.def("is_ones", method_pointer_e6d7e714681d5b299fe51f9e0dfe34b5, "");
    class_e9c720199aea52a1988a16e144cd876f.def("has_na_n", method_pointer_541fc627ceae5ba48274f49f64f9eff7, "");
    class_e9c720199aea52a1988a16e144cd876f.def("all_finite", method_pointer_9bf8ee4095475a70afca6448d63b1e75, "");
    class_e9c720199aea52a1988a16e144cd876f.def("__imul__", method_pointer_223c79c244d45f30bd545ce97631b15d, boost::python::return_internal_reference<>(), "");
    class_e9c720199aea52a1988a16e144cd876f.def("__imul__", autowig::method_decorator_223c79c244d45f30bd545ce97631b15d);
    class_e9c720199aea52a1988a16e144cd876f.def("eval", method_pointer_2ac232193e7b561eb0cce07569594e0f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e9c720199aea52a1988a16e144cd876f.def("sum", method_pointer_b4c7f02133725ea1a61674e01195d044, "");
    class_e9c720199aea52a1988a16e144cd876f.def("mean", method_pointer_cf917fe08221534cb0366aa409cb1194, "");
    class_e9c720199aea52a1988a16e144cd876f.def("trace", method_pointer_e134717a788253338b157fac7d7a4b5d, "");
    class_e9c720199aea52a1988a16e144cd876f.def("prod", method_pointer_b1b9eddecebe5b978f35c196df00f99a, "");
    class_e9c720199aea52a1988a16e144cd876f.def("reverse_in_place", method_pointer_826fead33cef54fc9fb92c29f8941a00, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 > > >();
    }

}