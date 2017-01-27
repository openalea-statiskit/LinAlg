#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6b9b0de501705c4aa98f66a2f2744587(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_39d8c53adf8b58b98886118523fae8b1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_65d7f03d50e35b35ab81dfd551533737(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_b50249e137055076bf8e8fa27accbb13(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_445d821a57125de2a682eb05cc4ec5a8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_3d914d5e0615521daeb419a11bce8718(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_ee7e91605a015e7cab9ee4999336ac80(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_a4cf0555a7d05955ae081827e403bed5(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_c383777191fa5097908355167924be9a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_4d3d7a5338185b8c8bf052eb64d06410(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_3f0c0d2e57885207b541cad9367bc71f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_6d7f42f49cba579d87e8365e7c712c8a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_6b9b0de501705c4aa98f66a2f2744587)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_cc606a0ff6cc5210926d3cf2bec5abb4)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_28a9f21a9a9d5b2da64df5438d76bb81)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_8bd1a147d8605c27af5a4d7aa0e4fdab)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::cols;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_59a5a939bacc58e9a8e96cd8f0d56679)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::coeff;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_7ea39ed2e52259aa8fee69c2b742c6d8)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::coeff;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_39d8c53adf8b58b98886118523fae8b1)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::coeffRef;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_65d7f03d50e35b35ab81dfd551533737)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_a9c9b7d8402f5df992961b70e48fc12f)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_9aafceb9c60253c7b53fcba8d3ede687)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_da218e40c6e45cdfbda546f5458da575)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_13cd4f850ecd5788bceb238f48148a48)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_f85b0df1caf15ed5b9e92edf25372451)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_15a75b8cb9575559a0dbc7e7325ce796)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_179de0599e0250edb7d25325019531b8)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::conservativeResize;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_b50249e137055076bf8e8fa27accbb13)(long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_445d821a57125de2a682eb05cc4ec5a8)(long int , long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_3d914d5e0615521daeb419a11bce8718)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_ee7e91605a015e7cab9ee4999336ac80)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_a4cf0555a7d05955ae081827e403bed5)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_c383777191fa5097908355167924be9a)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_4d3d7a5338185b8c8bf052eb64d06410)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setRandom;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_3f0c0d2e57885207b541cad9367bc71f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setRandom;
    void  (*method_pointer_bdf7fc7cef7a5cf9820d07871a974969)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > >, boost::noncopyable > class_6d7f42f49cba579d87e8365e7c712c8a("_PlainObjectBase_6d7f42f49cba579d87e8365e7c712c8a", "", boost::python::no_init);
    class_6d7f42f49cba579d87e8365e7c712c8a.def("base", method_pointer_6b9b0de501705c4aa98f66a2f2744587, boost::python::return_internal_reference<>(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("base", autowig::method_decorator_6b9b0de501705c4aa98f66a2f2744587);
    class_6d7f42f49cba579d87e8365e7c712c8a.def("base", method_pointer_cc606a0ff6cc5210926d3cf2bec5abb4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("rows", method_pointer_28a9f21a9a9d5b2da64df5438d76bb81, "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("cols", method_pointer_8bd1a147d8605c27af5a4d7aa0e4fdab, "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("coeff", method_pointer_59a5a939bacc58e9a8e96cd8f0d56679, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("coeff", method_pointer_7ea39ed2e52259aa8fee69c2b742c6d8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("coeff_ref", method_pointer_39d8c53adf8b58b98886118523fae8b1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("coeff_ref", autowig::method_decorator_39d8c53adf8b58b98886118523fae8b1);
    class_6d7f42f49cba579d87e8365e7c712c8a.def("coeff_ref", method_pointer_65d7f03d50e35b35ab81dfd551533737, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("coeff_ref", autowig::method_decorator_65d7f03d50e35b35ab81dfd551533737);
    class_6d7f42f49cba579d87e8365e7c712c8a.def("coeff_ref", method_pointer_a9c9b7d8402f5df992961b70e48fc12f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("coeff_ref", method_pointer_9aafceb9c60253c7b53fcba8d3ede687, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("resize", method_pointer_da218e40c6e45cdfbda546f5458da575, "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("resize", method_pointer_13cd4f850ecd5788bceb238f48148a48, "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("resize", method_pointer_f85b0df1caf15ed5b9e92edf25372451, "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("resize", method_pointer_15a75b8cb9575559a0dbc7e7325ce796, "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("conservative_resize", method_pointer_179de0599e0250edb7d25325019531b8, "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_constant", method_pointer_b50249e137055076bf8e8fa27accbb13, boost::python::return_internal_reference<>(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_constant", autowig::method_decorator_b50249e137055076bf8e8fa27accbb13);
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_constant", method_pointer_445d821a57125de2a682eb05cc4ec5a8, boost::python::return_internal_reference<>(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_constant", autowig::method_decorator_445d821a57125de2a682eb05cc4ec5a8);
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_zero", method_pointer_3d914d5e0615521daeb419a11bce8718, boost::python::return_internal_reference<>(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_zero", autowig::method_decorator_3d914d5e0615521daeb419a11bce8718);
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_zero", method_pointer_ee7e91605a015e7cab9ee4999336ac80, boost::python::return_internal_reference<>(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_zero", autowig::method_decorator_ee7e91605a015e7cab9ee4999336ac80);
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_ones", method_pointer_a4cf0555a7d05955ae081827e403bed5, boost::python::return_internal_reference<>(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_ones", autowig::method_decorator_a4cf0555a7d05955ae081827e403bed5);
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_ones", method_pointer_c383777191fa5097908355167924be9a, boost::python::return_internal_reference<>(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_ones", autowig::method_decorator_c383777191fa5097908355167924be9a);
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_random", method_pointer_4d3d7a5338185b8c8bf052eb64d06410, boost::python::return_internal_reference<>(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_random", autowig::method_decorator_4d3d7a5338185b8c8bf052eb64d06410);
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_random", method_pointer_3f0c0d2e57885207b541cad9367bc71f, boost::python::return_internal_reference<>(), "");
    class_6d7f42f49cba579d87e8365e7c712c8a.def("set_random", autowig::method_decorator_3f0c0d2e57885207b541cad9367bc71f);
    class_6d7f42f49cba579d87e8365e7c712c8a.def("check_template_params", method_pointer_bdf7fc7cef7a5cf9820d07871a974969, "");
    class_6d7f42f49cba579d87e8365e7c712c8a.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > > >();
    }

}