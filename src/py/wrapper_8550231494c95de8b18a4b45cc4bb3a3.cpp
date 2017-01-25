#include "_ieigen.h"


namespace autowig
{
    void method_decorator_1b6c60072ecb5c05b72b2af64c87f9e9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_00d3962bf4935fa4b91932b333445f6f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_4c7611090dfe5c87b6aba52e82fb2db5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_e243ece52a675487a36537a92f15da11(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_e9445b9757665d5aa32fc885a64b0f29(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_721a82f4faae5009a409d1c0f66d88dd(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_64956f1e04f55386902f2242c8fca8e9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > & instance, const int  & param_out)
    { instance.x() = param_out; }
    void method_decorator_5092298a9d835df5a970246ceee8ba62(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > & instance, const int  & param_out)
    { instance.y() = param_out; }
    void method_decorator_4852728fdc4e5cc68d50856311f713ce(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > & instance, const int  & param_out)
    { instance.z() = param_out; }
    void method_decorator_77496dcf3dc7545896ca8ba838b8340a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > & instance, const int  & param_out)
    { instance.w() = param_out; }
}


void wrapper_8550231494c95de8b18a4b45cc4bb3a3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_1b6c60072ecb5c05b72b2af64c87f9e9)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_00d3962bf4935fa4b91932b333445f6f)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::coeffRefByOuterInner;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_4c7611090dfe5c87b6aba52e82fb2db5)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_e243ece52a675487a36537a92f15da11)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_e9445b9757665d5aa32fc885a64b0f29)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::operator[];
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_721a82f4faae5009a409d1c0f66d88dd)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_64956f1e04f55386902f2242c8fca8e9)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::x;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_5092298a9d835df5a970246ceee8ba62)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::y;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_4852728fdc4e5cc68d50856311f713ce)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::z;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_77496dcf3dc7545896ca8ba838b8340a)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 > > > class_8550231494c95de8b18a4b45cc4bb3a3("_DenseCoeffsBase_8550231494c95de8b18a4b45cc4bb3a3", "", boost::python::no_init);
    class_8550231494c95de8b18a4b45cc4bb3a3.def("coeff_ref", method_pointer_1b6c60072ecb5c05b72b2af64c87f9e9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8550231494c95de8b18a4b45cc4bb3a3.def("coeff_ref", autowig::method_decorator_1b6c60072ecb5c05b72b2af64c87f9e9);
    class_8550231494c95de8b18a4b45cc4bb3a3.def("coeff_ref_by_outer_inner", method_pointer_00d3962bf4935fa4b91932b333445f6f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8550231494c95de8b18a4b45cc4bb3a3.def("coeff_ref_by_outer_inner", autowig::method_decorator_00d3962bf4935fa4b91932b333445f6f);
    class_8550231494c95de8b18a4b45cc4bb3a3.def("__call__", method_pointer_4c7611090dfe5c87b6aba52e82fb2db5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8550231494c95de8b18a4b45cc4bb3a3.def("__call__", autowig::method_decorator_4c7611090dfe5c87b6aba52e82fb2db5);
    class_8550231494c95de8b18a4b45cc4bb3a3.def("coeff_ref", method_pointer_e243ece52a675487a36537a92f15da11, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8550231494c95de8b18a4b45cc4bb3a3.def("coeff_ref", autowig::method_decorator_e243ece52a675487a36537a92f15da11);
    class_8550231494c95de8b18a4b45cc4bb3a3.def("__getitem__", method_pointer_e9445b9757665d5aa32fc885a64b0f29, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8550231494c95de8b18a4b45cc4bb3a3.def("__getitem__", autowig::method_decorator_e9445b9757665d5aa32fc885a64b0f29);
    class_8550231494c95de8b18a4b45cc4bb3a3.def("__call__", method_pointer_721a82f4faae5009a409d1c0f66d88dd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8550231494c95de8b18a4b45cc4bb3a3.def("__call__", autowig::method_decorator_721a82f4faae5009a409d1c0f66d88dd);
    class_8550231494c95de8b18a4b45cc4bb3a3.def("x", method_pointer_64956f1e04f55386902f2242c8fca8e9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8550231494c95de8b18a4b45cc4bb3a3.def("x", autowig::method_decorator_64956f1e04f55386902f2242c8fca8e9);
    class_8550231494c95de8b18a4b45cc4bb3a3.def("y", method_pointer_5092298a9d835df5a970246ceee8ba62, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8550231494c95de8b18a4b45cc4bb3a3.def("y", autowig::method_decorator_5092298a9d835df5a970246ceee8ba62);
    class_8550231494c95de8b18a4b45cc4bb3a3.def("z", method_pointer_4852728fdc4e5cc68d50856311f713ce, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8550231494c95de8b18a4b45cc4bb3a3.def("z", autowig::method_decorator_4852728fdc4e5cc68d50856311f713ce);
    class_8550231494c95de8b18a4b45cc4bb3a3.def("w", method_pointer_77496dcf3dc7545896ca8ba838b8340a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8550231494c95de8b18a4b45cc4bb3a3.def("w", autowig::method_decorator_77496dcf3dc7545896ca8ba838b8340a);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 0 > > >();
    }

}