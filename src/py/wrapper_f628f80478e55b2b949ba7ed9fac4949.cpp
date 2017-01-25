#include "_ieigen.h"


namespace autowig
{
    void method_decorator_aa3319fa7c83564ea6c0cbb568d368b8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_35b3646dc57e5fc6aa790e29f3694202(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_7d6c7949999e5d96b4ef936b1cca82a5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_09aba0e76ca15ef0b0dcfbd075560284(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_a70c03fe23e058c0915b7276a59ff133(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_8c771b3311a25abf9f6136141f1f528a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_c34d215a613e5c7fb8d05f3a4be6950a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_9aa21e3a889c5cb6822c3e0fb36415a0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_86d080cc940a5f568b04090c03f406dd(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_461011881f2257ea80dabdf169915fab(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > & instance, struct ::std::complex< double >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_f628f80478e55b2b949ba7ed9fac4949()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_aa3319fa7c83564ea6c0cbb568d368b8)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_35b3646dc57e5fc6aa790e29f3694202)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_7d6c7949999e5d96b4ef936b1cca82a5)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_09aba0e76ca15ef0b0dcfbd075560284)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_a70c03fe23e058c0915b7276a59ff133)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::operator[];
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_8c771b3311a25abf9f6136141f1f528a)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::operator();
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_c34d215a613e5c7fb8d05f3a4be6950a)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::x;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_9aa21e3a889c5cb6822c3e0fb36415a0)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::y;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_86d080cc940a5f568b04090c03f406dd)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::z;
    struct ::std::complex< double >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_461011881f2257ea80dabdf169915fab)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 > > > class_f628f80478e55b2b949ba7ed9fac4949("_DenseCoeffsBase_f628f80478e55b2b949ba7ed9fac4949", "", boost::python::no_init);
    class_f628f80478e55b2b949ba7ed9fac4949.def("coeff_ref", method_pointer_aa3319fa7c83564ea6c0cbb568d368b8, boost::python::return_internal_reference<>(), "");
    class_f628f80478e55b2b949ba7ed9fac4949.def("coeff_ref", autowig::method_decorator_aa3319fa7c83564ea6c0cbb568d368b8);
    class_f628f80478e55b2b949ba7ed9fac4949.def("coeff_ref_by_outer_inner", method_pointer_35b3646dc57e5fc6aa790e29f3694202, boost::python::return_internal_reference<>(), "");
    class_f628f80478e55b2b949ba7ed9fac4949.def("coeff_ref_by_outer_inner", autowig::method_decorator_35b3646dc57e5fc6aa790e29f3694202);
    class_f628f80478e55b2b949ba7ed9fac4949.def("__call__", method_pointer_7d6c7949999e5d96b4ef936b1cca82a5, boost::python::return_internal_reference<>(), "");
    class_f628f80478e55b2b949ba7ed9fac4949.def("__call__", autowig::method_decorator_7d6c7949999e5d96b4ef936b1cca82a5);
    class_f628f80478e55b2b949ba7ed9fac4949.def("coeff_ref", method_pointer_09aba0e76ca15ef0b0dcfbd075560284, boost::python::return_internal_reference<>(), "");
    class_f628f80478e55b2b949ba7ed9fac4949.def("coeff_ref", autowig::method_decorator_09aba0e76ca15ef0b0dcfbd075560284);
    class_f628f80478e55b2b949ba7ed9fac4949.def("__getitem__", method_pointer_a70c03fe23e058c0915b7276a59ff133, boost::python::return_internal_reference<>(), "");
    class_f628f80478e55b2b949ba7ed9fac4949.def("__getitem__", autowig::method_decorator_a70c03fe23e058c0915b7276a59ff133);
    class_f628f80478e55b2b949ba7ed9fac4949.def("__call__", method_pointer_8c771b3311a25abf9f6136141f1f528a, boost::python::return_internal_reference<>(), "");
    class_f628f80478e55b2b949ba7ed9fac4949.def("__call__", autowig::method_decorator_8c771b3311a25abf9f6136141f1f528a);
    class_f628f80478e55b2b949ba7ed9fac4949.def("x", method_pointer_c34d215a613e5c7fb8d05f3a4be6950a, boost::python::return_internal_reference<>(), "");
    class_f628f80478e55b2b949ba7ed9fac4949.def("x", autowig::method_decorator_c34d215a613e5c7fb8d05f3a4be6950a);
    class_f628f80478e55b2b949ba7ed9fac4949.def("y", method_pointer_9aa21e3a889c5cb6822c3e0fb36415a0, boost::python::return_internal_reference<>(), "");
    class_f628f80478e55b2b949ba7ed9fac4949.def("y", autowig::method_decorator_9aa21e3a889c5cb6822c3e0fb36415a0);
    class_f628f80478e55b2b949ba7ed9fac4949.def("z", method_pointer_86d080cc940a5f568b04090c03f406dd, boost::python::return_internal_reference<>(), "");
    class_f628f80478e55b2b949ba7ed9fac4949.def("z", autowig::method_decorator_86d080cc940a5f568b04090c03f406dd);
    class_f628f80478e55b2b949ba7ed9fac4949.def("w", method_pointer_461011881f2257ea80dabdf169915fab, boost::python::return_internal_reference<>(), "");
    class_f628f80478e55b2b949ba7ed9fac4949.def("w", autowig::method_decorator_461011881f2257ea80dabdf169915fab);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 0 > > >();
    }

}