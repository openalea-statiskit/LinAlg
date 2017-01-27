#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d3be12953b595d46a3d9ba7295ca2b50(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_1a012dfe25c45ce094df551dc767c242(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_1bebeb545f31542eae29e20dff84f5b6(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_d10e31d0579051e1a7f983ee1ddb777b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_c24685cd8dfa5f13af985dbc5775ae91(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_637aeab686e45e0099f96245a5958af4(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_42a64ce2134052dea0f4bf211ced74f3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_8d76d58f0d31518ba3492c4307cc3304(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_34f817b4a0bc5e49abb4913eccfabdbd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_3ccef2f2a8665ffca95b59824a64dd60(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_ca7441b02b545ade9e9db23ec873125f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_b39111415fba5172be692a672072afba()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_d3be12953b595d46a3d9ba7295ca2b50)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_d4f2fd2fa81a5f7c87a72e9548214587)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_ae3cae7c7be758ac9e1f6cdaaba88947)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_a5a25138e45057ec80ac5416714e72f5)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::cols;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_e4fbd239a0425b95abff1ac52983c96e)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::coeff;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_b3f863084c15544085d44b9e356a0f4b)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::coeff;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_1a012dfe25c45ce094df551dc767c242)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_1bebeb545f31542eae29e20dff84f5b6)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_c96b35a059cd53669a923b9550fc8092)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_be771674769c5e4f838894578a8b8808)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::coeffRef;
    struct ::std::complex< double >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_13bcc9986acc52c0acc3c1d02f4b7178)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::data;
    struct ::std::complex< double >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_607b6049d12b5a1781ea6478521c46b4)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_0fbd70412b5b50a699516103a0e5cd4b)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_c8b067d80ce35a98924879360c1ad7f5)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_1b863f2ff2805641aa4b2e309474fd84)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_7e237b4930f05a608e9faf334d2bc996)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_ef614dac917051c488264cb0a6b2efbc)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_d10e31d0579051e1a7f983ee1ddb777b)(long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_c24685cd8dfa5f13af985dbc5775ae91)(long int , long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_637aeab686e45e0099f96245a5958af4)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_42a64ce2134052dea0f4bf211ced74f3)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_8d76d58f0d31518ba3492c4307cc3304)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_34f817b4a0bc5e49abb4913eccfabdbd)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_3ccef2f2a8665ffca95b59824a64dd60)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 > >::*method_pointer_ca7441b02b545ade9e9db23ec873125f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::setRandom;
    void  (*method_pointer_88ce9a814a735f10b3c0453831ad0504)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > >, boost::noncopyable > class_b39111415fba5172be692a672072afba("_PlainObjectBase_b39111415fba5172be692a672072afba", "", boost::python::no_init);
    class_b39111415fba5172be692a672072afba.def("base", method_pointer_d3be12953b595d46a3d9ba7295ca2b50, boost::python::return_internal_reference<>(), "");
    class_b39111415fba5172be692a672072afba.def("base", autowig::method_decorator_d3be12953b595d46a3d9ba7295ca2b50);
    class_b39111415fba5172be692a672072afba.def("base", method_pointer_d4f2fd2fa81a5f7c87a72e9548214587, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b39111415fba5172be692a672072afba.def("rows", method_pointer_ae3cae7c7be758ac9e1f6cdaaba88947, "");
    class_b39111415fba5172be692a672072afba.def("cols", method_pointer_a5a25138e45057ec80ac5416714e72f5, "");
    class_b39111415fba5172be692a672072afba.def("coeff", method_pointer_e4fbd239a0425b95abff1ac52983c96e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b39111415fba5172be692a672072afba.def("coeff", method_pointer_b3f863084c15544085d44b9e356a0f4b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b39111415fba5172be692a672072afba.def("coeff_ref", method_pointer_1a012dfe25c45ce094df551dc767c242, boost::python::return_internal_reference<>(), "");
    class_b39111415fba5172be692a672072afba.def("coeff_ref", autowig::method_decorator_1a012dfe25c45ce094df551dc767c242);
    class_b39111415fba5172be692a672072afba.def("coeff_ref", method_pointer_1bebeb545f31542eae29e20dff84f5b6, boost::python::return_internal_reference<>(), "");
    class_b39111415fba5172be692a672072afba.def("coeff_ref", autowig::method_decorator_1bebeb545f31542eae29e20dff84f5b6);
    class_b39111415fba5172be692a672072afba.def("coeff_ref", method_pointer_c96b35a059cd53669a923b9550fc8092, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b39111415fba5172be692a672072afba.def("coeff_ref", method_pointer_be771674769c5e4f838894578a8b8808, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b39111415fba5172be692a672072afba.def("data", method_pointer_13bcc9986acc52c0acc3c1d02f4b7178, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b39111415fba5172be692a672072afba.def("data", method_pointer_607b6049d12b5a1781ea6478521c46b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b39111415fba5172be692a672072afba.def("resize", method_pointer_0fbd70412b5b50a699516103a0e5cd4b, "");
    class_b39111415fba5172be692a672072afba.def("resize", method_pointer_c8b067d80ce35a98924879360c1ad7f5, "");
    class_b39111415fba5172be692a672072afba.def("resize", method_pointer_1b863f2ff2805641aa4b2e309474fd84, "");
    class_b39111415fba5172be692a672072afba.def("resize", method_pointer_7e237b4930f05a608e9faf334d2bc996, "");
    class_b39111415fba5172be692a672072afba.def("conservative_resize", method_pointer_ef614dac917051c488264cb0a6b2efbc, "");
    class_b39111415fba5172be692a672072afba.def("set_constant", method_pointer_d10e31d0579051e1a7f983ee1ddb777b, boost::python::return_internal_reference<>(), "");
    class_b39111415fba5172be692a672072afba.def("set_constant", autowig::method_decorator_d10e31d0579051e1a7f983ee1ddb777b);
    class_b39111415fba5172be692a672072afba.def("set_constant", method_pointer_c24685cd8dfa5f13af985dbc5775ae91, boost::python::return_internal_reference<>(), "");
    class_b39111415fba5172be692a672072afba.def("set_constant", autowig::method_decorator_c24685cd8dfa5f13af985dbc5775ae91);
    class_b39111415fba5172be692a672072afba.def("set_zero", method_pointer_637aeab686e45e0099f96245a5958af4, boost::python::return_internal_reference<>(), "");
    class_b39111415fba5172be692a672072afba.def("set_zero", autowig::method_decorator_637aeab686e45e0099f96245a5958af4);
    class_b39111415fba5172be692a672072afba.def("set_zero", method_pointer_42a64ce2134052dea0f4bf211ced74f3, boost::python::return_internal_reference<>(), "");
    class_b39111415fba5172be692a672072afba.def("set_zero", autowig::method_decorator_42a64ce2134052dea0f4bf211ced74f3);
    class_b39111415fba5172be692a672072afba.def("set_ones", method_pointer_8d76d58f0d31518ba3492c4307cc3304, boost::python::return_internal_reference<>(), "");
    class_b39111415fba5172be692a672072afba.def("set_ones", autowig::method_decorator_8d76d58f0d31518ba3492c4307cc3304);
    class_b39111415fba5172be692a672072afba.def("set_ones", method_pointer_34f817b4a0bc5e49abb4913eccfabdbd, boost::python::return_internal_reference<>(), "");
    class_b39111415fba5172be692a672072afba.def("set_ones", autowig::method_decorator_34f817b4a0bc5e49abb4913eccfabdbd);
    class_b39111415fba5172be692a672072afba.def("set_random", method_pointer_3ccef2f2a8665ffca95b59824a64dd60, boost::python::return_internal_reference<>(), "");
    class_b39111415fba5172be692a672072afba.def("set_random", autowig::method_decorator_3ccef2f2a8665ffca95b59824a64dd60);
    class_b39111415fba5172be692a672072afba.def("set_random", method_pointer_ca7441b02b545ade9e9db23ec873125f, boost::python::return_internal_reference<>(), "");
    class_b39111415fba5172be692a672072afba.def("set_random", autowig::method_decorator_ca7441b02b545ade9e9db23ec873125f);
    class_b39111415fba5172be692a672072afba.def("check_template_params", method_pointer_88ce9a814a735f10b3c0453831ad0504, "");
    class_b39111415fba5172be692a672072afba.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 > > > >();
    }

}