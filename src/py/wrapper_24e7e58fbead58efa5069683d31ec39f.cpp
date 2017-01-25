#include "_ieigen.h"


namespace autowig
{
    void method_decorator_68f1d8ec653059a0884c98648a17c0a7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_30b128516cc1508282abb5e86e1e4573(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_cdc8eb22543554d09cf8b4b0119d08e2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_bc08372f8eb35be0aa3a824256cf949b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_857616528a8750dc9d28b8376d624224(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_5cde329740605d03818fe734cb0be1ee(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_e4c6c27687d25d418da2feb4161f6966(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_51a73e9251a15f94b8dd9e2a42fde7c9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_efbf1a0869ba5a2da27fe666ef41064b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_c23e7c096c5e5a2cbdfaeae9ce898e49(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_8f411ef51b885b6f890faa55b3f25c6d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_24e7e58fbead58efa5069683d31ec39f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_68f1d8ec653059a0884c98648a17c0a7)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_c0eb1b7b118950febb6b884d3402e623)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_4916b237db705b838c86bab5851ed8f5)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_07226a9af9b0546082f3989f2b897f44)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::cols;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_16342cdd53675255b4e0ee6ed04f58ae)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::coeff;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_2b9e214fc8055cc8b5d96ec23ee30c5a)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::coeff;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_30b128516cc1508282abb5e86e1e4573)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_cdc8eb22543554d09cf8b4b0119d08e2)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_f7be9c953c03550cabf3c8c2063afab3)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_99bf2f8d43a8580caccb6e1582c1486a)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::coeffRef;
    struct ::std::complex< double >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_2a36e4846d78599fa080b0faf3383647)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::data;
    struct ::std::complex< double >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_ed7adb10933a57ed8153358cac08d533)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_5c21f98574a35c7289c5425b55aa6066)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_0560f5da55da5f73bbd44a7018c79cb5)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_9513910cb656505ab006bc620c3f5ab2)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_2e81b5dcbd5e5eeda3920b4f7dc4f8e8)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_abdabcbb98495860a08372b111cd1a09)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_97ae215443ac5e158a0b58a81ef4a164)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_9030e7a5ec58584f900a8a46f366c21f)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_ccd802179d4f536e83d5e5565f43c3eb)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_bc08372f8eb35be0aa3a824256cf949b)(long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_857616528a8750dc9d28b8376d624224)(long int , long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_5cde329740605d03818fe734cb0be1ee)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_e4c6c27687d25d418da2feb4161f6966)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_51a73e9251a15f94b8dd9e2a42fde7c9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_efbf1a0869ba5a2da27fe666ef41064b)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_c23e7c096c5e5a2cbdfaeae9ce898e49)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 2, 1, 1, 2 > >::*method_pointer_8f411ef51b885b6f890faa55b3f25c6d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::setRandom;
    void  (*method_pointer_37d4409c3e0655e6a95736de9e56ac1b)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > > > class_24e7e58fbead58efa5069683d31ec39f("_PlainObjectBase_24e7e58fbead58efa5069683d31ec39f", "", boost::python::no_init);
    class_24e7e58fbead58efa5069683d31ec39f.def("base", method_pointer_68f1d8ec653059a0884c98648a17c0a7, boost::python::return_internal_reference<>(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("base", autowig::method_decorator_68f1d8ec653059a0884c98648a17c0a7);
    class_24e7e58fbead58efa5069683d31ec39f.def("base", method_pointer_c0eb1b7b118950febb6b884d3402e623, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("rows", method_pointer_4916b237db705b838c86bab5851ed8f5, "");
    class_24e7e58fbead58efa5069683d31ec39f.def("cols", method_pointer_07226a9af9b0546082f3989f2b897f44, "");
    class_24e7e58fbead58efa5069683d31ec39f.def("coeff", method_pointer_16342cdd53675255b4e0ee6ed04f58ae, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("coeff", method_pointer_2b9e214fc8055cc8b5d96ec23ee30c5a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("coeff_ref", method_pointer_30b128516cc1508282abb5e86e1e4573, boost::python::return_internal_reference<>(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("coeff_ref", autowig::method_decorator_30b128516cc1508282abb5e86e1e4573);
    class_24e7e58fbead58efa5069683d31ec39f.def("coeff_ref", method_pointer_cdc8eb22543554d09cf8b4b0119d08e2, boost::python::return_internal_reference<>(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("coeff_ref", autowig::method_decorator_cdc8eb22543554d09cf8b4b0119d08e2);
    class_24e7e58fbead58efa5069683d31ec39f.def("coeff_ref", method_pointer_f7be9c953c03550cabf3c8c2063afab3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("coeff_ref", method_pointer_99bf2f8d43a8580caccb6e1582c1486a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("data", method_pointer_2a36e4846d78599fa080b0faf3383647, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("data", method_pointer_ed7adb10933a57ed8153358cac08d533, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("resize", method_pointer_5c21f98574a35c7289c5425b55aa6066, "");
    class_24e7e58fbead58efa5069683d31ec39f.def("resize", method_pointer_0560f5da55da5f73bbd44a7018c79cb5, "");
    class_24e7e58fbead58efa5069683d31ec39f.def("resize", method_pointer_9513910cb656505ab006bc620c3f5ab2, "");
    class_24e7e58fbead58efa5069683d31ec39f.def("resize", method_pointer_2e81b5dcbd5e5eeda3920b4f7dc4f8e8, "");
    class_24e7e58fbead58efa5069683d31ec39f.def("conservative_resize", method_pointer_abdabcbb98495860a08372b111cd1a09, "");
    class_24e7e58fbead58efa5069683d31ec39f.def("conservative_resize", method_pointer_97ae215443ac5e158a0b58a81ef4a164, "");
    class_24e7e58fbead58efa5069683d31ec39f.def("conservative_resize", method_pointer_9030e7a5ec58584f900a8a46f366c21f, "");
    class_24e7e58fbead58efa5069683d31ec39f.def("conservative_resize", method_pointer_ccd802179d4f536e83d5e5565f43c3eb, "");
    class_24e7e58fbead58efa5069683d31ec39f.def("set_constant", method_pointer_bc08372f8eb35be0aa3a824256cf949b, boost::python::return_internal_reference<>(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("set_constant", autowig::method_decorator_bc08372f8eb35be0aa3a824256cf949b);
    class_24e7e58fbead58efa5069683d31ec39f.def("set_constant", method_pointer_857616528a8750dc9d28b8376d624224, boost::python::return_internal_reference<>(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("set_constant", autowig::method_decorator_857616528a8750dc9d28b8376d624224);
    class_24e7e58fbead58efa5069683d31ec39f.def("set_zero", method_pointer_5cde329740605d03818fe734cb0be1ee, boost::python::return_internal_reference<>(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("set_zero", autowig::method_decorator_5cde329740605d03818fe734cb0be1ee);
    class_24e7e58fbead58efa5069683d31ec39f.def("set_zero", method_pointer_e4c6c27687d25d418da2feb4161f6966, boost::python::return_internal_reference<>(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("set_zero", autowig::method_decorator_e4c6c27687d25d418da2feb4161f6966);
    class_24e7e58fbead58efa5069683d31ec39f.def("set_ones", method_pointer_51a73e9251a15f94b8dd9e2a42fde7c9, boost::python::return_internal_reference<>(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("set_ones", autowig::method_decorator_51a73e9251a15f94b8dd9e2a42fde7c9);
    class_24e7e58fbead58efa5069683d31ec39f.def("set_ones", method_pointer_efbf1a0869ba5a2da27fe666ef41064b, boost::python::return_internal_reference<>(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("set_ones", autowig::method_decorator_efbf1a0869ba5a2da27fe666ef41064b);
    class_24e7e58fbead58efa5069683d31ec39f.def("set_random", method_pointer_c23e7c096c5e5a2cbdfaeae9ce898e49, boost::python::return_internal_reference<>(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("set_random", autowig::method_decorator_c23e7c096c5e5a2cbdfaeae9ce898e49);
    class_24e7e58fbead58efa5069683d31ec39f.def("set_random", method_pointer_8f411ef51b885b6f890faa55b3f25c6d, boost::python::return_internal_reference<>(), "");
    class_24e7e58fbead58efa5069683d31ec39f.def("set_random", autowig::method_decorator_8f411ef51b885b6f890faa55b3f25c6d);
    class_24e7e58fbead58efa5069683d31ec39f.def("check_template_params", method_pointer_37d4409c3e0655e6a95736de9e56ac1b, "");
    class_24e7e58fbead58efa5069683d31ec39f.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 2, 1, 1, 2 > > > >();
    }

}