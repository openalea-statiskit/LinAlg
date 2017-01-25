#include "_ieigen.h"


namespace autowig
{
    void method_decorator_3eea2b0c8ff25223893a70c6eb1a1f01(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_40bb6880551c5a5886d84fb3c009228a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_a178a3bb4bab585cb8c5844c76fc004b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_2a764ff4560f5aeab9702615bef26cd0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_77ef1dc9817653de8f5ce8b6eb5177d4(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_3ba7db0a08c65f15b804686fdd1ba9ab(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_83fe436ab5fd5c98ad4fde234611e7e7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > & instance, const float  & param_out)
    { instance.x() = param_out; }
    void method_decorator_8309d7bc24b458e0a7619025d7b8e738(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > & instance, const float  & param_out)
    { instance.y() = param_out; }
    void method_decorator_020ae78fd695510f9e223dafc399f104(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > & instance, const float  & param_out)
    { instance.z() = param_out; }
    void method_decorator_8a302901b4315c7e85dcce650d98b40b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > & instance, const float  & param_out)
    { instance.w() = param_out; }
}


void wrapper_68fd09c657685f79b36afdb4c0d377f1()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_3eea2b0c8ff25223893a70c6eb1a1f01)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_40bb6880551c5a5886d84fb3c009228a)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::coeffRefByOuterInner;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_a178a3bb4bab585cb8c5844c76fc004b)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_2a764ff4560f5aeab9702615bef26cd0)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_77ef1dc9817653de8f5ce8b6eb5177d4)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::operator[];
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_3ba7db0a08c65f15b804686fdd1ba9ab)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_83fe436ab5fd5c98ad4fde234611e7e7)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::x;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_8309d7bc24b458e0a7619025d7b8e738)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::y;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_020ae78fd695510f9e223dafc399f104)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::z;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_8a302901b4315c7e85dcce650d98b40b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 > > > class_68fd09c657685f79b36afdb4c0d377f1("_DenseCoeffsBase_68fd09c657685f79b36afdb4c0d377f1", "", boost::python::no_init);
    class_68fd09c657685f79b36afdb4c0d377f1.def("coeff_ref", method_pointer_3eea2b0c8ff25223893a70c6eb1a1f01, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68fd09c657685f79b36afdb4c0d377f1.def("coeff_ref", autowig::method_decorator_3eea2b0c8ff25223893a70c6eb1a1f01);
    class_68fd09c657685f79b36afdb4c0d377f1.def("coeff_ref_by_outer_inner", method_pointer_40bb6880551c5a5886d84fb3c009228a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68fd09c657685f79b36afdb4c0d377f1.def("coeff_ref_by_outer_inner", autowig::method_decorator_40bb6880551c5a5886d84fb3c009228a);
    class_68fd09c657685f79b36afdb4c0d377f1.def("__call__", method_pointer_a178a3bb4bab585cb8c5844c76fc004b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68fd09c657685f79b36afdb4c0d377f1.def("__call__", autowig::method_decorator_a178a3bb4bab585cb8c5844c76fc004b);
    class_68fd09c657685f79b36afdb4c0d377f1.def("coeff_ref", method_pointer_2a764ff4560f5aeab9702615bef26cd0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68fd09c657685f79b36afdb4c0d377f1.def("coeff_ref", autowig::method_decorator_2a764ff4560f5aeab9702615bef26cd0);
    class_68fd09c657685f79b36afdb4c0d377f1.def("__getitem__", method_pointer_77ef1dc9817653de8f5ce8b6eb5177d4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68fd09c657685f79b36afdb4c0d377f1.def("__getitem__", autowig::method_decorator_77ef1dc9817653de8f5ce8b6eb5177d4);
    class_68fd09c657685f79b36afdb4c0d377f1.def("__call__", method_pointer_3ba7db0a08c65f15b804686fdd1ba9ab, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68fd09c657685f79b36afdb4c0d377f1.def("__call__", autowig::method_decorator_3ba7db0a08c65f15b804686fdd1ba9ab);
    class_68fd09c657685f79b36afdb4c0d377f1.def("x", method_pointer_83fe436ab5fd5c98ad4fde234611e7e7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68fd09c657685f79b36afdb4c0d377f1.def("x", autowig::method_decorator_83fe436ab5fd5c98ad4fde234611e7e7);
    class_68fd09c657685f79b36afdb4c0d377f1.def("y", method_pointer_8309d7bc24b458e0a7619025d7b8e738, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68fd09c657685f79b36afdb4c0d377f1.def("y", autowig::method_decorator_8309d7bc24b458e0a7619025d7b8e738);
    class_68fd09c657685f79b36afdb4c0d377f1.def("z", method_pointer_020ae78fd695510f9e223dafc399f104, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68fd09c657685f79b36afdb4c0d377f1.def("z", autowig::method_decorator_020ae78fd695510f9e223dafc399f104);
    class_68fd09c657685f79b36afdb4c0d377f1.def("w", method_pointer_8a302901b4315c7e85dcce650d98b40b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68fd09c657685f79b36afdb4c0d377f1.def("w", autowig::method_decorator_8a302901b4315c7e85dcce650d98b40b);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 0 > > >();
    }

}