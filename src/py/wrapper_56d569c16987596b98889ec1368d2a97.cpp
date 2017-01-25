#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ebd7947a35d3568192834389b1b2bc37(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_a78551f73c80596d8ab06ca4a27faa43(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_d86fa7d69a6552ee91e2715de1f32ab6(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_b7ede0f4db8853a28b59f8a376265ae3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_7846cf5ec28550a7bd069da9b77ac63b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_54bf7ee8dbc55f96aecd4ce66c183e81(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_d1de96a7189e581488a2df3f1eaded60(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_1d147e042f37525caa4c1d456123616b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_8748dfe2d1885f55880d4f2fe7f565dd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_69187bcadddc544aac4868f1d43e4008(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_e55e607673935031864f14810cb75add(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_56d569c16987596b98889ec1368d2a97()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_ebd7947a35d3568192834389b1b2bc37)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_6851ae8132765b61a2c29c52eac6730a)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_1f305a6a972c50e0b6d663f3bf424a3b)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_37431c2d57335642ad0de4148a7b52f1)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::cols;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_2a738e99914753bdbcf0c5d25aa7947f)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::coeff;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_241e99d31a575c239fa12faf9400f155)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::coeff;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_a78551f73c80596d8ab06ca4a27faa43)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::coeffRef;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_d86fa7d69a6552ee91e2715de1f32ab6)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_1d07295d08fa5742b048f9c05061ca15)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_685b8f89810650729c6fc9c6af6341ca)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_4497456d9116510baadbd641d6dba1b1)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_aab866c67000527c953f4bb4d4744a8c)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_5fdcad57b49b5cc0a1bd11d9ac6124f1)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_20f167f123b95eceb1bf3c5e5c581660)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_c0753b24635250ecb4fb15c5d0109f14)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_9a6d87a8d033572480f4f2bcf1c088aa)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_9e576e79f042566b9d2d76d6160eb53d)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_54e112f350d15cc782bd6b62ad1a5e88)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::conservativeResize;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_b7ede0f4db8853a28b59f8a376265ae3)(long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setConstant;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_7846cf5ec28550a7bd069da9b77ac63b)(long int , long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setConstant;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_54bf7ee8dbc55f96aecd4ce66c183e81)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_d1de96a7189e581488a2df3f1eaded60)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_1d147e042f37525caa4c1d456123616b)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_8748dfe2d1885f55880d4f2fe7f565dd)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_69187bcadddc544aac4868f1d43e4008)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setRandom;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_e55e607673935031864f14810cb75add)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setRandom;
    void  (*method_pointer_92255d9f92185188962296e0b9f17396)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > > > class_56d569c16987596b98889ec1368d2a97("_PlainObjectBase_56d569c16987596b98889ec1368d2a97", "", boost::python::no_init);
    class_56d569c16987596b98889ec1368d2a97.def("base", method_pointer_ebd7947a35d3568192834389b1b2bc37, boost::python::return_internal_reference<>(), "");
    class_56d569c16987596b98889ec1368d2a97.def("base", autowig::method_decorator_ebd7947a35d3568192834389b1b2bc37);
    class_56d569c16987596b98889ec1368d2a97.def("base", method_pointer_6851ae8132765b61a2c29c52eac6730a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_56d569c16987596b98889ec1368d2a97.def("rows", method_pointer_1f305a6a972c50e0b6d663f3bf424a3b, "");
    class_56d569c16987596b98889ec1368d2a97.def("cols", method_pointer_37431c2d57335642ad0de4148a7b52f1, "");
    class_56d569c16987596b98889ec1368d2a97.def("coeff", method_pointer_2a738e99914753bdbcf0c5d25aa7947f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_56d569c16987596b98889ec1368d2a97.def("coeff", method_pointer_241e99d31a575c239fa12faf9400f155, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_56d569c16987596b98889ec1368d2a97.def("coeff_ref", method_pointer_a78551f73c80596d8ab06ca4a27faa43, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_56d569c16987596b98889ec1368d2a97.def("coeff_ref", autowig::method_decorator_a78551f73c80596d8ab06ca4a27faa43);
    class_56d569c16987596b98889ec1368d2a97.def("coeff_ref", method_pointer_d86fa7d69a6552ee91e2715de1f32ab6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_56d569c16987596b98889ec1368d2a97.def("coeff_ref", autowig::method_decorator_d86fa7d69a6552ee91e2715de1f32ab6);
    class_56d569c16987596b98889ec1368d2a97.def("coeff_ref", method_pointer_1d07295d08fa5742b048f9c05061ca15, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_56d569c16987596b98889ec1368d2a97.def("coeff_ref", method_pointer_685b8f89810650729c6fc9c6af6341ca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_56d569c16987596b98889ec1368d2a97.def("resize", method_pointer_4497456d9116510baadbd641d6dba1b1, "");
    class_56d569c16987596b98889ec1368d2a97.def("resize", method_pointer_aab866c67000527c953f4bb4d4744a8c, "");
    class_56d569c16987596b98889ec1368d2a97.def("resize", method_pointer_5fdcad57b49b5cc0a1bd11d9ac6124f1, "");
    class_56d569c16987596b98889ec1368d2a97.def("resize", method_pointer_20f167f123b95eceb1bf3c5e5c581660, "");
    class_56d569c16987596b98889ec1368d2a97.def("conservative_resize", method_pointer_c0753b24635250ecb4fb15c5d0109f14, "");
    class_56d569c16987596b98889ec1368d2a97.def("conservative_resize", method_pointer_9a6d87a8d033572480f4f2bcf1c088aa, "");
    class_56d569c16987596b98889ec1368d2a97.def("conservative_resize", method_pointer_9e576e79f042566b9d2d76d6160eb53d, "");
    class_56d569c16987596b98889ec1368d2a97.def("conservative_resize", method_pointer_54e112f350d15cc782bd6b62ad1a5e88, "");
    class_56d569c16987596b98889ec1368d2a97.def("set_constant", method_pointer_b7ede0f4db8853a28b59f8a376265ae3, boost::python::return_internal_reference<>(), "");
    class_56d569c16987596b98889ec1368d2a97.def("set_constant", autowig::method_decorator_b7ede0f4db8853a28b59f8a376265ae3);
    class_56d569c16987596b98889ec1368d2a97.def("set_constant", method_pointer_7846cf5ec28550a7bd069da9b77ac63b, boost::python::return_internal_reference<>(), "");
    class_56d569c16987596b98889ec1368d2a97.def("set_constant", autowig::method_decorator_7846cf5ec28550a7bd069da9b77ac63b);
    class_56d569c16987596b98889ec1368d2a97.def("set_zero", method_pointer_54bf7ee8dbc55f96aecd4ce66c183e81, boost::python::return_internal_reference<>(), "");
    class_56d569c16987596b98889ec1368d2a97.def("set_zero", autowig::method_decorator_54bf7ee8dbc55f96aecd4ce66c183e81);
    class_56d569c16987596b98889ec1368d2a97.def("set_zero", method_pointer_d1de96a7189e581488a2df3f1eaded60, boost::python::return_internal_reference<>(), "");
    class_56d569c16987596b98889ec1368d2a97.def("set_zero", autowig::method_decorator_d1de96a7189e581488a2df3f1eaded60);
    class_56d569c16987596b98889ec1368d2a97.def("set_ones", method_pointer_1d147e042f37525caa4c1d456123616b, boost::python::return_internal_reference<>(), "");
    class_56d569c16987596b98889ec1368d2a97.def("set_ones", autowig::method_decorator_1d147e042f37525caa4c1d456123616b);
    class_56d569c16987596b98889ec1368d2a97.def("set_ones", method_pointer_8748dfe2d1885f55880d4f2fe7f565dd, boost::python::return_internal_reference<>(), "");
    class_56d569c16987596b98889ec1368d2a97.def("set_ones", autowig::method_decorator_8748dfe2d1885f55880d4f2fe7f565dd);
    class_56d569c16987596b98889ec1368d2a97.def("set_random", method_pointer_69187bcadddc544aac4868f1d43e4008, boost::python::return_internal_reference<>(), "");
    class_56d569c16987596b98889ec1368d2a97.def("set_random", autowig::method_decorator_69187bcadddc544aac4868f1d43e4008);
    class_56d569c16987596b98889ec1368d2a97.def("set_random", method_pointer_e55e607673935031864f14810cb75add, boost::python::return_internal_reference<>(), "");
    class_56d569c16987596b98889ec1368d2a97.def("set_random", autowig::method_decorator_e55e607673935031864f14810cb75add);
    class_56d569c16987596b98889ec1368d2a97.def("check_template_params", method_pointer_92255d9f92185188962296e0b9f17396, "");
    class_56d569c16987596b98889ec1368d2a97.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > > >();
    }

}