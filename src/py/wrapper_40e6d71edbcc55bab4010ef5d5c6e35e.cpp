#include "_ieigen.h"


namespace autowig
{
    void method_decorator_5d36f86f39cd5609a4ec12b44ac3f38a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_e7ae9a30c25d540cae99fa9546d90ee8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_b3cfd80683c35e2391425a5246ebe67f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_157f3134394c572b836d7a2aaf7d7f01(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_cc5af1a1147e54699f380b09c56135ae(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_f6479152c9245ba18e1a664e84ce712b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_12386d105d155d14be1ed77973f14101(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_0acd52fb41cf5c49861402134191c45a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_4f8489130e105ec69785c920db8c07ea(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_74effc7175d15139ba7984969ff06654(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_aa7ee7b602ca5c57935e0a85f9852b44(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_40e6d71edbcc55bab4010ef5d5c6e35e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_5d36f86f39cd5609a4ec12b44ac3f38a)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_195b95252f415d3ea28ed5776984be6a)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_77cf95e9a3285d148a5a632596d92015)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_e066bbb7910e52adb217441b852c766f)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::cols;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_4695c8d4772b5a55be657054e847ece0)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::coeff;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_0017a872ae525e23a7e46b92af18bd73)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::coeff;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_e7ae9a30c25d540cae99fa9546d90ee8)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_b3cfd80683c35e2391425a5246ebe67f)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_c2252be8b68b57cc82d5f9ce9a94884e)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_3779f8d8ce39508c937f418710287b88)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::coeffRef;
    struct ::std::complex< double >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_e4793fbd67315b11a387311996de24d4)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::data;
    struct ::std::complex< double >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_3ce154e2627652b591a7478b06b9a318)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_f2f0a4eda7bc5a6f8c1726f83807a3f3)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_b7d8a0f53020506884a0b53266005127)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_bd8cb90df39d5c5db47ecefa4cdead29)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_c6042374e3f85d29ab03a62e97a57414)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_0857ae8330a8532694bcd49c18b424f4)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_79c005c4888654f5b2535438c12dd0a3)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_0610d2abc5d75da88d7518eeeeea5bfb)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_2b854dc71ca351bfb9487baf7c1eb8ac)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_157f3134394c572b836d7a2aaf7d7f01)(long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_cc5af1a1147e54699f380b09c56135ae)(long int , long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_f6479152c9245ba18e1a664e84ce712b)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_12386d105d155d14be1ed77973f14101)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_0acd52fb41cf5c49861402134191c45a)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_4f8489130e105ec69785c920db8c07ea)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_74effc7175d15139ba7984969ff06654)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 > >::*method_pointer_aa7ee7b602ca5c57935e0a85f9852b44)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::setRandom;
    void  (*method_pointer_f3c7a52a8e275843bf6af0265124595a)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > > > class_40e6d71edbcc55bab4010ef5d5c6e35e("_PlainObjectBase_40e6d71edbcc55bab4010ef5d5c6e35e", "", boost::python::no_init);
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("base", method_pointer_5d36f86f39cd5609a4ec12b44ac3f38a, boost::python::return_internal_reference<>(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("base", autowig::method_decorator_5d36f86f39cd5609a4ec12b44ac3f38a);
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("base", method_pointer_195b95252f415d3ea28ed5776984be6a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("rows", method_pointer_77cf95e9a3285d148a5a632596d92015, "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("cols", method_pointer_e066bbb7910e52adb217441b852c766f, "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("coeff", method_pointer_4695c8d4772b5a55be657054e847ece0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("coeff", method_pointer_0017a872ae525e23a7e46b92af18bd73, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("coeff_ref", method_pointer_e7ae9a30c25d540cae99fa9546d90ee8, boost::python::return_internal_reference<>(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("coeff_ref", autowig::method_decorator_e7ae9a30c25d540cae99fa9546d90ee8);
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("coeff_ref", method_pointer_b3cfd80683c35e2391425a5246ebe67f, boost::python::return_internal_reference<>(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("coeff_ref", autowig::method_decorator_b3cfd80683c35e2391425a5246ebe67f);
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("coeff_ref", method_pointer_c2252be8b68b57cc82d5f9ce9a94884e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("coeff_ref", method_pointer_3779f8d8ce39508c937f418710287b88, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("data", method_pointer_e4793fbd67315b11a387311996de24d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("data", method_pointer_3ce154e2627652b591a7478b06b9a318, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("resize", method_pointer_f2f0a4eda7bc5a6f8c1726f83807a3f3, "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("resize", method_pointer_b7d8a0f53020506884a0b53266005127, "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("resize", method_pointer_bd8cb90df39d5c5db47ecefa4cdead29, "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("resize", method_pointer_c6042374e3f85d29ab03a62e97a57414, "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("conservative_resize", method_pointer_0857ae8330a8532694bcd49c18b424f4, "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("conservative_resize", method_pointer_79c005c4888654f5b2535438c12dd0a3, "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("conservative_resize", method_pointer_0610d2abc5d75da88d7518eeeeea5bfb, "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("conservative_resize", method_pointer_2b854dc71ca351bfb9487baf7c1eb8ac, "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_constant", method_pointer_157f3134394c572b836d7a2aaf7d7f01, boost::python::return_internal_reference<>(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_constant", autowig::method_decorator_157f3134394c572b836d7a2aaf7d7f01);
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_constant", method_pointer_cc5af1a1147e54699f380b09c56135ae, boost::python::return_internal_reference<>(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_constant", autowig::method_decorator_cc5af1a1147e54699f380b09c56135ae);
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_zero", method_pointer_f6479152c9245ba18e1a664e84ce712b, boost::python::return_internal_reference<>(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_zero", autowig::method_decorator_f6479152c9245ba18e1a664e84ce712b);
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_zero", method_pointer_12386d105d155d14be1ed77973f14101, boost::python::return_internal_reference<>(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_zero", autowig::method_decorator_12386d105d155d14be1ed77973f14101);
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_ones", method_pointer_0acd52fb41cf5c49861402134191c45a, boost::python::return_internal_reference<>(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_ones", autowig::method_decorator_0acd52fb41cf5c49861402134191c45a);
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_ones", method_pointer_4f8489130e105ec69785c920db8c07ea, boost::python::return_internal_reference<>(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_ones", autowig::method_decorator_4f8489130e105ec69785c920db8c07ea);
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_random", method_pointer_74effc7175d15139ba7984969ff06654, boost::python::return_internal_reference<>(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_random", autowig::method_decorator_74effc7175d15139ba7984969ff06654);
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_random", method_pointer_aa7ee7b602ca5c57935e0a85f9852b44, boost::python::return_internal_reference<>(), "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("set_random", autowig::method_decorator_aa7ee7b602ca5c57935e0a85f9852b44);
    class_40e6d71edbcc55bab4010ef5d5c6e35e.def("check_template_params", method_pointer_f3c7a52a8e275843bf6af0265124595a, "");
    class_40e6d71edbcc55bab4010ef5d5c6e35e.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > > >();
    }

}