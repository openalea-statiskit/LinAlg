#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b6814cd22e7e5778a881c90177f8a258(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
// TODO     void method_decorator_537deee7b345524a88a7b56ee6aa5996(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO     void method_decorator_af74a45d94be52ed84bdd1637898fa0d(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, struct ::std::complex< double >  const & param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_857c5aa4293853ebae6700756f910fee(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_22209549fd9c5446a46dd7c1cc86828a(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_2ecc896376425dd7a5fe4944ed836ba9(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_066bdcae394c55cf9f0cba553d00b81b(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_68220e05489a5191aecf9775781a86e1()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_d5fbfe7ddfa957b29716a912c57a89a4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_5c6c96e595c1574ab2e1dbd1d07850d3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_42c97f33570b5f5f90ebccf5702ea5fd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_6658217dbbd35294a1bb318d8347557f)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_9fcd684c29dd5118a0a52a7ab60c5440)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_448990fea7315e9cb343e653e5c23530)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_dced9360d3e754499dee6ef46d850cfa)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_b6814cd22e7e5778a881c90177f8a258)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setConstant;
// TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_537deee7b345524a88a7b56ee6aa5996)(long int , struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setLinSpaced;
// TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_af74a45d94be52ed84bdd1637898fa0d)(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_857c5aa4293853ebae6700756f910fee)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_22209549fd9c5446a46dd7c1cc86828a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_2ecc896376425dd7a5fe4944ed836ba9)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_6e5dc5d1658657b0a1c2c5045a8e5de9)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_5c29fca38d415441adbfc9194bd8e549)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_be756692067b584da9dce5f5c0aa1cc3)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_9a08e514f561521b9db5bad61a1c67e5)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_f37e2f37fe7c5100bafbbe0058610214)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_065af6516ec1527b91468e20f44b269b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_041f6c97375956ab818344ec88497e11)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_066bdcae394c55cf9f0cba553d00b81b)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_bf6190972d0f52f4b452fced6ac384cb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::eval;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_95a5aa39e50b5773bd87ff2071c9d369)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::sum;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_faddf1f5502c5615a6bc8cd8af56d134)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::mean;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_e96730ff24f357ff90e817f95a7032c5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::trace;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_32e0334a4a085dc59ec8fe1b52181e00)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::prod;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_1371c62cdfbf50759ac5a5a9e9055cd2)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 > > > class_68220e05489a5191aecf9775781a86e1("_DenseBase_68220e05489a5191aecf9775781a86e1", "", boost::python::no_init);
    class_68220e05489a5191aecf9775781a86e1.def("non_zeros", method_pointer_d5fbfe7ddfa957b29716a912c57a89a4, "");
    class_68220e05489a5191aecf9775781a86e1.def("outer_size", method_pointer_5c6c96e595c1574ab2e1dbd1d07850d3, "");
    class_68220e05489a5191aecf9775781a86e1.def("inner_size", method_pointer_42c97f33570b5f5f90ebccf5702ea5fd, "");
    class_68220e05489a5191aecf9775781a86e1.def("resize", method_pointer_6658217dbbd35294a1bb318d8347557f, "");
    class_68220e05489a5191aecf9775781a86e1.def("resize", method_pointer_9fcd684c29dd5118a0a52a7ab60c5440, "");
    class_68220e05489a5191aecf9775781a86e1.def("transpose_in_place", method_pointer_448990fea7315e9cb343e653e5c23530, "");
    class_68220e05489a5191aecf9775781a86e1.def("fill", method_pointer_dced9360d3e754499dee6ef46d850cfa, "");
    class_68220e05489a5191aecf9775781a86e1.def("set_constant", method_pointer_b6814cd22e7e5778a881c90177f8a258, boost::python::return_internal_reference<>(), "");
    class_68220e05489a5191aecf9775781a86e1.def("set_constant", autowig::method_decorator_b6814cd22e7e5778a881c90177f8a258);
