#include "_ieigen.h"


namespace autowig
{
    void method_decorator_257cb0eacb2e59468d42742018efe6f9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_2b37442cb10b5b66a671abb9880260a5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_1eeb5db7beab5ff090f52abd522a6470(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_f2bd645953b056e08a0312b7cfd39e09(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_60f8123a20515790a088e95f41795218(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_0b8b6699c3f95e66a5b93a7c59916ce0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_52377a0f6bc65973915bf8e8f08fc27e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > & instance, const float  & param_out)     { instance.x() = param_out; }
    void method_decorator_eef7c50414615b0584eca334ffa90f8d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > & instance, const float  & param_out)     { instance.y() = param_out; }
    void method_decorator_e8e491acad0b58b085fc4f2d0bb7a4cd(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > & instance, const float  & param_out)     { instance.z() = param_out; }
    void method_decorator_b48f5fadf8c15227832841b5e79f9599(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > & instance, const float  & param_out)     { instance.w() = param_out; }
}


void wrapper_944ae02e2a725dd9b1e8e2f4b163a197()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_257cb0eacb2e59468d42742018efe6f9)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_2b37442cb10b5b66a671abb9880260a5)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::coeffRefByOuterInner;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_1eeb5db7beab5ff090f52abd522a6470)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_f2bd645953b056e08a0312b7cfd39e09)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_60f8123a20515790a088e95f41795218)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::operator[];
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_0b8b6699c3f95e66a5b93a7c59916ce0)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_52377a0f6bc65973915bf8e8f08fc27e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::x;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_eef7c50414615b0584eca334ffa90f8d)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::y;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_e8e491acad0b58b085fc4f2d0bb7a4cd)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::z;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_b48f5fadf8c15227832841b5e79f9599)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 > > > class_944ae02e2a725dd9b1e8e2f4b163a197("_DenseCoeffsBase_944ae02e2a725dd9b1e8e2f4b163a197", "", boost::python::no_init);
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("coeff_ref", method_pointer_257cb0eacb2e59468d42742018efe6f9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("coeff_ref", autowig::method_decorator_257cb0eacb2e59468d42742018efe6f9);
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("coeff_ref_by_outer_inner", method_pointer_2b37442cb10b5b66a671abb9880260a5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("coeff_ref_by_outer_inner", autowig::method_decorator_2b37442cb10b5b66a671abb9880260a5);
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("__call__", method_pointer_1eeb5db7beab5ff090f52abd522a6470, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("__call__", autowig::method_decorator_1eeb5db7beab5ff090f52abd522a6470);
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("coeff_ref", method_pointer_f2bd645953b056e08a0312b7cfd39e09, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("coeff_ref", autowig::method_decorator_f2bd645953b056e08a0312b7cfd39e09);
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("__getitem__", method_pointer_60f8123a20515790a088e95f41795218, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("__getitem__", autowig::method_decorator_60f8123a20515790a088e95f41795218);
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("__call__", method_pointer_0b8b6699c3f95e66a5b93a7c59916ce0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("__call__", autowig::method_decorator_0b8b6699c3f95e66a5b93a7c59916ce0);
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("x", method_pointer_52377a0f6bc65973915bf8e8f08fc27e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("x", autowig::method_decorator_52377a0f6bc65973915bf8e8f08fc27e);
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("y", method_pointer_eef7c50414615b0584eca334ffa90f8d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("y", autowig::method_decorator_eef7c50414615b0584eca334ffa90f8d);
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("z", method_pointer_e8e491acad0b58b085fc4f2d0bb7a4cd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("z", autowig::method_decorator_e8e491acad0b58b085fc4f2d0bb7a4cd);
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("w", method_pointer_b48f5fadf8c15227832841b5e79f9599, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_944ae02e2a725dd9b1e8e2f4b163a197.def("w", autowig::method_decorator_b48f5fadf8c15227832841b5e79f9599);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 0 > > >();
    }

}