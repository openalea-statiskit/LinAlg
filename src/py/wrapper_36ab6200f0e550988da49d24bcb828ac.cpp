#include "_ieigen.h"


namespace autowig
{
    void method_decorator_3ddf2c87196857119bb6cfb7bd2d74d9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_88aec51b3bdb54308361a8c59faeb78a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_009f887e9c955c95a94d4de1a1c6ef80(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_373b5207a11d50b4b68d7169e8c8728f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_aa7d1020771a540cbcf111626996c4b9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO // TODO     void method_decorator_ffaf37fce595567fa1444c069a1433f1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_959907de86e5582b80c7c439273d7e70(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
// TODO // TODO     void method_decorator_281e83c428455cf086004f6b9e933539(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_838523ed37915c75b81243dedd241e7e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
// TODO     void method_decorator_a85380997f69556f930fa14d99cea8c9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_58b8f14ca61255a3909fb06e97e316d6(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_36ab6200f0e550988da49d24bcb828ac()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_3ddf2c87196857119bb6cfb7bd2d74d9)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_526723fb3ef95b46a35a0074ce720fe6)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_e8dd22e108ab53e6a3433feb34bc3ad1)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_27ee1787d3dc566c9f1c5c46e61b96dc)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::cols;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_b951daf42d4f5077b992d279191362ff)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::coeff;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_95f5b13e9f185016baf2bd9d20c0e946)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::coeff;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_88aec51b3bdb54308361a8c59faeb78a)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_009f887e9c955c95a94d4de1a1c6ef80)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_11a281be02d257daa4e4ae31db07bc50)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_84ace2148ffb5dbaa610faa5937a4621)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::coeffRef;
    struct ::std::complex< float >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_814fe40175115c37b2a383a756f89f42)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::data;
    struct ::std::complex< float >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_149abc88c48459d6bdca56766aeab3cb)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_308119e744965741acdedaa3c6e292a6)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_2c1108a2d3895926b797eb2edc943d4e)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_3e0c0a35325458598cefa4b601878f1d)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::resize;
// TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_373b5207a11d50b4b68d7169e8c8728f)(long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_aa7d1020771a540cbcf111626996c4b9)(long int , long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setConstant;
// TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_ffaf37fce595567fa1444c069a1433f1)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_959907de86e5582b80c7c439273d7e70)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setZero;
// TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_281e83c428455cf086004f6b9e933539)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_838523ed37915c75b81243dedd241e7e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setOnes;
// TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_a85380997f69556f930fa14d99cea8c9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_58b8f14ca61255a3909fb06e97e316d6)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setRandom;
    void  (*method_pointer_c98a2b761e285d76a2ab15b102bcac56)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, boost::noncopyable > class_36ab6200f0e550988da49d24bcb828ac("_PlainObjectBase_36ab6200f0e550988da49d24bcb828ac", "", boost::python::no_init);
    class_36ab6200f0e550988da49d24bcb828ac.def("base", method_pointer_3ddf2c87196857119bb6cfb7bd2d74d9, boost::python::return_internal_reference<>(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("base", autowig::method_decorator_3ddf2c87196857119bb6cfb7bd2d74d9);
    class_36ab6200f0e550988da49d24bcb828ac.def("base", method_pointer_526723fb3ef95b46a35a0074ce720fe6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("rows", method_pointer_e8dd22e108ab53e6a3433feb34bc3ad1, "");
    class_36ab6200f0e550988da49d24bcb828ac.def("cols", method_pointer_27ee1787d3dc566c9f1c5c46e61b96dc, "");
    class_36ab6200f0e550988da49d24bcb828ac.def("coeff", method_pointer_b951daf42d4f5077b992d279191362ff, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("coeff", method_pointer_95f5b13e9f185016baf2bd9d20c0e946, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("coeff_ref", method_pointer_88aec51b3bdb54308361a8c59faeb78a, boost::python::return_internal_reference<>(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("coeff_ref", autowig::method_decorator_88aec51b3bdb54308361a8c59faeb78a);
    class_36ab6200f0e550988da49d24bcb828ac.def("coeff_ref", method_pointer_009f887e9c955c95a94d4de1a1c6ef80, boost::python::return_internal_reference<>(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("coeff_ref", autowig::method_decorator_009f887e9c955c95a94d4de1a1c6ef80);
    class_36ab6200f0e550988da49d24bcb828ac.def("coeff_ref", method_pointer_11a281be02d257daa4e4ae31db07bc50, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("coeff_ref", method_pointer_84ace2148ffb5dbaa610faa5937a4621, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("data", method_pointer_814fe40175115c37b2a383a756f89f42, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("data", method_pointer_149abc88c48459d6bdca56766aeab3cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("resize", method_pointer_308119e744965741acdedaa3c6e292a6, "");
    class_36ab6200f0e550988da49d24bcb828ac.def("resize", method_pointer_2c1108a2d3895926b797eb2edc943d4e, "");
    class_36ab6200f0e550988da49d24bcb828ac.def("resize", method_pointer_3e0c0a35325458598cefa4b601878f1d, "");
// TODO     class_36ab6200f0e550988da49d24bcb828ac.def("set_constant", method_pointer_373b5207a11d50b4b68d7169e8c8728f, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_36ab6200f0e550988da49d24bcb828ac.def("set_constant", autowig::method_decorator_373b5207a11d50b4b68d7169e8c8728f);
    class_36ab6200f0e550988da49d24bcb828ac.def("set_constant", method_pointer_aa7d1020771a540cbcf111626996c4b9, boost::python::return_internal_reference<>(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("set_constant", autowig::method_decorator_aa7d1020771a540cbcf111626996c4b9);
// TODO     class_36ab6200f0e550988da49d24bcb828ac.def("set_zero", method_pointer_ffaf37fce595567fa1444c069a1433f1, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_36ab6200f0e550988da49d24bcb828ac.def("set_zero", autowig::method_decorator_ffaf37fce595567fa1444c069a1433f1);
    class_36ab6200f0e550988da49d24bcb828ac.def("set_zero", method_pointer_959907de86e5582b80c7c439273d7e70, boost::python::return_internal_reference<>(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("set_zero", autowig::method_decorator_959907de86e5582b80c7c439273d7e70);
// TODO     class_36ab6200f0e550988da49d24bcb828ac.def("set_ones", method_pointer_281e83c428455cf086004f6b9e933539, boost::python::return_internal_reference<>(), "");
// TODO     class_36ab6200f0e550988da49d24bcb828ac.def("set_ones", autowig::method_decorator_281e83c428455cf086004f6b9e933539);
    class_36ab6200f0e550988da49d24bcb828ac.def("set_ones", method_pointer_838523ed37915c75b81243dedd241e7e, boost::python::return_internal_reference<>(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("set_ones", autowig::method_decorator_838523ed37915c75b81243dedd241e7e);
// TODO     class_36ab6200f0e550988da49d24bcb828ac.def("set_random", method_pointer_a85380997f69556f930fa14d99cea8c9, boost::python::return_internal_reference<>(), "");
// TODO     class_36ab6200f0e550988da49d24bcb828ac.def("set_random", autowig::method_decorator_a85380997f69556f930fa14d99cea8c9);
    class_36ab6200f0e550988da49d24bcb828ac.def("set_random", method_pointer_58b8f14ca61255a3909fb06e97e316d6, boost::python::return_internal_reference<>(), "");
    class_36ab6200f0e550988da49d24bcb828ac.def("set_random", autowig::method_decorator_58b8f14ca61255a3909fb06e97e316d6);
    class_36ab6200f0e550988da49d24bcb828ac.def("check_template_params", method_pointer_c98a2b761e285d76a2ab15b102bcac56, "");
    class_36ab6200f0e550988da49d24bcb828ac.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > >();
    }

}