#include "_ieigen.h"


namespace autowig
{
    void method_decorator_745a1a8039ba5a1982214477436c1df5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_7c005206eda65d8c8d75974e577d968a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_d4a25eb6f5ec5227b2847bcd0bd508f4(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_e406f2d22b6851beb43db514df5a0279(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_3f271706776d51afa8249a979bd987e1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_d0ab95781b0a56e28b353b50c5b5809e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_b8f62db15dae5d0da4a82629bc2fe8a0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > & instance, const double  & param_out)
    { instance.x() = param_out; }
    void method_decorator_6ac00b6394f25bfe9fa6594555e7e50b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > & instance, const double  & param_out)
    { instance.y() = param_out; }
    void method_decorator_d66e6ecd7ebe5ef6a3e6345621c6c14f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > & instance, const double  & param_out)
    { instance.z() = param_out; }
    void method_decorator_69355dddc75f56c5a94961b244336e61(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > & instance, const double  & param_out)
    { instance.w() = param_out; }
}


void wrapper_2e5a88c881bc56efa05ba751349ab738()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_745a1a8039ba5a1982214477436c1df5)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_7c005206eda65d8c8d75974e577d968a)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::coeffRefByOuterInner;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_d4a25eb6f5ec5227b2847bcd0bd508f4)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_e406f2d22b6851beb43db514df5a0279)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_3f271706776d51afa8249a979bd987e1)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::operator[];
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_d0ab95781b0a56e28b353b50c5b5809e)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_b8f62db15dae5d0da4a82629bc2fe8a0)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::x;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_6ac00b6394f25bfe9fa6594555e7e50b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::y;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_d66e6ecd7ebe5ef6a3e6345621c6c14f)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::z;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_69355dddc75f56c5a94961b244336e61)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 > > > class_2e5a88c881bc56efa05ba751349ab738("_DenseCoeffsBase_2e5a88c881bc56efa05ba751349ab738", "", boost::python::no_init);
    class_2e5a88c881bc56efa05ba751349ab738.def("coeff_ref", method_pointer_745a1a8039ba5a1982214477436c1df5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e5a88c881bc56efa05ba751349ab738.def("coeff_ref", autowig::method_decorator_745a1a8039ba5a1982214477436c1df5);
    class_2e5a88c881bc56efa05ba751349ab738.def("coeff_ref_by_outer_inner", method_pointer_7c005206eda65d8c8d75974e577d968a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e5a88c881bc56efa05ba751349ab738.def("coeff_ref_by_outer_inner", autowig::method_decorator_7c005206eda65d8c8d75974e577d968a);
    class_2e5a88c881bc56efa05ba751349ab738.def("__call__", method_pointer_d4a25eb6f5ec5227b2847bcd0bd508f4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e5a88c881bc56efa05ba751349ab738.def("__call__", autowig::method_decorator_d4a25eb6f5ec5227b2847bcd0bd508f4);
    class_2e5a88c881bc56efa05ba751349ab738.def("coeff_ref", method_pointer_e406f2d22b6851beb43db514df5a0279, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e5a88c881bc56efa05ba751349ab738.def("coeff_ref", autowig::method_decorator_e406f2d22b6851beb43db514df5a0279);
    class_2e5a88c881bc56efa05ba751349ab738.def("__getitem__", method_pointer_3f271706776d51afa8249a979bd987e1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e5a88c881bc56efa05ba751349ab738.def("__getitem__", autowig::method_decorator_3f271706776d51afa8249a979bd987e1);
    class_2e5a88c881bc56efa05ba751349ab738.def("__call__", method_pointer_d0ab95781b0a56e28b353b50c5b5809e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e5a88c881bc56efa05ba751349ab738.def("__call__", autowig::method_decorator_d0ab95781b0a56e28b353b50c5b5809e);
    class_2e5a88c881bc56efa05ba751349ab738.def("x", method_pointer_b8f62db15dae5d0da4a82629bc2fe8a0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e5a88c881bc56efa05ba751349ab738.def("x", autowig::method_decorator_b8f62db15dae5d0da4a82629bc2fe8a0);
    class_2e5a88c881bc56efa05ba751349ab738.def("y", method_pointer_6ac00b6394f25bfe9fa6594555e7e50b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e5a88c881bc56efa05ba751349ab738.def("y", autowig::method_decorator_6ac00b6394f25bfe9fa6594555e7e50b);
    class_2e5a88c881bc56efa05ba751349ab738.def("z", method_pointer_d66e6ecd7ebe5ef6a3e6345621c6c14f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e5a88c881bc56efa05ba751349ab738.def("z", autowig::method_decorator_d66e6ecd7ebe5ef6a3e6345621c6c14f);
    class_2e5a88c881bc56efa05ba751349ab738.def("w", method_pointer_69355dddc75f56c5a94961b244336e61, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e5a88c881bc56efa05ba751349ab738.def("w", autowig::method_decorator_69355dddc75f56c5a94961b244336e61);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 > > >();
    }

}