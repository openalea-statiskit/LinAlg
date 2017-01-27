#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a2767d1cc1795c07b262b925d6760610(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
// TODO     void method_decorator_47fb8d6db19258c3831105695d980151(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO     void method_decorator_ff5169686e415f899e8fd30666b81c37(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, struct ::std::complex< float >  const & param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_b9d90523dab55ca7a2ccd1f5cbd6729f(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_6956e6c7d43351fa87010691b92169ee(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_d911835065ce5ed390c193ce786a9d14(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_1ff478d294d052cab644d81fda2ff1a5(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_920e0ee9d1c159938dd76d33ab951f87()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_f0343c87d27d5f359d5f7b12aa7c05a8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_61d642277b835b738361345b46f81671)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_6f6566ebb5fd5c5f9246f9ed6053f478)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_6a604edcea195fc9b6424ee76bfe3f1e)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_0e80a821844851f7b4190a0b48bddeea)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_96a63861273c56f1bd6367824f3d6f48)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_249f0d4cf57955fba5070747280b736d)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_a2767d1cc1795c07b262b925d6760610)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setConstant;
// TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_47fb8d6db19258c3831105695d980151)(long int , struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setLinSpaced;
// TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_ff5169686e415f899e8fd30666b81c37)(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_b9d90523dab55ca7a2ccd1f5cbd6729f)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_6956e6c7d43351fa87010691b92169ee)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_d911835065ce5ed390c193ce786a9d14)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_4782cacff68353cbad78b8839989b592)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_a2a2ae4149035ed188723d39a169281f)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_9ec1f747b68050a29738ad55bf745f7d)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_f913f63d5eac57099bd09169f43e4028)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_67a84c6ed5275bcc9f860f6d549a375d)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_1e254db67b815f108e5c39c97949983a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_83dd9666457b5092891789e7b36dda27)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_1ff478d294d052cab644d81fda2ff1a5)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_eb10fb8a2f355a649a07cfa179f130bf)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::eval;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_909dc89eb1955bd3a397ce47fa8f7fb2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::sum;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_a785d092e4e85c7cb9e86d185010d651)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::mean;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_f078d58e019d535391de4263fbb7e370)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::trace;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_b04c810188765fc098c3cf38337c7f66)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::prod;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_b530609878f75f4eb0e4cb9fe0161c97)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 > > > class_920e0ee9d1c159938dd76d33ab951f87("_DenseBase_920e0ee9d1c159938dd76d33ab951f87", "", boost::python::no_init);
    class_920e0ee9d1c159938dd76d33ab951f87.def("non_zeros", method_pointer_f0343c87d27d5f359d5f7b12aa7c05a8, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("outer_size", method_pointer_61d642277b835b738361345b46f81671, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("inner_size", method_pointer_6f6566ebb5fd5c5f9246f9ed6053f478, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("resize", method_pointer_6a604edcea195fc9b6424ee76bfe3f1e, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("resize", method_pointer_0e80a821844851f7b4190a0b48bddeea, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("transpose_in_place", method_pointer_96a63861273c56f1bd6367824f3d6f48, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("fill", method_pointer_249f0d4cf57955fba5070747280b736d, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("set_constant", method_pointer_a2767d1cc1795c07b262b925d6760610, boost::python::return_internal_reference<>(), "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("set_constant", autowig::method_decorator_a2767d1cc1795c07b262b925d6760610);
// TODO // TODO     class_920e0ee9d1c159938dd76d33ab951f87.def("set_lin_spaced", method_pointer_47fb8d6db19258c3831105695d980151, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_920e0ee9d1c159938dd76d33ab951f87.def("set_lin_spaced", autowig::method_decorator_47fb8d6db19258c3831105695d980151);
// TODO // TODO     class_920e0ee9d1c159938dd76d33ab951f87.def("set_lin_spaced", method_pointer_ff5169686e415f899e8fd30666b81c37, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_920e0ee9d1c159938dd76d33ab951f87.def("set_lin_spaced", autowig::method_decorator_ff5169686e415f899e8fd30666b81c37);
    class_920e0ee9d1c159938dd76d33ab951f87.def("set_zero", method_pointer_b9d90523dab55ca7a2ccd1f5cbd6729f, boost::python::return_internal_reference<>(), "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("set_zero", autowig::method_decorator_b9d90523dab55ca7a2ccd1f5cbd6729f);
    class_920e0ee9d1c159938dd76d33ab951f87.def("set_ones", method_pointer_6956e6c7d43351fa87010691b92169ee, boost::python::return_internal_reference<>(), "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("set_ones", autowig::method_decorator_6956e6c7d43351fa87010691b92169ee);
    class_920e0ee9d1c159938dd76d33ab951f87.def("set_random", method_pointer_d911835065ce5ed390c193ce786a9d14, boost::python::return_internal_reference<>(), "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("set_random", autowig::method_decorator_d911835065ce5ed390c193ce786a9d14);
    class_920e0ee9d1c159938dd76d33ab951f87.def("is_much_smaller_than", method_pointer_4782cacff68353cbad78b8839989b592, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("is_approx_to_constant", method_pointer_a2a2ae4149035ed188723d39a169281f, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("is_constant", method_pointer_9ec1f747b68050a29738ad55bf745f7d, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("is_zero", method_pointer_f913f63d5eac57099bd09169f43e4028, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("is_ones", method_pointer_67a84c6ed5275bcc9f860f6d549a375d, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("has_na_n", method_pointer_1e254db67b815f108e5c39c97949983a, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("all_finite", method_pointer_83dd9666457b5092891789e7b36dda27, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("__imul__", method_pointer_1ff478d294d052cab644d81fda2ff1a5, boost::python::return_internal_reference<>(), "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("__imul__", autowig::method_decorator_1ff478d294d052cab644d81fda2ff1a5);
    class_920e0ee9d1c159938dd76d33ab951f87.def("eval", method_pointer_eb10fb8a2f355a649a07cfa179f130bf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("sum", method_pointer_909dc89eb1955bd3a397ce47fa8f7fb2, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("mean", method_pointer_a785d092e4e85c7cb9e86d185010d651, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("trace", method_pointer_f078d58e019d535391de4263fbb7e370, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("prod", method_pointer_b04c810188765fc098c3cf38337c7f66, "");
    class_920e0ee9d1c159938dd76d33ab951f87.def("reverse_in_place", method_pointer_b530609878f75f4eb0e4cb9fe0161c97, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 3 > > >();
    }

}