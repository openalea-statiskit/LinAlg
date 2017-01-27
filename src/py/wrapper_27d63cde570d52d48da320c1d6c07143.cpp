#include "_ieigen.h"


namespace autowig
{
    void method_decorator_efd2504383965e3ab1bc6291b03a7249(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_34a27e697b8a596eb462e100b2804ec7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_049f9cdbef0c527cbaa7c83008afc84c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_1bf1abd6966a5229bc2fa9ecb9995ff0(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_1e6ea1d1153e543a80524965855b84f6(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO // TODO     void method_decorator_9cc11c6ce0ec5dceb20da3a8fa7275dc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_0dfa7781a1715527a2d7212133a3ae50(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
// TODO // TODO     void method_decorator_504058f3b8115db2a3a2e321e14b91f8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_adb4b3bddc6853b785f6148845885a97(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
// TODO     void method_decorator_8def8eb3a9ce5319b23eb575fab0d8d9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_9ed2f1a6f5645642b46f52ceb529bc1f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_27d63cde570d52d48da320c1d6c07143()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_efd2504383965e3ab1bc6291b03a7249)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_f831c32ed6735c8bb48cc03368620af5)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_48952e67831b54f8aabfca03b945582a)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_029ef7a5887953dca0c1e41021c6ee44)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::cols;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_802a4bf85b835b74a89eeef6006a2a9e)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::coeff;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_066ccf68f1535dcaae088bf9e627d119)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::coeff;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_34a27e697b8a596eb462e100b2804ec7)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_049f9cdbef0c527cbaa7c83008afc84c)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_fdb53443742256fc9357525c9be51a94)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_b53bd199cb685f159e44c9b72c217fd5)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::coeffRef;
    struct ::std::complex< float >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_f0a499414bd05e62a944a9363fb48f7b)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::data;
    struct ::std::complex< float >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_daac95eeac2652d88216e0d65ba5e6d8)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_6512b8b7b0995dc6addf21ee82c734ee)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_59b40f05ba195ab8bd68c0bdb736447b)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_4956b1b55cdb5f65927dfe6c3d35df47)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::resize;
// TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_1bf1abd6966a5229bc2fa9ecb9995ff0)(long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_1e6ea1d1153e543a80524965855b84f6)(long int , long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setConstant;
// TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_9cc11c6ce0ec5dceb20da3a8fa7275dc)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_0dfa7781a1715527a2d7212133a3ae50)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setZero;
// TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_504058f3b8115db2a3a2e321e14b91f8)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_adb4b3bddc6853b785f6148845885a97)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setOnes;
// TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_8def8eb3a9ce5319b23eb575fab0d8d9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_9ed2f1a6f5645642b46f52ceb529bc1f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setRandom;
    void  (*method_pointer_16350097396e55ba968760fdc3f2b89c)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, boost::noncopyable > class_27d63cde570d52d48da320c1d6c07143("_PlainObjectBase_27d63cde570d52d48da320c1d6c07143", "", boost::python::no_init);
    class_27d63cde570d52d48da320c1d6c07143.def("base", method_pointer_efd2504383965e3ab1bc6291b03a7249, boost::python::return_internal_reference<>(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("base", autowig::method_decorator_efd2504383965e3ab1bc6291b03a7249);
    class_27d63cde570d52d48da320c1d6c07143.def("base", method_pointer_f831c32ed6735c8bb48cc03368620af5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("rows", method_pointer_48952e67831b54f8aabfca03b945582a, "");
    class_27d63cde570d52d48da320c1d6c07143.def("cols", method_pointer_029ef7a5887953dca0c1e41021c6ee44, "");
    class_27d63cde570d52d48da320c1d6c07143.def("coeff", method_pointer_802a4bf85b835b74a89eeef6006a2a9e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("coeff", method_pointer_066ccf68f1535dcaae088bf9e627d119, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("coeff_ref", method_pointer_34a27e697b8a596eb462e100b2804ec7, boost::python::return_internal_reference<>(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("coeff_ref", autowig::method_decorator_34a27e697b8a596eb462e100b2804ec7);
    class_27d63cde570d52d48da320c1d6c07143.def("coeff_ref", method_pointer_049f9cdbef0c527cbaa7c83008afc84c, boost::python::return_internal_reference<>(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("coeff_ref", autowig::method_decorator_049f9cdbef0c527cbaa7c83008afc84c);
    class_27d63cde570d52d48da320c1d6c07143.def("coeff_ref", method_pointer_fdb53443742256fc9357525c9be51a94, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("coeff_ref", method_pointer_b53bd199cb685f159e44c9b72c217fd5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("data", method_pointer_f0a499414bd05e62a944a9363fb48f7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("data", method_pointer_daac95eeac2652d88216e0d65ba5e6d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("resize", method_pointer_6512b8b7b0995dc6addf21ee82c734ee, "");
    class_27d63cde570d52d48da320c1d6c07143.def("resize", method_pointer_59b40f05ba195ab8bd68c0bdb736447b, "");
    class_27d63cde570d52d48da320c1d6c07143.def("resize", method_pointer_4956b1b55cdb5f65927dfe6c3d35df47, "");
// TODO     class_27d63cde570d52d48da320c1d6c07143.def("set_constant", method_pointer_1bf1abd6966a5229bc2fa9ecb9995ff0, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_27d63cde570d52d48da320c1d6c07143.def("set_constant", autowig::method_decorator_1bf1abd6966a5229bc2fa9ecb9995ff0);
    class_27d63cde570d52d48da320c1d6c07143.def("set_constant", method_pointer_1e6ea1d1153e543a80524965855b84f6, boost::python::return_internal_reference<>(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("set_constant", autowig::method_decorator_1e6ea1d1153e543a80524965855b84f6);
// TODO     class_27d63cde570d52d48da320c1d6c07143.def("set_zero", method_pointer_9cc11c6ce0ec5dceb20da3a8fa7275dc, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_27d63cde570d52d48da320c1d6c07143.def("set_zero", autowig::method_decorator_9cc11c6ce0ec5dceb20da3a8fa7275dc);
    class_27d63cde570d52d48da320c1d6c07143.def("set_zero", method_pointer_0dfa7781a1715527a2d7212133a3ae50, boost::python::return_internal_reference<>(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("set_zero", autowig::method_decorator_0dfa7781a1715527a2d7212133a3ae50);
// TODO     class_27d63cde570d52d48da320c1d6c07143.def("set_ones", method_pointer_504058f3b8115db2a3a2e321e14b91f8, boost::python::return_internal_reference<>(), "");
// TODO     class_27d63cde570d52d48da320c1d6c07143.def("set_ones", autowig::method_decorator_504058f3b8115db2a3a2e321e14b91f8);
    class_27d63cde570d52d48da320c1d6c07143.def("set_ones", method_pointer_adb4b3bddc6853b785f6148845885a97, boost::python::return_internal_reference<>(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("set_ones", autowig::method_decorator_adb4b3bddc6853b785f6148845885a97);
// TODO     class_27d63cde570d52d48da320c1d6c07143.def("set_random", method_pointer_8def8eb3a9ce5319b23eb575fab0d8d9, boost::python::return_internal_reference<>(), "");
// TODO     class_27d63cde570d52d48da320c1d6c07143.def("set_random", autowig::method_decorator_8def8eb3a9ce5319b23eb575fab0d8d9);
    class_27d63cde570d52d48da320c1d6c07143.def("set_random", method_pointer_9ed2f1a6f5645642b46f52ceb529bc1f, boost::python::return_internal_reference<>(), "");
    class_27d63cde570d52d48da320c1d6c07143.def("set_random", autowig::method_decorator_9ed2f1a6f5645642b46f52ceb529bc1f);
    class_27d63cde570d52d48da320c1d6c07143.def("check_template_params", method_pointer_16350097396e55ba968760fdc3f2b89c, "");
    class_27d63cde570d52d48da320c1d6c07143.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > >();
    }

}