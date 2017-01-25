#include "_ieigen.h"


namespace autowig
{
    void method_decorator_fba35e68e3025274b6e94889c11c7e25(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_439a6fecabae5f2a9e35e01e65b78b16(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_e36819f55aeb546f943e6fd19d9efb95(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_8d83ff63a4675b44ae8487fa65936c49(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_22cec47da61353e5a49d8c7713c6d55a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_87f2666ae3d959789de041661ce506c0(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_184f8c117a9d539dbfef7770bfee72bd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_8d1e43fae6ab5cc8a103b5231e8b8fe9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_e90b7d22d1835d138ba96029f128a3f4(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_e9e4620838e1581daea9cac632367756(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_cfa953bcc49356ac85c7aa1c779d5cdd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_3ebdef72b1055ecaa4cf79d27c3fab6e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_fba35e68e3025274b6e94889c11c7e25)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_da65f9359112501a8d3f892f665cbc14)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_a4fbd39c6f255848a10f3286f769c5ab)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_d0a895cb0c0d55bc92ca01ac3c98f2d5)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::cols;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_f358bcf9a7a152ad8c82c0be02e64ab3)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::coeff;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_866be87d21ef59beba91c91de9401e4c)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::coeff;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_439a6fecabae5f2a9e35e01e65b78b16)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_e36819f55aeb546f943e6fd19d9efb95)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_9a07ef8dc0775d3ebcdec1ba542adec2)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_fc25aaccea2f5673909ee3e4d3755e93)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::coeffRef;
    struct ::std::complex< float >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_765bff9879e853659bf70726daddb43e)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::data;
    struct ::std::complex< float >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_779fff0e126254288139a4807424df41)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_3242c8501e135ab4897c0be6c84f9f2c)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_3b3cabf9cae85f0bb3633f55c027e244)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_c817fe393c175aafb7b905b02d5d3cc2)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_40c5936fadb5549ebb5d1098889cb16d)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_035e57c3757f52f9b61c632e672b0e63)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_e5b1a7c8330359d8b74c6ba71c6147fd)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_ea73bab9bf645205969587a38317b99e)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_1391275fdf4a514ea91c0686404bf0c8)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_8d83ff63a4675b44ae8487fa65936c49)(long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_22cec47da61353e5a49d8c7713c6d55a)(long int , long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_87f2666ae3d959789de041661ce506c0)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_184f8c117a9d539dbfef7770bfee72bd)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_8d1e43fae6ab5cc8a103b5231e8b8fe9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_e90b7d22d1835d138ba96029f128a3f4)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_e9e4620838e1581daea9cac632367756)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_cfa953bcc49356ac85c7aa1c779d5cdd)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setRandom;
    void  (*method_pointer_5c206ccbc1bf57ae9ea1088ac453f395)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > class_3ebdef72b1055ecaa4cf79d27c3fab6e("_PlainObjectBase_3ebdef72b1055ecaa4cf79d27c3fab6e", "", boost::python::no_init);
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("base", method_pointer_fba35e68e3025274b6e94889c11c7e25, boost::python::return_internal_reference<>(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("base", autowig::method_decorator_fba35e68e3025274b6e94889c11c7e25);
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("base", method_pointer_da65f9359112501a8d3f892f665cbc14, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("rows", method_pointer_a4fbd39c6f255848a10f3286f769c5ab, "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("cols", method_pointer_d0a895cb0c0d55bc92ca01ac3c98f2d5, "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("coeff", method_pointer_f358bcf9a7a152ad8c82c0be02e64ab3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("coeff", method_pointer_866be87d21ef59beba91c91de9401e4c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("coeff_ref", method_pointer_439a6fecabae5f2a9e35e01e65b78b16, boost::python::return_internal_reference<>(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("coeff_ref", autowig::method_decorator_439a6fecabae5f2a9e35e01e65b78b16);
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("coeff_ref", method_pointer_e36819f55aeb546f943e6fd19d9efb95, boost::python::return_internal_reference<>(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("coeff_ref", autowig::method_decorator_e36819f55aeb546f943e6fd19d9efb95);
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("coeff_ref", method_pointer_9a07ef8dc0775d3ebcdec1ba542adec2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("coeff_ref", method_pointer_fc25aaccea2f5673909ee3e4d3755e93, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("data", method_pointer_765bff9879e853659bf70726daddb43e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("data", method_pointer_779fff0e126254288139a4807424df41, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("resize", method_pointer_3242c8501e135ab4897c0be6c84f9f2c, "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("resize", method_pointer_3b3cabf9cae85f0bb3633f55c027e244, "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("resize", method_pointer_c817fe393c175aafb7b905b02d5d3cc2, "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("resize", method_pointer_40c5936fadb5549ebb5d1098889cb16d, "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("conservative_resize", method_pointer_035e57c3757f52f9b61c632e672b0e63, "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("conservative_resize", method_pointer_e5b1a7c8330359d8b74c6ba71c6147fd, "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("conservative_resize", method_pointer_ea73bab9bf645205969587a38317b99e, "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("conservative_resize", method_pointer_1391275fdf4a514ea91c0686404bf0c8, "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_constant", method_pointer_8d83ff63a4675b44ae8487fa65936c49, boost::python::return_internal_reference<>(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_constant", autowig::method_decorator_8d83ff63a4675b44ae8487fa65936c49);
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_constant", method_pointer_22cec47da61353e5a49d8c7713c6d55a, boost::python::return_internal_reference<>(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_constant", autowig::method_decorator_22cec47da61353e5a49d8c7713c6d55a);
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_zero", method_pointer_87f2666ae3d959789de041661ce506c0, boost::python::return_internal_reference<>(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_zero", autowig::method_decorator_87f2666ae3d959789de041661ce506c0);
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_zero", method_pointer_184f8c117a9d539dbfef7770bfee72bd, boost::python::return_internal_reference<>(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_zero", autowig::method_decorator_184f8c117a9d539dbfef7770bfee72bd);
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_ones", method_pointer_8d1e43fae6ab5cc8a103b5231e8b8fe9, boost::python::return_internal_reference<>(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_ones", autowig::method_decorator_8d1e43fae6ab5cc8a103b5231e8b8fe9);
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_ones", method_pointer_e90b7d22d1835d138ba96029f128a3f4, boost::python::return_internal_reference<>(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_ones", autowig::method_decorator_e90b7d22d1835d138ba96029f128a3f4);
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_random", method_pointer_e9e4620838e1581daea9cac632367756, boost::python::return_internal_reference<>(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_random", autowig::method_decorator_e9e4620838e1581daea9cac632367756);
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_random", method_pointer_cfa953bcc49356ac85c7aa1c779d5cdd, boost::python::return_internal_reference<>(), "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("set_random", autowig::method_decorator_cfa953bcc49356ac85c7aa1c779d5cdd);
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.def("check_template_params", method_pointer_5c206ccbc1bf57ae9ea1088ac453f395, "");
    class_3ebdef72b1055ecaa4cf79d27c3fab6e.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > >();
    }

}