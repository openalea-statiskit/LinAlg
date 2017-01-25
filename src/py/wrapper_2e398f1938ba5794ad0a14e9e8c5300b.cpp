#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b5f977e35ab655039c2b7f6c0b36c338(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_d937f306c16351b6908e74d975c5fce3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_ba09fd3e258353b4ba8494b90ff262c7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_800b54a55a6052af82aa8a95f5191287(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_a293bb9ce04f5ab99be13a3d82a75cdd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_e37093e3b670541f9c871a3b971c9e31(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_895306bd2bc35c638eb774778ad16e41(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_19183dc3779b532eab9b3c5e87073100(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_0bb31abece865150b6dff91c46f8863a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_b945fe4a8e9f5b86b860e9df62b718c4(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_4826381ecbae566c957617c814cd18ad(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_2e398f1938ba5794ad0a14e9e8c5300b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_b5f977e35ab655039c2b7f6c0b36c338)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_9f3f0dc2513556c1b7f236d3acc90cf8)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_0ace196d8aba51979fb1e97336fbf050)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_88f794a966b35eceb3bad7d1bc40218c)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::cols;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_9aa49a82f8ec525eb1edf86f1cb74e64)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::coeff;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_c9c411aaf05d521097e3d389d82c1b09)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::coeff;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_d937f306c16351b6908e74d975c5fce3)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::coeffRef;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_ba09fd3e258353b4ba8494b90ff262c7)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_fad0ee72ee605045bfeeb3f5ef7cc713)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_9bb08c0d02b75038a79760ad99c43181)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_c0b633b6c7ba5777bfa1dca570d3be6b)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_ad1930b575105342a19bd98a2cb24d5e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_90b43d00b172515eb362fac6420246e2)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_f322cfee628356ffbf95224d9ecf8b53)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_7d3a6ce53b27564487a5c5c86e6b1376)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_e452d4fc0c2154de96699f63971458d4)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_ae76425276205eb5ac0b38c681487eff)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_61a193824f845fc691e2f4f4acd871e7)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::conservativeResize;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_800b54a55a6052af82aa8a95f5191287)(long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_a293bb9ce04f5ab99be13a3d82a75cdd)(long int , long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_e37093e3b670541f9c871a3b971c9e31)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_895306bd2bc35c638eb774778ad16e41)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_19183dc3779b532eab9b3c5e87073100)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_0bb31abece865150b6dff91c46f8863a)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_b945fe4a8e9f5b86b860e9df62b718c4)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setRandom;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_4826381ecbae566c957617c814cd18ad)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setRandom;
    void  (*method_pointer_5d56ef1f79715325a1b3304d05d51e39)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > > > class_2e398f1938ba5794ad0a14e9e8c5300b("_PlainObjectBase_2e398f1938ba5794ad0a14e9e8c5300b", "", boost::python::no_init);
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("base", method_pointer_b5f977e35ab655039c2b7f6c0b36c338, boost::python::return_internal_reference<>(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("base", autowig::method_decorator_b5f977e35ab655039c2b7f6c0b36c338);
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("base", method_pointer_9f3f0dc2513556c1b7f236d3acc90cf8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("rows", method_pointer_0ace196d8aba51979fb1e97336fbf050, "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("cols", method_pointer_88f794a966b35eceb3bad7d1bc40218c, "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("coeff", method_pointer_9aa49a82f8ec525eb1edf86f1cb74e64, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("coeff", method_pointer_c9c411aaf05d521097e3d389d82c1b09, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("coeff_ref", method_pointer_d937f306c16351b6908e74d975c5fce3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("coeff_ref", autowig::method_decorator_d937f306c16351b6908e74d975c5fce3);
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("coeff_ref", method_pointer_ba09fd3e258353b4ba8494b90ff262c7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("coeff_ref", autowig::method_decorator_ba09fd3e258353b4ba8494b90ff262c7);
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("coeff_ref", method_pointer_fad0ee72ee605045bfeeb3f5ef7cc713, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("coeff_ref", method_pointer_9bb08c0d02b75038a79760ad99c43181, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("resize", method_pointer_c0b633b6c7ba5777bfa1dca570d3be6b, "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("resize", method_pointer_ad1930b575105342a19bd98a2cb24d5e, "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("resize", method_pointer_90b43d00b172515eb362fac6420246e2, "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("resize", method_pointer_f322cfee628356ffbf95224d9ecf8b53, "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("conservative_resize", method_pointer_7d3a6ce53b27564487a5c5c86e6b1376, "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("conservative_resize", method_pointer_e452d4fc0c2154de96699f63971458d4, "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("conservative_resize", method_pointer_ae76425276205eb5ac0b38c681487eff, "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("conservative_resize", method_pointer_61a193824f845fc691e2f4f4acd871e7, "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_constant", method_pointer_800b54a55a6052af82aa8a95f5191287, boost::python::return_internal_reference<>(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_constant", autowig::method_decorator_800b54a55a6052af82aa8a95f5191287);
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_constant", method_pointer_a293bb9ce04f5ab99be13a3d82a75cdd, boost::python::return_internal_reference<>(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_constant", autowig::method_decorator_a293bb9ce04f5ab99be13a3d82a75cdd);
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_zero", method_pointer_e37093e3b670541f9c871a3b971c9e31, boost::python::return_internal_reference<>(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_zero", autowig::method_decorator_e37093e3b670541f9c871a3b971c9e31);
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_zero", method_pointer_895306bd2bc35c638eb774778ad16e41, boost::python::return_internal_reference<>(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_zero", autowig::method_decorator_895306bd2bc35c638eb774778ad16e41);
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_ones", method_pointer_19183dc3779b532eab9b3c5e87073100, boost::python::return_internal_reference<>(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_ones", autowig::method_decorator_19183dc3779b532eab9b3c5e87073100);
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_ones", method_pointer_0bb31abece865150b6dff91c46f8863a, boost::python::return_internal_reference<>(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_ones", autowig::method_decorator_0bb31abece865150b6dff91c46f8863a);
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_random", method_pointer_b945fe4a8e9f5b86b860e9df62b718c4, boost::python::return_internal_reference<>(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_random", autowig::method_decorator_b945fe4a8e9f5b86b860e9df62b718c4);
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_random", method_pointer_4826381ecbae566c957617c814cd18ad, boost::python::return_internal_reference<>(), "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("set_random", autowig::method_decorator_4826381ecbae566c957617c814cd18ad);
    class_2e398f1938ba5794ad0a14e9e8c5300b.def("check_template_params", method_pointer_5d56ef1f79715325a1b3304d05d51e39, "");
    class_2e398f1938ba5794ad0a14e9e8c5300b.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > > >();
    }

}