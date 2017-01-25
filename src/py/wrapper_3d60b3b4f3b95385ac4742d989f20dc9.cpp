#include "_ieigen.h"


namespace autowig
{
    void method_decorator_304cff20d069579e84f6025f9c02b95a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_644d90766c9b5178be7e26389219985a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_07e2427ae14d5a57a443b5b53c293328(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_ea82d3266a6f550ab289289b1adc9d12(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_9e0b12ea229957d0910899eade7fd2dc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_ed83ca36f91858afb065110436dee0d3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_b20a6ccfa2e45b75af7d2c6a0d3f0283(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_4a4e169b88a35b159769d972e9cbed04(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_bdf66ad0d2d65c24a3318f73e332fe17(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_439d4e55484c5801a02c9c6f69186297(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_f456a747c35c579db19eda812c3b5cf4(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_3d60b3b4f3b95385ac4742d989f20dc9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_304cff20d069579e84f6025f9c02b95a)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_f33edd75436b571e8a13ce824d110853)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_f468ac0ff32351a1b994f88df0c5795c)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_265ff84c3cb95873ac7ece55e1a77240)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::cols;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_ec649077757f5aabae5c17e713c2968a)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::coeff;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_e2a3bd488bc751199debd01f269a4b98)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::coeff;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_644d90766c9b5178be7e26389219985a)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_07e2427ae14d5a57a443b5b53c293328)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_0e530d2d2855556ca5e6097a0afb5044)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_ce2c7a448edc5814818bf0718daa4b37)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::coeffRef;
    struct ::std::complex< float >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_62604d57c6a85ab8bec7f1b34d43b06e)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::data;
    struct ::std::complex< float >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_4ec78b30e9bd5cd9bdfa0b4f1a56bd03)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_bb6ba3f4bf1656c5b3af9b03c873d12b)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_e31fa295956959a1b07517d8a29fccdf)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_7e73b1aa98225106b5b2a4d878e2a79f)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_66fcb43685325dc896da08f8663bd4ef)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_6328dec6e6485c709624f7ec670b5620)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_95d8054cdcd355a4938d7304e4df1e71)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_fdf4aea559db5761ae1a230cfbd55a3d)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_8678a328c59c517586c6a95684571611)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_ea82d3266a6f550ab289289b1adc9d12)(long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_9e0b12ea229957d0910899eade7fd2dc)(long int , long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_ed83ca36f91858afb065110436dee0d3)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_b20a6ccfa2e45b75af7d2c6a0d3f0283)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_4a4e169b88a35b159769d972e9cbed04)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_bdf66ad0d2d65c24a3318f73e332fe17)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_439d4e55484c5801a02c9c6f69186297)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_f456a747c35c579db19eda812c3b5cf4)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setRandom;
    void  (*method_pointer_9d381ff6c21b57b2a5aeeb4996f59f2a)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > class_3d60b3b4f3b95385ac4742d989f20dc9("_PlainObjectBase_3d60b3b4f3b95385ac4742d989f20dc9", "", boost::python::no_init);
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("base", method_pointer_304cff20d069579e84f6025f9c02b95a, boost::python::return_internal_reference<>(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("base", autowig::method_decorator_304cff20d069579e84f6025f9c02b95a);
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("base", method_pointer_f33edd75436b571e8a13ce824d110853, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("rows", method_pointer_f468ac0ff32351a1b994f88df0c5795c, "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("cols", method_pointer_265ff84c3cb95873ac7ece55e1a77240, "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("coeff", method_pointer_ec649077757f5aabae5c17e713c2968a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("coeff", method_pointer_e2a3bd488bc751199debd01f269a4b98, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("coeff_ref", method_pointer_644d90766c9b5178be7e26389219985a, boost::python::return_internal_reference<>(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("coeff_ref", autowig::method_decorator_644d90766c9b5178be7e26389219985a);
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("coeff_ref", method_pointer_07e2427ae14d5a57a443b5b53c293328, boost::python::return_internal_reference<>(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("coeff_ref", autowig::method_decorator_07e2427ae14d5a57a443b5b53c293328);
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("coeff_ref", method_pointer_0e530d2d2855556ca5e6097a0afb5044, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("coeff_ref", method_pointer_ce2c7a448edc5814818bf0718daa4b37, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("data", method_pointer_62604d57c6a85ab8bec7f1b34d43b06e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("data", method_pointer_4ec78b30e9bd5cd9bdfa0b4f1a56bd03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("resize", method_pointer_bb6ba3f4bf1656c5b3af9b03c873d12b, "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("resize", method_pointer_e31fa295956959a1b07517d8a29fccdf, "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("resize", method_pointer_7e73b1aa98225106b5b2a4d878e2a79f, "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("resize", method_pointer_66fcb43685325dc896da08f8663bd4ef, "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("conservative_resize", method_pointer_6328dec6e6485c709624f7ec670b5620, "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("conservative_resize", method_pointer_95d8054cdcd355a4938d7304e4df1e71, "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("conservative_resize", method_pointer_fdf4aea559db5761ae1a230cfbd55a3d, "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("conservative_resize", method_pointer_8678a328c59c517586c6a95684571611, "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_constant", method_pointer_ea82d3266a6f550ab289289b1adc9d12, boost::python::return_internal_reference<>(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_constant", autowig::method_decorator_ea82d3266a6f550ab289289b1adc9d12);
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_constant", method_pointer_9e0b12ea229957d0910899eade7fd2dc, boost::python::return_internal_reference<>(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_constant", autowig::method_decorator_9e0b12ea229957d0910899eade7fd2dc);
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_zero", method_pointer_ed83ca36f91858afb065110436dee0d3, boost::python::return_internal_reference<>(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_zero", autowig::method_decorator_ed83ca36f91858afb065110436dee0d3);
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_zero", method_pointer_b20a6ccfa2e45b75af7d2c6a0d3f0283, boost::python::return_internal_reference<>(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_zero", autowig::method_decorator_b20a6ccfa2e45b75af7d2c6a0d3f0283);
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_ones", method_pointer_4a4e169b88a35b159769d972e9cbed04, boost::python::return_internal_reference<>(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_ones", autowig::method_decorator_4a4e169b88a35b159769d972e9cbed04);
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_ones", method_pointer_bdf66ad0d2d65c24a3318f73e332fe17, boost::python::return_internal_reference<>(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_ones", autowig::method_decorator_bdf66ad0d2d65c24a3318f73e332fe17);
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_random", method_pointer_439d4e55484c5801a02c9c6f69186297, boost::python::return_internal_reference<>(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_random", autowig::method_decorator_439d4e55484c5801a02c9c6f69186297);
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_random", method_pointer_f456a747c35c579db19eda812c3b5cf4, boost::python::return_internal_reference<>(), "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("set_random", autowig::method_decorator_f456a747c35c579db19eda812c3b5cf4);
    class_3d60b3b4f3b95385ac4742d989f20dc9.def("check_template_params", method_pointer_9d381ff6c21b57b2a5aeeb4996f59f2a, "");
    class_3d60b3b4f3b95385ac4742d989f20dc9.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > >();
    }

}