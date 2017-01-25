#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b3ba987b02b351729c557f1a817b6186(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_eb05285304ef5ed0821079f016573ef2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_355c499ea06258c68aa278cd885bbd2b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_7c463f5197f557729ab15f629b9d429f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_83e7783c70cd5cca9d0797379b481c37(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_bd98800500e35c0f87b8d7e7f49530ef(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_29d3210004305b76aa085596a1410a77(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_0ffc8e52c71b5956acddb25a0d78e716(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_dcc5fb308f705dd99eba9039fd7a1574(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_48ceae6a07015a3ea44fc0b2a4458879(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_c24ef4e599ea544cbfc7510df12e9487(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_755235cde4f058218d1831eb553a2bd7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_b3ba987b02b351729c557f1a817b6186)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_05b77834df8252d5a27013f27cb425d4)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_e94c6221638a5496bb8390a8fff646b1)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_f87c4fcd017255a9814390a0548eb395)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::cols;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_e6a5b3b21edb55698caa840c191baae1)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::coeff;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_1d07d9016c7a5424824dec4845f74236)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::coeff;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_eb05285304ef5ed0821079f016573ef2)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_355c499ea06258c68aa278cd885bbd2b)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_f77542f4ff2958b68308cc49f3ddb69e)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_e4894a72ff385b9cad401fce36445f96)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::coeffRef;
    struct ::std::complex< double >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_ce815f758ee35d518ca77d6d536002fc)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::data;
    struct ::std::complex< double >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_45c37adef430562eb530ee7644d9be0b)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_f399281bf76e5ac7bd1afdecd82e64c7)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_74f63a4d55b35a6fa652bac3fa49b166)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_84065e5356735656b79f9450153f5405)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_7945bf75599c5884bf1207d4b73ae6eb)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_25ab95fb0a3c5fc5af3e93de5b2f46f1)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_fa65a005b9bf5e15ad8bb08967acfaa4)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_b2adafaac3a45225b45c04aaabb6348b)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_a3cd81ad3eb653219254e608532e5179)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_7c463f5197f557729ab15f629b9d429f)(long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_83e7783c70cd5cca9d0797379b481c37)(long int , long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_bd98800500e35c0f87b8d7e7f49530ef)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_29d3210004305b76aa085596a1410a77)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_0ffc8e52c71b5956acddb25a0d78e716)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_dcc5fb308f705dd99eba9039fd7a1574)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_48ceae6a07015a3ea44fc0b2a4458879)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_c24ef4e599ea544cbfc7510df12e9487)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::setRandom;
    void  (*method_pointer_87874d6d45a35d7da8471ade180c0a1c)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > > > class_755235cde4f058218d1831eb553a2bd7("_PlainObjectBase_755235cde4f058218d1831eb553a2bd7", "", boost::python::no_init);
    class_755235cde4f058218d1831eb553a2bd7.def("base", method_pointer_b3ba987b02b351729c557f1a817b6186, boost::python::return_internal_reference<>(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("base", autowig::method_decorator_b3ba987b02b351729c557f1a817b6186);
    class_755235cde4f058218d1831eb553a2bd7.def("base", method_pointer_05b77834df8252d5a27013f27cb425d4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("rows", method_pointer_e94c6221638a5496bb8390a8fff646b1, "");
    class_755235cde4f058218d1831eb553a2bd7.def("cols", method_pointer_f87c4fcd017255a9814390a0548eb395, "");
    class_755235cde4f058218d1831eb553a2bd7.def("coeff", method_pointer_e6a5b3b21edb55698caa840c191baae1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("coeff", method_pointer_1d07d9016c7a5424824dec4845f74236, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("coeff_ref", method_pointer_eb05285304ef5ed0821079f016573ef2, boost::python::return_internal_reference<>(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("coeff_ref", autowig::method_decorator_eb05285304ef5ed0821079f016573ef2);
    class_755235cde4f058218d1831eb553a2bd7.def("coeff_ref", method_pointer_355c499ea06258c68aa278cd885bbd2b, boost::python::return_internal_reference<>(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("coeff_ref", autowig::method_decorator_355c499ea06258c68aa278cd885bbd2b);
    class_755235cde4f058218d1831eb553a2bd7.def("coeff_ref", method_pointer_f77542f4ff2958b68308cc49f3ddb69e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("coeff_ref", method_pointer_e4894a72ff385b9cad401fce36445f96, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("data", method_pointer_ce815f758ee35d518ca77d6d536002fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("data", method_pointer_45c37adef430562eb530ee7644d9be0b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("resize", method_pointer_f399281bf76e5ac7bd1afdecd82e64c7, "");
    class_755235cde4f058218d1831eb553a2bd7.def("resize", method_pointer_74f63a4d55b35a6fa652bac3fa49b166, "");
    class_755235cde4f058218d1831eb553a2bd7.def("resize", method_pointer_84065e5356735656b79f9450153f5405, "");
    class_755235cde4f058218d1831eb553a2bd7.def("resize", method_pointer_7945bf75599c5884bf1207d4b73ae6eb, "");
    class_755235cde4f058218d1831eb553a2bd7.def("conservative_resize", method_pointer_25ab95fb0a3c5fc5af3e93de5b2f46f1, "");
    class_755235cde4f058218d1831eb553a2bd7.def("conservative_resize", method_pointer_fa65a005b9bf5e15ad8bb08967acfaa4, "");
    class_755235cde4f058218d1831eb553a2bd7.def("conservative_resize", method_pointer_b2adafaac3a45225b45c04aaabb6348b, "");
    class_755235cde4f058218d1831eb553a2bd7.def("conservative_resize", method_pointer_a3cd81ad3eb653219254e608532e5179, "");
    class_755235cde4f058218d1831eb553a2bd7.def("set_constant", method_pointer_7c463f5197f557729ab15f629b9d429f, boost::python::return_internal_reference<>(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("set_constant", autowig::method_decorator_7c463f5197f557729ab15f629b9d429f);
    class_755235cde4f058218d1831eb553a2bd7.def("set_constant", method_pointer_83e7783c70cd5cca9d0797379b481c37, boost::python::return_internal_reference<>(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("set_constant", autowig::method_decorator_83e7783c70cd5cca9d0797379b481c37);
    class_755235cde4f058218d1831eb553a2bd7.def("set_zero", method_pointer_bd98800500e35c0f87b8d7e7f49530ef, boost::python::return_internal_reference<>(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("set_zero", autowig::method_decorator_bd98800500e35c0f87b8d7e7f49530ef);
    class_755235cde4f058218d1831eb553a2bd7.def("set_zero", method_pointer_29d3210004305b76aa085596a1410a77, boost::python::return_internal_reference<>(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("set_zero", autowig::method_decorator_29d3210004305b76aa085596a1410a77);
    class_755235cde4f058218d1831eb553a2bd7.def("set_ones", method_pointer_0ffc8e52c71b5956acddb25a0d78e716, boost::python::return_internal_reference<>(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("set_ones", autowig::method_decorator_0ffc8e52c71b5956acddb25a0d78e716);
    class_755235cde4f058218d1831eb553a2bd7.def("set_ones", method_pointer_dcc5fb308f705dd99eba9039fd7a1574, boost::python::return_internal_reference<>(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("set_ones", autowig::method_decorator_dcc5fb308f705dd99eba9039fd7a1574);
    class_755235cde4f058218d1831eb553a2bd7.def("set_random", method_pointer_48ceae6a07015a3ea44fc0b2a4458879, boost::python::return_internal_reference<>(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("set_random", autowig::method_decorator_48ceae6a07015a3ea44fc0b2a4458879);
    class_755235cde4f058218d1831eb553a2bd7.def("set_random", method_pointer_c24ef4e599ea544cbfc7510df12e9487, boost::python::return_internal_reference<>(), "");
    class_755235cde4f058218d1831eb553a2bd7.def("set_random", autowig::method_decorator_c24ef4e599ea544cbfc7510df12e9487);
    class_755235cde4f058218d1831eb553a2bd7.def("check_template_params", method_pointer_87874d6d45a35d7da8471ade180c0a1c, "");
    class_755235cde4f058218d1831eb553a2bd7.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > > >();
    }

}