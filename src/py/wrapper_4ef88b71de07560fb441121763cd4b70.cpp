#include "_ieigen.h"


namespace autowig
{
    void method_decorator_85543591ed4952148415e0ac2077b0f3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_d43335a242e554d7bdb04b103ee87d06(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_92cb6330a04e516ca5a1b24f929484bc(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_fdf2e767d9c75ab3a09b5a69c23d6f1f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_79608853006758dc8ebecd3b30a1909f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_5ea1434535da5fd0ba0274ae2cae7b1d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_ccd8af2777bd53378760c2aa31fa940e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_0ca74a3713e754f48e95c8c3e81ab52a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_080e20e779ae5722a74c98c56bc1dd03(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_998d0e6c03d95d75985fed1ea94bf6c5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_4ef88b71de07560fb441121763cd4b70()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_85543591ed4952148415e0ac2077b0f3)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_d43335a242e554d7bdb04b103ee87d06)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_92cb6330a04e516ca5a1b24f929484bc)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_fdf2e767d9c75ab3a09b5a69c23d6f1f)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_79608853006758dc8ebecd3b30a1909f)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::operator[];
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_5ea1434535da5fd0ba0274ae2cae7b1d)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_ccd8af2777bd53378760c2aa31fa940e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::x;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_0ca74a3713e754f48e95c8c3e81ab52a)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::y;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_080e20e779ae5722a74c98c56bc1dd03)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::z;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_998d0e6c03d95d75985fed1ea94bf6c5)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 > > > class_4ef88b71de07560fb441121763cd4b70("_DenseCoeffsBase_4ef88b71de07560fb441121763cd4b70", "", boost::python::no_init);
    class_4ef88b71de07560fb441121763cd4b70.def("coeff_ref", method_pointer_85543591ed4952148415e0ac2077b0f3, boost::python::return_internal_reference<>(), "");
    class_4ef88b71de07560fb441121763cd4b70.def("coeff_ref", autowig::method_decorator_85543591ed4952148415e0ac2077b0f3);
    class_4ef88b71de07560fb441121763cd4b70.def("coeff_ref_by_outer_inner", method_pointer_d43335a242e554d7bdb04b103ee87d06, boost::python::return_internal_reference<>(), "");
    class_4ef88b71de07560fb441121763cd4b70.def("coeff_ref_by_outer_inner", autowig::method_decorator_d43335a242e554d7bdb04b103ee87d06);
    class_4ef88b71de07560fb441121763cd4b70.def("__call__", method_pointer_92cb6330a04e516ca5a1b24f929484bc, boost::python::return_internal_reference<>(), "");
    class_4ef88b71de07560fb441121763cd4b70.def("__call__", autowig::method_decorator_92cb6330a04e516ca5a1b24f929484bc);
    class_4ef88b71de07560fb441121763cd4b70.def("coeff_ref", method_pointer_fdf2e767d9c75ab3a09b5a69c23d6f1f, boost::python::return_internal_reference<>(), "");
    class_4ef88b71de07560fb441121763cd4b70.def("coeff_ref", autowig::method_decorator_fdf2e767d9c75ab3a09b5a69c23d6f1f);
    class_4ef88b71de07560fb441121763cd4b70.def("__getitem__", method_pointer_79608853006758dc8ebecd3b30a1909f, boost::python::return_internal_reference<>(), "");
    class_4ef88b71de07560fb441121763cd4b70.def("__getitem__", autowig::method_decorator_79608853006758dc8ebecd3b30a1909f);
    class_4ef88b71de07560fb441121763cd4b70.def("__call__", method_pointer_5ea1434535da5fd0ba0274ae2cae7b1d, boost::python::return_internal_reference<>(), "");
    class_4ef88b71de07560fb441121763cd4b70.def("__call__", autowig::method_decorator_5ea1434535da5fd0ba0274ae2cae7b1d);
    class_4ef88b71de07560fb441121763cd4b70.def("x", method_pointer_ccd8af2777bd53378760c2aa31fa940e, boost::python::return_internal_reference<>(), "");
    class_4ef88b71de07560fb441121763cd4b70.def("x", autowig::method_decorator_ccd8af2777bd53378760c2aa31fa940e);
    class_4ef88b71de07560fb441121763cd4b70.def("y", method_pointer_0ca74a3713e754f48e95c8c3e81ab52a, boost::python::return_internal_reference<>(), "");
    class_4ef88b71de07560fb441121763cd4b70.def("y", autowig::method_decorator_0ca74a3713e754f48e95c8c3e81ab52a);
    class_4ef88b71de07560fb441121763cd4b70.def("z", method_pointer_080e20e779ae5722a74c98c56bc1dd03, boost::python::return_internal_reference<>(), "");
    class_4ef88b71de07560fb441121763cd4b70.def("z", autowig::method_decorator_080e20e779ae5722a74c98c56bc1dd03);
    class_4ef88b71de07560fb441121763cd4b70.def("w", method_pointer_998d0e6c03d95d75985fed1ea94bf6c5, boost::python::return_internal_reference<>(), "");
    class_4ef88b71de07560fb441121763cd4b70.def("w", autowig::method_decorator_998d0e6c03d95d75985fed1ea94bf6c5);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >, 0 > > >();
    }

}