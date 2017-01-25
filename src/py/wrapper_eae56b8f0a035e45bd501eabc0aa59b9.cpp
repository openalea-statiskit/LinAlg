#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a091f7210a2a536aad07c73ae862636f(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_e0ccaa9305945d5fb30003481e890679(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, int  const & param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_94f1fbf72e2a5db8ab8268bdf48915fe(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, int  const & param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_95e96f03a5e959d39beb028140c4c0b8(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_dc6b7518a9085c4a9e13227123eaa5b6(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_f9bb985fdd1d571a8729f7d7c2fc6c8a(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_3c238401b60e529887d63c37d4778077(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_eae56b8f0a035e45bd501eabc0aa59b9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_b470d62a8fa954c59549700eb7dca9c8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_2390477ec935580eb4173fb2f1bd7f70)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_caf86f805e765af4a5252054dfe4c8d0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_05fbd0a1827b5e35b0d5ad12d1097a19)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_3e9a952b9a035c72b929238e07d539c7)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_82f5c1c5289056bba44489459e093cf1)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_cb63fad8ea9d561da858b9a4c56ddb37)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::fill;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_a091f7210a2a536aad07c73ae862636f)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_e0ccaa9305945d5fb30003481e890679)(long int , int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_94f1fbf72e2a5db8ab8268bdf48915fe)(int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_95e96f03a5e959d39beb028140c4c0b8)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_dc6b7518a9085c4a9e13227123eaa5b6)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_f9bb985fdd1d571a8729f7d7c2fc6c8a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_24eec695f9a15b2ebb47b4c0a18e8103)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_63e3db11474f5902a06e747e13b2bc8a)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_3eb44f8a32db57b681f851ae53a323b0)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_8266c6c317bf59a0ae27f658c5f80f77)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_f651e75136f252d18f2f13e281617456)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_82508c889cb05d60ab4df5a72082d181)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_acca86e827ed57e6af032e5e9f645573)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::allFinite;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_3c238401b60e529887d63c37d4778077)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::operator*=;
    class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_f3330e2c5555515482d5455cd9970136)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::eval;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_27af06b353d254babf066f3db6c1a9a5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::sum;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_7152a6c08aa1557386b0b6fdbf5d2191)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::mean;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_ce2b4bcd1788577dbd1012ef67b83814)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::trace;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_9617c94e509f519e966097c3e729f492)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::prod;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_7630bf2ad6ef540793eecc12e8263adb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::minCoeff;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_8432fb52bc6b5bbba4c677103f53732b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::maxCoeff;
    int  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_31969eb27d3f58b0b340708b4a9226bf)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_7ec84ebf8b8c58df80a2819e82bc3f73)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_93ec0fac7841542bab09f568dc5200b1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_6a7fe0d20c3c5e5bb72c7fb7a823d61d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::*method_pointer_789e24e68db75e739c16721f451359a0)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 > > > class_eae56b8f0a035e45bd501eabc0aa59b9("_DenseBase_eae56b8f0a035e45bd501eabc0aa59b9", "", boost::python::no_init);
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("non_zeros", method_pointer_b470d62a8fa954c59549700eb7dca9c8, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("outer_size", method_pointer_2390477ec935580eb4173fb2f1bd7f70, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("inner_size", method_pointer_caf86f805e765af4a5252054dfe4c8d0, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("resize", method_pointer_05fbd0a1827b5e35b0d5ad12d1097a19, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("resize", method_pointer_3e9a952b9a035c72b929238e07d539c7, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("transpose_in_place", method_pointer_82f5c1c5289056bba44489459e093cf1, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("fill", method_pointer_cb63fad8ea9d561da858b9a4c56ddb37, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("set_constant", method_pointer_a091f7210a2a536aad07c73ae862636f, boost::python::return_internal_reference<>(), "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("set_constant", autowig::method_decorator_a091f7210a2a536aad07c73ae862636f);
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("set_lin_spaced", method_pointer_e0ccaa9305945d5fb30003481e890679, boost::python::return_internal_reference<>(), "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("set_lin_spaced", autowig::method_decorator_e0ccaa9305945d5fb30003481e890679);
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("set_lin_spaced", method_pointer_94f1fbf72e2a5db8ab8268bdf48915fe, boost::python::return_internal_reference<>(), "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("set_lin_spaced", autowig::method_decorator_94f1fbf72e2a5db8ab8268bdf48915fe);
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("set_zero", method_pointer_95e96f03a5e959d39beb028140c4c0b8, boost::python::return_internal_reference<>(), "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("set_zero", autowig::method_decorator_95e96f03a5e959d39beb028140c4c0b8);
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("set_ones", method_pointer_dc6b7518a9085c4a9e13227123eaa5b6, boost::python::return_internal_reference<>(), "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("set_ones", autowig::method_decorator_dc6b7518a9085c4a9e13227123eaa5b6);
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("set_random", method_pointer_f9bb985fdd1d571a8729f7d7c2fc6c8a, boost::python::return_internal_reference<>(), "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("set_random", autowig::method_decorator_f9bb985fdd1d571a8729f7d7c2fc6c8a);
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("is_much_smaller_than", method_pointer_24eec695f9a15b2ebb47b4c0a18e8103, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("is_approx_to_constant", method_pointer_63e3db11474f5902a06e747e13b2bc8a, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("is_constant", method_pointer_3eb44f8a32db57b681f851ae53a323b0, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("is_zero", method_pointer_8266c6c317bf59a0ae27f658c5f80f77, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("is_ones", method_pointer_f651e75136f252d18f2f13e281617456, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("has_na_n", method_pointer_82508c889cb05d60ab4df5a72082d181, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("all_finite", method_pointer_acca86e827ed57e6af032e5e9f645573, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("__imul__", method_pointer_3c238401b60e529887d63c37d4778077, boost::python::return_internal_reference<>(), "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("__imul__", autowig::method_decorator_3c238401b60e529887d63c37d4778077);
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("eval", method_pointer_f3330e2c5555515482d5455cd9970136, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("sum", method_pointer_27af06b353d254babf066f3db6c1a9a5, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("mean", method_pointer_7152a6c08aa1557386b0b6fdbf5d2191, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("trace", method_pointer_ce2b4bcd1788577dbd1012ef67b83814, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("prod", method_pointer_9617c94e509f519e966097c3e729f492, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("min_coeff", method_pointer_7630bf2ad6ef540793eecc12e8263adb, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("max_coeff", method_pointer_8432fb52bc6b5bbba4c677103f53732b, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("value", method_pointer_31969eb27d3f58b0b340708b4a9226bf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("all", method_pointer_7ec84ebf8b8c58df80a2819e82bc3f73, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("any", method_pointer_93ec0fac7841542bab09f568dc5200b1, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("count", method_pointer_6a7fe0d20c3c5e5bb72c7fb7a823d61d, "");
    class_eae56b8f0a035e45bd501eabc0aa59b9.def("reverse_in_place", method_pointer_789e24e68db75e739c16721f451359a0, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 3 > > >();
    }

}