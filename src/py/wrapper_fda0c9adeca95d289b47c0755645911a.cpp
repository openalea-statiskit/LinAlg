#include "_ieigen.h"


namespace autowig
{
    void method_decorator_8c27f94d5103580984f524b43208c7fc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_54d117c69f5950218491b3285cb258e9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_5a4e103c22ee584bbb9ebfdbaaec110e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, const double  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_2d55cf8c50855792944678fe5cc46ffe(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_7d01913c46b75dc7a44de17be9efd708(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_dc338f810cbd55f1ad01cedcdb37b71e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_785a65bbf9215bbca5f3d585fb3411fd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_11850edda0705b6e856eae3cfce5996f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_8dc25515f0e95d31a7b6145f2342656c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_0b941a3cb2e951eda25fabc3d5f3ba1a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_67eba747a89a51808bc7a83bf1eea5cf(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_fda0c9adeca95d289b47c0755645911a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_8c27f94d5103580984f524b43208c7fc)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_133a905b92b55b938e271094d6b1b3c0)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_ba5afdfd9dfc593cadf842e1a35a5d9f)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_e6a09b73239956e994928b11b7d9c358)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::cols;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_cfc121ca38775804a1bae033c00829ab)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::coeff;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_ded8ffff82e25aeebcf28d544cc3f6e0)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::coeff;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_54d117c69f5950218491b3285cb258e9)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::coeffRef;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_5a4e103c22ee584bbb9ebfdbaaec110e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_5471482667c557d79194253f0cc8e9ad)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_aea984d520805a39829106e7872a42a2)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_faa0b969ed1d571c8089e6ad4e2459d2)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_fc9aaf6782135a19bd73359b489fe6d4)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_775fd670a3bb54b1a8c0c99fd61d8dff)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_906e3a4361be540ebd088b44d7c5b5d6)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_3c3b89cbc4d75cfe8b4653081cfe3e41)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_d4675f2d4a9d50b48ca9030253855b22)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_05fe5d7f874d534d801b91ecb137e658)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_7e8bac945aff56d9b38df5128997b192)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::conservativeResize;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_2d55cf8c50855792944678fe5cc46ffe)(long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_7d01913c46b75dc7a44de17be9efd708)(long int , long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_dc338f810cbd55f1ad01cedcdb37b71e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_785a65bbf9215bbca5f3d585fb3411fd)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_11850edda0705b6e856eae3cfce5996f)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_8dc25515f0e95d31a7b6145f2342656c)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_0b941a3cb2e951eda25fabc3d5f3ba1a)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setRandom;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_67eba747a89a51808bc7a83bf1eea5cf)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setRandom;
    void  (*method_pointer_f4cc7ef9103b5a4a94bbcc01686e8ebd)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > > > class_fda0c9adeca95d289b47c0755645911a("_PlainObjectBase_fda0c9adeca95d289b47c0755645911a", "", boost::python::no_init);
    class_fda0c9adeca95d289b47c0755645911a.def("base", method_pointer_8c27f94d5103580984f524b43208c7fc, boost::python::return_internal_reference<>(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("base", autowig::method_decorator_8c27f94d5103580984f524b43208c7fc);
    class_fda0c9adeca95d289b47c0755645911a.def("base", method_pointer_133a905b92b55b938e271094d6b1b3c0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("rows", method_pointer_ba5afdfd9dfc593cadf842e1a35a5d9f, "");
    class_fda0c9adeca95d289b47c0755645911a.def("cols", method_pointer_e6a09b73239956e994928b11b7d9c358, "");
    class_fda0c9adeca95d289b47c0755645911a.def("coeff", method_pointer_cfc121ca38775804a1bae033c00829ab, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("coeff", method_pointer_ded8ffff82e25aeebcf28d544cc3f6e0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("coeff_ref", method_pointer_54d117c69f5950218491b3285cb258e9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("coeff_ref", autowig::method_decorator_54d117c69f5950218491b3285cb258e9);
    class_fda0c9adeca95d289b47c0755645911a.def("coeff_ref", method_pointer_5a4e103c22ee584bbb9ebfdbaaec110e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("coeff_ref", autowig::method_decorator_5a4e103c22ee584bbb9ebfdbaaec110e);
    class_fda0c9adeca95d289b47c0755645911a.def("coeff_ref", method_pointer_5471482667c557d79194253f0cc8e9ad, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("coeff_ref", method_pointer_aea984d520805a39829106e7872a42a2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("resize", method_pointer_faa0b969ed1d571c8089e6ad4e2459d2, "");
    class_fda0c9adeca95d289b47c0755645911a.def("resize", method_pointer_fc9aaf6782135a19bd73359b489fe6d4, "");
    class_fda0c9adeca95d289b47c0755645911a.def("resize", method_pointer_775fd670a3bb54b1a8c0c99fd61d8dff, "");
    class_fda0c9adeca95d289b47c0755645911a.def("resize", method_pointer_906e3a4361be540ebd088b44d7c5b5d6, "");
    class_fda0c9adeca95d289b47c0755645911a.def("conservative_resize", method_pointer_3c3b89cbc4d75cfe8b4653081cfe3e41, "");
    class_fda0c9adeca95d289b47c0755645911a.def("conservative_resize", method_pointer_d4675f2d4a9d50b48ca9030253855b22, "");
    class_fda0c9adeca95d289b47c0755645911a.def("conservative_resize", method_pointer_05fe5d7f874d534d801b91ecb137e658, "");
    class_fda0c9adeca95d289b47c0755645911a.def("conservative_resize", method_pointer_7e8bac945aff56d9b38df5128997b192, "");
    class_fda0c9adeca95d289b47c0755645911a.def("set_constant", method_pointer_2d55cf8c50855792944678fe5cc46ffe, boost::python::return_internal_reference<>(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("set_constant", autowig::method_decorator_2d55cf8c50855792944678fe5cc46ffe);
    class_fda0c9adeca95d289b47c0755645911a.def("set_constant", method_pointer_7d01913c46b75dc7a44de17be9efd708, boost::python::return_internal_reference<>(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("set_constant", autowig::method_decorator_7d01913c46b75dc7a44de17be9efd708);
    class_fda0c9adeca95d289b47c0755645911a.def("set_zero", method_pointer_dc338f810cbd55f1ad01cedcdb37b71e, boost::python::return_internal_reference<>(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("set_zero", autowig::method_decorator_dc338f810cbd55f1ad01cedcdb37b71e);
    class_fda0c9adeca95d289b47c0755645911a.def("set_zero", method_pointer_785a65bbf9215bbca5f3d585fb3411fd, boost::python::return_internal_reference<>(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("set_zero", autowig::method_decorator_785a65bbf9215bbca5f3d585fb3411fd);
    class_fda0c9adeca95d289b47c0755645911a.def("set_ones", method_pointer_11850edda0705b6e856eae3cfce5996f, boost::python::return_internal_reference<>(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("set_ones", autowig::method_decorator_11850edda0705b6e856eae3cfce5996f);
    class_fda0c9adeca95d289b47c0755645911a.def("set_ones", method_pointer_8dc25515f0e95d31a7b6145f2342656c, boost::python::return_internal_reference<>(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("set_ones", autowig::method_decorator_8dc25515f0e95d31a7b6145f2342656c);
    class_fda0c9adeca95d289b47c0755645911a.def("set_random", method_pointer_0b941a3cb2e951eda25fabc3d5f3ba1a, boost::python::return_internal_reference<>(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("set_random", autowig::method_decorator_0b941a3cb2e951eda25fabc3d5f3ba1a);
    class_fda0c9adeca95d289b47c0755645911a.def("set_random", method_pointer_67eba747a89a51808bc7a83bf1eea5cf, boost::python::return_internal_reference<>(), "");
    class_fda0c9adeca95d289b47c0755645911a.def("set_random", autowig::method_decorator_67eba747a89a51808bc7a83bf1eea5cf);
    class_fda0c9adeca95d289b47c0755645911a.def("check_template_params", method_pointer_f4cc7ef9103b5a4a94bbcc01686e8ebd, "");
    class_fda0c9adeca95d289b47c0755645911a.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > > >();
    }

}