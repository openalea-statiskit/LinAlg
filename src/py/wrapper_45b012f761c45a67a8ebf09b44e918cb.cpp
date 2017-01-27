#include "_ieigen.h"


namespace autowig
{
    void method_decorator_852e8f71b901536a864cb710c8fafde0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_5dd2b00ed728533494562b3b302494e2(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_34784e3d451f5477a453b074c0bac5d5(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_4d1835ced7a755bbb5d8bee5320f2b28(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_234651606b0e5fa7a63258dec9089cd7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_20d93cc4900a5737a078eebc30eb674a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_43c0d86b308555ba9f0c311c4607a7af(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > & instance, const float  & param_out)     { instance.x() = param_out; }
    void method_decorator_8187cb8e46ed525497a9d64e5b8d49d0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > & instance, const float  & param_out)     { instance.y() = param_out; }
    void method_decorator_cb6f64ddbb1a56a0a6ba9eb2fdba5c69(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > & instance, const float  & param_out)     { instance.z() = param_out; }
// TODO     void method_decorator_fc3ebd4ee3c35f2d89852af685d4123f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > & instance, const float  & param_out)     { instance.w() = param_out; }
}


void wrapper_45b012f761c45a67a8ebf09b44e918cb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_852e8f71b901536a864cb710c8fafde0)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_5dd2b00ed728533494562b3b302494e2)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::coeffRefByOuterInner;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_34784e3d451f5477a453b074c0bac5d5)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_4d1835ced7a755bbb5d8bee5320f2b28)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_234651606b0e5fa7a63258dec9089cd7)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::operator[];
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_20d93cc4900a5737a078eebc30eb674a)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_43c0d86b308555ba9f0c311c4607a7af)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::x;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_8187cb8e46ed525497a9d64e5b8d49d0)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::y;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_cb6f64ddbb1a56a0a6ba9eb2fdba5c69)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::z;
// TODO // TODO     float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_fc3ebd4ee3c35f2d89852af685d4123f)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 > > > class_45b012f761c45a67a8ebf09b44e918cb("_DenseCoeffsBase_45b012f761c45a67a8ebf09b44e918cb", "", boost::python::no_init);
    class_45b012f761c45a67a8ebf09b44e918cb.def("coeff_ref", method_pointer_852e8f71b901536a864cb710c8fafde0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_45b012f761c45a67a8ebf09b44e918cb.def("coeff_ref", autowig::method_decorator_852e8f71b901536a864cb710c8fafde0);
    class_45b012f761c45a67a8ebf09b44e918cb.def("coeff_ref_by_outer_inner", method_pointer_5dd2b00ed728533494562b3b302494e2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_45b012f761c45a67a8ebf09b44e918cb.def("coeff_ref_by_outer_inner", autowig::method_decorator_5dd2b00ed728533494562b3b302494e2);
    class_45b012f761c45a67a8ebf09b44e918cb.def("__call__", method_pointer_34784e3d451f5477a453b074c0bac5d5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_45b012f761c45a67a8ebf09b44e918cb.def("__call__", autowig::method_decorator_34784e3d451f5477a453b074c0bac5d5);
    class_45b012f761c45a67a8ebf09b44e918cb.def("coeff_ref", method_pointer_4d1835ced7a755bbb5d8bee5320f2b28, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_45b012f761c45a67a8ebf09b44e918cb.def("coeff_ref", autowig::method_decorator_4d1835ced7a755bbb5d8bee5320f2b28);
    class_45b012f761c45a67a8ebf09b44e918cb.def("__getitem__", method_pointer_234651606b0e5fa7a63258dec9089cd7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_45b012f761c45a67a8ebf09b44e918cb.def("__getitem__", autowig::method_decorator_234651606b0e5fa7a63258dec9089cd7);
    class_45b012f761c45a67a8ebf09b44e918cb.def("__call__", method_pointer_20d93cc4900a5737a078eebc30eb674a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_45b012f761c45a67a8ebf09b44e918cb.def("__call__", autowig::method_decorator_20d93cc4900a5737a078eebc30eb674a);
    class_45b012f761c45a67a8ebf09b44e918cb.def("x", method_pointer_43c0d86b308555ba9f0c311c4607a7af, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_45b012f761c45a67a8ebf09b44e918cb.def("x", autowig::method_decorator_43c0d86b308555ba9f0c311c4607a7af);
    class_45b012f761c45a67a8ebf09b44e918cb.def("y", method_pointer_8187cb8e46ed525497a9d64e5b8d49d0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_45b012f761c45a67a8ebf09b44e918cb.def("y", autowig::method_decorator_8187cb8e46ed525497a9d64e5b8d49d0);
    class_45b012f761c45a67a8ebf09b44e918cb.def("z", method_pointer_cb6f64ddbb1a56a0a6ba9eb2fdba5c69, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_45b012f761c45a67a8ebf09b44e918cb.def("z", autowig::method_decorator_cb6f64ddbb1a56a0a6ba9eb2fdba5c69);
// TODO // TODO     class_45b012f761c45a67a8ebf09b44e918cb.def("w", method_pointer_fc3ebd4ee3c35f2d89852af685d4123f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO // TODO     class_45b012f761c45a67a8ebf09b44e918cb.def("w", autowig::method_decorator_fc3ebd4ee3c35f2d89852af685d4123f);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 > > >();
    }

}