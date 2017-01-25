#include "_ieigen.h"


namespace autowig
{
    void method_decorator_29894ad6c0e256df9b03cff5f3eada14(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_0309e0d22df758e49ee71c8cd82de93e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_a840142acf4c5c20ac97d7418968e004(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, const float  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_4ffe6c495e4750da8302c839a2b01c65(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_41df6e94815851ef8300c51ad16a1000(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_878ac953de4c564a83cc0fcf39e57357(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_7a44ab7bbcde52ea816e3a8f9576e4ce(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_4b64fddfa7e1585c8fc8ad386acd2b40(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_69eb9a81bf7350c4a910c82ae01c51fb(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_9f8c5fa6c717524f9d4929ffe914b853(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_c6a0219a1cee5116bf429c14adaa1868(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_0e159d0268c7593f8e91db2a58b04ca8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_29894ad6c0e256df9b03cff5f3eada14)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_0d2fa901ccf359deb14d5e40dd7ae146)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_1346ddecccd75c20ba29017dd618efd2)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_426ff60a896c5df580f680ca672ac784)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::cols;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_841ae9c65c2152288582360e3c6bad62)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::coeff;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_b4e0410f85335927ad117b4330601957)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::coeff;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_0309e0d22df758e49ee71c8cd82de93e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::coeffRef;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_a840142acf4c5c20ac97d7418968e004)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_5a490838f58c5008aa173d8b57ad35fb)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_bcb0004f335c588ab13735a65ab8be1f)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_0f6d50532c825997ac388a0bbe8e4189)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_ed1f4f2124505145b3dffe80af6e42a5)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_5b37d7a6ce6957d481fb92f2f7c8ad20)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_8cb5abb1a9cc5f779ad1beb802a7f0dd)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_d8a9cd2b88825bfcba31ab24d3e42c6a)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_33f42a28c7755373af93ab6b09b0fe9c)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_8700b39debf9581fbc38ba3230782b46)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_5020b820e1995ebeb7674254078902af)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::conservativeResize;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_4ffe6c495e4750da8302c839a2b01c65)(long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_41df6e94815851ef8300c51ad16a1000)(long int , long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_878ac953de4c564a83cc0fcf39e57357)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_7a44ab7bbcde52ea816e3a8f9576e4ce)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_4b64fddfa7e1585c8fc8ad386acd2b40)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_69eb9a81bf7350c4a910c82ae01c51fb)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_9f8c5fa6c717524f9d4929ffe914b853)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setRandom;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_c6a0219a1cee5116bf429c14adaa1868)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setRandom;
    void  (*method_pointer_cffd35cdcd4d58a88546f33c4a5ab8c3)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > > > class_0e159d0268c7593f8e91db2a58b04ca8("_PlainObjectBase_0e159d0268c7593f8e91db2a58b04ca8", "", boost::python::no_init);
    class_0e159d0268c7593f8e91db2a58b04ca8.def("base", method_pointer_29894ad6c0e256df9b03cff5f3eada14, boost::python::return_internal_reference<>(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("base", autowig::method_decorator_29894ad6c0e256df9b03cff5f3eada14);
    class_0e159d0268c7593f8e91db2a58b04ca8.def("base", method_pointer_0d2fa901ccf359deb14d5e40dd7ae146, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("rows", method_pointer_1346ddecccd75c20ba29017dd618efd2, "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("cols", method_pointer_426ff60a896c5df580f680ca672ac784, "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("coeff", method_pointer_841ae9c65c2152288582360e3c6bad62, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("coeff", method_pointer_b4e0410f85335927ad117b4330601957, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("coeff_ref", method_pointer_0309e0d22df758e49ee71c8cd82de93e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("coeff_ref", autowig::method_decorator_0309e0d22df758e49ee71c8cd82de93e);
    class_0e159d0268c7593f8e91db2a58b04ca8.def("coeff_ref", method_pointer_a840142acf4c5c20ac97d7418968e004, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("coeff_ref", autowig::method_decorator_a840142acf4c5c20ac97d7418968e004);
    class_0e159d0268c7593f8e91db2a58b04ca8.def("coeff_ref", method_pointer_5a490838f58c5008aa173d8b57ad35fb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("coeff_ref", method_pointer_bcb0004f335c588ab13735a65ab8be1f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("resize", method_pointer_0f6d50532c825997ac388a0bbe8e4189, "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("resize", method_pointer_ed1f4f2124505145b3dffe80af6e42a5, "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("resize", method_pointer_5b37d7a6ce6957d481fb92f2f7c8ad20, "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("resize", method_pointer_8cb5abb1a9cc5f779ad1beb802a7f0dd, "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("conservative_resize", method_pointer_d8a9cd2b88825bfcba31ab24d3e42c6a, "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("conservative_resize", method_pointer_33f42a28c7755373af93ab6b09b0fe9c, "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("conservative_resize", method_pointer_8700b39debf9581fbc38ba3230782b46, "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("conservative_resize", method_pointer_5020b820e1995ebeb7674254078902af, "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_constant", method_pointer_4ffe6c495e4750da8302c839a2b01c65, boost::python::return_internal_reference<>(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_constant", autowig::method_decorator_4ffe6c495e4750da8302c839a2b01c65);
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_constant", method_pointer_41df6e94815851ef8300c51ad16a1000, boost::python::return_internal_reference<>(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_constant", autowig::method_decorator_41df6e94815851ef8300c51ad16a1000);
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_zero", method_pointer_878ac953de4c564a83cc0fcf39e57357, boost::python::return_internal_reference<>(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_zero", autowig::method_decorator_878ac953de4c564a83cc0fcf39e57357);
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_zero", method_pointer_7a44ab7bbcde52ea816e3a8f9576e4ce, boost::python::return_internal_reference<>(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_zero", autowig::method_decorator_7a44ab7bbcde52ea816e3a8f9576e4ce);
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_ones", method_pointer_4b64fddfa7e1585c8fc8ad386acd2b40, boost::python::return_internal_reference<>(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_ones", autowig::method_decorator_4b64fddfa7e1585c8fc8ad386acd2b40);
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_ones", method_pointer_69eb9a81bf7350c4a910c82ae01c51fb, boost::python::return_internal_reference<>(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_ones", autowig::method_decorator_69eb9a81bf7350c4a910c82ae01c51fb);
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_random", method_pointer_9f8c5fa6c717524f9d4929ffe914b853, boost::python::return_internal_reference<>(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_random", autowig::method_decorator_9f8c5fa6c717524f9d4929ffe914b853);
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_random", method_pointer_c6a0219a1cee5116bf429c14adaa1868, boost::python::return_internal_reference<>(), "");
    class_0e159d0268c7593f8e91db2a58b04ca8.def("set_random", autowig::method_decorator_c6a0219a1cee5116bf429c14adaa1868);
    class_0e159d0268c7593f8e91db2a58b04ca8.def("check_template_params", method_pointer_cffd35cdcd4d58a88546f33c4a5ab8c3, "");
    class_0e159d0268c7593f8e91db2a58b04ca8.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > > >();
    }

}