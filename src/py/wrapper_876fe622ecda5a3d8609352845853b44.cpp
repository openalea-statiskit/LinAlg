#include "_ieigen.h"


namespace autowig
{
    void method_decorator_399130d8f8f857bda489dd6aa8f65bfc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_fe5838ec7dce5eb99aa76b79abc3f79a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_6428d91820855722868f8835c5afb841(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, const int  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_8c10a7c09181538791dd7078492fb296(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_29a745cc45be5293823b48a102783a0d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_fa14caf7b75b5d999168e44e65de205f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_e4ebe511bdaf5ee0844be786adf7917f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_6aaa30a5d1c5578181a9b76d12b31d54(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_2a59ea29d33a53e68f5312c958e27fe3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_d453b985bd755f6aaa645ab6d7269c04(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_0290dd0fd5c6568eb59beabb9944367f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_876fe622ecda5a3d8609352845853b44()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_399130d8f8f857bda489dd6aa8f65bfc)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_8cb93f176a1251f780def804bc62f184)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_313e39be653b5164a619b0189d624622)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_e2ea289111315f3eb35147acb1d63306)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::cols;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_45f7b1fc43f75a32865526c67882f56a)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::coeff;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_eb8bf356b66c5cadafc6cdc94fd1597e)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::coeff;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_fe5838ec7dce5eb99aa76b79abc3f79a)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::coeffRef;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_6428d91820855722868f8835c5afb841)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_3ff7fcf2250d5b259656e26b5dae80c2)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_4bb96df2fc535703b2440fae700799c9)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_26d1c755c06c594bb45e59333d24c64d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_9bb5fd04ef0c550d9d93c93b514fc44a)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_cd60d033cf625280854ab7107dcc45e5)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_c36c187ec6ff5c5790aaf6b45581b3ae)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_890b875c89cd548a99d46e0026d1e9ed)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::conservativeResize;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_8c10a7c09181538791dd7078492fb296)(long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_29a745cc45be5293823b48a102783a0d)(long int , long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_fa14caf7b75b5d999168e44e65de205f)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_e4ebe511bdaf5ee0844be786adf7917f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_6aaa30a5d1c5578181a9b76d12b31d54)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_2a59ea29d33a53e68f5312c958e27fe3)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_d453b985bd755f6aaa645ab6d7269c04)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setRandom;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_0290dd0fd5c6568eb59beabb9944367f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setRandom;
    void  (*method_pointer_e0dc0a042cc659ea8c893b6c747cf9e9)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > >, boost::noncopyable > class_876fe622ecda5a3d8609352845853b44("_PlainObjectBase_876fe622ecda5a3d8609352845853b44", "", boost::python::no_init);
    class_876fe622ecda5a3d8609352845853b44.def("base", method_pointer_399130d8f8f857bda489dd6aa8f65bfc, boost::python::return_internal_reference<>(), "");
    class_876fe622ecda5a3d8609352845853b44.def("base", autowig::method_decorator_399130d8f8f857bda489dd6aa8f65bfc);
    class_876fe622ecda5a3d8609352845853b44.def("base", method_pointer_8cb93f176a1251f780def804bc62f184, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_876fe622ecda5a3d8609352845853b44.def("rows", method_pointer_313e39be653b5164a619b0189d624622, "");
    class_876fe622ecda5a3d8609352845853b44.def("cols", method_pointer_e2ea289111315f3eb35147acb1d63306, "");
    class_876fe622ecda5a3d8609352845853b44.def("coeff", method_pointer_45f7b1fc43f75a32865526c67882f56a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_876fe622ecda5a3d8609352845853b44.def("coeff", method_pointer_eb8bf356b66c5cadafc6cdc94fd1597e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_876fe622ecda5a3d8609352845853b44.def("coeff_ref", method_pointer_fe5838ec7dce5eb99aa76b79abc3f79a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_876fe622ecda5a3d8609352845853b44.def("coeff_ref", autowig::method_decorator_fe5838ec7dce5eb99aa76b79abc3f79a);
    class_876fe622ecda5a3d8609352845853b44.def("coeff_ref", method_pointer_6428d91820855722868f8835c5afb841, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_876fe622ecda5a3d8609352845853b44.def("coeff_ref", autowig::method_decorator_6428d91820855722868f8835c5afb841);
    class_876fe622ecda5a3d8609352845853b44.def("coeff_ref", method_pointer_3ff7fcf2250d5b259656e26b5dae80c2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_876fe622ecda5a3d8609352845853b44.def("coeff_ref", method_pointer_4bb96df2fc535703b2440fae700799c9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_876fe622ecda5a3d8609352845853b44.def("resize", method_pointer_26d1c755c06c594bb45e59333d24c64d, "");
    class_876fe622ecda5a3d8609352845853b44.def("resize", method_pointer_9bb5fd04ef0c550d9d93c93b514fc44a, "");
    class_876fe622ecda5a3d8609352845853b44.def("resize", method_pointer_cd60d033cf625280854ab7107dcc45e5, "");
    class_876fe622ecda5a3d8609352845853b44.def("resize", method_pointer_c36c187ec6ff5c5790aaf6b45581b3ae, "");
    class_876fe622ecda5a3d8609352845853b44.def("conservative_resize", method_pointer_890b875c89cd548a99d46e0026d1e9ed, "");
    class_876fe622ecda5a3d8609352845853b44.def("set_constant", method_pointer_8c10a7c09181538791dd7078492fb296, boost::python::return_internal_reference<>(), "");
    class_876fe622ecda5a3d8609352845853b44.def("set_constant", autowig::method_decorator_8c10a7c09181538791dd7078492fb296);
    class_876fe622ecda5a3d8609352845853b44.def("set_constant", method_pointer_29a745cc45be5293823b48a102783a0d, boost::python::return_internal_reference<>(), "");
    class_876fe622ecda5a3d8609352845853b44.def("set_constant", autowig::method_decorator_29a745cc45be5293823b48a102783a0d);
    class_876fe622ecda5a3d8609352845853b44.def("set_zero", method_pointer_fa14caf7b75b5d999168e44e65de205f, boost::python::return_internal_reference<>(), "");
    class_876fe622ecda5a3d8609352845853b44.def("set_zero", autowig::method_decorator_fa14caf7b75b5d999168e44e65de205f);
    class_876fe622ecda5a3d8609352845853b44.def("set_zero", method_pointer_e4ebe511bdaf5ee0844be786adf7917f, boost::python::return_internal_reference<>(), "");
    class_876fe622ecda5a3d8609352845853b44.def("set_zero", autowig::method_decorator_e4ebe511bdaf5ee0844be786adf7917f);
    class_876fe622ecda5a3d8609352845853b44.def("set_ones", method_pointer_6aaa30a5d1c5578181a9b76d12b31d54, boost::python::return_internal_reference<>(), "");
    class_876fe622ecda5a3d8609352845853b44.def("set_ones", autowig::method_decorator_6aaa30a5d1c5578181a9b76d12b31d54);
    class_876fe622ecda5a3d8609352845853b44.def("set_ones", method_pointer_2a59ea29d33a53e68f5312c958e27fe3, boost::python::return_internal_reference<>(), "");
    class_876fe622ecda5a3d8609352845853b44.def("set_ones", autowig::method_decorator_2a59ea29d33a53e68f5312c958e27fe3);
    class_876fe622ecda5a3d8609352845853b44.def("set_random", method_pointer_d453b985bd755f6aaa645ab6d7269c04, boost::python::return_internal_reference<>(), "");
    class_876fe622ecda5a3d8609352845853b44.def("set_random", autowig::method_decorator_d453b985bd755f6aaa645ab6d7269c04);
    class_876fe622ecda5a3d8609352845853b44.def("set_random", method_pointer_0290dd0fd5c6568eb59beabb9944367f, boost::python::return_internal_reference<>(), "");
    class_876fe622ecda5a3d8609352845853b44.def("set_random", autowig::method_decorator_0290dd0fd5c6568eb59beabb9944367f);
    class_876fe622ecda5a3d8609352845853b44.def("check_template_params", method_pointer_e0dc0a042cc659ea8c893b6c747cf9e9, "");
    class_876fe622ecda5a3d8609352845853b44.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > > >();
    }

}