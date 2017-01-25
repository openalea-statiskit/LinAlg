#include "_ieigen.h"


namespace autowig
{
    void method_decorator_25970ce1bc1b54cdb583f2b9bc095e02(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_4192cc93a4365abe9555f5cbeb0a36d7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_3f594ef3d01651ed8f0239579d76d592(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_06ed4b8c43a75647a56df8610547069f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_57a7b46550215933a66d5a02c999fecd(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_60c7795fa0f655c295b45bb6bcb40e36(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_49cc68b0c71c54e497d6b55dda723fdf(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > & instance, const float  & param_out)
    { instance.x() = param_out; }
    void method_decorator_c01fdba06e5c51edb660d284b1265fcd(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > & instance, const float  & param_out)
    { instance.y() = param_out; }
    void method_decorator_edff52844dac5472985e56e64d475763(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > & instance, const float  & param_out)
    { instance.z() = param_out; }
    void method_decorator_e1db930c5473512199a96bdcb6219a90(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > & instance, const float  & param_out)
    { instance.w() = param_out; }
}


void wrapper_dfa4576de6ff51ab82791b540532d38c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_25970ce1bc1b54cdb583f2b9bc095e02)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_4192cc93a4365abe9555f5cbeb0a36d7)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::coeffRefByOuterInner;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_3f594ef3d01651ed8f0239579d76d592)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_06ed4b8c43a75647a56df8610547069f)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_57a7b46550215933a66d5a02c999fecd)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::operator[];
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_60c7795fa0f655c295b45bb6bcb40e36)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_49cc68b0c71c54e497d6b55dda723fdf)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::x;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_c01fdba06e5c51edb660d284b1265fcd)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::y;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_edff52844dac5472985e56e64d475763)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::z;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_e1db930c5473512199a96bdcb6219a90)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 > > > class_dfa4576de6ff51ab82791b540532d38c("_DenseCoeffsBase_dfa4576de6ff51ab82791b540532d38c", "", boost::python::no_init);
    class_dfa4576de6ff51ab82791b540532d38c.def("coeff_ref", method_pointer_25970ce1bc1b54cdb583f2b9bc095e02, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dfa4576de6ff51ab82791b540532d38c.def("coeff_ref", autowig::method_decorator_25970ce1bc1b54cdb583f2b9bc095e02);
    class_dfa4576de6ff51ab82791b540532d38c.def("coeff_ref_by_outer_inner", method_pointer_4192cc93a4365abe9555f5cbeb0a36d7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dfa4576de6ff51ab82791b540532d38c.def("coeff_ref_by_outer_inner", autowig::method_decorator_4192cc93a4365abe9555f5cbeb0a36d7);
    class_dfa4576de6ff51ab82791b540532d38c.def("__call__", method_pointer_3f594ef3d01651ed8f0239579d76d592, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dfa4576de6ff51ab82791b540532d38c.def("__call__", autowig::method_decorator_3f594ef3d01651ed8f0239579d76d592);
    class_dfa4576de6ff51ab82791b540532d38c.def("coeff_ref", method_pointer_06ed4b8c43a75647a56df8610547069f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dfa4576de6ff51ab82791b540532d38c.def("coeff_ref", autowig::method_decorator_06ed4b8c43a75647a56df8610547069f);
    class_dfa4576de6ff51ab82791b540532d38c.def("__getitem__", method_pointer_57a7b46550215933a66d5a02c999fecd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dfa4576de6ff51ab82791b540532d38c.def("__getitem__", autowig::method_decorator_57a7b46550215933a66d5a02c999fecd);
    class_dfa4576de6ff51ab82791b540532d38c.def("__call__", method_pointer_60c7795fa0f655c295b45bb6bcb40e36, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dfa4576de6ff51ab82791b540532d38c.def("__call__", autowig::method_decorator_60c7795fa0f655c295b45bb6bcb40e36);
    class_dfa4576de6ff51ab82791b540532d38c.def("x", method_pointer_49cc68b0c71c54e497d6b55dda723fdf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dfa4576de6ff51ab82791b540532d38c.def("x", autowig::method_decorator_49cc68b0c71c54e497d6b55dda723fdf);
    class_dfa4576de6ff51ab82791b540532d38c.def("y", method_pointer_c01fdba06e5c51edb660d284b1265fcd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dfa4576de6ff51ab82791b540532d38c.def("y", autowig::method_decorator_c01fdba06e5c51edb660d284b1265fcd);
    class_dfa4576de6ff51ab82791b540532d38c.def("z", method_pointer_edff52844dac5472985e56e64d475763, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dfa4576de6ff51ab82791b540532d38c.def("z", autowig::method_decorator_edff52844dac5472985e56e64d475763);
    class_dfa4576de6ff51ab82791b540532d38c.def("w", method_pointer_e1db930c5473512199a96bdcb6219a90, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dfa4576de6ff51ab82791b540532d38c.def("w", autowig::method_decorator_e1db930c5473512199a96bdcb6219a90);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 > > >();
    }

}