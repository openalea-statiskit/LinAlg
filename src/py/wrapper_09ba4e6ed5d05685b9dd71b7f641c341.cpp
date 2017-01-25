#include "_ieigen.h"


namespace autowig
{
    void method_decorator_7f30c54031ec5662b986eb874f2ab238(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_888b372c3cc75b97b98984e81264fdfc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_dcb8fffe9c005cec826e4081ae1aec41(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, const float  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_dc93911c7e475b23b7826adef1b2a1be(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_950177518a6959ba85a29fd74bf7e2e3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_7ec04363595f581893659b9c8cefd673(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_6493b86c7e535a7495a1ed2041208b81(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_eeb0bd5689b35e15b964e37e531ab7d2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_7225a793d8f0528a9f1b5cb8ec2a1a27(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_e79a9c47bcfa5ebda531fc355d9b8796(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_231def8f5a005a36bb27830f4ae0ee43(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_09ba4e6ed5d05685b9dd71b7f641c341()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_7f30c54031ec5662b986eb874f2ab238)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_770af92e8eff5a348d251c59be703171)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_afa95a633da35611b6f4ac7c28aead82)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_4ccef4bdb2bc5e22addf5d15eb5efc38)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::cols;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_8c647e06df835d1a99867728f357b70a)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::coeff;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_88229190fc9659b2b4e7bf05027af018)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::coeff;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_888b372c3cc75b97b98984e81264fdfc)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::coeffRef;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_dcb8fffe9c005cec826e4081ae1aec41)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_83725c48254e5e99822202db9a9ddee6)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_8ba7540be3ed5828bf093bb7d1dc6b43)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_1e98dd61b8ed59f0ae1d014aac35b9d2)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_f7a28c900a3e526297776caf39abb22e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_f20d4d06f8fb5c55879842e3f27e9069)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_b0b3736376115d8bbd78e995e270137b)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_560d9a9c679059aeb51bea3fa4a478ef)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_3539e7576793593abd81b2091c9bc735)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_28115e05aedc5bbb8660d51f9c7ac3b8)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_ea56f50c946d5e16951a9826d34dc2ef)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::conservativeResize;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_dc93911c7e475b23b7826adef1b2a1be)(long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_950177518a6959ba85a29fd74bf7e2e3)(long int , long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_7ec04363595f581893659b9c8cefd673)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_6493b86c7e535a7495a1ed2041208b81)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_eeb0bd5689b35e15b964e37e531ab7d2)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_7225a793d8f0528a9f1b5cb8ec2a1a27)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_e79a9c47bcfa5ebda531fc355d9b8796)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setRandom;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_231def8f5a005a36bb27830f4ae0ee43)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setRandom;
    void  (*method_pointer_52756f731e0454e2a2a80aa6d11a07b8)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > > > class_09ba4e6ed5d05685b9dd71b7f641c341("_PlainObjectBase_09ba4e6ed5d05685b9dd71b7f641c341", "", boost::python::no_init);
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("base", method_pointer_7f30c54031ec5662b986eb874f2ab238, boost::python::return_internal_reference<>(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("base", autowig::method_decorator_7f30c54031ec5662b986eb874f2ab238);
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("base", method_pointer_770af92e8eff5a348d251c59be703171, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("rows", method_pointer_afa95a633da35611b6f4ac7c28aead82, "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("cols", method_pointer_4ccef4bdb2bc5e22addf5d15eb5efc38, "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("coeff", method_pointer_8c647e06df835d1a99867728f357b70a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("coeff", method_pointer_88229190fc9659b2b4e7bf05027af018, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("coeff_ref", method_pointer_888b372c3cc75b97b98984e81264fdfc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("coeff_ref", autowig::method_decorator_888b372c3cc75b97b98984e81264fdfc);
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("coeff_ref", method_pointer_dcb8fffe9c005cec826e4081ae1aec41, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("coeff_ref", autowig::method_decorator_dcb8fffe9c005cec826e4081ae1aec41);
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("coeff_ref", method_pointer_83725c48254e5e99822202db9a9ddee6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("coeff_ref", method_pointer_8ba7540be3ed5828bf093bb7d1dc6b43, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("resize", method_pointer_1e98dd61b8ed59f0ae1d014aac35b9d2, "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("resize", method_pointer_f7a28c900a3e526297776caf39abb22e, "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("resize", method_pointer_f20d4d06f8fb5c55879842e3f27e9069, "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("resize", method_pointer_b0b3736376115d8bbd78e995e270137b, "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("conservative_resize", method_pointer_560d9a9c679059aeb51bea3fa4a478ef, "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("conservative_resize", method_pointer_3539e7576793593abd81b2091c9bc735, "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("conservative_resize", method_pointer_28115e05aedc5bbb8660d51f9c7ac3b8, "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("conservative_resize", method_pointer_ea56f50c946d5e16951a9826d34dc2ef, "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_constant", method_pointer_dc93911c7e475b23b7826adef1b2a1be, boost::python::return_internal_reference<>(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_constant", autowig::method_decorator_dc93911c7e475b23b7826adef1b2a1be);
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_constant", method_pointer_950177518a6959ba85a29fd74bf7e2e3, boost::python::return_internal_reference<>(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_constant", autowig::method_decorator_950177518a6959ba85a29fd74bf7e2e3);
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_zero", method_pointer_7ec04363595f581893659b9c8cefd673, boost::python::return_internal_reference<>(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_zero", autowig::method_decorator_7ec04363595f581893659b9c8cefd673);
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_zero", method_pointer_6493b86c7e535a7495a1ed2041208b81, boost::python::return_internal_reference<>(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_zero", autowig::method_decorator_6493b86c7e535a7495a1ed2041208b81);
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_ones", method_pointer_eeb0bd5689b35e15b964e37e531ab7d2, boost::python::return_internal_reference<>(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_ones", autowig::method_decorator_eeb0bd5689b35e15b964e37e531ab7d2);
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_ones", method_pointer_7225a793d8f0528a9f1b5cb8ec2a1a27, boost::python::return_internal_reference<>(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_ones", autowig::method_decorator_7225a793d8f0528a9f1b5cb8ec2a1a27);
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_random", method_pointer_e79a9c47bcfa5ebda531fc355d9b8796, boost::python::return_internal_reference<>(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_random", autowig::method_decorator_e79a9c47bcfa5ebda531fc355d9b8796);
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_random", method_pointer_231def8f5a005a36bb27830f4ae0ee43, boost::python::return_internal_reference<>(), "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("set_random", autowig::method_decorator_231def8f5a005a36bb27830f4ae0ee43);
    class_09ba4e6ed5d05685b9dd71b7f641c341.def("check_template_params", method_pointer_52756f731e0454e2a2a80aa6d11a07b8, "");
    class_09ba4e6ed5d05685b9dd71b7f641c341.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > > >();
    }

}