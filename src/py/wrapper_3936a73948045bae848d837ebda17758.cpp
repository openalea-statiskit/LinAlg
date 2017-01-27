#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ac3d518ed1c9506097740de2814971c1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_81116597106d5e30b9e1e68b76afbfc7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_9efd1cb2383650e7a603617d59567130(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, const double  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_3e12ff9a59885270a45ecc87f11cefe1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_dc1ca5c8df3858eeaa89832a0be191ff(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_e439d713e169508dbdb9414ada5e0f27(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_a4efa95e481c5c1c9fdc8fc6d4bf2421(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_e23818c0268e5af8a579c9f4374fe274(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_19ada7677c3f53139f492ff0face3e5c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_344552907f065ef5b3fd187fb4323443(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_6d9115d5832f5071a7849283d66c73c5(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_3936a73948045bae848d837ebda17758()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_ac3d518ed1c9506097740de2814971c1)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_ebe2f77adf345fdb8d345b1742e2d674)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_d06a015e877b5b4a87d82efa65f41b3d)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_650116ef97cc56508e98b5b00366d2fc)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::cols;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_1b4d6fc52e065104a6e9acbcf8156b6c)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::coeff;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_5795b9e6a29a5d02b7f539e389fb50cc)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::coeff;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_81116597106d5e30b9e1e68b76afbfc7)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::coeffRef;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_9efd1cb2383650e7a603617d59567130)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_d8f1637ea50555d7ac959fa8bc27a001)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_06ead3dc8e4b5004a15ff8b4db7a34cf)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_693527dafecc569aab3721db40848b74)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_fedd203a16bb529dbc05f910b73fe158)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_f0eb79817dd957deb6a4c8b83cdbac6d)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_001dea20a4fc5f8f958127df072d9df9)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_290870b485e156309f78073da5e14e88)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::conservativeResize;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_3e12ff9a59885270a45ecc87f11cefe1)(long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_dc1ca5c8df3858eeaa89832a0be191ff)(long int , long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_e439d713e169508dbdb9414ada5e0f27)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_a4efa95e481c5c1c9fdc8fc6d4bf2421)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_e23818c0268e5af8a579c9f4374fe274)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_19ada7677c3f53139f492ff0face3e5c)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_344552907f065ef5b3fd187fb4323443)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setRandom;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_6d9115d5832f5071a7849283d66c73c5)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setRandom;
    void  (*method_pointer_0b97d42e11045286b420f2c2fc17d584)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > >, boost::noncopyable > class_3936a73948045bae848d837ebda17758("_PlainObjectBase_3936a73948045bae848d837ebda17758", "", boost::python::no_init);
    class_3936a73948045bae848d837ebda17758.def("base", method_pointer_ac3d518ed1c9506097740de2814971c1, boost::python::return_internal_reference<>(), "");
    class_3936a73948045bae848d837ebda17758.def("base", autowig::method_decorator_ac3d518ed1c9506097740de2814971c1);
    class_3936a73948045bae848d837ebda17758.def("base", method_pointer_ebe2f77adf345fdb8d345b1742e2d674, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3936a73948045bae848d837ebda17758.def("rows", method_pointer_d06a015e877b5b4a87d82efa65f41b3d, "");
    class_3936a73948045bae848d837ebda17758.def("cols", method_pointer_650116ef97cc56508e98b5b00366d2fc, "");
    class_3936a73948045bae848d837ebda17758.def("coeff", method_pointer_1b4d6fc52e065104a6e9acbcf8156b6c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3936a73948045bae848d837ebda17758.def("coeff", method_pointer_5795b9e6a29a5d02b7f539e389fb50cc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3936a73948045bae848d837ebda17758.def("coeff_ref", method_pointer_81116597106d5e30b9e1e68b76afbfc7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3936a73948045bae848d837ebda17758.def("coeff_ref", autowig::method_decorator_81116597106d5e30b9e1e68b76afbfc7);
    class_3936a73948045bae848d837ebda17758.def("coeff_ref", method_pointer_9efd1cb2383650e7a603617d59567130, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3936a73948045bae848d837ebda17758.def("coeff_ref", autowig::method_decorator_9efd1cb2383650e7a603617d59567130);
    class_3936a73948045bae848d837ebda17758.def("coeff_ref", method_pointer_d8f1637ea50555d7ac959fa8bc27a001, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3936a73948045bae848d837ebda17758.def("coeff_ref", method_pointer_06ead3dc8e4b5004a15ff8b4db7a34cf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3936a73948045bae848d837ebda17758.def("resize", method_pointer_693527dafecc569aab3721db40848b74, "");
    class_3936a73948045bae848d837ebda17758.def("resize", method_pointer_fedd203a16bb529dbc05f910b73fe158, "");
    class_3936a73948045bae848d837ebda17758.def("resize", method_pointer_f0eb79817dd957deb6a4c8b83cdbac6d, "");
    class_3936a73948045bae848d837ebda17758.def("resize", method_pointer_001dea20a4fc5f8f958127df072d9df9, "");
    class_3936a73948045bae848d837ebda17758.def("conservative_resize", method_pointer_290870b485e156309f78073da5e14e88, "");
    class_3936a73948045bae848d837ebda17758.def("set_constant", method_pointer_3e12ff9a59885270a45ecc87f11cefe1, boost::python::return_internal_reference<>(), "");
    class_3936a73948045bae848d837ebda17758.def("set_constant", autowig::method_decorator_3e12ff9a59885270a45ecc87f11cefe1);
    class_3936a73948045bae848d837ebda17758.def("set_constant", method_pointer_dc1ca5c8df3858eeaa89832a0be191ff, boost::python::return_internal_reference<>(), "");
    class_3936a73948045bae848d837ebda17758.def("set_constant", autowig::method_decorator_dc1ca5c8df3858eeaa89832a0be191ff);
    class_3936a73948045bae848d837ebda17758.def("set_zero", method_pointer_e439d713e169508dbdb9414ada5e0f27, boost::python::return_internal_reference<>(), "");
    class_3936a73948045bae848d837ebda17758.def("set_zero", autowig::method_decorator_e439d713e169508dbdb9414ada5e0f27);
    class_3936a73948045bae848d837ebda17758.def("set_zero", method_pointer_a4efa95e481c5c1c9fdc8fc6d4bf2421, boost::python::return_internal_reference<>(), "");
    class_3936a73948045bae848d837ebda17758.def("set_zero", autowig::method_decorator_a4efa95e481c5c1c9fdc8fc6d4bf2421);
    class_3936a73948045bae848d837ebda17758.def("set_ones", method_pointer_e23818c0268e5af8a579c9f4374fe274, boost::python::return_internal_reference<>(), "");
    class_3936a73948045bae848d837ebda17758.def("set_ones", autowig::method_decorator_e23818c0268e5af8a579c9f4374fe274);
    class_3936a73948045bae848d837ebda17758.def("set_ones", method_pointer_19ada7677c3f53139f492ff0face3e5c, boost::python::return_internal_reference<>(), "");
    class_3936a73948045bae848d837ebda17758.def("set_ones", autowig::method_decorator_19ada7677c3f53139f492ff0face3e5c);
    class_3936a73948045bae848d837ebda17758.def("set_random", method_pointer_344552907f065ef5b3fd187fb4323443, boost::python::return_internal_reference<>(), "");
    class_3936a73948045bae848d837ebda17758.def("set_random", autowig::method_decorator_344552907f065ef5b3fd187fb4323443);
    class_3936a73948045bae848d837ebda17758.def("set_random", method_pointer_6d9115d5832f5071a7849283d66c73c5, boost::python::return_internal_reference<>(), "");
    class_3936a73948045bae848d837ebda17758.def("set_random", autowig::method_decorator_6d9115d5832f5071a7849283d66c73c5);
    class_3936a73948045bae848d837ebda17758.def("check_template_params", method_pointer_0b97d42e11045286b420f2c2fc17d584, "");
    class_3936a73948045bae848d837ebda17758.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > > >();
    }

}