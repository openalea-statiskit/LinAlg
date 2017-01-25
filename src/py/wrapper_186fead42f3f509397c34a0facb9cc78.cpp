#include "_ieigen.h"


namespace autowig
{
    void method_decorator_cd53f80540e55875af2e6cb501c0588d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_b78706708fbe5efbab7eca5f531f50fb(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_9028293f86b057d3bea19d9cb0da1e5b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, const float  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_2b28d8190a6b5613bbde3d43ca9e8187(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_9368ea3f43ba5179ad35eda01d952e8f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_274025f9e02d507a8f98edb32dee246d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_2e36afd15b725e5a812f998072ab412e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_1c80b7454b7b505bb3051a92ea9a43b2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_a29128bbecb35e29aba74edaafc99a36(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_8a542c7cfffb5c568ec154bb7b0cf821(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_6d5a94cba95055778d6fa30e79a848dd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_186fead42f3f509397c34a0facb9cc78()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_cd53f80540e55875af2e6cb501c0588d)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_6230a9e0406f5435b428dc7945ad9fa2)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_9a156f317b635e12b2a7432e9d8ffec3)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_717886492f4e5ee3881aee968f340f9d)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::cols;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_7a02ae2963945969ad772bcc52f8daa1)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::coeff;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_7b60197cae6b5277a6c4fd4b216d32bd)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::coeff;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_b78706708fbe5efbab7eca5f531f50fb)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::coeffRef;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_9028293f86b057d3bea19d9cb0da1e5b)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_447d336646265a4f858e7e8bb5554f2c)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_b228d875027f5c47a4901db3d1fe36c4)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_20fe8c7762595e33974a01d48450808f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_eb9411804dfb59939c527d406db0c3c7)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_9d46982e9476581fb2d4a737caaf56cc)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_63a20b74bc3a5ca2be6f9b09d000e0a3)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_0a5e94d5cb265f739b31457158d6cd76)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_57545d59267558ec9ff1741e62905d5d)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_72e59f14877054499c352e8457eee861)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_4e0d24097c2957f7a3ef7bb0dfb72c1a)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::conservativeResize;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_2b28d8190a6b5613bbde3d43ca9e8187)(long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setConstant;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_9368ea3f43ba5179ad35eda01d952e8f)(long int , long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setConstant;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_274025f9e02d507a8f98edb32dee246d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setZero;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_2e36afd15b725e5a812f998072ab412e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setZero;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_1c80b7454b7b505bb3051a92ea9a43b2)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setOnes;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_a29128bbecb35e29aba74edaafc99a36)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setOnes;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_8a542c7cfffb5c568ec154bb7b0cf821)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setRandom;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_6d5a94cba95055778d6fa30e79a848dd)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::setRandom;
    void  (*method_pointer_70668e3ea516533cbdefa9b2cd7f2a2b)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > class_186fead42f3f509397c34a0facb9cc78("_PlainObjectBase_186fead42f3f509397c34a0facb9cc78", "", boost::python::no_init);
    class_186fead42f3f509397c34a0facb9cc78.def("base", method_pointer_cd53f80540e55875af2e6cb501c0588d, boost::python::return_internal_reference<>(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("base", autowig::method_decorator_cd53f80540e55875af2e6cb501c0588d);
    class_186fead42f3f509397c34a0facb9cc78.def("base", method_pointer_6230a9e0406f5435b428dc7945ad9fa2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("rows", method_pointer_9a156f317b635e12b2a7432e9d8ffec3, "");
    class_186fead42f3f509397c34a0facb9cc78.def("cols", method_pointer_717886492f4e5ee3881aee968f340f9d, "");
    class_186fead42f3f509397c34a0facb9cc78.def("coeff", method_pointer_7a02ae2963945969ad772bcc52f8daa1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("coeff", method_pointer_7b60197cae6b5277a6c4fd4b216d32bd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("coeff_ref", method_pointer_b78706708fbe5efbab7eca5f531f50fb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("coeff_ref", autowig::method_decorator_b78706708fbe5efbab7eca5f531f50fb);
    class_186fead42f3f509397c34a0facb9cc78.def("coeff_ref", method_pointer_9028293f86b057d3bea19d9cb0da1e5b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("coeff_ref", autowig::method_decorator_9028293f86b057d3bea19d9cb0da1e5b);
    class_186fead42f3f509397c34a0facb9cc78.def("coeff_ref", method_pointer_447d336646265a4f858e7e8bb5554f2c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("coeff_ref", method_pointer_b228d875027f5c47a4901db3d1fe36c4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("resize", method_pointer_20fe8c7762595e33974a01d48450808f, "");
    class_186fead42f3f509397c34a0facb9cc78.def("resize", method_pointer_eb9411804dfb59939c527d406db0c3c7, "");
    class_186fead42f3f509397c34a0facb9cc78.def("resize", method_pointer_9d46982e9476581fb2d4a737caaf56cc, "");
    class_186fead42f3f509397c34a0facb9cc78.def("resize", method_pointer_63a20b74bc3a5ca2be6f9b09d000e0a3, "");
    class_186fead42f3f509397c34a0facb9cc78.def("conservative_resize", method_pointer_0a5e94d5cb265f739b31457158d6cd76, "");
    class_186fead42f3f509397c34a0facb9cc78.def("conservative_resize", method_pointer_57545d59267558ec9ff1741e62905d5d, "");
    class_186fead42f3f509397c34a0facb9cc78.def("conservative_resize", method_pointer_72e59f14877054499c352e8457eee861, "");
    class_186fead42f3f509397c34a0facb9cc78.def("conservative_resize", method_pointer_4e0d24097c2957f7a3ef7bb0dfb72c1a, "");
    class_186fead42f3f509397c34a0facb9cc78.def("set_constant", method_pointer_2b28d8190a6b5613bbde3d43ca9e8187, boost::python::return_internal_reference<>(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("set_constant", autowig::method_decorator_2b28d8190a6b5613bbde3d43ca9e8187);
    class_186fead42f3f509397c34a0facb9cc78.def("set_constant", method_pointer_9368ea3f43ba5179ad35eda01d952e8f, boost::python::return_internal_reference<>(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("set_constant", autowig::method_decorator_9368ea3f43ba5179ad35eda01d952e8f);
    class_186fead42f3f509397c34a0facb9cc78.def("set_zero", method_pointer_274025f9e02d507a8f98edb32dee246d, boost::python::return_internal_reference<>(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("set_zero", autowig::method_decorator_274025f9e02d507a8f98edb32dee246d);
    class_186fead42f3f509397c34a0facb9cc78.def("set_zero", method_pointer_2e36afd15b725e5a812f998072ab412e, boost::python::return_internal_reference<>(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("set_zero", autowig::method_decorator_2e36afd15b725e5a812f998072ab412e);
    class_186fead42f3f509397c34a0facb9cc78.def("set_ones", method_pointer_1c80b7454b7b505bb3051a92ea9a43b2, boost::python::return_internal_reference<>(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("set_ones", autowig::method_decorator_1c80b7454b7b505bb3051a92ea9a43b2);
    class_186fead42f3f509397c34a0facb9cc78.def("set_ones", method_pointer_a29128bbecb35e29aba74edaafc99a36, boost::python::return_internal_reference<>(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("set_ones", autowig::method_decorator_a29128bbecb35e29aba74edaafc99a36);
    class_186fead42f3f509397c34a0facb9cc78.def("set_random", method_pointer_8a542c7cfffb5c568ec154bb7b0cf821, boost::python::return_internal_reference<>(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("set_random", autowig::method_decorator_8a542c7cfffb5c568ec154bb7b0cf821);
    class_186fead42f3f509397c34a0facb9cc78.def("set_random", method_pointer_6d5a94cba95055778d6fa30e79a848dd, boost::python::return_internal_reference<>(), "");
    class_186fead42f3f509397c34a0facb9cc78.def("set_random", autowig::method_decorator_6d5a94cba95055778d6fa30e79a848dd);
    class_186fead42f3f509397c34a0facb9cc78.def("check_template_params", method_pointer_70668e3ea516533cbdefa9b2cd7f2a2b, "");
    class_186fead42f3f509397c34a0facb9cc78.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > >();
    }

}