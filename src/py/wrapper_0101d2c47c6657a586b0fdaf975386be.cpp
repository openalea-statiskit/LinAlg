#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e884698885215e719fcda2eec8232514(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_1e931ddcd59b5c2ca4d422298b965a9e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_aab249d5fcba57fa811f018076aecb03(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, const double  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_5f399da707eb5766a7ff1c08645bb2b9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_81ca33e9c4e257a285755e3ed3c99e51(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_e58ca3ecfb1b5f53b6371cad2d8687bf(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_63fbd951ae3253098a41d144c5f2fd72(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_af7e3821815353c0834df7c968e5c771(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_33107ae92d1e5dd69a24a6016d475331(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_1cf598ad585551708ef405284325957e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_7c6bb22744d157cc95ecc08b82c4c688(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_0101d2c47c6657a586b0fdaf975386be()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_e884698885215e719fcda2eec8232514)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_0b9a8f08450059139d1318d0b165fccc)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_99d99f8bb3c05a2f985141fd9f907015)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_2ce73546d2b95d8e87187e87cf39ddbc)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::cols;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_b6208889b489559f84151bdac53de72b)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::coeff;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_014db2873b285692b0515eb13ed11599)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::coeff;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_1e931ddcd59b5c2ca4d422298b965a9e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::coeffRef;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_aab249d5fcba57fa811f018076aecb03)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_546cdd6129f353bea4b24374bd824f45)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_789f40f7890a5e05b30811f75c972936)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_0737c8b227a2528a9d1d86823889fd8c)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_38ac843aaa2e5d1192d5f5373bbcdaf0)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_cac3864f1bb45c7aba3aea2205727fd0)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_87c4cc960a3e582fa702ff7d2b5bb9c5)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_62992673a3fd59c9940d6ae9a2d14343)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_137c5d9fdb595e5187253e1afc882b53)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_3bf2d36ce4ef59a7b8c0dcad53d2cfbe)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_47ad767171635950950d0caaddd072cc)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::conservativeResize;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_5f399da707eb5766a7ff1c08645bb2b9)(long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setConstant;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_81ca33e9c4e257a285755e3ed3c99e51)(long int , long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setConstant;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_e58ca3ecfb1b5f53b6371cad2d8687bf)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setZero;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_63fbd951ae3253098a41d144c5f2fd72)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setZero;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_af7e3821815353c0834df7c968e5c771)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setOnes;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_33107ae92d1e5dd69a24a6016d475331)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setOnes;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_1cf598ad585551708ef405284325957e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setRandom;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_7c6bb22744d157cc95ecc08b82c4c688)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setRandom;
    void  (*method_pointer_8bb8761c8a2e593fa895c41069a14c72)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > class_0101d2c47c6657a586b0fdaf975386be("_PlainObjectBase_0101d2c47c6657a586b0fdaf975386be", "", boost::python::no_init);
    class_0101d2c47c6657a586b0fdaf975386be.def("base", method_pointer_e884698885215e719fcda2eec8232514, boost::python::return_internal_reference<>(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("base", autowig::method_decorator_e884698885215e719fcda2eec8232514);
    class_0101d2c47c6657a586b0fdaf975386be.def("base", method_pointer_0b9a8f08450059139d1318d0b165fccc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("rows", method_pointer_99d99f8bb3c05a2f985141fd9f907015, "");
    class_0101d2c47c6657a586b0fdaf975386be.def("cols", method_pointer_2ce73546d2b95d8e87187e87cf39ddbc, "");
    class_0101d2c47c6657a586b0fdaf975386be.def("coeff", method_pointer_b6208889b489559f84151bdac53de72b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("coeff", method_pointer_014db2873b285692b0515eb13ed11599, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("coeff_ref", method_pointer_1e931ddcd59b5c2ca4d422298b965a9e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("coeff_ref", autowig::method_decorator_1e931ddcd59b5c2ca4d422298b965a9e);
    class_0101d2c47c6657a586b0fdaf975386be.def("coeff_ref", method_pointer_aab249d5fcba57fa811f018076aecb03, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("coeff_ref", autowig::method_decorator_aab249d5fcba57fa811f018076aecb03);
    class_0101d2c47c6657a586b0fdaf975386be.def("coeff_ref", method_pointer_546cdd6129f353bea4b24374bd824f45, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("coeff_ref", method_pointer_789f40f7890a5e05b30811f75c972936, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("resize", method_pointer_0737c8b227a2528a9d1d86823889fd8c, "");
    class_0101d2c47c6657a586b0fdaf975386be.def("resize", method_pointer_38ac843aaa2e5d1192d5f5373bbcdaf0, "");
    class_0101d2c47c6657a586b0fdaf975386be.def("resize", method_pointer_cac3864f1bb45c7aba3aea2205727fd0, "");
    class_0101d2c47c6657a586b0fdaf975386be.def("resize", method_pointer_87c4cc960a3e582fa702ff7d2b5bb9c5, "");
    class_0101d2c47c6657a586b0fdaf975386be.def("conservative_resize", method_pointer_62992673a3fd59c9940d6ae9a2d14343, "");
    class_0101d2c47c6657a586b0fdaf975386be.def("conservative_resize", method_pointer_137c5d9fdb595e5187253e1afc882b53, "");
    class_0101d2c47c6657a586b0fdaf975386be.def("conservative_resize", method_pointer_3bf2d36ce4ef59a7b8c0dcad53d2cfbe, "");
    class_0101d2c47c6657a586b0fdaf975386be.def("conservative_resize", method_pointer_47ad767171635950950d0caaddd072cc, "");
    class_0101d2c47c6657a586b0fdaf975386be.def("set_constant", method_pointer_5f399da707eb5766a7ff1c08645bb2b9, boost::python::return_internal_reference<>(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("set_constant", autowig::method_decorator_5f399da707eb5766a7ff1c08645bb2b9);
    class_0101d2c47c6657a586b0fdaf975386be.def("set_constant", method_pointer_81ca33e9c4e257a285755e3ed3c99e51, boost::python::return_internal_reference<>(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("set_constant", autowig::method_decorator_81ca33e9c4e257a285755e3ed3c99e51);
    class_0101d2c47c6657a586b0fdaf975386be.def("set_zero", method_pointer_e58ca3ecfb1b5f53b6371cad2d8687bf, boost::python::return_internal_reference<>(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("set_zero", autowig::method_decorator_e58ca3ecfb1b5f53b6371cad2d8687bf);
    class_0101d2c47c6657a586b0fdaf975386be.def("set_zero", method_pointer_63fbd951ae3253098a41d144c5f2fd72, boost::python::return_internal_reference<>(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("set_zero", autowig::method_decorator_63fbd951ae3253098a41d144c5f2fd72);
    class_0101d2c47c6657a586b0fdaf975386be.def("set_ones", method_pointer_af7e3821815353c0834df7c968e5c771, boost::python::return_internal_reference<>(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("set_ones", autowig::method_decorator_af7e3821815353c0834df7c968e5c771);
    class_0101d2c47c6657a586b0fdaf975386be.def("set_ones", method_pointer_33107ae92d1e5dd69a24a6016d475331, boost::python::return_internal_reference<>(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("set_ones", autowig::method_decorator_33107ae92d1e5dd69a24a6016d475331);
    class_0101d2c47c6657a586b0fdaf975386be.def("set_random", method_pointer_1cf598ad585551708ef405284325957e, boost::python::return_internal_reference<>(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("set_random", autowig::method_decorator_1cf598ad585551708ef405284325957e);
    class_0101d2c47c6657a586b0fdaf975386be.def("set_random", method_pointer_7c6bb22744d157cc95ecc08b82c4c688, boost::python::return_internal_reference<>(), "");
    class_0101d2c47c6657a586b0fdaf975386be.def("set_random", autowig::method_decorator_7c6bb22744d157cc95ecc08b82c4c688);
    class_0101d2c47c6657a586b0fdaf975386be.def("check_template_params", method_pointer_8bb8761c8a2e593fa895c41069a14c72, "");
    class_0101d2c47c6657a586b0fdaf975386be.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > >();
    }

}