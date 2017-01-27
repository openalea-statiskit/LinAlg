#include "_ieigen.h"


namespace autowig
{
    void method_decorator_105e8ee005215b689e11f59c9e0a85ce(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_2dbf7b9172635aac8468cff8291ba476(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_a60814f837f55fad921807ff912a1db8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_1f94eb76bebb5f9e83b5801c4bf4d8ae(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_6d9266f1678f54f19fc55285fd85e1a0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_4b18fc44fafd5794a2a4258e85c47938(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_499fa20ce5585fa28b52b99b3e9f48dc(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.x() = param_out; }
    void method_decorator_f33afdfc691350bc8c82b4bd21fa1ba9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.y() = param_out; }
    void method_decorator_f77a2f0964275356b27e48f22891182e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.z() = param_out; }
    void method_decorator_9dce95e85e055a0196656d82fa759a2a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)     { instance.w() = param_out; }
}


void wrapper_5b813e0fdd26534a8fc90afdc964af4c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_105e8ee005215b689e11f59c9e0a85ce)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_2dbf7b9172635aac8468cff8291ba476)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_a60814f837f55fad921807ff912a1db8)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_1f94eb76bebb5f9e83b5801c4bf4d8ae)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_6d9266f1678f54f19fc55285fd85e1a0)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::operator[];
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_4b18fc44fafd5794a2a4258e85c47938)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_499fa20ce5585fa28b52b99b3e9f48dc)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::x;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_f33afdfc691350bc8c82b4bd21fa1ba9)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::y;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_f77a2f0964275356b27e48f22891182e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::z;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_9dce95e85e055a0196656d82fa759a2a)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 > > > class_5b813e0fdd26534a8fc90afdc964af4c("_DenseCoeffsBase_5b813e0fdd26534a8fc90afdc964af4c", "", boost::python::no_init);
    class_5b813e0fdd26534a8fc90afdc964af4c.def("coeff_ref", method_pointer_105e8ee005215b689e11f59c9e0a85ce, boost::python::return_internal_reference<>(), "");
    class_5b813e0fdd26534a8fc90afdc964af4c.def("coeff_ref", autowig::method_decorator_105e8ee005215b689e11f59c9e0a85ce);
    class_5b813e0fdd26534a8fc90afdc964af4c.def("coeff_ref_by_outer_inner", method_pointer_2dbf7b9172635aac8468cff8291ba476, boost::python::return_internal_reference<>(), "");
    class_5b813e0fdd26534a8fc90afdc964af4c.def("coeff_ref_by_outer_inner", autowig::method_decorator_2dbf7b9172635aac8468cff8291ba476);
    class_5b813e0fdd26534a8fc90afdc964af4c.def("__call__", method_pointer_a60814f837f55fad921807ff912a1db8, boost::python::return_internal_reference<>(), "");
    class_5b813e0fdd26534a8fc90afdc964af4c.def("__call__", autowig::method_decorator_a60814f837f55fad921807ff912a1db8);
    class_5b813e0fdd26534a8fc90afdc964af4c.def("coeff_ref", method_pointer_1f94eb76bebb5f9e83b5801c4bf4d8ae, boost::python::return_internal_reference<>(), "");
    class_5b813e0fdd26534a8fc90afdc964af4c.def("coeff_ref", autowig::method_decorator_1f94eb76bebb5f9e83b5801c4bf4d8ae);
    class_5b813e0fdd26534a8fc90afdc964af4c.def("__getitem__", method_pointer_6d9266f1678f54f19fc55285fd85e1a0, boost::python::return_internal_reference<>(), "");
    class_5b813e0fdd26534a8fc90afdc964af4c.def("__getitem__", autowig::method_decorator_6d9266f1678f54f19fc55285fd85e1a0);
    class_5b813e0fdd26534a8fc90afdc964af4c.def("__call__", method_pointer_4b18fc44fafd5794a2a4258e85c47938, boost::python::return_internal_reference<>(), "");
    class_5b813e0fdd26534a8fc90afdc964af4c.def("__call__", autowig::method_decorator_4b18fc44fafd5794a2a4258e85c47938);
    class_5b813e0fdd26534a8fc90afdc964af4c.def("x", method_pointer_499fa20ce5585fa28b52b99b3e9f48dc, boost::python::return_internal_reference<>(), "");
    class_5b813e0fdd26534a8fc90afdc964af4c.def("x", autowig::method_decorator_499fa20ce5585fa28b52b99b3e9f48dc);
    class_5b813e0fdd26534a8fc90afdc964af4c.def("y", method_pointer_f33afdfc691350bc8c82b4bd21fa1ba9, boost::python::return_internal_reference<>(), "");
    class_5b813e0fdd26534a8fc90afdc964af4c.def("y", autowig::method_decorator_f33afdfc691350bc8c82b4bd21fa1ba9);
    class_5b813e0fdd26534a8fc90afdc964af4c.def("z", method_pointer_f77a2f0964275356b27e48f22891182e, boost::python::return_internal_reference<>(), "");
    class_5b813e0fdd26534a8fc90afdc964af4c.def("z", autowig::method_decorator_f77a2f0964275356b27e48f22891182e);
    class_5b813e0fdd26534a8fc90afdc964af4c.def("w", method_pointer_9dce95e85e055a0196656d82fa759a2a, boost::python::return_internal_reference<>(), "");
    class_5b813e0fdd26534a8fc90afdc964af4c.def("w", autowig::method_decorator_9dce95e85e055a0196656d82fa759a2a);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 0 > > >();
    }

}