// TODO // TODO     class_68220e05489a5191aecf9775781a86e1.def("set_lin_spaced", method_pointer_537deee7b345524a88a7b56ee6aa5996, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_68220e05489a5191aecf9775781a86e1.def("set_lin_spaced", autowig::method_decorator_537deee7b345524a88a7b56ee6aa5996);
// TODO // TODO     class_68220e05489a5191aecf9775781a86e1.def("set_lin_spaced", method_pointer_af74a45d94be52ed84bdd1637898fa0d, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_68220e05489a5191aecf9775781a86e1.def("set_lin_spaced", autowig::method_decorator_af74a45d94be52ed84bdd1637898fa0d);
    class_68220e05489a5191aecf9775781a86e1.def("set_zero", method_pointer_857c5aa4293853ebae6700756f910fee, boost::python::return_internal_reference<>(), "");
    class_68220e05489a5191aecf9775781a86e1.def("set_zero", autowig::method_decorator_857c5aa4293853ebae6700756f910fee);
    class_68220e05489a5191aecf9775781a86e1.def("set_ones", method_pointer_22209549fd9c5446a46dd7c1cc86828a, boost::python::return_internal_reference<>(), "");
    class_68220e05489a5191aecf9775781a86e1.def("set_ones", autowig::method_decorator_22209549fd9c5446a46dd7c1cc86828a);
    class_68220e05489a5191aecf9775781a86e1.def("set_random", method_pointer_2ecc896376425dd7a5fe4944ed836ba9, boost::python::return_internal_reference<>(), "");
    class_68220e05489a5191aecf9775781a86e1.def("set_random", autowig::method_decorator_2ecc896376425dd7a5fe4944ed836ba9);
    class_68220e05489a5191aecf9775781a86e1.def("is_much_smaller_than", method_pointer_6e5dc5d1658657b0a1c2c5045a8e5de9, "");
    class_68220e05489a5191aecf9775781a86e1.def("is_approx_to_constant", method_pointer_5c29fca38d415441adbfc9194bd8e549, "");
    class_68220e05489a5191aecf9775781a86e1.def("is_constant", method_pointer_be756692067b584da9dce5f5c0aa1cc3, "");
    class_68220e05489a5191aecf9775781a86e1.def("is_zero", method_pointer_9a08e514f561521b9db5bad61a1c67e5, "");
    class_68220e05489a5191aecf9775781a86e1.def("is_ones", method_pointer_f37e2f37fe7c5100bafbbe0058610214, "");
    class_68220e05489a5191aecf9775781a86e1.def("has_na_n", method_pointer_065af6516ec1527b91468e20f44b269b, "");
    class_68220e05489a5191aecf9775781a86e1.def("all_finite", method_pointer_041f6c97375956ab818344ec88497e11, "");
    class_68220e05489a5191aecf9775781a86e1.def("__imul__", method_pointer_066bdcae394c55cf9f0cba553d00b81b, boost::python::return_internal_reference<>(), "");
    class_68220e05489a5191aecf9775781a86e1.def("__imul__", autowig::method_decorator_066bdcae394c55cf9f0cba553d00b81b);
    class_68220e05489a5191aecf9775781a86e1.def("eval", method_pointer_bf6190972d0f52f4b452fced6ac384cb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68220e05489a5191aecf9775781a86e1.def("sum", method_pointer_95a5aa39e50b5773bd87ff2071c9d369, "");
    class_68220e05489a5191aecf9775781a86e1.def("mean", method_pointer_faddf1f5502c5615a6bc8cd8af56d134, "");
    class_68220e05489a5191aecf9775781a86e1.def("trace", method_pointer_e96730ff24f357ff90e817f95a7032c5, "");
    class_68220e05489a5191aecf9775781a86e1.def("prod", method_pointer_32e0334a4a085dc59ec8fe1b52181e00, "");
    class_68220e05489a5191aecf9775781a86e1.def("reverse_in_place", method_pointer_1371c62cdfbf50759ac5a5a9e9055cd2, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 3 > > >();
    }

}