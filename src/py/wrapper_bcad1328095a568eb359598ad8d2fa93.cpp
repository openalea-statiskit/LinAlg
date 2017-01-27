#include "_ieigen.h"


namespace autowig
{
    void method_decorator_5bcd38d024945031b06473e2f9ae3e62(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
// TODO     void method_decorator_f7d131a948d85f87a679121440f7faec(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, double  const & param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO     void method_decorator_6d02f56c77d05118a5b38021f2693602(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, double  const & param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_5bea33c130d55e84b9ba9d9e5965a35b(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_c6b970a4165d58259f338cc6b20b4026(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_2efcc5c34d5b5dd08974f704b41a4582(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_a591e4ecc7ec5aa1b2256c7fbea08020(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_bcad1328095a568eb359598ad8d2fa93()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_9cc846d70d9d5062925d409c9b9d0822)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_7ec0087c280c599484a04d612aba1c18)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_37647c77c364512c818c13fe11b461ab)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_08c2419a1b7258bc9876fa216f71cc8c)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_30c5363c4b0f589b88037c28510fe4c7)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_dd77143927995ecf863a9ace7326ba14)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_2d5d0976c41d552495fb33d343ec768d)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::fill;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_5bcd38d024945031b06473e2f9ae3e62)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setConstant;
// TODO // TODO     class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_f7d131a948d85f87a679121440f7faec)(long int , double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setLinSpaced;
// TODO // TODO     class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_6d02f56c77d05118a5b38021f2693602)(double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_5bea33c130d55e84b9ba9d9e5965a35b)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setZero;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_c6b970a4165d58259f338cc6b20b4026)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setOnes;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_2efcc5c34d5b5dd08974f704b41a4582)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_ea51f68d78b75ac8836f9b30404c8981)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_73d27806bda3502b9eaad75f0e4b915d)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_60e581ad070d599db10b590d0ea76f7f)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_2730640c7b4352dfb3b255328e8518d1)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_4543f8bb6e135afcaba9510248b91976)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_727e623c24d0544296f25306cd80507b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_12550797665f575ca93d25b6e45aefb1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::allFinite;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_a591e4ecc7ec5aa1b2256c7fbea08020)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::operator*=;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_1b090c743e945d24baea369577675882)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::eval;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_68b88a7761585c8cb69bf49840e3b7d2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::sum;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_7b28d621be2558d294e2d52093fc316d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::mean;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_492755bdf77a56c0b3ceeb8cf8fb5321)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::trace;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_b050479a84a459519c261a8dcd0d5bb2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::prod;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_d7d4719dd81e51cd9ebb80be08aa9d8e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::minCoeff;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_0477ae30dbe055279f2968a4a12fa3c0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::maxCoeff;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_754e8079dc2c5aefabea1cda41a1570a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_46d6c69535465857a89bc75f0fa7e54b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_05a2ac5c482e587daab6bb61d105504a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_d0d2b4796cad555aa0cc770b2b574f47)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 > > > class_bcad1328095a568eb359598ad8d2fa93("_DenseBase_bcad1328095a568eb359598ad8d2fa93", "", boost::python::no_init);
    class_bcad1328095a568eb359598ad8d2fa93.def("non_zeros", method_pointer_9cc846d70d9d5062925d409c9b9d0822, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("outer_size", method_pointer_7ec0087c280c599484a04d612aba1c18, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("inner_size", method_pointer_37647c77c364512c818c13fe11b461ab, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("resize", method_pointer_08c2419a1b7258bc9876fa216f71cc8c, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("resize", method_pointer_30c5363c4b0f589b88037c28510fe4c7, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("transpose_in_place", method_pointer_dd77143927995ecf863a9ace7326ba14, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("fill", method_pointer_2d5d0976c41d552495fb33d343ec768d, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("set_constant", method_pointer_5bcd38d024945031b06473e2f9ae3e62, boost::python::return_internal_reference<>(), "");
    class_bcad1328095a568eb359598ad8d2fa93.def("set_constant", autowig::method_decorator_5bcd38d024945031b06473e2f9ae3e62);
// TODO // TODO     class_bcad1328095a568eb359598ad8d2fa93.def("set_lin_spaced", method_pointer_f7d131a948d85f87a679121440f7faec, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_bcad1328095a568eb359598ad8d2fa93.def("set_lin_spaced", autowig::method_decorator_f7d131a948d85f87a679121440f7faec);
// TODO // TODO     class_bcad1328095a568eb359598ad8d2fa93.def("set_lin_spaced", method_pointer_6d02f56c77d05118a5b38021f2693602, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_bcad1328095a568eb359598ad8d2fa93.def("set_lin_spaced", autowig::method_decorator_6d02f56c77d05118a5b38021f2693602);
    class_bcad1328095a568eb359598ad8d2fa93.def("set_zero", method_pointer_5bea33c130d55e84b9ba9d9e5965a35b, boost::python::return_internal_reference<>(), "");
    class_bcad1328095a568eb359598ad8d2fa93.def("set_zero", autowig::method_decorator_5bea33c130d55e84b9ba9d9e5965a35b);
    class_bcad1328095a568eb359598ad8d2fa93.def("set_ones", method_pointer_c6b970a4165d58259f338cc6b20b4026, boost::python::return_internal_reference<>(), "");
    class_bcad1328095a568eb359598ad8d2fa93.def("set_ones", autowig::method_decorator_c6b970a4165d58259f338cc6b20b4026);
    class_bcad1328095a568eb359598ad8d2fa93.def("set_random", method_pointer_2efcc5c34d5b5dd08974f704b41a4582, boost::python::return_internal_reference<>(), "");
    class_bcad1328095a568eb359598ad8d2fa93.def("set_random", autowig::method_decorator_2efcc5c34d5b5dd08974f704b41a4582);
    class_bcad1328095a568eb359598ad8d2fa93.def("is_much_smaller_than", method_pointer_ea51f68d78b75ac8836f9b30404c8981, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("is_approx_to_constant", method_pointer_73d27806bda3502b9eaad75f0e4b915d, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("is_constant", method_pointer_60e581ad070d599db10b590d0ea76f7f, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("is_zero", method_pointer_2730640c7b4352dfb3b255328e8518d1, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("is_ones", method_pointer_4543f8bb6e135afcaba9510248b91976, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("has_na_n", method_pointer_727e623c24d0544296f25306cd80507b, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("all_finite", method_pointer_12550797665f575ca93d25b6e45aefb1, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("__imul__", method_pointer_a591e4ecc7ec5aa1b2256c7fbea08020, boost::python::return_internal_reference<>(), "");
    class_bcad1328095a568eb359598ad8d2fa93.def("__imul__", autowig::method_decorator_a591e4ecc7ec5aa1b2256c7fbea08020);
    class_bcad1328095a568eb359598ad8d2fa93.def("eval", method_pointer_1b090c743e945d24baea369577675882, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bcad1328095a568eb359598ad8d2fa93.def("sum", method_pointer_68b88a7761585c8cb69bf49840e3b7d2, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("mean", method_pointer_7b28d621be2558d294e2d52093fc316d, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("trace", method_pointer_492755bdf77a56c0b3ceeb8cf8fb5321, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("prod", method_pointer_b050479a84a459519c261a8dcd0d5bb2, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("min_coeff", method_pointer_d7d4719dd81e51cd9ebb80be08aa9d8e, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("max_coeff", method_pointer_0477ae30dbe055279f2968a4a12fa3c0, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("all", method_pointer_754e8079dc2c5aefabea1cda41a1570a, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("any", method_pointer_46d6c69535465857a89bc75f0fa7e54b, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("count", method_pointer_05a2ac5c482e587daab6bb61d105504a, "");
    class_bcad1328095a568eb359598ad8d2fa93.def("reverse_in_place", method_pointer_d0d2b4796cad555aa0cc770b2b574f47, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 3 > > >();
    }

}