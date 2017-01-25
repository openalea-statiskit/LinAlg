#include "_ieigen.h"


namespace autowig
{
    void method_decorator_4caf779b424d500ba072be57dc741d1d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_dc5ba3094b5555e386e03ab2b352747d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_182f61e871e25301bf2316df582707d0(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, const float  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_2727c777b29d5b939138cca54363d180(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_a49be40753945ffe8aae481593ece1b3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_dfb3f86bae76569c97ba3d24231f18d4(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_9504861934d252bc82f7d43a390374de(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_d82c31178b2e59348caba4438fb39aaf(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_526b9f809d30550caaee4d16f2fe61dc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_85cddbd9bf755aa292813d0e1491ead9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_127ddd517ff851c4b3740cc0fa84d575(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_04bbf3d4d4c756218cc1d688b0ba65eb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_4caf779b424d500ba072be57dc741d1d)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_32eb222a216855d3935018c33c36da85)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_26e4b89a3bec56e79bf49f0f713b903f)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_4ae829dff5c8553899618f4975bd1b1e)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::cols;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_f322c92cb60c53f287e9f25dd986a167)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::coeff;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_d3328b948db557f39bcd97e3326195dc)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::coeff;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_dc5ba3094b5555e386e03ab2b352747d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::coeffRef;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_182f61e871e25301bf2316df582707d0)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_c930c152035d5c199f284bb61cbe9b7c)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_22e812fadccc528885d86cdfdc348502)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_e3a5d07f0bd051658ac3c65fe4ba628d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_59d686a8210d51fdbb67e72caa95cef4)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_50ea44b38a08510fb5b8ca697aaaedfb)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_a7581af22f405596b772ce1c37dc35eb)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_1d9bef8b7683558f9e2ea88b5eefe294)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_53f2d97a076f5dd6b6bc9cae0e49a455)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_4bb3409b482c5d57baffa146cb5e532b)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_54cae6e1462d5ecd940b4e6291615d08)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::conservativeResize;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_2727c777b29d5b939138cca54363d180)(long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_a49be40753945ffe8aae481593ece1b3)(long int , long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_dfb3f86bae76569c97ba3d24231f18d4)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_9504861934d252bc82f7d43a390374de)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_d82c31178b2e59348caba4438fb39aaf)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_526b9f809d30550caaee4d16f2fe61dc)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_85cddbd9bf755aa292813d0e1491ead9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setRandom;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_127ddd517ff851c4b3740cc0fa84d575)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setRandom;
    void  (*method_pointer_91e8ac8cd5855464b7886ecabe17bbe9)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > > > class_04bbf3d4d4c756218cc1d688b0ba65eb("_PlainObjectBase_04bbf3d4d4c756218cc1d688b0ba65eb", "", boost::python::no_init);
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("base", method_pointer_4caf779b424d500ba072be57dc741d1d, boost::python::return_internal_reference<>(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("base", autowig::method_decorator_4caf779b424d500ba072be57dc741d1d);
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("base", method_pointer_32eb222a216855d3935018c33c36da85, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("rows", method_pointer_26e4b89a3bec56e79bf49f0f713b903f, "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("cols", method_pointer_4ae829dff5c8553899618f4975bd1b1e, "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("coeff", method_pointer_f322c92cb60c53f287e9f25dd986a167, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("coeff", method_pointer_d3328b948db557f39bcd97e3326195dc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("coeff_ref", method_pointer_dc5ba3094b5555e386e03ab2b352747d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("coeff_ref", autowig::method_decorator_dc5ba3094b5555e386e03ab2b352747d);
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("coeff_ref", method_pointer_182f61e871e25301bf2316df582707d0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("coeff_ref", autowig::method_decorator_182f61e871e25301bf2316df582707d0);
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("coeff_ref", method_pointer_c930c152035d5c199f284bb61cbe9b7c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("coeff_ref", method_pointer_22e812fadccc528885d86cdfdc348502, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("resize", method_pointer_e3a5d07f0bd051658ac3c65fe4ba628d, "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("resize", method_pointer_59d686a8210d51fdbb67e72caa95cef4, "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("resize", method_pointer_50ea44b38a08510fb5b8ca697aaaedfb, "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("resize", method_pointer_a7581af22f405596b772ce1c37dc35eb, "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("conservative_resize", method_pointer_1d9bef8b7683558f9e2ea88b5eefe294, "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("conservative_resize", method_pointer_53f2d97a076f5dd6b6bc9cae0e49a455, "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("conservative_resize", method_pointer_4bb3409b482c5d57baffa146cb5e532b, "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("conservative_resize", method_pointer_54cae6e1462d5ecd940b4e6291615d08, "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_constant", method_pointer_2727c777b29d5b939138cca54363d180, boost::python::return_internal_reference<>(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_constant", autowig::method_decorator_2727c777b29d5b939138cca54363d180);
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_constant", method_pointer_a49be40753945ffe8aae481593ece1b3, boost::python::return_internal_reference<>(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_constant", autowig::method_decorator_a49be40753945ffe8aae481593ece1b3);
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_zero", method_pointer_dfb3f86bae76569c97ba3d24231f18d4, boost::python::return_internal_reference<>(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_zero", autowig::method_decorator_dfb3f86bae76569c97ba3d24231f18d4);
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_zero", method_pointer_9504861934d252bc82f7d43a390374de, boost::python::return_internal_reference<>(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_zero", autowig::method_decorator_9504861934d252bc82f7d43a390374de);
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_ones", method_pointer_d82c31178b2e59348caba4438fb39aaf, boost::python::return_internal_reference<>(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_ones", autowig::method_decorator_d82c31178b2e59348caba4438fb39aaf);
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_ones", method_pointer_526b9f809d30550caaee4d16f2fe61dc, boost::python::return_internal_reference<>(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_ones", autowig::method_decorator_526b9f809d30550caaee4d16f2fe61dc);
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_random", method_pointer_85cddbd9bf755aa292813d0e1491ead9, boost::python::return_internal_reference<>(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_random", autowig::method_decorator_85cddbd9bf755aa292813d0e1491ead9);
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_random", method_pointer_127ddd517ff851c4b3740cc0fa84d575, boost::python::return_internal_reference<>(), "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("set_random", autowig::method_decorator_127ddd517ff851c4b3740cc0fa84d575);
    class_04bbf3d4d4c756218cc1d688b0ba65eb.def("check_template_params", method_pointer_91e8ac8cd5855464b7886ecabe17bbe9, "");
    class_04bbf3d4d4c756218cc1d688b0ba65eb.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > > >();
    }

}