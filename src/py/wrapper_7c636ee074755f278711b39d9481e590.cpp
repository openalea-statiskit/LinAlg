#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6b2a99eab64558ac9da22abfbccf99d3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_04d155c8327f5ae29e6ab5ff96cbc62d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_347a73959e575ff589fc374dddd0851b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_21de498ebf8458ecac4793cd1d2e4372(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_a134f9af13195ca194e3068fd90e9b38(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_b666e70dc9cd52c6824e3ce6e7db67fa(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_05c7d48521c55094a4315fc55b092eb1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_c0a0634d0a7b5b298cb54adf0cd9bd86(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_8210e576942553928ca65c21ef6a33c9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_da539d58c31f5f2d88211571fc3ccb02(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_d2bc457d67925a8287c5dbb5b8bfc23c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_7c636ee074755f278711b39d9481e590()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_6b2a99eab64558ac9da22abfbccf99d3)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_a7b998bec18751fdbee9b4d2022e7a86)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_d4ff29a6a2bb500594d2fa1ef86b7349)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_70331845e01953ecaaa8a88437788d17)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::cols;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_b2fccf48bf6f5019b120d36c34db9588)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::coeff;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_b056bfbcee6c53498b24e81eff3d3a61)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::coeff;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_04d155c8327f5ae29e6ab5ff96cbc62d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_347a73959e575ff589fc374dddd0851b)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_cd1750931a705e139428be05bce81c40)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_48daa4effc7051919bb2175a67ca1d34)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::coeffRef;
    struct ::std::complex< float >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_2c4d3282e58c52d68afde56f198f5e3a)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::data;
    struct ::std::complex< float >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_29d73620a18f5d8caf2b87c303ef98f9)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_2ebdc3e604945a7a98d46b56f4b127a9)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_488390895c2b5aeb93960f208f77d6a8)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_daeffb86b1a25813a714232eec033e98)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_dd0ffd503c975324b3223026ace8abe1)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_9c4e0ddfd3c353c8b140144ea56c87ce)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_cc14cfca42c051759feeed11f16ffe8a)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_99e6586821985cab99a8dc2a089a442d)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_c70797de39c851db910b7745000e0a13)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_21de498ebf8458ecac4793cd1d2e4372)(long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_a134f9af13195ca194e3068fd90e9b38)(long int , long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_b666e70dc9cd52c6824e3ce6e7db67fa)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_05c7d48521c55094a4315fc55b092eb1)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_c0a0634d0a7b5b298cb54adf0cd9bd86)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_8210e576942553928ca65c21ef6a33c9)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_da539d58c31f5f2d88211571fc3ccb02)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 > >::*method_pointer_d2bc457d67925a8287c5dbb5b8bfc23c)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::setRandom;
    void  (*method_pointer_405a3eda9fe25afda44914ffc0ec9f6a)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > > > class_7c636ee074755f278711b39d9481e590("_PlainObjectBase_7c636ee074755f278711b39d9481e590", "", boost::python::no_init);
    class_7c636ee074755f278711b39d9481e590.def("base", method_pointer_6b2a99eab64558ac9da22abfbccf99d3, boost::python::return_internal_reference<>(), "");
    class_7c636ee074755f278711b39d9481e590.def("base", autowig::method_decorator_6b2a99eab64558ac9da22abfbccf99d3);
    class_7c636ee074755f278711b39d9481e590.def("base", method_pointer_a7b998bec18751fdbee9b4d2022e7a86, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c636ee074755f278711b39d9481e590.def("rows", method_pointer_d4ff29a6a2bb500594d2fa1ef86b7349, "");
    class_7c636ee074755f278711b39d9481e590.def("cols", method_pointer_70331845e01953ecaaa8a88437788d17, "");
    class_7c636ee074755f278711b39d9481e590.def("coeff", method_pointer_b2fccf48bf6f5019b120d36c34db9588, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c636ee074755f278711b39d9481e590.def("coeff", method_pointer_b056bfbcee6c53498b24e81eff3d3a61, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c636ee074755f278711b39d9481e590.def("coeff_ref", method_pointer_04d155c8327f5ae29e6ab5ff96cbc62d, boost::python::return_internal_reference<>(), "");
    class_7c636ee074755f278711b39d9481e590.def("coeff_ref", autowig::method_decorator_04d155c8327f5ae29e6ab5ff96cbc62d);
    class_7c636ee074755f278711b39d9481e590.def("coeff_ref", method_pointer_347a73959e575ff589fc374dddd0851b, boost::python::return_internal_reference<>(), "");
    class_7c636ee074755f278711b39d9481e590.def("coeff_ref", autowig::method_decorator_347a73959e575ff589fc374dddd0851b);
    class_7c636ee074755f278711b39d9481e590.def("coeff_ref", method_pointer_cd1750931a705e139428be05bce81c40, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c636ee074755f278711b39d9481e590.def("coeff_ref", method_pointer_48daa4effc7051919bb2175a67ca1d34, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7c636ee074755f278711b39d9481e590.def("data", method_pointer_2c4d3282e58c52d68afde56f198f5e3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7c636ee074755f278711b39d9481e590.def("data", method_pointer_29d73620a18f5d8caf2b87c303ef98f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7c636ee074755f278711b39d9481e590.def("resize", method_pointer_2ebdc3e604945a7a98d46b56f4b127a9, "");
    class_7c636ee074755f278711b39d9481e590.def("resize", method_pointer_488390895c2b5aeb93960f208f77d6a8, "");
    class_7c636ee074755f278711b39d9481e590.def("resize", method_pointer_daeffb86b1a25813a714232eec033e98, "");
    class_7c636ee074755f278711b39d9481e590.def("resize", method_pointer_dd0ffd503c975324b3223026ace8abe1, "");
    class_7c636ee074755f278711b39d9481e590.def("conservative_resize", method_pointer_9c4e0ddfd3c353c8b140144ea56c87ce, "");
    class_7c636ee074755f278711b39d9481e590.def("conservative_resize", method_pointer_cc14cfca42c051759feeed11f16ffe8a, "");
    class_7c636ee074755f278711b39d9481e590.def("conservative_resize", method_pointer_99e6586821985cab99a8dc2a089a442d, "");
    class_7c636ee074755f278711b39d9481e590.def("conservative_resize", method_pointer_c70797de39c851db910b7745000e0a13, "");
    class_7c636ee074755f278711b39d9481e590.def("set_constant", method_pointer_21de498ebf8458ecac4793cd1d2e4372, boost::python::return_internal_reference<>(), "");
    class_7c636ee074755f278711b39d9481e590.def("set_constant", autowig::method_decorator_21de498ebf8458ecac4793cd1d2e4372);
    class_7c636ee074755f278711b39d9481e590.def("set_constant", method_pointer_a134f9af13195ca194e3068fd90e9b38, boost::python::return_internal_reference<>(), "");
    class_7c636ee074755f278711b39d9481e590.def("set_constant", autowig::method_decorator_a134f9af13195ca194e3068fd90e9b38);
    class_7c636ee074755f278711b39d9481e590.def("set_zero", method_pointer_b666e70dc9cd52c6824e3ce6e7db67fa, boost::python::return_internal_reference<>(), "");
    class_7c636ee074755f278711b39d9481e590.def("set_zero", autowig::method_decorator_b666e70dc9cd52c6824e3ce6e7db67fa);
    class_7c636ee074755f278711b39d9481e590.def("set_zero", method_pointer_05c7d48521c55094a4315fc55b092eb1, boost::python::return_internal_reference<>(), "");
    class_7c636ee074755f278711b39d9481e590.def("set_zero", autowig::method_decorator_05c7d48521c55094a4315fc55b092eb1);
    class_7c636ee074755f278711b39d9481e590.def("set_ones", method_pointer_c0a0634d0a7b5b298cb54adf0cd9bd86, boost::python::return_internal_reference<>(), "");
    class_7c636ee074755f278711b39d9481e590.def("set_ones", autowig::method_decorator_c0a0634d0a7b5b298cb54adf0cd9bd86);
    class_7c636ee074755f278711b39d9481e590.def("set_ones", method_pointer_8210e576942553928ca65c21ef6a33c9, boost::python::return_internal_reference<>(), "");
    class_7c636ee074755f278711b39d9481e590.def("set_ones", autowig::method_decorator_8210e576942553928ca65c21ef6a33c9);
    class_7c636ee074755f278711b39d9481e590.def("set_random", method_pointer_da539d58c31f5f2d88211571fc3ccb02, boost::python::return_internal_reference<>(), "");
    class_7c636ee074755f278711b39d9481e590.def("set_random", autowig::method_decorator_da539d58c31f5f2d88211571fc3ccb02);
    class_7c636ee074755f278711b39d9481e590.def("set_random", method_pointer_d2bc457d67925a8287c5dbb5b8bfc23c, boost::python::return_internal_reference<>(), "");
    class_7c636ee074755f278711b39d9481e590.def("set_random", autowig::method_decorator_d2bc457d67925a8287c5dbb5b8bfc23c);
    class_7c636ee074755f278711b39d9481e590.def("check_template_params", method_pointer_405a3eda9fe25afda44914ffc0ec9f6a, "");
    class_7c636ee074755f278711b39d9481e590.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > > >();
    }

}