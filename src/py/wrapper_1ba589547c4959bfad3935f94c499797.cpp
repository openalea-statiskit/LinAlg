#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b39703072973572987330f5af8339111(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_1b440efeaab255c5953bb0f92e1b1fcb(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_892631a95d655160a1e16fcb6ac03674(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_18461348ee495a85abcd03b498f769c9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_b751bf71d18a5cef96f23c214b3f89d8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO // TODO     void method_decorator_f6f92878d2935832989d2f5a9dc2ceeb(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_7ea6fbe5a0b55c37a74b71ee03353ab1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
// TODO // TODO     void method_decorator_d1b7735dfc0e5c1680ab51d16abf9ad4(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_61d75fd96853548eb1f6a1a7f0b1c4b4(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
// TODO     void method_decorator_6d294b244ade5811bb176a415c559cd9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_8b554d1f9a475ade9826c29d8602d077(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_1ba589547c4959bfad3935f94c499797()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_b39703072973572987330f5af8339111)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_a4ca3764dff55b918015b0b7f798ebf6)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_aaf8727e52ca59bd89a7fedf4448f08b)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_d9c5c0af402758899f1229e7fab7a5ce)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::cols;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_c747379187a05a7ca9f1c7b7e11d11c0)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::coeff;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_0c3286fbc1a2580784d5723fdf355282)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::coeff;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_1b440efeaab255c5953bb0f92e1b1fcb)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::coeffRef;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_892631a95d655160a1e16fcb6ac03674)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_f97efe413e095cff8953dc6e2813a070)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_ac78712419d45398bac49ef1703998bf)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_b1e1d593715a5f1abe7d69e83e45f918)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_87554b5e6bef562682db3fe99b2edc06)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_ab67d62a54425b10934adf1efb1b646e)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::resize;
// TODO     class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_18461348ee495a85abcd03b498f769c9)(long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setConstant;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_b751bf71d18a5cef96f23c214b3f89d8)(long int , long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setConstant;
// TODO     class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_f6f92878d2935832989d2f5a9dc2ceeb)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setZero;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_7ea6fbe5a0b55c37a74b71ee03353ab1)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setZero;
// TODO     class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_d1b7735dfc0e5c1680ab51d16abf9ad4)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setOnes;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_61d75fd96853548eb1f6a1a7f0b1c4b4)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setOnes;
// TODO     class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_6d294b244ade5811bb176a415c559cd9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setRandom;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_8b554d1f9a475ade9826c29d8602d077)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setRandom;
    void  (*method_pointer_b3a4243e901352fba226c85ff30bdf05)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >, boost::noncopyable > class_1ba589547c4959bfad3935f94c499797("_PlainObjectBase_1ba589547c4959bfad3935f94c499797", "", boost::python::no_init);
    class_1ba589547c4959bfad3935f94c499797.def("base", method_pointer_b39703072973572987330f5af8339111, boost::python::return_internal_reference<>(), "");
    class_1ba589547c4959bfad3935f94c499797.def("base", autowig::method_decorator_b39703072973572987330f5af8339111);
    class_1ba589547c4959bfad3935f94c499797.def("base", method_pointer_a4ca3764dff55b918015b0b7f798ebf6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ba589547c4959bfad3935f94c499797.def("rows", method_pointer_aaf8727e52ca59bd89a7fedf4448f08b, "");
    class_1ba589547c4959bfad3935f94c499797.def("cols", method_pointer_d9c5c0af402758899f1229e7fab7a5ce, "");
    class_1ba589547c4959bfad3935f94c499797.def("coeff", method_pointer_c747379187a05a7ca9f1c7b7e11d11c0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ba589547c4959bfad3935f94c499797.def("coeff", method_pointer_0c3286fbc1a2580784d5723fdf355282, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ba589547c4959bfad3935f94c499797.def("coeff_ref", method_pointer_1b440efeaab255c5953bb0f92e1b1fcb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ba589547c4959bfad3935f94c499797.def("coeff_ref", autowig::method_decorator_1b440efeaab255c5953bb0f92e1b1fcb);
    class_1ba589547c4959bfad3935f94c499797.def("coeff_ref", method_pointer_892631a95d655160a1e16fcb6ac03674, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ba589547c4959bfad3935f94c499797.def("coeff_ref", autowig::method_decorator_892631a95d655160a1e16fcb6ac03674);
    class_1ba589547c4959bfad3935f94c499797.def("coeff_ref", method_pointer_f97efe413e095cff8953dc6e2813a070, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ba589547c4959bfad3935f94c499797.def("coeff_ref", method_pointer_ac78712419d45398bac49ef1703998bf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ba589547c4959bfad3935f94c499797.def("resize", method_pointer_b1e1d593715a5f1abe7d69e83e45f918, "");
    class_1ba589547c4959bfad3935f94c499797.def("resize", method_pointer_87554b5e6bef562682db3fe99b2edc06, "");
    class_1ba589547c4959bfad3935f94c499797.def("resize", method_pointer_ab67d62a54425b10934adf1efb1b646e, "");
// TODO     class_1ba589547c4959bfad3935f94c499797.def("set_constant", method_pointer_18461348ee495a85abcd03b498f769c9, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_1ba589547c4959bfad3935f94c499797.def("set_constant", autowig::method_decorator_18461348ee495a85abcd03b498f769c9);
    class_1ba589547c4959bfad3935f94c499797.def("set_constant", method_pointer_b751bf71d18a5cef96f23c214b3f89d8, boost::python::return_internal_reference<>(), "");
    class_1ba589547c4959bfad3935f94c499797.def("set_constant", autowig::method_decorator_b751bf71d18a5cef96f23c214b3f89d8);
// TODO     class_1ba589547c4959bfad3935f94c499797.def("set_zero", method_pointer_f6f92878d2935832989d2f5a9dc2ceeb, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_1ba589547c4959bfad3935f94c499797.def("set_zero", autowig::method_decorator_f6f92878d2935832989d2f5a9dc2ceeb);
    class_1ba589547c4959bfad3935f94c499797.def("set_zero", method_pointer_7ea6fbe5a0b55c37a74b71ee03353ab1, boost::python::return_internal_reference<>(), "");
    class_1ba589547c4959bfad3935f94c499797.def("set_zero", autowig::method_decorator_7ea6fbe5a0b55c37a74b71ee03353ab1);
// TODO     class_1ba589547c4959bfad3935f94c499797.def("set_ones", method_pointer_d1b7735dfc0e5c1680ab51d16abf9ad4, boost::python::return_internal_reference<>(), "");
// TODO     class_1ba589547c4959bfad3935f94c499797.def("set_ones", autowig::method_decorator_d1b7735dfc0e5c1680ab51d16abf9ad4);
    class_1ba589547c4959bfad3935f94c499797.def("set_ones", method_pointer_61d75fd96853548eb1f6a1a7f0b1c4b4, boost::python::return_internal_reference<>(), "");
    class_1ba589547c4959bfad3935f94c499797.def("set_ones", autowig::method_decorator_61d75fd96853548eb1f6a1a7f0b1c4b4);
// TODO     class_1ba589547c4959bfad3935f94c499797.def("set_random", method_pointer_6d294b244ade5811bb176a415c559cd9, boost::python::return_internal_reference<>(), "");
// TODO     class_1ba589547c4959bfad3935f94c499797.def("set_random", autowig::method_decorator_6d294b244ade5811bb176a415c559cd9);
    class_1ba589547c4959bfad3935f94c499797.def("set_random", method_pointer_8b554d1f9a475ade9826c29d8602d077, boost::python::return_internal_reference<>(), "");
    class_1ba589547c4959bfad3935f94c499797.def("set_random", autowig::method_decorator_8b554d1f9a475ade9826c29d8602d077);
    class_1ba589547c4959bfad3935f94c499797.def("check_template_params", method_pointer_b3a4243e901352fba226c85ff30bdf05, "");
    class_1ba589547c4959bfad3935f94c499797.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > >();
    }

}