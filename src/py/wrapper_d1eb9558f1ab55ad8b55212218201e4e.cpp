#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b30005cc5fe25791903814232d116b27(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_036067b08fd8555eb1733eddeedc006b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_558fa703a20d5643be1fdaae33f99204(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_8d9bd70cf503525891181dd35f9abb44(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_90e281d633ec520da2a6dd177dac4f46(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_fc72b0989ae75ce69a3241ea230ebbfe(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_7107e7a1124e5472aef9b705b5cf2a40(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_aee215cc452d590fbc11b4002ffbee8a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_5732e84f1ff055e6975b108fcb3da42a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_c00e22137e2455478dfa51b26b8054ff(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_e7dcc781b30556cd85f3f2884c93ad82(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_d1eb9558f1ab55ad8b55212218201e4e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_b30005cc5fe25791903814232d116b27)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_667771bc226658d38a5a95d3fb5e4820)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_61524b46ca5050f2828e4981f233d298)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_a6d81a89c80b5f8694e7c6b135a1f6a7)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::cols;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_069a4524322f585da2bbc0f0b86bf865)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::coeff;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_2429119d478959449d05276f58f5e5a2)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::coeff;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_036067b08fd8555eb1733eddeedc006b)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::coeffRef;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_558fa703a20d5643be1fdaae33f99204)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_fb3b40bc07be5f8c9827196f4dfcbe26)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_682bcd04f7f65e01bc001a77ec246e4b)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_96d80ebbee645cf180683f7adf7a7670)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_c693c59f5b8d5c828704dd757fe40218)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_d07a7a03f0905f7dbc30ec04fef7864a)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_4ee01195cbef58bdb93ad178f1fb4bc7)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_8c7232dd477a5909a91d29bc8f30c2b5)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_13730f40ad185eb882ed8b4539abf8ea)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_f9ecbcfe32915220bc94139aeaac024c)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_86320289be65557e8f188cfd9c13183a)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::conservativeResize;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_8d9bd70cf503525891181dd35f9abb44)(long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_90e281d633ec520da2a6dd177dac4f46)(long int , long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_fc72b0989ae75ce69a3241ea230ebbfe)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_7107e7a1124e5472aef9b705b5cf2a40)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_aee215cc452d590fbc11b4002ffbee8a)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_5732e84f1ff055e6975b108fcb3da42a)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_c00e22137e2455478dfa51b26b8054ff)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setRandom;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_e7dcc781b30556cd85f3f2884c93ad82)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setRandom;
    void  (*method_pointer_d61d0839fe96522181bbcacc26e7ca20)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > >, boost::noncopyable > class_d1eb9558f1ab55ad8b55212218201e4e("_PlainObjectBase_d1eb9558f1ab55ad8b55212218201e4e", "", boost::python::no_init);
    class_d1eb9558f1ab55ad8b55212218201e4e.def("base", method_pointer_b30005cc5fe25791903814232d116b27, boost::python::return_internal_reference<>(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("base", autowig::method_decorator_b30005cc5fe25791903814232d116b27);
    class_d1eb9558f1ab55ad8b55212218201e4e.def("base", method_pointer_667771bc226658d38a5a95d3fb5e4820, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("rows", method_pointer_61524b46ca5050f2828e4981f233d298, "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("cols", method_pointer_a6d81a89c80b5f8694e7c6b135a1f6a7, "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("coeff", method_pointer_069a4524322f585da2bbc0f0b86bf865, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("coeff", method_pointer_2429119d478959449d05276f58f5e5a2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("coeff_ref", method_pointer_036067b08fd8555eb1733eddeedc006b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("coeff_ref", autowig::method_decorator_036067b08fd8555eb1733eddeedc006b);
    class_d1eb9558f1ab55ad8b55212218201e4e.def("coeff_ref", method_pointer_558fa703a20d5643be1fdaae33f99204, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("coeff_ref", autowig::method_decorator_558fa703a20d5643be1fdaae33f99204);
    class_d1eb9558f1ab55ad8b55212218201e4e.def("coeff_ref", method_pointer_fb3b40bc07be5f8c9827196f4dfcbe26, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("coeff_ref", method_pointer_682bcd04f7f65e01bc001a77ec246e4b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("resize", method_pointer_96d80ebbee645cf180683f7adf7a7670, "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("resize", method_pointer_c693c59f5b8d5c828704dd757fe40218, "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("resize", method_pointer_d07a7a03f0905f7dbc30ec04fef7864a, "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("resize", method_pointer_4ee01195cbef58bdb93ad178f1fb4bc7, "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("conservative_resize", method_pointer_8c7232dd477a5909a91d29bc8f30c2b5, "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("conservative_resize", method_pointer_13730f40ad185eb882ed8b4539abf8ea, "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("conservative_resize", method_pointer_f9ecbcfe32915220bc94139aeaac024c, "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("conservative_resize", method_pointer_86320289be65557e8f188cfd9c13183a, "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_constant", method_pointer_8d9bd70cf503525891181dd35f9abb44, boost::python::return_internal_reference<>(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_constant", autowig::method_decorator_8d9bd70cf503525891181dd35f9abb44);
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_constant", method_pointer_90e281d633ec520da2a6dd177dac4f46, boost::python::return_internal_reference<>(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_constant", autowig::method_decorator_90e281d633ec520da2a6dd177dac4f46);
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_zero", method_pointer_fc72b0989ae75ce69a3241ea230ebbfe, boost::python::return_internal_reference<>(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_zero", autowig::method_decorator_fc72b0989ae75ce69a3241ea230ebbfe);
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_zero", method_pointer_7107e7a1124e5472aef9b705b5cf2a40, boost::python::return_internal_reference<>(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_zero", autowig::method_decorator_7107e7a1124e5472aef9b705b5cf2a40);
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_ones", method_pointer_aee215cc452d590fbc11b4002ffbee8a, boost::python::return_internal_reference<>(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_ones", autowig::method_decorator_aee215cc452d590fbc11b4002ffbee8a);
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_ones", method_pointer_5732e84f1ff055e6975b108fcb3da42a, boost::python::return_internal_reference<>(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_ones", autowig::method_decorator_5732e84f1ff055e6975b108fcb3da42a);
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_random", method_pointer_c00e22137e2455478dfa51b26b8054ff, boost::python::return_internal_reference<>(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_random", autowig::method_decorator_c00e22137e2455478dfa51b26b8054ff);
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_random", method_pointer_e7dcc781b30556cd85f3f2884c93ad82, boost::python::return_internal_reference<>(), "");
    class_d1eb9558f1ab55ad8b55212218201e4e.def("set_random", autowig::method_decorator_e7dcc781b30556cd85f3f2884c93ad82);
    class_d1eb9558f1ab55ad8b55212218201e4e.def("check_template_params", method_pointer_d61d0839fe96522181bbcacc26e7ca20, "");
    class_d1eb9558f1ab55ad8b55212218201e4e.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > > >();
    }

}