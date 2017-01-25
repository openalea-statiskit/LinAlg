#include "_ieigen.h"


namespace autowig
{
    void method_decorator_7598ff1b58c15c8799dab5ee422e261d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_dfb1539833ff5893a1e75bbc4a443abf(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_d1757b14c00d55bebc8c5c5b1a2fd9da(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_742be038aade597c8d7be723135240a7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_e8b596bb8f5e5eee86997e659e8631d3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_85a6e51761e55c77b8af4436f702bd10(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_6d651c67e14f5ddb8f0550e64a9d6ccc(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > & instance, const float  & param_out)
    { instance.x() = param_out; }
    void method_decorator_429914637a4e5bd9b06008122550fba7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > & instance, const float  & param_out)
    { instance.y() = param_out; }
    void method_decorator_50321e53db9e5b69b56567765a70398e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > & instance, const float  & param_out)
    { instance.z() = param_out; }
    void method_decorator_8b98c313c9bd52e3aafada31b7881b91(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > & instance, const float  & param_out)
    { instance.w() = param_out; }
}


void wrapper_afa290e2a9195051acb514eaab3c79fb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_7598ff1b58c15c8799dab5ee422e261d)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_dfb1539833ff5893a1e75bbc4a443abf)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::coeffRefByOuterInner;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_d1757b14c00d55bebc8c5c5b1a2fd9da)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_742be038aade597c8d7be723135240a7)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_e8b596bb8f5e5eee86997e659e8631d3)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::operator[];
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_85a6e51761e55c77b8af4436f702bd10)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_6d651c67e14f5ddb8f0550e64a9d6ccc)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::x;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_429914637a4e5bd9b06008122550fba7)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::y;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_50321e53db9e5b69b56567765a70398e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::z;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::*method_pointer_8b98c313c9bd52e3aafada31b7881b91)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 > > > class_afa290e2a9195051acb514eaab3c79fb("_DenseCoeffsBase_afa290e2a9195051acb514eaab3c79fb", "", boost::python::no_init);
    class_afa290e2a9195051acb514eaab3c79fb.def("coeff_ref", method_pointer_7598ff1b58c15c8799dab5ee422e261d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_afa290e2a9195051acb514eaab3c79fb.def("coeff_ref", autowig::method_decorator_7598ff1b58c15c8799dab5ee422e261d);
    class_afa290e2a9195051acb514eaab3c79fb.def("coeff_ref_by_outer_inner", method_pointer_dfb1539833ff5893a1e75bbc4a443abf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_afa290e2a9195051acb514eaab3c79fb.def("coeff_ref_by_outer_inner", autowig::method_decorator_dfb1539833ff5893a1e75bbc4a443abf);
    class_afa290e2a9195051acb514eaab3c79fb.def("__call__", method_pointer_d1757b14c00d55bebc8c5c5b1a2fd9da, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_afa290e2a9195051acb514eaab3c79fb.def("__call__", autowig::method_decorator_d1757b14c00d55bebc8c5c5b1a2fd9da);
    class_afa290e2a9195051acb514eaab3c79fb.def("coeff_ref", method_pointer_742be038aade597c8d7be723135240a7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_afa290e2a9195051acb514eaab3c79fb.def("coeff_ref", autowig::method_decorator_742be038aade597c8d7be723135240a7);
    class_afa290e2a9195051acb514eaab3c79fb.def("__getitem__", method_pointer_e8b596bb8f5e5eee86997e659e8631d3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_afa290e2a9195051acb514eaab3c79fb.def("__getitem__", autowig::method_decorator_e8b596bb8f5e5eee86997e659e8631d3);
    class_afa290e2a9195051acb514eaab3c79fb.def("__call__", method_pointer_85a6e51761e55c77b8af4436f702bd10, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_afa290e2a9195051acb514eaab3c79fb.def("__call__", autowig::method_decorator_85a6e51761e55c77b8af4436f702bd10);
    class_afa290e2a9195051acb514eaab3c79fb.def("x", method_pointer_6d651c67e14f5ddb8f0550e64a9d6ccc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_afa290e2a9195051acb514eaab3c79fb.def("x", autowig::method_decorator_6d651c67e14f5ddb8f0550e64a9d6ccc);
    class_afa290e2a9195051acb514eaab3c79fb.def("y", method_pointer_429914637a4e5bd9b06008122550fba7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_afa290e2a9195051acb514eaab3c79fb.def("y", autowig::method_decorator_429914637a4e5bd9b06008122550fba7);
    class_afa290e2a9195051acb514eaab3c79fb.def("z", method_pointer_50321e53db9e5b69b56567765a70398e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_afa290e2a9195051acb514eaab3c79fb.def("z", autowig::method_decorator_50321e53db9e5b69b56567765a70398e);
    class_afa290e2a9195051acb514eaab3c79fb.def("w", method_pointer_8b98c313c9bd52e3aafada31b7881b91, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_afa290e2a9195051acb514eaab3c79fb.def("w", autowig::method_decorator_8b98c313c9bd52e3aafada31b7881b91);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 0 > > >();
    }

}