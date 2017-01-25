#include "_ieigen.h"


namespace autowig
{
    void method_decorator_43b414420d2755529ed3bd67fbcc368c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_b69ad31437d4501ea913313b9f068ab9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_8ff4b043c019522bb247fc4cd4dd1160(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, const double  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_affed7c7286b5dbfa475513742f4a0e7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_f6e542021b8459b39f683d433a056cd0(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_0a4ba82ad9bf54148156f7c3e137e312(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_a82718997a93540aa427131a067929f8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_ac46e75ee6aa5dcb893cd16ae1e123f2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_70e2524fefcf5c3a858d558696b946e5(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_8282625941e75b8da1e06d8d89a80369(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_889daf522d65524fbd02e79046920165(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_be5023e9a8ed5a3fbe97199fcf6ade59()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_43b414420d2755529ed3bd67fbcc368c)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_eb218af5e0a05dc6a7f9089d93352905)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_95ebaee5f4b15e5e8a3b4fe6c302573a)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_32ffc371d21a511cbe5a7ece056441bf)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::cols;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_5fd52a0a0e2957449972377cd771be9e)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::coeff;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_2552a34298f15265b7460f747903a9c2)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::coeff;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_b69ad31437d4501ea913313b9f068ab9)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::coeffRef;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_8ff4b043c019522bb247fc4cd4dd1160)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_6bfc09d462a256628c2ba423a6eeba26)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_e20896989a075a1dbcbc96e909028713)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_ddca181cd9865e9eb4bc2da973b8ec14)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_4aa4ecb6b7f55caeb21eaa1bd44de0da)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_d056d9987058500da3e4872781c375b8)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_6d8de89b69f354b4b7507108b06e4a2d)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_8eb456d685d55fa29a44cad69ab3caeb)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_327b1cc4c9dc59f8a745059d33840253)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_29707c66bb475c7b805f1b480ce61039)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_0d90aa5d29de59ee854b198909f6701d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::conservativeResize;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_affed7c7286b5dbfa475513742f4a0e7)(long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setConstant;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_f6e542021b8459b39f683d433a056cd0)(long int , long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setConstant;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_0a4ba82ad9bf54148156f7c3e137e312)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setZero;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_a82718997a93540aa427131a067929f8)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setZero;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_ac46e75ee6aa5dcb893cd16ae1e123f2)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setOnes;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_70e2524fefcf5c3a858d558696b946e5)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setOnes;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_8282625941e75b8da1e06d8d89a80369)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setRandom;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_889daf522d65524fbd02e79046920165)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::setRandom;
    void  (*method_pointer_bf6ed4f0592754198de86f0604569c60)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > class_be5023e9a8ed5a3fbe97199fcf6ade59("_PlainObjectBase_be5023e9a8ed5a3fbe97199fcf6ade59", "", boost::python::no_init);
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("base", method_pointer_43b414420d2755529ed3bd67fbcc368c, boost::python::return_internal_reference<>(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("base", autowig::method_decorator_43b414420d2755529ed3bd67fbcc368c);
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("base", method_pointer_eb218af5e0a05dc6a7f9089d93352905, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("rows", method_pointer_95ebaee5f4b15e5e8a3b4fe6c302573a, "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("cols", method_pointer_32ffc371d21a511cbe5a7ece056441bf, "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("coeff", method_pointer_5fd52a0a0e2957449972377cd771be9e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("coeff", method_pointer_2552a34298f15265b7460f747903a9c2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("coeff_ref", method_pointer_b69ad31437d4501ea913313b9f068ab9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("coeff_ref", autowig::method_decorator_b69ad31437d4501ea913313b9f068ab9);
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("coeff_ref", method_pointer_8ff4b043c019522bb247fc4cd4dd1160, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("coeff_ref", autowig::method_decorator_8ff4b043c019522bb247fc4cd4dd1160);
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("coeff_ref", method_pointer_6bfc09d462a256628c2ba423a6eeba26, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("coeff_ref", method_pointer_e20896989a075a1dbcbc96e909028713, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("resize", method_pointer_ddca181cd9865e9eb4bc2da973b8ec14, "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("resize", method_pointer_4aa4ecb6b7f55caeb21eaa1bd44de0da, "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("resize", method_pointer_d056d9987058500da3e4872781c375b8, "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("resize", method_pointer_6d8de89b69f354b4b7507108b06e4a2d, "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("conservative_resize", method_pointer_8eb456d685d55fa29a44cad69ab3caeb, "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("conservative_resize", method_pointer_327b1cc4c9dc59f8a745059d33840253, "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("conservative_resize", method_pointer_29707c66bb475c7b805f1b480ce61039, "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("conservative_resize", method_pointer_0d90aa5d29de59ee854b198909f6701d, "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_constant", method_pointer_affed7c7286b5dbfa475513742f4a0e7, boost::python::return_internal_reference<>(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_constant", autowig::method_decorator_affed7c7286b5dbfa475513742f4a0e7);
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_constant", method_pointer_f6e542021b8459b39f683d433a056cd0, boost::python::return_internal_reference<>(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_constant", autowig::method_decorator_f6e542021b8459b39f683d433a056cd0);
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_zero", method_pointer_0a4ba82ad9bf54148156f7c3e137e312, boost::python::return_internal_reference<>(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_zero", autowig::method_decorator_0a4ba82ad9bf54148156f7c3e137e312);
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_zero", method_pointer_a82718997a93540aa427131a067929f8, boost::python::return_internal_reference<>(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_zero", autowig::method_decorator_a82718997a93540aa427131a067929f8);
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_ones", method_pointer_ac46e75ee6aa5dcb893cd16ae1e123f2, boost::python::return_internal_reference<>(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_ones", autowig::method_decorator_ac46e75ee6aa5dcb893cd16ae1e123f2);
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_ones", method_pointer_70e2524fefcf5c3a858d558696b946e5, boost::python::return_internal_reference<>(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_ones", autowig::method_decorator_70e2524fefcf5c3a858d558696b946e5);
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_random", method_pointer_8282625941e75b8da1e06d8d89a80369, boost::python::return_internal_reference<>(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_random", autowig::method_decorator_8282625941e75b8da1e06d8d89a80369);
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_random", method_pointer_889daf522d65524fbd02e79046920165, boost::python::return_internal_reference<>(), "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("set_random", autowig::method_decorator_889daf522d65524fbd02e79046920165);
    class_be5023e9a8ed5a3fbe97199fcf6ade59.def("check_template_params", method_pointer_bf6ed4f0592754198de86f0604569c60, "");
    class_be5023e9a8ed5a3fbe97199fcf6ade59.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > >();
    }

}