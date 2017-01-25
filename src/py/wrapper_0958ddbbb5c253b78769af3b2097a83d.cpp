#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f466312c89ba514faa414c056e9e4b0a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_d19613cee6985eaabdbca9d716636c37(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_2eba272f32ce5b94ade9016d4219660c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_2154c5a25b3a5ec0b39e05a0a0d0cf06(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_0341db852ce454a69012797148c86208(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_64da1a7ffcb056cd99f4f98a28ed8785(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_409ba293df36558583116891346b8daa(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_a305912414fc5e34a261cce8877b711a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_862608bf02fa5b93b05406ad2a8c7c77(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_66de9ac8973b56eeb055273875df8ec9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_2d4370d285c2526d8f7c0f130bc6e774(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_0958ddbbb5c253b78769af3b2097a83d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_f466312c89ba514faa414c056e9e4b0a)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_45133d71f6a95bafa091599a17a30aba)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_debb85cec1535e7397de68fa7745a947)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_bd1fb046105b58cdb333aca4fa02c2be)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::cols;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_0630a33f32f4586f89a8e5b7884e4c67)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::coeff;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_81b29ca848f45fcdbcc79f81e2d5effc)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::coeff;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_d19613cee6985eaabdbca9d716636c37)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::coeffRef;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_2eba272f32ce5b94ade9016d4219660c)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_9037159b48555edbbd24a948199f46f9)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_11c8240545c85b4898c9724c6a07788a)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_1665234aec8f595e8790448ecba5b0cd)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_3e5570e3c6b05990b81d5d0c38109a0d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_7816cd032767523b9b191de0d1c07f18)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_2c5fbc6cdef653ef9268e893a8e2ae98)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_e4e47dd4cd8a574ba5a9914726150f7b)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_7bef0a9786ad5f37848e1ac50f566e6e)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_5b45d5451474542ca939da429d37d542)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_2483c34450ab5ffdbfb3e46d4ddd8c81)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::conservativeResize;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_2154c5a25b3a5ec0b39e05a0a0d0cf06)(long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setConstant;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_0341db852ce454a69012797148c86208)(long int , long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setConstant;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_64da1a7ffcb056cd99f4f98a28ed8785)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setZero;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_409ba293df36558583116891346b8daa)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setZero;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_a305912414fc5e34a261cce8877b711a)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setOnes;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_862608bf02fa5b93b05406ad2a8c7c77)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setOnes;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_66de9ac8973b56eeb055273875df8ec9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setRandom;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_2d4370d285c2526d8f7c0f130bc6e774)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setRandom;
    void  (*method_pointer_fe33bf531de351f8a4ccdd4ff167c208)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > > class_0958ddbbb5c253b78769af3b2097a83d("_PlainObjectBase_0958ddbbb5c253b78769af3b2097a83d", "", boost::python::no_init);
    class_0958ddbbb5c253b78769af3b2097a83d.def("base", method_pointer_f466312c89ba514faa414c056e9e4b0a, boost::python::return_internal_reference<>(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("base", autowig::method_decorator_f466312c89ba514faa414c056e9e4b0a);
    class_0958ddbbb5c253b78769af3b2097a83d.def("base", method_pointer_45133d71f6a95bafa091599a17a30aba, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("rows", method_pointer_debb85cec1535e7397de68fa7745a947, "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("cols", method_pointer_bd1fb046105b58cdb333aca4fa02c2be, "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("coeff", method_pointer_0630a33f32f4586f89a8e5b7884e4c67, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("coeff", method_pointer_81b29ca848f45fcdbcc79f81e2d5effc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("coeff_ref", method_pointer_d19613cee6985eaabdbca9d716636c37, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("coeff_ref", autowig::method_decorator_d19613cee6985eaabdbca9d716636c37);
    class_0958ddbbb5c253b78769af3b2097a83d.def("coeff_ref", method_pointer_2eba272f32ce5b94ade9016d4219660c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("coeff_ref", autowig::method_decorator_2eba272f32ce5b94ade9016d4219660c);
    class_0958ddbbb5c253b78769af3b2097a83d.def("coeff_ref", method_pointer_9037159b48555edbbd24a948199f46f9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("coeff_ref", method_pointer_11c8240545c85b4898c9724c6a07788a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("resize", method_pointer_1665234aec8f595e8790448ecba5b0cd, "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("resize", method_pointer_3e5570e3c6b05990b81d5d0c38109a0d, "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("resize", method_pointer_7816cd032767523b9b191de0d1c07f18, "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("resize", method_pointer_2c5fbc6cdef653ef9268e893a8e2ae98, "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("conservative_resize", method_pointer_e4e47dd4cd8a574ba5a9914726150f7b, "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("conservative_resize", method_pointer_7bef0a9786ad5f37848e1ac50f566e6e, "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("conservative_resize", method_pointer_5b45d5451474542ca939da429d37d542, "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("conservative_resize", method_pointer_2483c34450ab5ffdbfb3e46d4ddd8c81, "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_constant", method_pointer_2154c5a25b3a5ec0b39e05a0a0d0cf06, boost::python::return_internal_reference<>(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_constant", autowig::method_decorator_2154c5a25b3a5ec0b39e05a0a0d0cf06);
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_constant", method_pointer_0341db852ce454a69012797148c86208, boost::python::return_internal_reference<>(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_constant", autowig::method_decorator_0341db852ce454a69012797148c86208);
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_zero", method_pointer_64da1a7ffcb056cd99f4f98a28ed8785, boost::python::return_internal_reference<>(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_zero", autowig::method_decorator_64da1a7ffcb056cd99f4f98a28ed8785);
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_zero", method_pointer_409ba293df36558583116891346b8daa, boost::python::return_internal_reference<>(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_zero", autowig::method_decorator_409ba293df36558583116891346b8daa);
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_ones", method_pointer_a305912414fc5e34a261cce8877b711a, boost::python::return_internal_reference<>(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_ones", autowig::method_decorator_a305912414fc5e34a261cce8877b711a);
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_ones", method_pointer_862608bf02fa5b93b05406ad2a8c7c77, boost::python::return_internal_reference<>(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_ones", autowig::method_decorator_862608bf02fa5b93b05406ad2a8c7c77);
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_random", method_pointer_66de9ac8973b56eeb055273875df8ec9, boost::python::return_internal_reference<>(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_random", autowig::method_decorator_66de9ac8973b56eeb055273875df8ec9);
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_random", method_pointer_2d4370d285c2526d8f7c0f130bc6e774, boost::python::return_internal_reference<>(), "");
    class_0958ddbbb5c253b78769af3b2097a83d.def("set_random", autowig::method_decorator_2d4370d285c2526d8f7c0f130bc6e774);
    class_0958ddbbb5c253b78769af3b2097a83d.def("check_template_params", method_pointer_fe33bf531de351f8a4ccdd4ff167c208, "");
    class_0958ddbbb5c253b78769af3b2097a83d.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > >();
    }

}