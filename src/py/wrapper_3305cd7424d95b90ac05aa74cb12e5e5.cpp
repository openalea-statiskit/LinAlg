#include "_ieigen.h"


namespace autowig
{
    void method_decorator_df645321431658adb36305dca36c66e4(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_7e7930f303e05bd9a1f761a56fe38072(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_7c00453c6fae55ef858c03500fe7be3c(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_77f37021b4815dd4aa76d90761578f46(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_1ec7cc8100e35fb9aff8bae50de157f9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_977f85253df457f9bb4bf236ba2fd711(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_df6e07b6c78a5a9e9c168b7298f131a6(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_3835abf4cf9d5cefbf88fc436cae7607(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_016329f2292f5c94b1c9fb0e0a6854a8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_b6c315d4fd1c596bb149d13f08199c6e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_3305cd7424d95b90ac05aa74cb12e5e5()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_df645321431658adb36305dca36c66e4)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_7e7930f303e05bd9a1f761a56fe38072)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_7c00453c6fae55ef858c03500fe7be3c)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_77f37021b4815dd4aa76d90761578f46)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_1ec7cc8100e35fb9aff8bae50de157f9)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::operator[];
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_977f85253df457f9bb4bf236ba2fd711)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_df6e07b6c78a5a9e9c168b7298f131a6)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::x;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_3835abf4cf9d5cefbf88fc436cae7607)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::y;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_016329f2292f5c94b1c9fb0e0a6854a8)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::z;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_b6c315d4fd1c596bb149d13f08199c6e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 > > > class_3305cd7424d95b90ac05aa74cb12e5e5("_DenseCoeffsBase_3305cd7424d95b90ac05aa74cb12e5e5", "", boost::python::no_init);
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("coeff_ref", method_pointer_df645321431658adb36305dca36c66e4, boost::python::return_internal_reference<>(), "");
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("coeff_ref", autowig::method_decorator_df645321431658adb36305dca36c66e4);
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("coeff_ref_by_outer_inner", method_pointer_7e7930f303e05bd9a1f761a56fe38072, boost::python::return_internal_reference<>(), "");
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("coeff_ref_by_outer_inner", autowig::method_decorator_7e7930f303e05bd9a1f761a56fe38072);
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("__call__", method_pointer_7c00453c6fae55ef858c03500fe7be3c, boost::python::return_internal_reference<>(), "");
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("__call__", autowig::method_decorator_7c00453c6fae55ef858c03500fe7be3c);
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("coeff_ref", method_pointer_77f37021b4815dd4aa76d90761578f46, boost::python::return_internal_reference<>(), "");
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("coeff_ref", autowig::method_decorator_77f37021b4815dd4aa76d90761578f46);
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("__getitem__", method_pointer_1ec7cc8100e35fb9aff8bae50de157f9, boost::python::return_internal_reference<>(), "");
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("__getitem__", autowig::method_decorator_1ec7cc8100e35fb9aff8bae50de157f9);
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("__call__", method_pointer_977f85253df457f9bb4bf236ba2fd711, boost::python::return_internal_reference<>(), "");
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("__call__", autowig::method_decorator_977f85253df457f9bb4bf236ba2fd711);
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("x", method_pointer_df6e07b6c78a5a9e9c168b7298f131a6, boost::python::return_internal_reference<>(), "");
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("x", autowig::method_decorator_df6e07b6c78a5a9e9c168b7298f131a6);
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("y", method_pointer_3835abf4cf9d5cefbf88fc436cae7607, boost::python::return_internal_reference<>(), "");
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("y", autowig::method_decorator_3835abf4cf9d5cefbf88fc436cae7607);
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("z", method_pointer_016329f2292f5c94b1c9fb0e0a6854a8, boost::python::return_internal_reference<>(), "");
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("z", autowig::method_decorator_016329f2292f5c94b1c9fb0e0a6854a8);
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("w", method_pointer_b6c315d4fd1c596bb149d13f08199c6e, boost::python::return_internal_reference<>(), "");
    class_3305cd7424d95b90ac05aa74cb12e5e5.def("w", autowig::method_decorator_b6c315d4fd1c596bb149d13f08199c6e);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 > > >();
    }

}