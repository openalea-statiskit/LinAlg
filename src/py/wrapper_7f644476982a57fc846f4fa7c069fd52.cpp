#include "_ieigen.h"


namespace autowig
{
    void method_decorator_496e83f34b205f2ca63d76a02af2b74a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_51e239d641cc5be8bdd7b120e99c76f8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_2099630f98ff50f388d28e95c3a7c5ba(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_2254246238155820bcd7e574aee77db9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_3bd7f117ff8f5553a24c8e16b0130456(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_21cd7e2e13105a8887cde596ed050abc(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_e29e6baf6b1a59d8953b86aedf6d83e1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > & instance, const float  & param_out)     { instance.x() = param_out; }
    void method_decorator_8b047002e70e51c898fb32278169f95d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > & instance, const float  & param_out)     { instance.y() = param_out; }
    void method_decorator_4893967998895334b63a4ea6c75445b2(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > & instance, const float  & param_out)     { instance.z() = param_out; }
    void method_decorator_c4ee0ae31edb560fb0b9fb06723b2ad9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > & instance, const float  & param_out)     { instance.w() = param_out; }
}


void wrapper_7f644476982a57fc846f4fa7c069fd52()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_496e83f34b205f2ca63d76a02af2b74a)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_51e239d641cc5be8bdd7b120e99c76f8)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::coeffRefByOuterInner;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_2099630f98ff50f388d28e95c3a7c5ba)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_2254246238155820bcd7e574aee77db9)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_3bd7f117ff8f5553a24c8e16b0130456)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::operator[];
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_21cd7e2e13105a8887cde596ed050abc)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_e29e6baf6b1a59d8953b86aedf6d83e1)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::x;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_8b047002e70e51c898fb32278169f95d)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::y;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_4893967998895334b63a4ea6c75445b2)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::z;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::*method_pointer_c4ee0ae31edb560fb0b9fb06723b2ad9)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 > > > class_7f644476982a57fc846f4fa7c069fd52("_DenseCoeffsBase_7f644476982a57fc846f4fa7c069fd52", "", boost::python::no_init);
    class_7f644476982a57fc846f4fa7c069fd52.def("coeff_ref", method_pointer_496e83f34b205f2ca63d76a02af2b74a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7f644476982a57fc846f4fa7c069fd52.def("coeff_ref", autowig::method_decorator_496e83f34b205f2ca63d76a02af2b74a);
    class_7f644476982a57fc846f4fa7c069fd52.def("coeff_ref_by_outer_inner", method_pointer_51e239d641cc5be8bdd7b120e99c76f8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7f644476982a57fc846f4fa7c069fd52.def("coeff_ref_by_outer_inner", autowig::method_decorator_51e239d641cc5be8bdd7b120e99c76f8);
    class_7f644476982a57fc846f4fa7c069fd52.def("__call__", method_pointer_2099630f98ff50f388d28e95c3a7c5ba, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7f644476982a57fc846f4fa7c069fd52.def("__call__", autowig::method_decorator_2099630f98ff50f388d28e95c3a7c5ba);
    class_7f644476982a57fc846f4fa7c069fd52.def("coeff_ref", method_pointer_2254246238155820bcd7e574aee77db9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7f644476982a57fc846f4fa7c069fd52.def("coeff_ref", autowig::method_decorator_2254246238155820bcd7e574aee77db9);
    class_7f644476982a57fc846f4fa7c069fd52.def("__getitem__", method_pointer_3bd7f117ff8f5553a24c8e16b0130456, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7f644476982a57fc846f4fa7c069fd52.def("__getitem__", autowig::method_decorator_3bd7f117ff8f5553a24c8e16b0130456);
    class_7f644476982a57fc846f4fa7c069fd52.def("__call__", method_pointer_21cd7e2e13105a8887cde596ed050abc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7f644476982a57fc846f4fa7c069fd52.def("__call__", autowig::method_decorator_21cd7e2e13105a8887cde596ed050abc);
    class_7f644476982a57fc846f4fa7c069fd52.def("x", method_pointer_e29e6baf6b1a59d8953b86aedf6d83e1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7f644476982a57fc846f4fa7c069fd52.def("x", autowig::method_decorator_e29e6baf6b1a59d8953b86aedf6d83e1);
    class_7f644476982a57fc846f4fa7c069fd52.def("y", method_pointer_8b047002e70e51c898fb32278169f95d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7f644476982a57fc846f4fa7c069fd52.def("y", autowig::method_decorator_8b047002e70e51c898fb32278169f95d);
    class_7f644476982a57fc846f4fa7c069fd52.def("z", method_pointer_4893967998895334b63a4ea6c75445b2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7f644476982a57fc846f4fa7c069fd52.def("z", autowig::method_decorator_4893967998895334b63a4ea6c75445b2);
    class_7f644476982a57fc846f4fa7c069fd52.def("w", method_pointer_c4ee0ae31edb560fb0b9fb06723b2ad9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7f644476982a57fc846f4fa7c069fd52.def("w", autowig::method_decorator_c4ee0ae31edb560fb0b9fb06723b2ad9);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 > > >();
    }

}