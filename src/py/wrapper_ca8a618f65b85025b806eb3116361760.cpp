#include "_ieigen.h"


namespace autowig
{
    void method_decorator_5f0c336a25ec5823b678e54c4de600c7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_ce0fffbe03985992b418b0b068bb5b4e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_705973a307f25b7582f90b5f339d1dcb(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_5a9c456d2b0350a3b6d06ccdbccf83dd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_0130d249bff559ed9d55b9f5400b8a73(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_fa9d55ea4ff0537f931a876cb5803b13(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_3e326d4f92d95e30af6ccb5aa56d1ec2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_efc99546a9635b30bfa6859cdc49ea92(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_0da33fa8531d56f890fb5c401817c608(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_406500756a4c5338bbaf4dcfbd04a17e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_0db7263ccb7350a79b5090708e30abaa(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_ca8a618f65b85025b806eb3116361760()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_5f0c336a25ec5823b678e54c4de600c7)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_2b7c1f61bf5e564ab1c6151020f91394)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_c09684cc8cb25540ab871855626ebb4e)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_cb16e44041e05536a500cc6d31414b60)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::cols;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_8e2ef2dd8dec5f2cbb5d933048e9de28)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::coeff;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_a98b48aee70f552fa57997cb28aaf4df)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::coeff;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_ce0fffbe03985992b418b0b068bb5b4e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_705973a307f25b7582f90b5f339d1dcb)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_0644c6063e2b50cda8054c2dad24195c)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_d3d5f319097e50b9b8652f3c3f975026)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::coeffRef;
    struct ::std::complex< float >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_dccf60dc31a8549c87eb19efdcb9811b)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::data;
    struct ::std::complex< float >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_a92f9c56674652ce9c5819b975125b7a)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_d9adc8da6a0656598fe69b103d9b1e1c)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_62c7ed45476556d4a18256937959b6dc)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_0eb9732d3a8255209ebc56818911c161)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_00393a9a44a95d73961ffd2d482f1195)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_5767524d436350c0a056a217ac9bfa71)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_591a42370a0c54439838d3da8ef09f69)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_f1c3ad2be2e35b94971d2cd5944009e6)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_74622ab087235947bbad138d8dfea094)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_5a9c456d2b0350a3b6d06ccdbccf83dd)(long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_0130d249bff559ed9d55b9f5400b8a73)(long int , long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_fa9d55ea4ff0537f931a876cb5803b13)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_3e326d4f92d95e30af6ccb5aa56d1ec2)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_efc99546a9635b30bfa6859cdc49ea92)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_0da33fa8531d56f890fb5c401817c608)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_406500756a4c5338bbaf4dcfbd04a17e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_0db7263ccb7350a79b5090708e30abaa)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setRandom;
    void  (*method_pointer_08d531e2fcde55579871d8bab96b181c)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > > > class_ca8a618f65b85025b806eb3116361760("_PlainObjectBase_ca8a618f65b85025b806eb3116361760", "", boost::python::no_init);
    class_ca8a618f65b85025b806eb3116361760.def("base", method_pointer_5f0c336a25ec5823b678e54c4de600c7, boost::python::return_internal_reference<>(), "");
    class_ca8a618f65b85025b806eb3116361760.def("base", autowig::method_decorator_5f0c336a25ec5823b678e54c4de600c7);
    class_ca8a618f65b85025b806eb3116361760.def("base", method_pointer_2b7c1f61bf5e564ab1c6151020f91394, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ca8a618f65b85025b806eb3116361760.def("rows", method_pointer_c09684cc8cb25540ab871855626ebb4e, "");
    class_ca8a618f65b85025b806eb3116361760.def("cols", method_pointer_cb16e44041e05536a500cc6d31414b60, "");
    class_ca8a618f65b85025b806eb3116361760.def("coeff", method_pointer_8e2ef2dd8dec5f2cbb5d933048e9de28, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ca8a618f65b85025b806eb3116361760.def("coeff", method_pointer_a98b48aee70f552fa57997cb28aaf4df, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ca8a618f65b85025b806eb3116361760.def("coeff_ref", method_pointer_ce0fffbe03985992b418b0b068bb5b4e, boost::python::return_internal_reference<>(), "");
    class_ca8a618f65b85025b806eb3116361760.def("coeff_ref", autowig::method_decorator_ce0fffbe03985992b418b0b068bb5b4e);
    class_ca8a618f65b85025b806eb3116361760.def("coeff_ref", method_pointer_705973a307f25b7582f90b5f339d1dcb, boost::python::return_internal_reference<>(), "");
    class_ca8a618f65b85025b806eb3116361760.def("coeff_ref", autowig::method_decorator_705973a307f25b7582f90b5f339d1dcb);
    class_ca8a618f65b85025b806eb3116361760.def("coeff_ref", method_pointer_0644c6063e2b50cda8054c2dad24195c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ca8a618f65b85025b806eb3116361760.def("coeff_ref", method_pointer_d3d5f319097e50b9b8652f3c3f975026, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ca8a618f65b85025b806eb3116361760.def("data", method_pointer_dccf60dc31a8549c87eb19efdcb9811b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8a618f65b85025b806eb3116361760.def("data", method_pointer_a92f9c56674652ce9c5819b975125b7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8a618f65b85025b806eb3116361760.def("resize", method_pointer_d9adc8da6a0656598fe69b103d9b1e1c, "");
    class_ca8a618f65b85025b806eb3116361760.def("resize", method_pointer_62c7ed45476556d4a18256937959b6dc, "");
    class_ca8a618f65b85025b806eb3116361760.def("resize", method_pointer_0eb9732d3a8255209ebc56818911c161, "");
    class_ca8a618f65b85025b806eb3116361760.def("resize", method_pointer_00393a9a44a95d73961ffd2d482f1195, "");
    class_ca8a618f65b85025b806eb3116361760.def("conservative_resize", method_pointer_5767524d436350c0a056a217ac9bfa71, "");
    class_ca8a618f65b85025b806eb3116361760.def("conservative_resize", method_pointer_591a42370a0c54439838d3da8ef09f69, "");
    class_ca8a618f65b85025b806eb3116361760.def("conservative_resize", method_pointer_f1c3ad2be2e35b94971d2cd5944009e6, "");
    class_ca8a618f65b85025b806eb3116361760.def("conservative_resize", method_pointer_74622ab087235947bbad138d8dfea094, "");
    class_ca8a618f65b85025b806eb3116361760.def("set_constant", method_pointer_5a9c456d2b0350a3b6d06ccdbccf83dd, boost::python::return_internal_reference<>(), "");
    class_ca8a618f65b85025b806eb3116361760.def("set_constant", autowig::method_decorator_5a9c456d2b0350a3b6d06ccdbccf83dd);
    class_ca8a618f65b85025b806eb3116361760.def("set_constant", method_pointer_0130d249bff559ed9d55b9f5400b8a73, boost::python::return_internal_reference<>(), "");
    class_ca8a618f65b85025b806eb3116361760.def("set_constant", autowig::method_decorator_0130d249bff559ed9d55b9f5400b8a73);
    class_ca8a618f65b85025b806eb3116361760.def("set_zero", method_pointer_fa9d55ea4ff0537f931a876cb5803b13, boost::python::return_internal_reference<>(), "");
    class_ca8a618f65b85025b806eb3116361760.def("set_zero", autowig::method_decorator_fa9d55ea4ff0537f931a876cb5803b13);
    class_ca8a618f65b85025b806eb3116361760.def("set_zero", method_pointer_3e326d4f92d95e30af6ccb5aa56d1ec2, boost::python::return_internal_reference<>(), "");
    class_ca8a618f65b85025b806eb3116361760.def("set_zero", autowig::method_decorator_3e326d4f92d95e30af6ccb5aa56d1ec2);
    class_ca8a618f65b85025b806eb3116361760.def("set_ones", method_pointer_efc99546a9635b30bfa6859cdc49ea92, boost::python::return_internal_reference<>(), "");
    class_ca8a618f65b85025b806eb3116361760.def("set_ones", autowig::method_decorator_efc99546a9635b30bfa6859cdc49ea92);
    class_ca8a618f65b85025b806eb3116361760.def("set_ones", method_pointer_0da33fa8531d56f890fb5c401817c608, boost::python::return_internal_reference<>(), "");
    class_ca8a618f65b85025b806eb3116361760.def("set_ones", autowig::method_decorator_0da33fa8531d56f890fb5c401817c608);
    class_ca8a618f65b85025b806eb3116361760.def("set_random", method_pointer_406500756a4c5338bbaf4dcfbd04a17e, boost::python::return_internal_reference<>(), "");
    class_ca8a618f65b85025b806eb3116361760.def("set_random", autowig::method_decorator_406500756a4c5338bbaf4dcfbd04a17e);
    class_ca8a618f65b85025b806eb3116361760.def("set_random", method_pointer_0db7263ccb7350a79b5090708e30abaa, boost::python::return_internal_reference<>(), "");
    class_ca8a618f65b85025b806eb3116361760.def("set_random", autowig::method_decorator_0db7263ccb7350a79b5090708e30abaa);
    class_ca8a618f65b85025b806eb3116361760.def("check_template_params", method_pointer_08d531e2fcde55579871d8bab96b181c, "");
    class_ca8a618f65b85025b806eb3116361760.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > > >();
    }

}