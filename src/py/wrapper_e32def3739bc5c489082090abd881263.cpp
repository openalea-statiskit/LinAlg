#include "_ieigen.h"


namespace autowig
{
    void method_decorator_652a875818115fd3a2b42f0813ccf239(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_99fc655f2b195260a8f20b763dfe96e8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_c8107219d86352999278289cbbda42fc(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_0ebf25c8f2525af0884f0f715c5240b5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_98b14e304fd95672a79ceda5ea8396e8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_b0c600bab4915e2fb5d29174274f056a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_fc0efdc63863552bb87621fde17fd10a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > & instance, const int  & param_out)
    { instance.x() = param_out; }
    void method_decorator_60a045a1486751c1ab58a6aee964df46(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > & instance, const int  & param_out)
    { instance.y() = param_out; }
    void method_decorator_719059ba4b2c5795b55cc86d065fff9b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > & instance, const int  & param_out)
    { instance.z() = param_out; }
    void method_decorator_fc78b5e7e2b15ddaaa4e01018e6620e0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > & instance, const int  & param_out)
    { instance.w() = param_out; }
}


void wrapper_e32def3739bc5c489082090abd881263()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_652a875818115fd3a2b42f0813ccf239)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_99fc655f2b195260a8f20b763dfe96e8)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::coeffRefByOuterInner;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_c8107219d86352999278289cbbda42fc)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_0ebf25c8f2525af0884f0f715c5240b5)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_98b14e304fd95672a79ceda5ea8396e8)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::operator[];
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_b0c600bab4915e2fb5d29174274f056a)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_fc0efdc63863552bb87621fde17fd10a)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::x;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_60a045a1486751c1ab58a6aee964df46)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::y;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_719059ba4b2c5795b55cc86d065fff9b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::z;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_fc78b5e7e2b15ddaaa4e01018e6620e0)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 > > > class_e32def3739bc5c489082090abd881263("_DenseCoeffsBase_e32def3739bc5c489082090abd881263", "", boost::python::no_init);
    class_e32def3739bc5c489082090abd881263.def("coeff_ref", method_pointer_652a875818115fd3a2b42f0813ccf239, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e32def3739bc5c489082090abd881263.def("coeff_ref", autowig::method_decorator_652a875818115fd3a2b42f0813ccf239);
    class_e32def3739bc5c489082090abd881263.def("coeff_ref_by_outer_inner", method_pointer_99fc655f2b195260a8f20b763dfe96e8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e32def3739bc5c489082090abd881263.def("coeff_ref_by_outer_inner", autowig::method_decorator_99fc655f2b195260a8f20b763dfe96e8);
    class_e32def3739bc5c489082090abd881263.def("__call__", method_pointer_c8107219d86352999278289cbbda42fc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e32def3739bc5c489082090abd881263.def("__call__", autowig::method_decorator_c8107219d86352999278289cbbda42fc);
    class_e32def3739bc5c489082090abd881263.def("coeff_ref", method_pointer_0ebf25c8f2525af0884f0f715c5240b5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e32def3739bc5c489082090abd881263.def("coeff_ref", autowig::method_decorator_0ebf25c8f2525af0884f0f715c5240b5);
    class_e32def3739bc5c489082090abd881263.def("__getitem__", method_pointer_98b14e304fd95672a79ceda5ea8396e8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e32def3739bc5c489082090abd881263.def("__getitem__", autowig::method_decorator_98b14e304fd95672a79ceda5ea8396e8);
    class_e32def3739bc5c489082090abd881263.def("__call__", method_pointer_b0c600bab4915e2fb5d29174274f056a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e32def3739bc5c489082090abd881263.def("__call__", autowig::method_decorator_b0c600bab4915e2fb5d29174274f056a);
    class_e32def3739bc5c489082090abd881263.def("x", method_pointer_fc0efdc63863552bb87621fde17fd10a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e32def3739bc5c489082090abd881263.def("x", autowig::method_decorator_fc0efdc63863552bb87621fde17fd10a);
    class_e32def3739bc5c489082090abd881263.def("y", method_pointer_60a045a1486751c1ab58a6aee964df46, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e32def3739bc5c489082090abd881263.def("y", autowig::method_decorator_60a045a1486751c1ab58a6aee964df46);
    class_e32def3739bc5c489082090abd881263.def("z", method_pointer_719059ba4b2c5795b55cc86d065fff9b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e32def3739bc5c489082090abd881263.def("z", autowig::method_decorator_719059ba4b2c5795b55cc86d065fff9b);
    class_e32def3739bc5c489082090abd881263.def("w", method_pointer_fc78b5e7e2b15ddaaa4e01018e6620e0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e32def3739bc5c489082090abd881263.def("w", autowig::method_decorator_fc78b5e7e2b15ddaaa4e01018e6620e0);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 > > >();
    }

}