#include "_ieigen.h"


namespace autowig
{
    void method_decorator_cfe0d848906b5ee8bf0e1c5de0a6a7d0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_490cb12685b750d9958d9d7f3fa118b9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_d95e51c8f3e155be99e6c28cf98be5f4(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_27ac17d99c8653a4bfba798e046caf02(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_0ec5bcf21cda5c7a86aed3341e39e44b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_5c31915c0c6b5024a11f34fafcc5814e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_d5a6504b1a245e62880ec9039a4d987f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_0602fb5596c55b46beb3606dd1a00016(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_3506546e2e915cf6b542de9a62596d0f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_30064425a3d554acb7c5ea9f5bcddc29(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_b9b54ecf122956088d32212f2ec2a8d8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_cfe0d848906b5ee8bf0e1c5de0a6a7d0)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_490cb12685b750d9958d9d7f3fa118b9)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_d95e51c8f3e155be99e6c28cf98be5f4)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_27ac17d99c8653a4bfba798e046caf02)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_0ec5bcf21cda5c7a86aed3341e39e44b)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::operator[];
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_5c31915c0c6b5024a11f34fafcc5814e)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_d5a6504b1a245e62880ec9039a4d987f)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::x;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_0602fb5596c55b46beb3606dd1a00016)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::y;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_3506546e2e915cf6b542de9a62596d0f)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::z;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_30064425a3d554acb7c5ea9f5bcddc29)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 > > > class_b9b54ecf122956088d32212f2ec2a8d8("_DenseCoeffsBase_b9b54ecf122956088d32212f2ec2a8d8", "", boost::python::no_init);
    class_b9b54ecf122956088d32212f2ec2a8d8.def("coeff_ref", method_pointer_cfe0d848906b5ee8bf0e1c5de0a6a7d0, boost::python::return_internal_reference<>(), "");
    class_b9b54ecf122956088d32212f2ec2a8d8.def("coeff_ref", autowig::method_decorator_cfe0d848906b5ee8bf0e1c5de0a6a7d0);
    class_b9b54ecf122956088d32212f2ec2a8d8.def("coeff_ref_by_outer_inner", method_pointer_490cb12685b750d9958d9d7f3fa118b9, boost::python::return_internal_reference<>(), "");
    class_b9b54ecf122956088d32212f2ec2a8d8.def("coeff_ref_by_outer_inner", autowig::method_decorator_490cb12685b750d9958d9d7f3fa118b9);
    class_b9b54ecf122956088d32212f2ec2a8d8.def("__call__", method_pointer_d95e51c8f3e155be99e6c28cf98be5f4, boost::python::return_internal_reference<>(), "");
    class_b9b54ecf122956088d32212f2ec2a8d8.def("__call__", autowig::method_decorator_d95e51c8f3e155be99e6c28cf98be5f4);
    class_b9b54ecf122956088d32212f2ec2a8d8.def("coeff_ref", method_pointer_27ac17d99c8653a4bfba798e046caf02, boost::python::return_internal_reference<>(), "");
    class_b9b54ecf122956088d32212f2ec2a8d8.def("coeff_ref", autowig::method_decorator_27ac17d99c8653a4bfba798e046caf02);
    class_b9b54ecf122956088d32212f2ec2a8d8.def("__getitem__", method_pointer_0ec5bcf21cda5c7a86aed3341e39e44b, boost::python::return_internal_reference<>(), "");
    class_b9b54ecf122956088d32212f2ec2a8d8.def("__getitem__", autowig::method_decorator_0ec5bcf21cda5c7a86aed3341e39e44b);
    class_b9b54ecf122956088d32212f2ec2a8d8.def("__call__", method_pointer_5c31915c0c6b5024a11f34fafcc5814e, boost::python::return_internal_reference<>(), "");
    class_b9b54ecf122956088d32212f2ec2a8d8.def("__call__", autowig::method_decorator_5c31915c0c6b5024a11f34fafcc5814e);
    class_b9b54ecf122956088d32212f2ec2a8d8.def("x", method_pointer_d5a6504b1a245e62880ec9039a4d987f, boost::python::return_internal_reference<>(), "");
    class_b9b54ecf122956088d32212f2ec2a8d8.def("x", autowig::method_decorator_d5a6504b1a245e62880ec9039a4d987f);
    class_b9b54ecf122956088d32212f2ec2a8d8.def("y", method_pointer_0602fb5596c55b46beb3606dd1a00016, boost::python::return_internal_reference<>(), "");
    class_b9b54ecf122956088d32212f2ec2a8d8.def("y", autowig::method_decorator_0602fb5596c55b46beb3606dd1a00016);
    class_b9b54ecf122956088d32212f2ec2a8d8.def("z", method_pointer_3506546e2e915cf6b542de9a62596d0f, boost::python::return_internal_reference<>(), "");
    class_b9b54ecf122956088d32212f2ec2a8d8.def("z", autowig::method_decorator_3506546e2e915cf6b542de9a62596d0f);
    class_b9b54ecf122956088d32212f2ec2a8d8.def("w", method_pointer_30064425a3d554acb7c5ea9f5bcddc29, boost::python::return_internal_reference<>(), "");
    class_b9b54ecf122956088d32212f2ec2a8d8.def("w", autowig::method_decorator_30064425a3d554acb7c5ea9f5bcddc29);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >, 0 > > >();
    }

}