#include "_ieigen.h"


namespace autowig
{
    void method_decorator_388cd4c1db295f48bc41f7ea406c392c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_16dd6cb990ef58b5a0dcfc45f71a1ce8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_6b69a4ba0b6157409b6b16d10ba8c2cd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_9dc79075af565f77a7298dc3346f2797(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_296b83e427c45a45bb111282b05d2e89(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_77ed13a4225f535f89f38bdaaa0f9476(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_7259df47bafe545fb0a2e2b5a7248421(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_9e26685dfdb357d5a79adb343c4b5ac2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_3ab96fc0de3c5b78a93db0a9f4b715fc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_5b730fdac6e2599fbbbeffdfdcd1c701(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_e6b4b3f9f42f5d2ba85333a33a19fa1d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_6d6a977d5e895da2bf229090c3a4ff0a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_388cd4c1db295f48bc41f7ea406c392c)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_fed3cf1ea10f52b89b02dc54f2587606)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_d80f2346c1185272bd4aeb97ec15bd25)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_3a48ff78781f532f89275ca84f860548)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::cols;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_f1252d301f245d4b884ad6d815b9963e)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::coeff;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_cf139b0201a754b7b6eea793451cdaec)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::coeff;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_16dd6cb990ef58b5a0dcfc45f71a1ce8)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::coeffRef;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_6b69a4ba0b6157409b6b16d10ba8c2cd)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_b5f2d66a20e65ef0aa4fd28eda4a7ad9)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_ea4dfb500eb95b2fba75ec4494842f4b)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_fb38b1c19e975a63b1916257fcc647eb)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_7916a7dbe1935ce791312b51163514a9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_52286eafa608594d8a3bb44917e0bce1)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_ca0bb6d73c565a3ab8cd3e9c74ac6e41)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_5d192718c3bd5bc19585154f77a686c4)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::conservativeResize;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_9dc79075af565f77a7298dc3346f2797)(long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_296b83e427c45a45bb111282b05d2e89)(long int , long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_77ed13a4225f535f89f38bdaaa0f9476)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_7259df47bafe545fb0a2e2b5a7248421)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_9e26685dfdb357d5a79adb343c4b5ac2)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_3ab96fc0de3c5b78a93db0a9f4b715fc)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_5b730fdac6e2599fbbbeffdfdcd1c701)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setRandom;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_e6b4b3f9f42f5d2ba85333a33a19fa1d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setRandom;
    void  (*method_pointer_a5a2b878fd875f61a8a7f35e0bf35e68)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > >, boost::noncopyable > class_6d6a977d5e895da2bf229090c3a4ff0a("_PlainObjectBase_6d6a977d5e895da2bf229090c3a4ff0a", "", boost::python::no_init);
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("base", method_pointer_388cd4c1db295f48bc41f7ea406c392c, boost::python::return_internal_reference<>(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("base", autowig::method_decorator_388cd4c1db295f48bc41f7ea406c392c);
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("base", method_pointer_fed3cf1ea10f52b89b02dc54f2587606, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("rows", method_pointer_d80f2346c1185272bd4aeb97ec15bd25, "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("cols", method_pointer_3a48ff78781f532f89275ca84f860548, "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("coeff", method_pointer_f1252d301f245d4b884ad6d815b9963e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("coeff", method_pointer_cf139b0201a754b7b6eea793451cdaec, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("coeff_ref", method_pointer_16dd6cb990ef58b5a0dcfc45f71a1ce8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("coeff_ref", autowig::method_decorator_16dd6cb990ef58b5a0dcfc45f71a1ce8);
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("coeff_ref", method_pointer_6b69a4ba0b6157409b6b16d10ba8c2cd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("coeff_ref", autowig::method_decorator_6b69a4ba0b6157409b6b16d10ba8c2cd);
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("coeff_ref", method_pointer_b5f2d66a20e65ef0aa4fd28eda4a7ad9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("coeff_ref", method_pointer_ea4dfb500eb95b2fba75ec4494842f4b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("resize", method_pointer_fb38b1c19e975a63b1916257fcc647eb, "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("resize", method_pointer_7916a7dbe1935ce791312b51163514a9, "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("resize", method_pointer_52286eafa608594d8a3bb44917e0bce1, "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("resize", method_pointer_ca0bb6d73c565a3ab8cd3e9c74ac6e41, "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("conservative_resize", method_pointer_5d192718c3bd5bc19585154f77a686c4, "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_constant", method_pointer_9dc79075af565f77a7298dc3346f2797, boost::python::return_internal_reference<>(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_constant", autowig::method_decorator_9dc79075af565f77a7298dc3346f2797);
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_constant", method_pointer_296b83e427c45a45bb111282b05d2e89, boost::python::return_internal_reference<>(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_constant", autowig::method_decorator_296b83e427c45a45bb111282b05d2e89);
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_zero", method_pointer_77ed13a4225f535f89f38bdaaa0f9476, boost::python::return_internal_reference<>(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_zero", autowig::method_decorator_77ed13a4225f535f89f38bdaaa0f9476);
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_zero", method_pointer_7259df47bafe545fb0a2e2b5a7248421, boost::python::return_internal_reference<>(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_zero", autowig::method_decorator_7259df47bafe545fb0a2e2b5a7248421);
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_ones", method_pointer_9e26685dfdb357d5a79adb343c4b5ac2, boost::python::return_internal_reference<>(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_ones", autowig::method_decorator_9e26685dfdb357d5a79adb343c4b5ac2);
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_ones", method_pointer_3ab96fc0de3c5b78a93db0a9f4b715fc, boost::python::return_internal_reference<>(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_ones", autowig::method_decorator_3ab96fc0de3c5b78a93db0a9f4b715fc);
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_random", method_pointer_5b730fdac6e2599fbbbeffdfdcd1c701, boost::python::return_internal_reference<>(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_random", autowig::method_decorator_5b730fdac6e2599fbbbeffdfdcd1c701);
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_random", method_pointer_e6b4b3f9f42f5d2ba85333a33a19fa1d, boost::python::return_internal_reference<>(), "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("set_random", autowig::method_decorator_e6b4b3f9f42f5d2ba85333a33a19fa1d);
    class_6d6a977d5e895da2bf229090c3a4ff0a.def("check_template_params", method_pointer_a5a2b878fd875f61a8a7f35e0bf35e68, "");
    class_6d6a977d5e895da2bf229090c3a4ff0a.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > > >();
    }

}