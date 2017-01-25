#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f89af3e6befd540d9494e58d9dab62a5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_8f546817d93c517b88a5918c788822b1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_f4c648c63db4586caa9596cfdc356189(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_69320f36c2755966a9ee6c24e11549b3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_9809259f873155168f2437f8c4efee7c(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_561fd65652215bdc84eeed6f89b2b565(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_14edb1b9c23a5edd82a6a54d722b73ea(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_e2b02e71dc815bc4a07210dc999b696b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_fc4899178f3353079641ec1156b7a784(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_bdd91eaa6a7759f884a64324665e6c49(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_23864a426a625a9184f3ffc53fbe0b2f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_f89af3e6befd540d9494e58d9dab62a5)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_8f546817d93c517b88a5918c788822b1)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_f4c648c63db4586caa9596cfdc356189)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_69320f36c2755966a9ee6c24e11549b3)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_9809259f873155168f2437f8c4efee7c)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::operator[];
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_561fd65652215bdc84eeed6f89b2b565)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_14edb1b9c23a5edd82a6a54d722b73ea)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::x;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_e2b02e71dc815bc4a07210dc999b696b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::y;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_fc4899178f3353079641ec1156b7a784)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::z;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_bdd91eaa6a7759f884a64324665e6c49)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 > > > class_23864a426a625a9184f3ffc53fbe0b2f("_DenseCoeffsBase_23864a426a625a9184f3ffc53fbe0b2f", "", boost::python::no_init);
    class_23864a426a625a9184f3ffc53fbe0b2f.def("coeff_ref", method_pointer_f89af3e6befd540d9494e58d9dab62a5, boost::python::return_internal_reference<>(), "");
    class_23864a426a625a9184f3ffc53fbe0b2f.def("coeff_ref", autowig::method_decorator_f89af3e6befd540d9494e58d9dab62a5);
    class_23864a426a625a9184f3ffc53fbe0b2f.def("coeff_ref_by_outer_inner", method_pointer_8f546817d93c517b88a5918c788822b1, boost::python::return_internal_reference<>(), "");
    class_23864a426a625a9184f3ffc53fbe0b2f.def("coeff_ref_by_outer_inner", autowig::method_decorator_8f546817d93c517b88a5918c788822b1);
    class_23864a426a625a9184f3ffc53fbe0b2f.def("__call__", method_pointer_f4c648c63db4586caa9596cfdc356189, boost::python::return_internal_reference<>(), "");
    class_23864a426a625a9184f3ffc53fbe0b2f.def("__call__", autowig::method_decorator_f4c648c63db4586caa9596cfdc356189);
    class_23864a426a625a9184f3ffc53fbe0b2f.def("coeff_ref", method_pointer_69320f36c2755966a9ee6c24e11549b3, boost::python::return_internal_reference<>(), "");
    class_23864a426a625a9184f3ffc53fbe0b2f.def("coeff_ref", autowig::method_decorator_69320f36c2755966a9ee6c24e11549b3);
    class_23864a426a625a9184f3ffc53fbe0b2f.def("__getitem__", method_pointer_9809259f873155168f2437f8c4efee7c, boost::python::return_internal_reference<>(), "");
    class_23864a426a625a9184f3ffc53fbe0b2f.def("__getitem__", autowig::method_decorator_9809259f873155168f2437f8c4efee7c);
    class_23864a426a625a9184f3ffc53fbe0b2f.def("__call__", method_pointer_561fd65652215bdc84eeed6f89b2b565, boost::python::return_internal_reference<>(), "");
    class_23864a426a625a9184f3ffc53fbe0b2f.def("__call__", autowig::method_decorator_561fd65652215bdc84eeed6f89b2b565);
    class_23864a426a625a9184f3ffc53fbe0b2f.def("x", method_pointer_14edb1b9c23a5edd82a6a54d722b73ea, boost::python::return_internal_reference<>(), "");
    class_23864a426a625a9184f3ffc53fbe0b2f.def("x", autowig::method_decorator_14edb1b9c23a5edd82a6a54d722b73ea);
    class_23864a426a625a9184f3ffc53fbe0b2f.def("y", method_pointer_e2b02e71dc815bc4a07210dc999b696b, boost::python::return_internal_reference<>(), "");
    class_23864a426a625a9184f3ffc53fbe0b2f.def("y", autowig::method_decorator_e2b02e71dc815bc4a07210dc999b696b);
    class_23864a426a625a9184f3ffc53fbe0b2f.def("z", method_pointer_fc4899178f3353079641ec1156b7a784, boost::python::return_internal_reference<>(), "");
    class_23864a426a625a9184f3ffc53fbe0b2f.def("z", autowig::method_decorator_fc4899178f3353079641ec1156b7a784);
    class_23864a426a625a9184f3ffc53fbe0b2f.def("w", method_pointer_bdd91eaa6a7759f884a64324665e6c49, boost::python::return_internal_reference<>(), "");
    class_23864a426a625a9184f3ffc53fbe0b2f.def("w", autowig::method_decorator_bdd91eaa6a7759f884a64324665e6c49);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 > > >();
    }

}