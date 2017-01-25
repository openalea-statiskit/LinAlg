#include "_ieigen.h"


namespace autowig
{
    void method_decorator_aa6348f67ec35d6c9ae4024df7d75491(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_845548f39d4a5b66bcaa0fefa5749e5c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_7aca69be3dcc596a95630b0c8eccf003(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_fa039c0079425cc485fd569936e3f11e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_392591db1e485fcdafc7e8273a11eaa5(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_b1e818f5ffc855da9e02419aeb71e390(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_fe1d6a3b5147596b9b0ce5899264038f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_af567a84da395e53a7d55d68131220f9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_716d3f996c8059528b36d9be59c26a54(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_e94963a80c6552e1ac18990128188af0(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_a5f71c73295d56a2888563612cab650c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_a958c4438aa4512bb481c04495ee28f3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_aa6348f67ec35d6c9ae4024df7d75491)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_259f7434a8135cb5a6019814e47de6be)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_166814dad47b5f05ac0475c086116302)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_d170461b67f15492b82ea73762b4d935)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::cols;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_b4da573cf41a5fe7bd5a6f1aaa48b9df)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::coeff;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_1c574a0e051a51efad43dc1c31df946b)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::coeff;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_845548f39d4a5b66bcaa0fefa5749e5c)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::coeffRef;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_7aca69be3dcc596a95630b0c8eccf003)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_e7447d5bd617541f949f44fd00ad945d)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_2c52a0f6971856a2a5e35abcd49c248f)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_c1bb90737fe9528ba26170f8235cda7e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_24df867d9ba65dfc8621f51f6fcc429c)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_9409bd6f824357f2adaa080a75c80297)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_52e90925dbdb5b5c852773d5b7377ee0)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_c87954277ce355a8a67cc1a467a90c81)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_436f0639ad8e51b7b8a33efb3a3ef8b7)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_f8c23e82ec4a567fb5eea6eb4513d5b4)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_a74ab6f74a605ad4908397ae946b2fb9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::conservativeResize;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_fa039c0079425cc485fd569936e3f11e)(long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_392591db1e485fcdafc7e8273a11eaa5)(long int , long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_b1e818f5ffc855da9e02419aeb71e390)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_fe1d6a3b5147596b9b0ce5899264038f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_af567a84da395e53a7d55d68131220f9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_716d3f996c8059528b36d9be59c26a54)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_e94963a80c6552e1ac18990128188af0)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setRandom;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_a5f71c73295d56a2888563612cab650c)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setRandom;
    void  (*method_pointer_5b03cdcb31ab574ca460b3299808fe25)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > > > class_a958c4438aa4512bb481c04495ee28f3("_PlainObjectBase_a958c4438aa4512bb481c04495ee28f3", "", boost::python::no_init);
    class_a958c4438aa4512bb481c04495ee28f3.def("base", method_pointer_aa6348f67ec35d6c9ae4024df7d75491, boost::python::return_internal_reference<>(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("base", autowig::method_decorator_aa6348f67ec35d6c9ae4024df7d75491);
    class_a958c4438aa4512bb481c04495ee28f3.def("base", method_pointer_259f7434a8135cb5a6019814e47de6be, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("rows", method_pointer_166814dad47b5f05ac0475c086116302, "");
    class_a958c4438aa4512bb481c04495ee28f3.def("cols", method_pointer_d170461b67f15492b82ea73762b4d935, "");
    class_a958c4438aa4512bb481c04495ee28f3.def("coeff", method_pointer_b4da573cf41a5fe7bd5a6f1aaa48b9df, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("coeff", method_pointer_1c574a0e051a51efad43dc1c31df946b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("coeff_ref", method_pointer_845548f39d4a5b66bcaa0fefa5749e5c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("coeff_ref", autowig::method_decorator_845548f39d4a5b66bcaa0fefa5749e5c);
    class_a958c4438aa4512bb481c04495ee28f3.def("coeff_ref", method_pointer_7aca69be3dcc596a95630b0c8eccf003, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("coeff_ref", autowig::method_decorator_7aca69be3dcc596a95630b0c8eccf003);
    class_a958c4438aa4512bb481c04495ee28f3.def("coeff_ref", method_pointer_e7447d5bd617541f949f44fd00ad945d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("coeff_ref", method_pointer_2c52a0f6971856a2a5e35abcd49c248f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("resize", method_pointer_c1bb90737fe9528ba26170f8235cda7e, "");
    class_a958c4438aa4512bb481c04495ee28f3.def("resize", method_pointer_24df867d9ba65dfc8621f51f6fcc429c, "");
    class_a958c4438aa4512bb481c04495ee28f3.def("resize", method_pointer_9409bd6f824357f2adaa080a75c80297, "");
    class_a958c4438aa4512bb481c04495ee28f3.def("resize", method_pointer_52e90925dbdb5b5c852773d5b7377ee0, "");
    class_a958c4438aa4512bb481c04495ee28f3.def("conservative_resize", method_pointer_c87954277ce355a8a67cc1a467a90c81, "");
    class_a958c4438aa4512bb481c04495ee28f3.def("conservative_resize", method_pointer_436f0639ad8e51b7b8a33efb3a3ef8b7, "");
    class_a958c4438aa4512bb481c04495ee28f3.def("conservative_resize", method_pointer_f8c23e82ec4a567fb5eea6eb4513d5b4, "");
    class_a958c4438aa4512bb481c04495ee28f3.def("conservative_resize", method_pointer_a74ab6f74a605ad4908397ae946b2fb9, "");
    class_a958c4438aa4512bb481c04495ee28f3.def("set_constant", method_pointer_fa039c0079425cc485fd569936e3f11e, boost::python::return_internal_reference<>(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("set_constant", autowig::method_decorator_fa039c0079425cc485fd569936e3f11e);
    class_a958c4438aa4512bb481c04495ee28f3.def("set_constant", method_pointer_392591db1e485fcdafc7e8273a11eaa5, boost::python::return_internal_reference<>(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("set_constant", autowig::method_decorator_392591db1e485fcdafc7e8273a11eaa5);
    class_a958c4438aa4512bb481c04495ee28f3.def("set_zero", method_pointer_b1e818f5ffc855da9e02419aeb71e390, boost::python::return_internal_reference<>(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("set_zero", autowig::method_decorator_b1e818f5ffc855da9e02419aeb71e390);
    class_a958c4438aa4512bb481c04495ee28f3.def("set_zero", method_pointer_fe1d6a3b5147596b9b0ce5899264038f, boost::python::return_internal_reference<>(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("set_zero", autowig::method_decorator_fe1d6a3b5147596b9b0ce5899264038f);
    class_a958c4438aa4512bb481c04495ee28f3.def("set_ones", method_pointer_af567a84da395e53a7d55d68131220f9, boost::python::return_internal_reference<>(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("set_ones", autowig::method_decorator_af567a84da395e53a7d55d68131220f9);
    class_a958c4438aa4512bb481c04495ee28f3.def("set_ones", method_pointer_716d3f996c8059528b36d9be59c26a54, boost::python::return_internal_reference<>(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("set_ones", autowig::method_decorator_716d3f996c8059528b36d9be59c26a54);
    class_a958c4438aa4512bb481c04495ee28f3.def("set_random", method_pointer_e94963a80c6552e1ac18990128188af0, boost::python::return_internal_reference<>(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("set_random", autowig::method_decorator_e94963a80c6552e1ac18990128188af0);
    class_a958c4438aa4512bb481c04495ee28f3.def("set_random", method_pointer_a5f71c73295d56a2888563612cab650c, boost::python::return_internal_reference<>(), "");
    class_a958c4438aa4512bb481c04495ee28f3.def("set_random", autowig::method_decorator_a5f71c73295d56a2888563612cab650c);
    class_a958c4438aa4512bb481c04495ee28f3.def("check_template_params", method_pointer_5b03cdcb31ab574ca460b3299808fe25, "");
    class_a958c4438aa4512bb481c04495ee28f3.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > > >();
    }

}