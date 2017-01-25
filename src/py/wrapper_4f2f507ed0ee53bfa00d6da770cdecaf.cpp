#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a107bcf8fc16503fb4277b745e5b7e3b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_ad6ac7b7fd9055d5856636e3dee6ca81(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_1965a5689681592da68bd1871dcdb762(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_1c29486a8e5f59b7a1d14b2b3d3117f1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_d522d00b667e5aa7945f64cc3ce34e69(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_256932832c9a57a087b48e7afbbe127d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_b870cc67601156efad4a80f1443631fb(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_72e28f9dcee55d2896a17e0aa7154157(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_568c580330615049a0ca794ede80deab(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_acc7e960caf35a8f98de5cd4127a3d21(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_4f2f507ed0ee53bfa00d6da770cdecaf()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_a107bcf8fc16503fb4277b745e5b7e3b)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_ad6ac7b7fd9055d5856636e3dee6ca81)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_1965a5689681592da68bd1871dcdb762)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_1c29486a8e5f59b7a1d14b2b3d3117f1)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_d522d00b667e5aa7945f64cc3ce34e69)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::operator[];
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_256932832c9a57a087b48e7afbbe127d)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_b870cc67601156efad4a80f1443631fb)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::x;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_72e28f9dcee55d2896a17e0aa7154157)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::y;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_568c580330615049a0ca794ede80deab)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::z;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_acc7e960caf35a8f98de5cd4127a3d21)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 > > > class_4f2f507ed0ee53bfa00d6da770cdecaf("_DenseCoeffsBase_4f2f507ed0ee53bfa00d6da770cdecaf", "", boost::python::no_init);
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("coeff_ref", method_pointer_a107bcf8fc16503fb4277b745e5b7e3b, boost::python::return_internal_reference<>(), "");
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("coeff_ref", autowig::method_decorator_a107bcf8fc16503fb4277b745e5b7e3b);
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("coeff_ref_by_outer_inner", method_pointer_ad6ac7b7fd9055d5856636e3dee6ca81, boost::python::return_internal_reference<>(), "");
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("coeff_ref_by_outer_inner", autowig::method_decorator_ad6ac7b7fd9055d5856636e3dee6ca81);
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("__call__", method_pointer_1965a5689681592da68bd1871dcdb762, boost::python::return_internal_reference<>(), "");
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("__call__", autowig::method_decorator_1965a5689681592da68bd1871dcdb762);
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("coeff_ref", method_pointer_1c29486a8e5f59b7a1d14b2b3d3117f1, boost::python::return_internal_reference<>(), "");
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("coeff_ref", autowig::method_decorator_1c29486a8e5f59b7a1d14b2b3d3117f1);
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("__getitem__", method_pointer_d522d00b667e5aa7945f64cc3ce34e69, boost::python::return_internal_reference<>(), "");
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("__getitem__", autowig::method_decorator_d522d00b667e5aa7945f64cc3ce34e69);
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("__call__", method_pointer_256932832c9a57a087b48e7afbbe127d, boost::python::return_internal_reference<>(), "");
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("__call__", autowig::method_decorator_256932832c9a57a087b48e7afbbe127d);
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("x", method_pointer_b870cc67601156efad4a80f1443631fb, boost::python::return_internal_reference<>(), "");
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("x", autowig::method_decorator_b870cc67601156efad4a80f1443631fb);
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("y", method_pointer_72e28f9dcee55d2896a17e0aa7154157, boost::python::return_internal_reference<>(), "");
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("y", autowig::method_decorator_72e28f9dcee55d2896a17e0aa7154157);
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("z", method_pointer_568c580330615049a0ca794ede80deab, boost::python::return_internal_reference<>(), "");
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("z", autowig::method_decorator_568c580330615049a0ca794ede80deab);
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("w", method_pointer_acc7e960caf35a8f98de5cd4127a3d21, boost::python::return_internal_reference<>(), "");
    class_4f2f507ed0ee53bfa00d6da770cdecaf.def("w", autowig::method_decorator_acc7e960caf35a8f98de5cd4127a3d21);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 2, 1, 1, 2 >, 0 > > >();
    }

}