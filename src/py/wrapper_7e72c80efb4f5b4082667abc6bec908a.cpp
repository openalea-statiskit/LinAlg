#include "_ieigen.h"


namespace autowig
{
    void method_decorator_795869ef61fb562e8c03afbcbf5ef16a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_421a4962fe6c576b9c9a3b4fe22142c7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_e96d0a31249657e18eff38f2f5c53f9d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_73a7576d1ea55bf3b0d390d1a41ca4e1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_be5a0c98fafc5400a13ee58cd36745fd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_bc54f6a5e13b50d08ecc0f7265d04cca(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_803a2dccf58259159fce37be476e921b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_479b0125f5f15e14b3c0e901408d6580(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_ac6e9108167e552fb5fdc2d9c1495d8c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_50999926890c59c6a235f41193bd51dd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_b220549f75f05cedad57699583a39084(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_7e72c80efb4f5b4082667abc6bec908a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_795869ef61fb562e8c03afbcbf5ef16a)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_cdc9b1a8a5845eed9f01a4a271c394c6)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_a26cfc3b9dbe5145bc3256c6a11f1885)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_897b27aeb39c509c8a54de60931ad8bc)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::cols;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_e64993046d155268af0895ba3c84414e)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::coeff;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_96a8965161da52a2a9928bb09e116b38)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::coeff;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_421a4962fe6c576b9c9a3b4fe22142c7)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::coeffRef;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_e96d0a31249657e18eff38f2f5c53f9d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_7b490e8384c95d3d879bf272cba41c87)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_ba12981291665218a9c091be94647541)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_d8b76e46f3965067bace825075510624)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_f8cf203ec8215e7ba67278a78466a700)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_c56399e3527e57ff93fce4d633699987)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_737c627d26535804b28e609fe1fcb64c)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_0c52f26fd2f4533c980d971de5ec693c)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_b52969afc91f5df9a73da2979f319722)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_28a1ff4e58db5180b05a540ae4bff1a0)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_3530354117cf5c29917234a53d436473)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::conservativeResize;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_73a7576d1ea55bf3b0d390d1a41ca4e1)(long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_be5a0c98fafc5400a13ee58cd36745fd)(long int , long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_bc54f6a5e13b50d08ecc0f7265d04cca)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_803a2dccf58259159fce37be476e921b)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_479b0125f5f15e14b3c0e901408d6580)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_ac6e9108167e552fb5fdc2d9c1495d8c)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_50999926890c59c6a235f41193bd51dd)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setRandom;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_b220549f75f05cedad57699583a39084)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setRandom;
    void  (*method_pointer_f1b2fc69a0a25eb98f03c382b6f816d1)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > > > class_7e72c80efb4f5b4082667abc6bec908a("_PlainObjectBase_7e72c80efb4f5b4082667abc6bec908a", "", boost::python::no_init);
    class_7e72c80efb4f5b4082667abc6bec908a.def("base", method_pointer_795869ef61fb562e8c03afbcbf5ef16a, boost::python::return_internal_reference<>(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("base", autowig::method_decorator_795869ef61fb562e8c03afbcbf5ef16a);
    class_7e72c80efb4f5b4082667abc6bec908a.def("base", method_pointer_cdc9b1a8a5845eed9f01a4a271c394c6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("rows", method_pointer_a26cfc3b9dbe5145bc3256c6a11f1885, "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("cols", method_pointer_897b27aeb39c509c8a54de60931ad8bc, "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("coeff", method_pointer_e64993046d155268af0895ba3c84414e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("coeff", method_pointer_96a8965161da52a2a9928bb09e116b38, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("coeff_ref", method_pointer_421a4962fe6c576b9c9a3b4fe22142c7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("coeff_ref", autowig::method_decorator_421a4962fe6c576b9c9a3b4fe22142c7);
    class_7e72c80efb4f5b4082667abc6bec908a.def("coeff_ref", method_pointer_e96d0a31249657e18eff38f2f5c53f9d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("coeff_ref", autowig::method_decorator_e96d0a31249657e18eff38f2f5c53f9d);
    class_7e72c80efb4f5b4082667abc6bec908a.def("coeff_ref", method_pointer_7b490e8384c95d3d879bf272cba41c87, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("coeff_ref", method_pointer_ba12981291665218a9c091be94647541, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("resize", method_pointer_d8b76e46f3965067bace825075510624, "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("resize", method_pointer_f8cf203ec8215e7ba67278a78466a700, "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("resize", method_pointer_c56399e3527e57ff93fce4d633699987, "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("resize", method_pointer_737c627d26535804b28e609fe1fcb64c, "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("conservative_resize", method_pointer_0c52f26fd2f4533c980d971de5ec693c, "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("conservative_resize", method_pointer_b52969afc91f5df9a73da2979f319722, "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("conservative_resize", method_pointer_28a1ff4e58db5180b05a540ae4bff1a0, "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("conservative_resize", method_pointer_3530354117cf5c29917234a53d436473, "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_constant", method_pointer_73a7576d1ea55bf3b0d390d1a41ca4e1, boost::python::return_internal_reference<>(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_constant", autowig::method_decorator_73a7576d1ea55bf3b0d390d1a41ca4e1);
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_constant", method_pointer_be5a0c98fafc5400a13ee58cd36745fd, boost::python::return_internal_reference<>(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_constant", autowig::method_decorator_be5a0c98fafc5400a13ee58cd36745fd);
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_zero", method_pointer_bc54f6a5e13b50d08ecc0f7265d04cca, boost::python::return_internal_reference<>(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_zero", autowig::method_decorator_bc54f6a5e13b50d08ecc0f7265d04cca);
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_zero", method_pointer_803a2dccf58259159fce37be476e921b, boost::python::return_internal_reference<>(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_zero", autowig::method_decorator_803a2dccf58259159fce37be476e921b);
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_ones", method_pointer_479b0125f5f15e14b3c0e901408d6580, boost::python::return_internal_reference<>(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_ones", autowig::method_decorator_479b0125f5f15e14b3c0e901408d6580);
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_ones", method_pointer_ac6e9108167e552fb5fdc2d9c1495d8c, boost::python::return_internal_reference<>(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_ones", autowig::method_decorator_ac6e9108167e552fb5fdc2d9c1495d8c);
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_random", method_pointer_50999926890c59c6a235f41193bd51dd, boost::python::return_internal_reference<>(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_random", autowig::method_decorator_50999926890c59c6a235f41193bd51dd);
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_random", method_pointer_b220549f75f05cedad57699583a39084, boost::python::return_internal_reference<>(), "");
    class_7e72c80efb4f5b4082667abc6bec908a.def("set_random", autowig::method_decorator_b220549f75f05cedad57699583a39084);
    class_7e72c80efb4f5b4082667abc6bec908a.def("check_template_params", method_pointer_f1b2fc69a0a25eb98f03c382b6f816d1, "");
    class_7e72c80efb4f5b4082667abc6bec908a.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > > >();
    }

}