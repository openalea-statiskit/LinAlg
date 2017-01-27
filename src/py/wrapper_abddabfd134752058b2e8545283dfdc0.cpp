#include "_ieigen.h"


namespace autowig
{
    void method_decorator_1e3a099449245056ba5f6caedf6fde7e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_f881e70b6f6f55ad8616e7309f769bfe(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_18ac1e19a2645551ae42abf219813413(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_991fe9c3d5ec5e13acf832af9f252010(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, const int  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_25c913a0f49d5ffa9ead7cd96480a64a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, const int  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_5ad6ff5dd890563783a644cb61086fec(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, const int  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_5d09f69c5b295e0289f41471d759db13(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > & instance, const int  & param_out)     { instance.x() = param_out; }
    void method_decorator_cd0d2a3ceb8b53c6995a5800891d760a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > & instance, const int  & param_out)     { instance.y() = param_out; }
    void method_decorator_e9025ec3fcbe527a9b88d3039919f8ed(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > & instance, const int  & param_out)     { instance.z() = param_out; }
// TODO     void method_decorator_0793670c02be5953b5b4faa7a5cf2928(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > & instance, const int  & param_out)     { instance.w() = param_out; }
}


void wrapper_abddabfd134752058b2e8545283dfdc0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_1e3a099449245056ba5f6caedf6fde7e)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_f881e70b6f6f55ad8616e7309f769bfe)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::coeffRefByOuterInner;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_18ac1e19a2645551ae42abf219813413)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_991fe9c3d5ec5e13acf832af9f252010)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_25c913a0f49d5ffa9ead7cd96480a64a)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::operator[];
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_5ad6ff5dd890563783a644cb61086fec)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_5d09f69c5b295e0289f41471d759db13)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::x;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_cd0d2a3ceb8b53c6995a5800891d760a)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::y;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_e9025ec3fcbe527a9b88d3039919f8ed)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::z;
// TODO // TODO     int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_0793670c02be5953b5b4faa7a5cf2928)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 > > > class_abddabfd134752058b2e8545283dfdc0("_DenseCoeffsBase_abddabfd134752058b2e8545283dfdc0", "", boost::python::no_init);
    class_abddabfd134752058b2e8545283dfdc0.def("coeff_ref", method_pointer_1e3a099449245056ba5f6caedf6fde7e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_abddabfd134752058b2e8545283dfdc0.def("coeff_ref", autowig::method_decorator_1e3a099449245056ba5f6caedf6fde7e);
    class_abddabfd134752058b2e8545283dfdc0.def("coeff_ref_by_outer_inner", method_pointer_f881e70b6f6f55ad8616e7309f769bfe, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_abddabfd134752058b2e8545283dfdc0.def("coeff_ref_by_outer_inner", autowig::method_decorator_f881e70b6f6f55ad8616e7309f769bfe);
    class_abddabfd134752058b2e8545283dfdc0.def("__call__", method_pointer_18ac1e19a2645551ae42abf219813413, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_abddabfd134752058b2e8545283dfdc0.def("__call__", autowig::method_decorator_18ac1e19a2645551ae42abf219813413);
    class_abddabfd134752058b2e8545283dfdc0.def("coeff_ref", method_pointer_991fe9c3d5ec5e13acf832af9f252010, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_abddabfd134752058b2e8545283dfdc0.def("coeff_ref", autowig::method_decorator_991fe9c3d5ec5e13acf832af9f252010);
    class_abddabfd134752058b2e8545283dfdc0.def("__getitem__", method_pointer_25c913a0f49d5ffa9ead7cd96480a64a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_abddabfd134752058b2e8545283dfdc0.def("__getitem__", autowig::method_decorator_25c913a0f49d5ffa9ead7cd96480a64a);
    class_abddabfd134752058b2e8545283dfdc0.def("__call__", method_pointer_5ad6ff5dd890563783a644cb61086fec, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_abddabfd134752058b2e8545283dfdc0.def("__call__", autowig::method_decorator_5ad6ff5dd890563783a644cb61086fec);
    class_abddabfd134752058b2e8545283dfdc0.def("x", method_pointer_5d09f69c5b295e0289f41471d759db13, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_abddabfd134752058b2e8545283dfdc0.def("x", autowig::method_decorator_5d09f69c5b295e0289f41471d759db13);
    class_abddabfd134752058b2e8545283dfdc0.def("y", method_pointer_cd0d2a3ceb8b53c6995a5800891d760a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_abddabfd134752058b2e8545283dfdc0.def("y", autowig::method_decorator_cd0d2a3ceb8b53c6995a5800891d760a);
    class_abddabfd134752058b2e8545283dfdc0.def("z", method_pointer_e9025ec3fcbe527a9b88d3039919f8ed, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_abddabfd134752058b2e8545283dfdc0.def("z", autowig::method_decorator_e9025ec3fcbe527a9b88d3039919f8ed);
// TODO // TODO     class_abddabfd134752058b2e8545283dfdc0.def("w", method_pointer_0793670c02be5953b5b4faa7a5cf2928, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO // TODO     class_abddabfd134752058b2e8545283dfdc0.def("w", autowig::method_decorator_0793670c02be5953b5b4faa7a5cf2928);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 0 > > >();
    }

}