#include "_linalg.h"


namespace autowig
{
    void method_decorator_443a13d2c88c59abb16cf816d5723369(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Base & param_out)     { instance.base() = param_out; }
    void method_decorator_9eae79935804547a8154eee4eb508e1b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_4d5e36b8e33f5bf7868786cf7f51e1a7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_d6155694b4bf5f8a92980342de6f39d7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_1, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_639790dc97a25548ac986a60cb71e38a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_2, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO     void method_decorator_e076a56d1a935e65aa97c217d28996fe(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_2736695028435689aa2729b25c07529d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
// TODO     void method_decorator_150760f166b959f49dbfca3e494202b3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_2819cc1073d05d81a12fd9d4aa7394e7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
// TODO     void method_decorator_3b697176764558728e1d915db646cff6(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_33edbe3bdd1052aaa08c665da0869b16(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_69a4a110a0015866946de130cdeee56b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Base & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_443a13d2c88c59abb16cf816d5723369)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::base;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Base const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_26b6528391175def83fba0118ee116a6)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::base;
    ::Eigen::Index  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_558009f81c94559a8cfc44a1ecf6da42)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rows;
    ::Eigen::Index  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_e222fcec41a05925bd00cca8fab79ddf)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::cols;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_8a6b5de49e8e55c5bd81320b2990d2e3)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::coeff;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_b31249327aef5d539849f3d43e5e9ace)(::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::coeff;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_9eae79935804547a8154eee4eb508e1b)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_4d5e36b8e33f5bf7868786cf7f51e1a7)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_97e8e760622b5d7cab0e17ba96202218)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_c3dbebcdb4575e089b4f77912484565c)(::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_35232ef7fddd54aaa5dc0ca7fc0a3483)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resize;
