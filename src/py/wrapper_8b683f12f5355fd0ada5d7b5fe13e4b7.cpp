#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b3a686cd99b558a2a8d28751d7858b7b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_c84ddb15319550dd9c1054335b554702(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_a14fbf27ef015552b3f221b58e2b3651(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_9d635b372dab5cdf94bbdcee562263d9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_632ab844b62058cf84729e7ab9e8daaf(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_162fcffa7e0b54f2ae88cef7fa32442a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_54bc1fc8df8a5e9ca73a1a66a4a464fa(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > & instance, const int  & param_out)
    { instance.x() = param_out; }
    void method_decorator_5a348237d741551d8e382c935dd33092(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > & instance, const int  & param_out)
    { instance.y() = param_out; }
    void method_decorator_adc5a9f8e8db5de3929177c53b7f3f33(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > & instance, const int  & param_out)
    { instance.z() = param_out; }
    void method_decorator_00536df441235509b53e4f9ea593192e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > & instance, const int  & param_out)
    { instance.w() = param_out; }
}


void wrapper_8b683f12f5355fd0ada5d7b5fe13e4b7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_b3a686cd99b558a2a8d28751d7858b7b)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_c84ddb15319550dd9c1054335b554702)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::coeffRefByOuterInner;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_a14fbf27ef015552b3f221b58e2b3651)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_9d635b372dab5cdf94bbdcee562263d9)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_632ab844b62058cf84729e7ab9e8daaf)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::operator[];
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_162fcffa7e0b54f2ae88cef7fa32442a)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_54bc1fc8df8a5e9ca73a1a66a4a464fa)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::x;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_5a348237d741551d8e382c935dd33092)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::y;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_adc5a9f8e8db5de3929177c53b7f3f33)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::z;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_00536df441235509b53e4f9ea593192e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 > > > class_8b683f12f5355fd0ada5d7b5fe13e4b7("_DenseCoeffsBase_8b683f12f5355fd0ada5d7b5fe13e4b7", "", boost::python::no_init);
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("coeff_ref", method_pointer_b3a686cd99b558a2a8d28751d7858b7b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("coeff_ref", autowig::method_decorator_b3a686cd99b558a2a8d28751d7858b7b);
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("coeff_ref_by_outer_inner", method_pointer_c84ddb15319550dd9c1054335b554702, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("coeff_ref_by_outer_inner", autowig::method_decorator_c84ddb15319550dd9c1054335b554702);
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("__call__", method_pointer_a14fbf27ef015552b3f221b58e2b3651, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("__call__", autowig::method_decorator_a14fbf27ef015552b3f221b58e2b3651);
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("coeff_ref", method_pointer_9d635b372dab5cdf94bbdcee562263d9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("coeff_ref", autowig::method_decorator_9d635b372dab5cdf94bbdcee562263d9);
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("__getitem__", method_pointer_632ab844b62058cf84729e7ab9e8daaf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("__getitem__", autowig::method_decorator_632ab844b62058cf84729e7ab9e8daaf);
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("__call__", method_pointer_162fcffa7e0b54f2ae88cef7fa32442a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("__call__", autowig::method_decorator_162fcffa7e0b54f2ae88cef7fa32442a);
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("x", method_pointer_54bc1fc8df8a5e9ca73a1a66a4a464fa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("x", autowig::method_decorator_54bc1fc8df8a5e9ca73a1a66a4a464fa);
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("y", method_pointer_5a348237d741551d8e382c935dd33092, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("y", autowig::method_decorator_5a348237d741551d8e382c935dd33092);
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("z", method_pointer_adc5a9f8e8db5de3929177c53b7f3f33, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("z", autowig::method_decorator_adc5a9f8e8db5de3929177c53b7f3f33);
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("w", method_pointer_00536df441235509b53e4f9ea593192e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b683f12f5355fd0ada5d7b5fe13e4b7.def("w", autowig::method_decorator_00536df441235509b53e4f9ea593192e);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 > > >();
    }

}