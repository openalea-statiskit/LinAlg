#include "_ieigen.h"


namespace autowig
{
    void method_decorator_40e553a2ffe85e8789604bbecc8700a7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_30d3ef4c0b215dce80414d0deb04e361(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_a6fbe1e8c2335a8c92c93e6affa10c88(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_fc9132d0408b58b48be33a2e23806ca5(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_dc06279dcf17534b9b045e9e26ac0713(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_16b1b756405a529ab05e1cb9fb4cba69(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_b5e46accdca7537fba7a4adfccfda8fa(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_d650620466905471a12ce3ea1f831355(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_5aa4e29a914751d2910802830fb11592(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_f07de426350c5c3c840e6cabef3dc0dc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_b73164655eb55c4898fb5832c62337fe(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_50f84bcd61415b029a22e96f5f45fcb4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_40e553a2ffe85e8789604bbecc8700a7)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_8cdfb6f67884543a8c72fc907d84986a)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_91d302ee77e35144a6d699300b28bf72)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_e22613df57cd5d5981b6e9b992d32e42)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::cols;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_16ff55fd7ee556f3985a0fc9ff59fc60)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::coeff;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_a7edd78445105556b9b56b7879803d41)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::coeff;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_30d3ef4c0b215dce80414d0deb04e361)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_a6fbe1e8c2335a8c92c93e6affa10c88)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_8a99dc61359f59e0b76f087866e9123e)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_389f2fa740ff5f2d8098a93e005d59f4)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::coeffRef;
    struct ::std::complex< double >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_bd05addaf0b6576893a7d8af9c3c1f86)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::data;
    struct ::std::complex< double >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_031cf67842fd577e88180cdb7f00b2ab)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_a86e1ed8a80150ea98d2b523d79b2202)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_5e179f3a6fb7547f84bca7f661461d2d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_b0171b15f0e85c0fb13f24a1cfbd7236)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_0099e38a96b85c8fb42fe47bc3d1f561)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_9b0b819bc3d05acea316b3cd0e90e911)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_2953a048934b5c648d889ae586069d42)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_7cd2ff4abad15732ab04b0253643642e)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_063404d2bc3753afa0d4eb701a915075)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_fc9132d0408b58b48be33a2e23806ca5)(long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_dc06279dcf17534b9b045e9e26ac0713)(long int , long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_16b1b756405a529ab05e1cb9fb4cba69)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_b5e46accdca7537fba7a4adfccfda8fa)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_d650620466905471a12ce3ea1f831355)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_5aa4e29a914751d2910802830fb11592)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_f07de426350c5c3c840e6cabef3dc0dc)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_b73164655eb55c4898fb5832c62337fe)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setRandom;
    void  (*method_pointer_67c2c7e3de89503abfb56e01f2009b8f)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > > class_50f84bcd61415b029a22e96f5f45fcb4("_PlainObjectBase_50f84bcd61415b029a22e96f5f45fcb4", "", boost::python::no_init);
    class_50f84bcd61415b029a22e96f5f45fcb4.def("base", method_pointer_40e553a2ffe85e8789604bbecc8700a7, boost::python::return_internal_reference<>(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("base", autowig::method_decorator_40e553a2ffe85e8789604bbecc8700a7);
    class_50f84bcd61415b029a22e96f5f45fcb4.def("base", method_pointer_8cdfb6f67884543a8c72fc907d84986a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("rows", method_pointer_91d302ee77e35144a6d699300b28bf72, "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("cols", method_pointer_e22613df57cd5d5981b6e9b992d32e42, "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("coeff", method_pointer_16ff55fd7ee556f3985a0fc9ff59fc60, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("coeff", method_pointer_a7edd78445105556b9b56b7879803d41, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("coeff_ref", method_pointer_30d3ef4c0b215dce80414d0deb04e361, boost::python::return_internal_reference<>(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("coeff_ref", autowig::method_decorator_30d3ef4c0b215dce80414d0deb04e361);
    class_50f84bcd61415b029a22e96f5f45fcb4.def("coeff_ref", method_pointer_a6fbe1e8c2335a8c92c93e6affa10c88, boost::python::return_internal_reference<>(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("coeff_ref", autowig::method_decorator_a6fbe1e8c2335a8c92c93e6affa10c88);
    class_50f84bcd61415b029a22e96f5f45fcb4.def("coeff_ref", method_pointer_8a99dc61359f59e0b76f087866e9123e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("coeff_ref", method_pointer_389f2fa740ff5f2d8098a93e005d59f4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("data", method_pointer_bd05addaf0b6576893a7d8af9c3c1f86, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("data", method_pointer_031cf67842fd577e88180cdb7f00b2ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("resize", method_pointer_a86e1ed8a80150ea98d2b523d79b2202, "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("resize", method_pointer_5e179f3a6fb7547f84bca7f661461d2d, "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("resize", method_pointer_b0171b15f0e85c0fb13f24a1cfbd7236, "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("resize", method_pointer_0099e38a96b85c8fb42fe47bc3d1f561, "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("conservative_resize", method_pointer_9b0b819bc3d05acea316b3cd0e90e911, "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("conservative_resize", method_pointer_2953a048934b5c648d889ae586069d42, "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("conservative_resize", method_pointer_7cd2ff4abad15732ab04b0253643642e, "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("conservative_resize", method_pointer_063404d2bc3753afa0d4eb701a915075, "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_constant", method_pointer_fc9132d0408b58b48be33a2e23806ca5, boost::python::return_internal_reference<>(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_constant", autowig::method_decorator_fc9132d0408b58b48be33a2e23806ca5);
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_constant", method_pointer_dc06279dcf17534b9b045e9e26ac0713, boost::python::return_internal_reference<>(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_constant", autowig::method_decorator_dc06279dcf17534b9b045e9e26ac0713);
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_zero", method_pointer_16b1b756405a529ab05e1cb9fb4cba69, boost::python::return_internal_reference<>(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_zero", autowig::method_decorator_16b1b756405a529ab05e1cb9fb4cba69);
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_zero", method_pointer_b5e46accdca7537fba7a4adfccfda8fa, boost::python::return_internal_reference<>(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_zero", autowig::method_decorator_b5e46accdca7537fba7a4adfccfda8fa);
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_ones", method_pointer_d650620466905471a12ce3ea1f831355, boost::python::return_internal_reference<>(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_ones", autowig::method_decorator_d650620466905471a12ce3ea1f831355);
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_ones", method_pointer_5aa4e29a914751d2910802830fb11592, boost::python::return_internal_reference<>(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_ones", autowig::method_decorator_5aa4e29a914751d2910802830fb11592);
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_random", method_pointer_f07de426350c5c3c840e6cabef3dc0dc, boost::python::return_internal_reference<>(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_random", autowig::method_decorator_f07de426350c5c3c840e6cabef3dc0dc);
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_random", method_pointer_b73164655eb55c4898fb5832c62337fe, boost::python::return_internal_reference<>(), "");
    class_50f84bcd61415b029a22e96f5f45fcb4.def("set_random", autowig::method_decorator_b73164655eb55c4898fb5832c62337fe);
    class_50f84bcd61415b029a22e96f5f45fcb4.def("check_template_params", method_pointer_67c2c7e3de89503abfb56e01f2009b8f, "");
    class_50f84bcd61415b029a22e96f5f45fcb4.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > >();
    }

}