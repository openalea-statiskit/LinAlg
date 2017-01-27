#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a79c61c9fd915f5b9c50141e82618f75(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_4cb5af50b7df5ee7bfc6e84b53da8915(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_2232518be01654ada0f4da6c8558f768(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_54789cdf15095f7ea7df42e980c65316(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, const double  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_d7183695097b555e86f0cc6dcf06083b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, const double  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_735b281281c658a0ba56543f6dbacb50(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, const double  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_c3ac1472d98d5c2fa8347a4084545575(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > & instance, const double  & param_out)     { instance.x() = param_out; }
    void method_decorator_43d22ee6019f5121be290bfb1850569d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > & instance, const double  & param_out)     { instance.y() = param_out; }
    void method_decorator_669b6dc33f185e43ba147df250dd40f1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > & instance, const double  & param_out)     { instance.z() = param_out; }
    void method_decorator_b3e6d4e0a95a5b258a34d1375f4d5028(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > & instance, const double  & param_out)     { instance.w() = param_out; }
}


void wrapper_b405ddc3f30d5ae184b1e89ec7ba0038()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_a79c61c9fd915f5b9c50141e82618f75)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_4cb5af50b7df5ee7bfc6e84b53da8915)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::coeffRefByOuterInner;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_2232518be01654ada0f4da6c8558f768)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_54789cdf15095f7ea7df42e980c65316)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_d7183695097b555e86f0cc6dcf06083b)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::operator[];
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_735b281281c658a0ba56543f6dbacb50)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_c3ac1472d98d5c2fa8347a4084545575)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::x;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_43d22ee6019f5121be290bfb1850569d)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::y;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_669b6dc33f185e43ba147df250dd40f1)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::z;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_b3e6d4e0a95a5b258a34d1375f4d5028)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 > > > class_b405ddc3f30d5ae184b1e89ec7ba0038("_DenseCoeffsBase_b405ddc3f30d5ae184b1e89ec7ba0038", "", boost::python::no_init);
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("coeff_ref", method_pointer_a79c61c9fd915f5b9c50141e82618f75, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("coeff_ref", autowig::method_decorator_a79c61c9fd915f5b9c50141e82618f75);
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("coeff_ref_by_outer_inner", method_pointer_4cb5af50b7df5ee7bfc6e84b53da8915, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("coeff_ref_by_outer_inner", autowig::method_decorator_4cb5af50b7df5ee7bfc6e84b53da8915);
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("__call__", method_pointer_2232518be01654ada0f4da6c8558f768, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("__call__", autowig::method_decorator_2232518be01654ada0f4da6c8558f768);
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("coeff_ref", method_pointer_54789cdf15095f7ea7df42e980c65316, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("coeff_ref", autowig::method_decorator_54789cdf15095f7ea7df42e980c65316);
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("__getitem__", method_pointer_d7183695097b555e86f0cc6dcf06083b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("__getitem__", autowig::method_decorator_d7183695097b555e86f0cc6dcf06083b);
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("__call__", method_pointer_735b281281c658a0ba56543f6dbacb50, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("__call__", autowig::method_decorator_735b281281c658a0ba56543f6dbacb50);
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("x", method_pointer_c3ac1472d98d5c2fa8347a4084545575, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("x", autowig::method_decorator_c3ac1472d98d5c2fa8347a4084545575);
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("y", method_pointer_43d22ee6019f5121be290bfb1850569d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("y", autowig::method_decorator_43d22ee6019f5121be290bfb1850569d);
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("z", method_pointer_669b6dc33f185e43ba147df250dd40f1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("z", autowig::method_decorator_669b6dc33f185e43ba147df250dd40f1);
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("w", method_pointer_b3e6d4e0a95a5b258a34d1375f4d5028, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b405ddc3f30d5ae184b1e89ec7ba0038.def("w", autowig::method_decorator_b3e6d4e0a95a5b258a34d1375f4d5028);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 > > >();
    }

}