// TODO     void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_1f246c3661045735bec9652852ca220f)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_967d58da5a34552995449f459fb18771)(enum ::Eigen::NoChange_t , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_3bf0ca279c2e55a9b88b4455a53faf66)(::Eigen::Index , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f39c4cdc861653ecb3bb9d86321e94c1)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f5d5fac31b4e597183dd32ed2819d09e)(::Eigen::Index , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_d7e678fed15554988fd3f4e2d79453f2)(enum ::Eigen::NoChange_t , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::conservativeResize;
// TODO     void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2a15b499dc09562b820b76a6a8328e0d)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::conservativeResize;
// TODO     class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_d6155694b4bf5f8a92980342de6f39d7)(::Eigen::Index , ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setConstant;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_639790dc97a25548ac986a60cb71e38a)(::Eigen::Index , ::Eigen::Index , ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setConstant;
// TODO     class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_e076a56d1a935e65aa97c217d28996fe)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2736695028435689aa2729b25c07529d)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setZero;
// TODO     class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_150760f166b959f49dbfca3e494202b3)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2819cc1073d05d81a12fd9d4aa7394e7)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setOnes;
// TODO     class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_3b697176764558728e1d915db646cff6)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setRandom;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_33edbe3bdd1052aaa08c665da0869b16)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setRandom;
    void  (*method_pointer_ec0941d371af527aaad7fbddff413068)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, boost::noncopyable > class_69a4a110a0015866946de130cdeee56b("_PlainObjectBase_69a4a110a0015866946de130cdeee56b", "", boost::python::no_init);
    class_69a4a110a0015866946de130cdeee56b.def("base", method_pointer_443a13d2c88c59abb16cf816d5723369, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("base", autowig::method_decorator_443a13d2c88c59abb16cf816d5723369);
    class_69a4a110a0015866946de130cdeee56b.def("base", method_pointer_26b6528391175def83fba0118ee116a6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("rows", method_pointer_558009f81c94559a8cfc44a1ecf6da42, "");
    class_69a4a110a0015866946de130cdeee56b.def("cols", method_pointer_e222fcec41a05925bd00cca8fab79ddf, "");
    class_69a4a110a0015866946de130cdeee56b.def("coeff", method_pointer_8a6b5de49e8e55c5bd81320b2990d2e3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("coeff", method_pointer_b31249327aef5d539849f3d43e5e9ace, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("coeff_ref", method_pointer_9eae79935804547a8154eee4eb508e1b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("coeff_ref", autowig::method_decorator_9eae79935804547a8154eee4eb508e1b);
    class_69a4a110a0015866946de130cdeee56b.def("coeff_ref", method_pointer_4d5e36b8e33f5bf7868786cf7f51e1a7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("coeff_ref", autowig::method_decorator_4d5e36b8e33f5bf7868786cf7f51e1a7);
    class_69a4a110a0015866946de130cdeee56b.def("coeff_ref", method_pointer_97e8e760622b5d7cab0e17ba96202218, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("coeff_ref", method_pointer_c3dbebcdb4575e089b4f77912484565c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("resize", method_pointer_35232ef7fddd54aaa5dc0ca7fc0a3483, "");
// TODO     class_69a4a110a0015866946de130cdeee56b.def("resize", method_pointer_1f246c3661045735bec9652852ca220f, "");
    class_69a4a110a0015866946de130cdeee56b.def("resize", method_pointer_967d58da5a34552995449f459fb18771, "");
    class_69a4a110a0015866946de130cdeee56b.def("resize", method_pointer_3bf0ca279c2e55a9b88b4455a53faf66, "");
    class_69a4a110a0015866946de130cdeee56b.def("conservative_resize", method_pointer_f39c4cdc861653ecb3bb9d86321e94c1, "");
    class_69a4a110a0015866946de130cdeee56b.def("conservative_resize", method_pointer_f5d5fac31b4e597183dd32ed2819d09e, "");
    class_69a4a110a0015866946de130cdeee56b.def("conservative_resize", method_pointer_d7e678fed15554988fd3f4e2d79453f2, "");
// TODO     class_69a4a110a0015866946de130cdeee56b.def("conservative_resize", method_pointer_2a15b499dc09562b820b76a6a8328e0d, "");
// TODO     class_69a4a110a0015866946de130cdeee56b.def("set_constant", method_pointer_d6155694b4bf5f8a92980342de6f39d7, boost::python::return_internal_reference<>(), "");
// TODO     class_69a4a110a0015866946de130cdeee56b.def("set_constant", autowig::method_decorator_d6155694b4bf5f8a92980342de6f39d7);
    class_69a4a110a0015866946de130cdeee56b.def("set_constant", method_pointer_639790dc97a25548ac986a60cb71e38a, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("set_constant", autowig::method_decorator_639790dc97a25548ac986a60cb71e38a);
// TODO     class_69a4a110a0015866946de130cdeee56b.def("set_zero", method_pointer_e076a56d1a935e65aa97c217d28996fe, boost::python::return_internal_reference<>(), "");
// TODO     class_69a4a110a0015866946de130cdeee56b.def("set_zero", autowig::method_decorator_e076a56d1a935e65aa97c217d28996fe);
    class_69a4a110a0015866946de130cdeee56b.def("set_zero", method_pointer_2736695028435689aa2729b25c07529d, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("set_zero", autowig::method_decorator_2736695028435689aa2729b25c07529d);
// TODO     class_69a4a110a0015866946de130cdeee56b.def("set_ones", method_pointer_150760f166b959f49dbfca3e494202b3, boost::python::return_internal_reference<>(), "");
// TODO     class_69a4a110a0015866946de130cdeee56b.def("set_ones", autowig::method_decorator_150760f166b959f49dbfca3e494202b3);
    class_69a4a110a0015866946de130cdeee56b.def("set_ones", method_pointer_2819cc1073d05d81a12fd9d4aa7394e7, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("set_ones", autowig::method_decorator_2819cc1073d05d81a12fd9d4aa7394e7);
// TODO     class_69a4a110a0015866946de130cdeee56b.def("set_random", method_pointer_3b697176764558728e1d915db646cff6, boost::python::return_internal_reference<>(), "");
// TODO     class_69a4a110a0015866946de130cdeee56b.def("set_random", autowig::method_decorator_3b697176764558728e1d915db646cff6);
    class_69a4a110a0015866946de130cdeee56b.def("set_random", method_pointer_33edbe3bdd1052aaa08c665da0869b16, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("set_random", autowig::method_decorator_33edbe3bdd1052aaa08c665da0869b16);
    class_69a4a110a0015866946de130cdeee56b.def("check_template_params", method_pointer_ec0941d371af527aaad7fbddff413068, "");
    class_69a4a110a0015866946de130cdeee56b.staticmethod("check_template_params");

    if(std::is_class< autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type >::value)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type >();
    }

}