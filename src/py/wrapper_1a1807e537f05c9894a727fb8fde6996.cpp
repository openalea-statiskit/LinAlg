#include "_ieigen.h"


namespace autowig
{
    void method_decorator_52c05bfdfcb859b2a2fdffdfc7994721(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_c8d0c724089c506f8e3d1b60aae172ee(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_e6be5053731d5d15bab3744b49423f02(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_2859fc67050f5f4abf7fe6d49e82d38a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_3298c1db1969592e90d6adb9766c0ffa(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_3ca8aaefe3445ddba2254b3b494acc00(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_11039d811c5b577788ee92d5fd043f46(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_28d70cfb9fd05b1bae9666644e32690f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_541e7311a9a25a9fb406341f22b9464f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_6bda015149355c3989954314d30d9751(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_1a1807e537f05c9894a727fb8fde6996()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_52c05bfdfcb859b2a2fdffdfc7994721)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_c8d0c724089c506f8e3d1b60aae172ee)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_e6be5053731d5d15bab3744b49423f02)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_2859fc67050f5f4abf7fe6d49e82d38a)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_3298c1db1969592e90d6adb9766c0ffa)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::operator[];
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_3ca8aaefe3445ddba2254b3b494acc00)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_11039d811c5b577788ee92d5fd043f46)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::x;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_28d70cfb9fd05b1bae9666644e32690f)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::y;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_541e7311a9a25a9fb406341f22b9464f)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::z;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_6bda015149355c3989954314d30d9751)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 > > > class_1a1807e537f05c9894a727fb8fde6996("_DenseCoeffsBase_1a1807e537f05c9894a727fb8fde6996", "", boost::python::no_init);
    class_1a1807e537f05c9894a727fb8fde6996.def("coeff_ref", method_pointer_52c05bfdfcb859b2a2fdffdfc7994721, boost::python::return_internal_reference<>(), "");
    class_1a1807e537f05c9894a727fb8fde6996.def("coeff_ref", autowig::method_decorator_52c05bfdfcb859b2a2fdffdfc7994721);
    class_1a1807e537f05c9894a727fb8fde6996.def("coeff_ref_by_outer_inner", method_pointer_c8d0c724089c506f8e3d1b60aae172ee, boost::python::return_internal_reference<>(), "");
    class_1a1807e537f05c9894a727fb8fde6996.def("coeff_ref_by_outer_inner", autowig::method_decorator_c8d0c724089c506f8e3d1b60aae172ee);
    class_1a1807e537f05c9894a727fb8fde6996.def("__call__", method_pointer_e6be5053731d5d15bab3744b49423f02, boost::python::return_internal_reference<>(), "");
    class_1a1807e537f05c9894a727fb8fde6996.def("__call__", autowig::method_decorator_e6be5053731d5d15bab3744b49423f02);
    class_1a1807e537f05c9894a727fb8fde6996.def("coeff_ref", method_pointer_2859fc67050f5f4abf7fe6d49e82d38a, boost::python::return_internal_reference<>(), "");
    class_1a1807e537f05c9894a727fb8fde6996.def("coeff_ref", autowig::method_decorator_2859fc67050f5f4abf7fe6d49e82d38a);
    class_1a1807e537f05c9894a727fb8fde6996.def("__getitem__", method_pointer_3298c1db1969592e90d6adb9766c0ffa, boost::python::return_internal_reference<>(), "");
    class_1a1807e537f05c9894a727fb8fde6996.def("__getitem__", autowig::method_decorator_3298c1db1969592e90d6adb9766c0ffa);
    class_1a1807e537f05c9894a727fb8fde6996.def("__call__", method_pointer_3ca8aaefe3445ddba2254b3b494acc00, boost::python::return_internal_reference<>(), "");
    class_1a1807e537f05c9894a727fb8fde6996.def("__call__", autowig::method_decorator_3ca8aaefe3445ddba2254b3b494acc00);
    class_1a1807e537f05c9894a727fb8fde6996.def("x", method_pointer_11039d811c5b577788ee92d5fd043f46, boost::python::return_internal_reference<>(), "");
    class_1a1807e537f05c9894a727fb8fde6996.def("x", autowig::method_decorator_11039d811c5b577788ee92d5fd043f46);
    class_1a1807e537f05c9894a727fb8fde6996.def("y", method_pointer_28d70cfb9fd05b1bae9666644e32690f, boost::python::return_internal_reference<>(), "");
    class_1a1807e537f05c9894a727fb8fde6996.def("y", autowig::method_decorator_28d70cfb9fd05b1bae9666644e32690f);
    class_1a1807e537f05c9894a727fb8fde6996.def("z", method_pointer_541e7311a9a25a9fb406341f22b9464f, boost::python::return_internal_reference<>(), "");
    class_1a1807e537f05c9894a727fb8fde6996.def("z", autowig::method_decorator_541e7311a9a25a9fb406341f22b9464f);
    class_1a1807e537f05c9894a727fb8fde6996.def("w", method_pointer_6bda015149355c3989954314d30d9751, boost::python::return_internal_reference<>(), "");
    class_1a1807e537f05c9894a727fb8fde6996.def("w", autowig::method_decorator_6bda015149355c3989954314d30d9751);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >, 0 > > >();
    }

}