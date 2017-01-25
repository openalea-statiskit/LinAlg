#include "_ieigen.h"


namespace autowig
{
    void method_decorator_49ceb0cdd540587e861c4980e5008aa2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_e9ce9808dbf75971b5975fd947512998(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_f320de385452521c8c9c30afc77eedeb(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_884318b45cef56379cb0246b0e9e1b00(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_3dc2e25796185d45a0c76679dfb25043(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_f6898846e8ab5ad5848ea221cd68574e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_cfc2fb66b99e5e91a2e21995af54a0e1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_c482564ce3895f93b12ac1e0c3dee3b7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_6ec4ba97ba035c2ba2d236981346b1ed(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_907ec4c510605da3bd4e608742374cc2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_f1e9b0ba768c5df5b7b6f792a0bae8de(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_faabcab126745a8686cce26f2e8b65d2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_49ceb0cdd540587e861c4980e5008aa2)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_dbcb1ce7b52a58d9a621e183a544ec0e)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_46cadc77d63c5ac6bdbfbedddbc5d51e)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_b1f6a65032725522a31f48b95aa2ab30)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::cols;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_e86b5e0690965c1fa054d2cd66fac554)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::coeff;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_ec566c45cbe15689ac9287e764012b02)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::coeff;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_e9ce9808dbf75971b5975fd947512998)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_f320de385452521c8c9c30afc77eedeb)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_73e7c581dce550fcaf0f44ba8df8ab7f)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_72737b8a2d5850ed973913dc0c61f3fb)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::coeffRef;
    struct ::std::complex< float >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_66358e7483f8577d949ad647e822f993)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::data;
    struct ::std::complex< float >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_14173051fb3e572ab88396c4e6e727a8)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_19ee9fcbba9556d6bb69643f9b91b851)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_3ae58ce63c28507caee0528bc11f2015)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_c9b370dd1b1b501098aa049f445b2ff6)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_2bc584ef514a59669e487a43114cc3ff)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_73e2e3c8310455f6931144d43451c312)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_9c323fca5dfa5a6393622ba51630dd61)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_971007dbc1af5d7ba75694da774d232b)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_d938005cee01550e992659a3dde9911d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_884318b45cef56379cb0246b0e9e1b00)(long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_3dc2e25796185d45a0c76679dfb25043)(long int , long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_f6898846e8ab5ad5848ea221cd68574e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_cfc2fb66b99e5e91a2e21995af54a0e1)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_c482564ce3895f93b12ac1e0c3dee3b7)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_6ec4ba97ba035c2ba2d236981346b1ed)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_907ec4c510605da3bd4e608742374cc2)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_f1e9b0ba768c5df5b7b6f792a0bae8de)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setRandom;
    void  (*method_pointer_cc69221526dd5e8c90a17625fc1f74dd)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > > > class_faabcab126745a8686cce26f2e8b65d2("_PlainObjectBase_faabcab126745a8686cce26f2e8b65d2", "", boost::python::no_init);
    class_faabcab126745a8686cce26f2e8b65d2.def("base", method_pointer_49ceb0cdd540587e861c4980e5008aa2, boost::python::return_internal_reference<>(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("base", autowig::method_decorator_49ceb0cdd540587e861c4980e5008aa2);
    class_faabcab126745a8686cce26f2e8b65d2.def("base", method_pointer_dbcb1ce7b52a58d9a621e183a544ec0e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("rows", method_pointer_46cadc77d63c5ac6bdbfbedddbc5d51e, "");
    class_faabcab126745a8686cce26f2e8b65d2.def("cols", method_pointer_b1f6a65032725522a31f48b95aa2ab30, "");
    class_faabcab126745a8686cce26f2e8b65d2.def("coeff", method_pointer_e86b5e0690965c1fa054d2cd66fac554, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("coeff", method_pointer_ec566c45cbe15689ac9287e764012b02, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("coeff_ref", method_pointer_e9ce9808dbf75971b5975fd947512998, boost::python::return_internal_reference<>(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("coeff_ref", autowig::method_decorator_e9ce9808dbf75971b5975fd947512998);
    class_faabcab126745a8686cce26f2e8b65d2.def("coeff_ref", method_pointer_f320de385452521c8c9c30afc77eedeb, boost::python::return_internal_reference<>(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("coeff_ref", autowig::method_decorator_f320de385452521c8c9c30afc77eedeb);
    class_faabcab126745a8686cce26f2e8b65d2.def("coeff_ref", method_pointer_73e7c581dce550fcaf0f44ba8df8ab7f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("coeff_ref", method_pointer_72737b8a2d5850ed973913dc0c61f3fb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("data", method_pointer_66358e7483f8577d949ad647e822f993, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("data", method_pointer_14173051fb3e572ab88396c4e6e727a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("resize", method_pointer_19ee9fcbba9556d6bb69643f9b91b851, "");
    class_faabcab126745a8686cce26f2e8b65d2.def("resize", method_pointer_3ae58ce63c28507caee0528bc11f2015, "");
    class_faabcab126745a8686cce26f2e8b65d2.def("resize", method_pointer_c9b370dd1b1b501098aa049f445b2ff6, "");
    class_faabcab126745a8686cce26f2e8b65d2.def("resize", method_pointer_2bc584ef514a59669e487a43114cc3ff, "");
    class_faabcab126745a8686cce26f2e8b65d2.def("conservative_resize", method_pointer_73e2e3c8310455f6931144d43451c312, "");
    class_faabcab126745a8686cce26f2e8b65d2.def("conservative_resize", method_pointer_9c323fca5dfa5a6393622ba51630dd61, "");
    class_faabcab126745a8686cce26f2e8b65d2.def("conservative_resize", method_pointer_971007dbc1af5d7ba75694da774d232b, "");
    class_faabcab126745a8686cce26f2e8b65d2.def("conservative_resize", method_pointer_d938005cee01550e992659a3dde9911d, "");
    class_faabcab126745a8686cce26f2e8b65d2.def("set_constant", method_pointer_884318b45cef56379cb0246b0e9e1b00, boost::python::return_internal_reference<>(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("set_constant", autowig::method_decorator_884318b45cef56379cb0246b0e9e1b00);
    class_faabcab126745a8686cce26f2e8b65d2.def("set_constant", method_pointer_3dc2e25796185d45a0c76679dfb25043, boost::python::return_internal_reference<>(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("set_constant", autowig::method_decorator_3dc2e25796185d45a0c76679dfb25043);
    class_faabcab126745a8686cce26f2e8b65d2.def("set_zero", method_pointer_f6898846e8ab5ad5848ea221cd68574e, boost::python::return_internal_reference<>(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("set_zero", autowig::method_decorator_f6898846e8ab5ad5848ea221cd68574e);
    class_faabcab126745a8686cce26f2e8b65d2.def("set_zero", method_pointer_cfc2fb66b99e5e91a2e21995af54a0e1, boost::python::return_internal_reference<>(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("set_zero", autowig::method_decorator_cfc2fb66b99e5e91a2e21995af54a0e1);
    class_faabcab126745a8686cce26f2e8b65d2.def("set_ones", method_pointer_c482564ce3895f93b12ac1e0c3dee3b7, boost::python::return_internal_reference<>(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("set_ones", autowig::method_decorator_c482564ce3895f93b12ac1e0c3dee3b7);
    class_faabcab126745a8686cce26f2e8b65d2.def("set_ones", method_pointer_6ec4ba97ba035c2ba2d236981346b1ed, boost::python::return_internal_reference<>(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("set_ones", autowig::method_decorator_6ec4ba97ba035c2ba2d236981346b1ed);
    class_faabcab126745a8686cce26f2e8b65d2.def("set_random", method_pointer_907ec4c510605da3bd4e608742374cc2, boost::python::return_internal_reference<>(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("set_random", autowig::method_decorator_907ec4c510605da3bd4e608742374cc2);
    class_faabcab126745a8686cce26f2e8b65d2.def("set_random", method_pointer_f1e9b0ba768c5df5b7b6f792a0bae8de, boost::python::return_internal_reference<>(), "");
    class_faabcab126745a8686cce26f2e8b65d2.def("set_random", autowig::method_decorator_f1e9b0ba768c5df5b7b6f792a0bae8de);
    class_faabcab126745a8686cce26f2e8b65d2.def("check_template_params", method_pointer_cc69221526dd5e8c90a17625fc1f74dd, "");
    class_faabcab126745a8686cce26f2e8b65d2.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > > >();
    }

}