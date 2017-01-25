#include "_ieigen.h"


namespace autowig
{
    void method_decorator_154ffa07a02459a1a7e6ebc1d5df0411(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_419f266b1ccd52a5a42837900b45cf4e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_6e659a480fb2599ba37b6f5a4c7c87d7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, const double  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_b2e84eef72b45a57acdc4a2b4b62bc67(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_9f16a46598c758e9a836f6da3c01cad7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_1be6275ba643577884d52ad6d637ce79(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_af701a08d2e350a8963b00d38180ca08(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_76a820e4d6db5d8b90b62a706dcdd505(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_518a7155718a585284bbb788e6ecca2f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_f0fea311685e51559f1a3d28f7060617(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_e609a4c8cd435d7fbc7b0ee3d5c97107(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_5391cabac5f95f278a515f77cb95023c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_154ffa07a02459a1a7e6ebc1d5df0411)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_8ebc08d1e13f5b1398fb16af7265f8c9)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_74c98a45f907533baf6f8ee61cb8845f)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_7a5bfddbbe685812b68663bda5fc17aa)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::cols;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_fadda656e14f593c8e6006cc34ab730c)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::coeff;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_bba9261d90d7565595c49029b7ae365c)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::coeff;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_419f266b1ccd52a5a42837900b45cf4e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::coeffRef;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_6e659a480fb2599ba37b6f5a4c7c87d7)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_e02b2b818e835d0dab43c6b0469a1f69)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_aa42d53a42ca5634afac650d2c8a1ce5)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_3c3cdd113156592bb64ff9bb70c22d8d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_6884607b77dd521ab6a7bfc302de58c4)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_f854519ab4dc533a9f15c530c0bd6624)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_4b17108504db525cad9f28f128a979bc)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_1abbf65ee2bc5643994b1f5544e644ee)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_43310b5b74dc5fc0844bb5ddc91624ba)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_a698f5d5db845186994a4834cec1dc25)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_288f406cbee157989762b90c1f14362f)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::conservativeResize;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_b2e84eef72b45a57acdc4a2b4b62bc67)(long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_9f16a46598c758e9a836f6da3c01cad7)(long int , long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_1be6275ba643577884d52ad6d637ce79)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_af701a08d2e350a8963b00d38180ca08)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_76a820e4d6db5d8b90b62a706dcdd505)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_518a7155718a585284bbb788e6ecca2f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_f0fea311685e51559f1a3d28f7060617)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setRandom;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_e609a4c8cd435d7fbc7b0ee3d5c97107)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setRandom;
    void  (*method_pointer_6bcadc1a2f8c5a66b7906e493f7a7e77)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > > class_5391cabac5f95f278a515f77cb95023c("_PlainObjectBase_5391cabac5f95f278a515f77cb95023c", "", boost::python::no_init);
    class_5391cabac5f95f278a515f77cb95023c.def("base", method_pointer_154ffa07a02459a1a7e6ebc1d5df0411, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("base", autowig::method_decorator_154ffa07a02459a1a7e6ebc1d5df0411);
    class_5391cabac5f95f278a515f77cb95023c.def("base", method_pointer_8ebc08d1e13f5b1398fb16af7265f8c9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("rows", method_pointer_74c98a45f907533baf6f8ee61cb8845f, "");
    class_5391cabac5f95f278a515f77cb95023c.def("cols", method_pointer_7a5bfddbbe685812b68663bda5fc17aa, "");
    class_5391cabac5f95f278a515f77cb95023c.def("coeff", method_pointer_fadda656e14f593c8e6006cc34ab730c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("coeff", method_pointer_bba9261d90d7565595c49029b7ae365c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("coeff_ref", method_pointer_419f266b1ccd52a5a42837900b45cf4e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("coeff_ref", autowig::method_decorator_419f266b1ccd52a5a42837900b45cf4e);
    class_5391cabac5f95f278a515f77cb95023c.def("coeff_ref", method_pointer_6e659a480fb2599ba37b6f5a4c7c87d7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("coeff_ref", autowig::method_decorator_6e659a480fb2599ba37b6f5a4c7c87d7);
    class_5391cabac5f95f278a515f77cb95023c.def("coeff_ref", method_pointer_e02b2b818e835d0dab43c6b0469a1f69, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("coeff_ref", method_pointer_aa42d53a42ca5634afac650d2c8a1ce5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("resize", method_pointer_3c3cdd113156592bb64ff9bb70c22d8d, "");
    class_5391cabac5f95f278a515f77cb95023c.def("resize", method_pointer_6884607b77dd521ab6a7bfc302de58c4, "");
    class_5391cabac5f95f278a515f77cb95023c.def("resize", method_pointer_f854519ab4dc533a9f15c530c0bd6624, "");
    class_5391cabac5f95f278a515f77cb95023c.def("resize", method_pointer_4b17108504db525cad9f28f128a979bc, "");
    class_5391cabac5f95f278a515f77cb95023c.def("conservative_resize", method_pointer_1abbf65ee2bc5643994b1f5544e644ee, "");
    class_5391cabac5f95f278a515f77cb95023c.def("conservative_resize", method_pointer_43310b5b74dc5fc0844bb5ddc91624ba, "");
    class_5391cabac5f95f278a515f77cb95023c.def("conservative_resize", method_pointer_a698f5d5db845186994a4834cec1dc25, "");
    class_5391cabac5f95f278a515f77cb95023c.def("conservative_resize", method_pointer_288f406cbee157989762b90c1f14362f, "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_constant", method_pointer_b2e84eef72b45a57acdc4a2b4b62bc67, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_constant", autowig::method_decorator_b2e84eef72b45a57acdc4a2b4b62bc67);
    class_5391cabac5f95f278a515f77cb95023c.def("set_constant", method_pointer_9f16a46598c758e9a836f6da3c01cad7, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_constant", autowig::method_decorator_9f16a46598c758e9a836f6da3c01cad7);
    class_5391cabac5f95f278a515f77cb95023c.def("set_zero", method_pointer_1be6275ba643577884d52ad6d637ce79, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_zero", autowig::method_decorator_1be6275ba643577884d52ad6d637ce79);
    class_5391cabac5f95f278a515f77cb95023c.def("set_zero", method_pointer_af701a08d2e350a8963b00d38180ca08, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_zero", autowig::method_decorator_af701a08d2e350a8963b00d38180ca08);
    class_5391cabac5f95f278a515f77cb95023c.def("set_ones", method_pointer_76a820e4d6db5d8b90b62a706dcdd505, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_ones", autowig::method_decorator_76a820e4d6db5d8b90b62a706dcdd505);
    class_5391cabac5f95f278a515f77cb95023c.def("set_ones", method_pointer_518a7155718a585284bbb788e6ecca2f, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_ones", autowig::method_decorator_518a7155718a585284bbb788e6ecca2f);
    class_5391cabac5f95f278a515f77cb95023c.def("set_random", method_pointer_f0fea311685e51559f1a3d28f7060617, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_random", autowig::method_decorator_f0fea311685e51559f1a3d28f7060617);
    class_5391cabac5f95f278a515f77cb95023c.def("set_random", method_pointer_e609a4c8cd435d7fbc7b0ee3d5c97107, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_random", autowig::method_decorator_e609a4c8cd435d7fbc7b0ee3d5c97107);
    class_5391cabac5f95f278a515f77cb95023c.def("check_template_params", method_pointer_6bcadc1a2f8c5a66b7906e493f7a7e77, "");
    class_5391cabac5f95f278a515f77cb95023c.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > >();
    }

}