#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2a3b10faca545890b716303536055cf6(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_ea1025a50de254dfbde0d13df67cea18(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_3b65d0fb455c5e1cabd80a926d0b42de(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_c055dd9b3fe0505193a10967e439bd05(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_6e7bc7d0cf1457ab849590bf3970876d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO // TODO     void method_decorator_047d95dd93e059a9858de0c7c2cb0bf3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_d7de5974e7195fda91e3c84dafcc3f97(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
// TODO // TODO     void method_decorator_85eb0b9bae645261af8a4a435d17c61f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_8c267242a2df5618b7e9c3b6ec3f8647(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
// TODO     void method_decorator_2db48f21828050239a9d661d1be24c9c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_a440119afe785dc79473d434c91264a7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_b7e1f685776859c78ef4557827825fc0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_2a3b10faca545890b716303536055cf6)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_44bbd85aa5455cc8b538d81fdcb07e16)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_0d787541af1a53b581eec4cb89df6ae4)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_76d46e5ae3e958deac2b7ab286bb0002)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::cols;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_ec38ee9408e158559865765e11d1dd39)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::coeff;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_397fc1300d8756a7947044629e45649d)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::coeff;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_ea1025a50de254dfbde0d13df67cea18)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::coeffRef;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_3b65d0fb455c5e1cabd80a926d0b42de)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_d70fc450a8945ca88308f97e4dfc2535)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_ed2aa58eee205138a31e5e7beb702bd2)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_e505bd0efdf75150b26b0539187587f3)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_b98112d91ad95daea43da2e2bb0de577)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_06720b7145a55590b444538650fad01c)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::resize;
// TODO     class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_c055dd9b3fe0505193a10967e439bd05)(long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setConstant;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_6e7bc7d0cf1457ab849590bf3970876d)(long int , long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setConstant;
// TODO     class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_047d95dd93e059a9858de0c7c2cb0bf3)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setZero;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_d7de5974e7195fda91e3c84dafcc3f97)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setZero;
// TODO     class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_85eb0b9bae645261af8a4a435d17c61f)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setOnes;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_8c267242a2df5618b7e9c3b6ec3f8647)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setOnes;
// TODO     class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_2db48f21828050239a9d661d1be24c9c)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setRandom;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_a440119afe785dc79473d434c91264a7)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setRandom;
    void  (*method_pointer_fbd2fa570b875c478b3c36dba32fb269)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, boost::noncopyable > class_b7e1f685776859c78ef4557827825fc0("_PlainObjectBase_b7e1f685776859c78ef4557827825fc0", "", boost::python::no_init);
    class_b7e1f685776859c78ef4557827825fc0.def("base", method_pointer_2a3b10faca545890b716303536055cf6, boost::python::return_internal_reference<>(), "");
    class_b7e1f685776859c78ef4557827825fc0.def("base", autowig::method_decorator_2a3b10faca545890b716303536055cf6);
    class_b7e1f685776859c78ef4557827825fc0.def("base", method_pointer_44bbd85aa5455cc8b538d81fdcb07e16, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b7e1f685776859c78ef4557827825fc0.def("rows", method_pointer_0d787541af1a53b581eec4cb89df6ae4, "");
    class_b7e1f685776859c78ef4557827825fc0.def("cols", method_pointer_76d46e5ae3e958deac2b7ab286bb0002, "");
    class_b7e1f685776859c78ef4557827825fc0.def("coeff", method_pointer_ec38ee9408e158559865765e11d1dd39, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b7e1f685776859c78ef4557827825fc0.def("coeff", method_pointer_397fc1300d8756a7947044629e45649d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b7e1f685776859c78ef4557827825fc0.def("coeff_ref", method_pointer_ea1025a50de254dfbde0d13df67cea18, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b7e1f685776859c78ef4557827825fc0.def("coeff_ref", autowig::method_decorator_ea1025a50de254dfbde0d13df67cea18);
    class_b7e1f685776859c78ef4557827825fc0.def("coeff_ref", method_pointer_3b65d0fb455c5e1cabd80a926d0b42de, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b7e1f685776859c78ef4557827825fc0.def("coeff_ref", autowig::method_decorator_3b65d0fb455c5e1cabd80a926d0b42de);
    class_b7e1f685776859c78ef4557827825fc0.def("coeff_ref", method_pointer_d70fc450a8945ca88308f97e4dfc2535, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b7e1f685776859c78ef4557827825fc0.def("coeff_ref", method_pointer_ed2aa58eee205138a31e5e7beb702bd2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b7e1f685776859c78ef4557827825fc0.def("resize", method_pointer_e505bd0efdf75150b26b0539187587f3, "");
    class_b7e1f685776859c78ef4557827825fc0.def("resize", method_pointer_b98112d91ad95daea43da2e2bb0de577, "");
    class_b7e1f685776859c78ef4557827825fc0.def("resize", method_pointer_06720b7145a55590b444538650fad01c, "");
// TODO     class_b7e1f685776859c78ef4557827825fc0.def("set_constant", method_pointer_c055dd9b3fe0505193a10967e439bd05, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_b7e1f685776859c78ef4557827825fc0.def("set_constant", autowig::method_decorator_c055dd9b3fe0505193a10967e439bd05);
    class_b7e1f685776859c78ef4557827825fc0.def("set_constant", method_pointer_6e7bc7d0cf1457ab849590bf3970876d, boost::python::return_internal_reference<>(), "");
    class_b7e1f685776859c78ef4557827825fc0.def("set_constant", autowig::method_decorator_6e7bc7d0cf1457ab849590bf3970876d);
// TODO     class_b7e1f685776859c78ef4557827825fc0.def("set_zero", method_pointer_047d95dd93e059a9858de0c7c2cb0bf3, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_b7e1f685776859c78ef4557827825fc0.def("set_zero", autowig::method_decorator_047d95dd93e059a9858de0c7c2cb0bf3);
    class_b7e1f685776859c78ef4557827825fc0.def("set_zero", method_pointer_d7de5974e7195fda91e3c84dafcc3f97, boost::python::return_internal_reference<>(), "");
    class_b7e1f685776859c78ef4557827825fc0.def("set_zero", autowig::method_decorator_d7de5974e7195fda91e3c84dafcc3f97);
// TODO     class_b7e1f685776859c78ef4557827825fc0.def("set_ones", method_pointer_85eb0b9bae645261af8a4a435d17c61f, boost::python::return_internal_reference<>(), "");
// TODO     class_b7e1f685776859c78ef4557827825fc0.def("set_ones", autowig::method_decorator_85eb0b9bae645261af8a4a435d17c61f);
    class_b7e1f685776859c78ef4557827825fc0.def("set_ones", method_pointer_8c267242a2df5618b7e9c3b6ec3f8647, boost::python::return_internal_reference<>(), "");
    class_b7e1f685776859c78ef4557827825fc0.def("set_ones", autowig::method_decorator_8c267242a2df5618b7e9c3b6ec3f8647);
// TODO     class_b7e1f685776859c78ef4557827825fc0.def("set_random", method_pointer_2db48f21828050239a9d661d1be24c9c, boost::python::return_internal_reference<>(), "");
// TODO     class_b7e1f685776859c78ef4557827825fc0.def("set_random", autowig::method_decorator_2db48f21828050239a9d661d1be24c9c);
    class_b7e1f685776859c78ef4557827825fc0.def("set_random", method_pointer_a440119afe785dc79473d434c91264a7, boost::python::return_internal_reference<>(), "");
    class_b7e1f685776859c78ef4557827825fc0.def("set_random", autowig::method_decorator_a440119afe785dc79473d434c91264a7);
    class_b7e1f685776859c78ef4557827825fc0.def("check_template_params", method_pointer_fbd2fa570b875c478b3c36dba32fb269, "");
    class_b7e1f685776859c78ef4557827825fc0.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > >();
    }

}