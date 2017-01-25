#include "_ieigen.h"


namespace autowig
{
    void method_decorator_cc3df25b841059a4ad45134367b13566(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_042f6960f30855389d2c168e283ef7e0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_01d21996d32a5f49b5a85cd86c276d1b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_1f9226ac17085fce9d459dd710296314(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_d571b9420f7453aeb94f219c3f6befaa(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_6bf0beb699155f7bafb14d8345c5da10(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > & instance, long int  param_in_0, const int  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_10c14cf0cca2506088dc92ea33ddecb8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > & instance, const int  & param_out)
    { instance.x() = param_out; }
    void method_decorator_3e199b66edc953a0ac1b7792c9f0455c(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > & instance, const int  & param_out)
    { instance.y() = param_out; }
    void method_decorator_879f624dc11e577c9c17c70cd3ad80d2(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > & instance, const int  & param_out)
    { instance.z() = param_out; }
    void method_decorator_51861e82757753ddbedf10525821e240(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > & instance, const int  & param_out)
    { instance.w() = param_out; }
}


void wrapper_ed862c1a4b065b2eb4c54642c41b5c06()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_cc3df25b841059a4ad45134367b13566)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_042f6960f30855389d2c168e283ef7e0)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::coeffRefByOuterInner;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_01d21996d32a5f49b5a85cd86c276d1b)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_1f9226ac17085fce9d459dd710296314)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_d571b9420f7453aeb94f219c3f6befaa)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::operator[];
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_6bf0beb699155f7bafb14d8345c5da10)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_10c14cf0cca2506088dc92ea33ddecb8)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::x;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_3e199b66edc953a0ac1b7792c9f0455c)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::y;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_879f624dc11e577c9c17c70cd3ad80d2)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::z;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_51861e82757753ddbedf10525821e240)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 > > > class_ed862c1a4b065b2eb4c54642c41b5c06("_DenseCoeffsBase_ed862c1a4b065b2eb4c54642c41b5c06", "", boost::python::no_init);
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("coeff_ref", method_pointer_cc3df25b841059a4ad45134367b13566, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("coeff_ref", autowig::method_decorator_cc3df25b841059a4ad45134367b13566);
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("coeff_ref_by_outer_inner", method_pointer_042f6960f30855389d2c168e283ef7e0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("coeff_ref_by_outer_inner", autowig::method_decorator_042f6960f30855389d2c168e283ef7e0);
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("__call__", method_pointer_01d21996d32a5f49b5a85cd86c276d1b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("__call__", autowig::method_decorator_01d21996d32a5f49b5a85cd86c276d1b);
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("coeff_ref", method_pointer_1f9226ac17085fce9d459dd710296314, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("coeff_ref", autowig::method_decorator_1f9226ac17085fce9d459dd710296314);
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("__getitem__", method_pointer_d571b9420f7453aeb94f219c3f6befaa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("__getitem__", autowig::method_decorator_d571b9420f7453aeb94f219c3f6befaa);
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("__call__", method_pointer_6bf0beb699155f7bafb14d8345c5da10, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("__call__", autowig::method_decorator_6bf0beb699155f7bafb14d8345c5da10);
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("x", method_pointer_10c14cf0cca2506088dc92ea33ddecb8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("x", autowig::method_decorator_10c14cf0cca2506088dc92ea33ddecb8);
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("y", method_pointer_3e199b66edc953a0ac1b7792c9f0455c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("y", autowig::method_decorator_3e199b66edc953a0ac1b7792c9f0455c);
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("z", method_pointer_879f624dc11e577c9c17c70cd3ad80d2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("z", autowig::method_decorator_879f624dc11e577c9c17c70cd3ad80d2);
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("w", method_pointer_51861e82757753ddbedf10525821e240, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed862c1a4b065b2eb4c54642c41b5c06.def("w", autowig::method_decorator_51861e82757753ddbedf10525821e240);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 0 > > >();
    }

}