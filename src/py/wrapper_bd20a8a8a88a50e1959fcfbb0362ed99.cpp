#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d81faef7e5c054cf95ab4c822f0c686d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_03b5fb9b454c5653ae884a2689857791(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_f26a69d0cf3f50e8bc4533f717822fd9(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_1ef3fe2b751e5f0fb86049eb6ab8e2ef(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_2fba22a93e095c1abfe04cffa7c5045d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_286b17177983566f8234ded2d8f6d0c1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > & instance, long int  param_in_0, const float  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_b1f9f6acf5f858c1aa207a622b8c9f2b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > & instance, const float  & param_out)     { instance.x() = param_out; }
    void method_decorator_d038b712b5b259efa361e6152ccd7679(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > & instance, const float  & param_out)     { instance.y() = param_out; }
    void method_decorator_3a55e61904ab5c14853698ea5b4f9c70(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > & instance, const float  & param_out)     { instance.z() = param_out; }
    void method_decorator_97ef3277b2e057869999fbbb595424de(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > & instance, const float  & param_out)     { instance.w() = param_out; }
}


void wrapper_bd20a8a8a88a50e1959fcfbb0362ed99()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_d81faef7e5c054cf95ab4c822f0c686d)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_03b5fb9b454c5653ae884a2689857791)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::coeffRefByOuterInner;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_f26a69d0cf3f50e8bc4533f717822fd9)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_1ef3fe2b751e5f0fb86049eb6ab8e2ef)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_2fba22a93e095c1abfe04cffa7c5045d)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::operator[];
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_286b17177983566f8234ded2d8f6d0c1)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_b1f9f6acf5f858c1aa207a622b8c9f2b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::x;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_d038b712b5b259efa361e6152ccd7679)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::y;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_3a55e61904ab5c14853698ea5b4f9c70)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::z;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::*method_pointer_97ef3277b2e057869999fbbb595424de)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 > > > class_bd20a8a8a88a50e1959fcfbb0362ed99("_DenseCoeffsBase_bd20a8a8a88a50e1959fcfbb0362ed99", "", boost::python::no_init);
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("coeff_ref", method_pointer_d81faef7e5c054cf95ab4c822f0c686d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("coeff_ref", autowig::method_decorator_d81faef7e5c054cf95ab4c822f0c686d);
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("coeff_ref_by_outer_inner", method_pointer_03b5fb9b454c5653ae884a2689857791, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("coeff_ref_by_outer_inner", autowig::method_decorator_03b5fb9b454c5653ae884a2689857791);
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("__call__", method_pointer_f26a69d0cf3f50e8bc4533f717822fd9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("__call__", autowig::method_decorator_f26a69d0cf3f50e8bc4533f717822fd9);
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("coeff_ref", method_pointer_1ef3fe2b751e5f0fb86049eb6ab8e2ef, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("coeff_ref", autowig::method_decorator_1ef3fe2b751e5f0fb86049eb6ab8e2ef);
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("__getitem__", method_pointer_2fba22a93e095c1abfe04cffa7c5045d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("__getitem__", autowig::method_decorator_2fba22a93e095c1abfe04cffa7c5045d);
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("__call__", method_pointer_286b17177983566f8234ded2d8f6d0c1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("__call__", autowig::method_decorator_286b17177983566f8234ded2d8f6d0c1);
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("x", method_pointer_b1f9f6acf5f858c1aa207a622b8c9f2b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("x", autowig::method_decorator_b1f9f6acf5f858c1aa207a622b8c9f2b);
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("y", method_pointer_d038b712b5b259efa361e6152ccd7679, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("y", autowig::method_decorator_d038b712b5b259efa361e6152ccd7679);
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("z", method_pointer_3a55e61904ab5c14853698ea5b4f9c70, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("z", autowig::method_decorator_3a55e61904ab5c14853698ea5b4f9c70);
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("w", method_pointer_97ef3277b2e057869999fbbb595424de, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bd20a8a8a88a50e1959fcfbb0362ed99.def("w", autowig::method_decorator_97ef3277b2e057869999fbbb595424de);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 > > >();
    }

}