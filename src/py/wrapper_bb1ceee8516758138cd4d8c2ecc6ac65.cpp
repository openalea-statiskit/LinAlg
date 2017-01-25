#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6822e95fec265239b385bc72cd6cd533(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_3770422d94a45753893ae2777fd5ac8d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_bcd0e51b2aa65f738c71b35f45c229a9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, const int  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_0c836b533630513fb96545f0bfdb9345(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_9d2baf703efd58cc9d1c040a1d2481f4(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_41fc8191717f5b809b4e27392cd94973(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_4fb364facf725fac9c2be854048fd550(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_9d5dd4621dc95090bc5b9ff28dd06f7a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_2b233359a5e557d1a2206dd1bfacdd19(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_f815d1dde7785d6e8f63aea565a29c3c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_8929a1746b4c537fbb4aa88cbfe643bd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_bb1ceee8516758138cd4d8c2ecc6ac65()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_6822e95fec265239b385bc72cd6cd533)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_1cb9ea65db395ebabed55276b7d53d62)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_5c32dc7ad1135209a87c0a8b9e182d5b)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_97b1475da9925cd395c051b51461ec4a)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::cols;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_ed6394fb5f385a6da99652f1c901cd58)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::coeff;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_4e4dbd5156f154f0858d64a95876404b)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::coeff;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_3770422d94a45753893ae2777fd5ac8d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::coeffRef;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_bcd0e51b2aa65f738c71b35f45c229a9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_ad391205c163502fadf4b312928d78b7)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_c6899ca316575de59a48ad723cf49481)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_f58ad662f1fd5bc9bce32a096b96b1a1)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_b6d6673b71415ee1bd7692a6b4884af0)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_f0c6062d262659e29a86d95b3cf8c92b)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_d4a24a7d708c585bb99fa7b400fcca22)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_c7ce00d2b030579f9785f52176e07f14)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_a77a36b2bcb35a2bbeef4330103f5ae1)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_d55d64fa1af7597a8f07e9b543d0181f)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_c562a7b35a7450aebc91dae56806ee7c)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::conservativeResize;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_0c836b533630513fb96545f0bfdb9345)(long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_9d2baf703efd58cc9d1c040a1d2481f4)(long int , long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_41fc8191717f5b809b4e27392cd94973)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_4fb364facf725fac9c2be854048fd550)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_9d5dd4621dc95090bc5b9ff28dd06f7a)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_2b233359a5e557d1a2206dd1bfacdd19)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_f815d1dde7785d6e8f63aea565a29c3c)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setRandom;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_8929a1746b4c537fbb4aa88cbfe643bd)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setRandom;
    void  (*method_pointer_b28dfaf36633562c9515d43125cdff82)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > > > class_bb1ceee8516758138cd4d8c2ecc6ac65("_PlainObjectBase_bb1ceee8516758138cd4d8c2ecc6ac65", "", boost::python::no_init);
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("base", method_pointer_6822e95fec265239b385bc72cd6cd533, boost::python::return_internal_reference<>(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("base", autowig::method_decorator_6822e95fec265239b385bc72cd6cd533);
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("base", method_pointer_1cb9ea65db395ebabed55276b7d53d62, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("rows", method_pointer_5c32dc7ad1135209a87c0a8b9e182d5b, "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("cols", method_pointer_97b1475da9925cd395c051b51461ec4a, "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("coeff", method_pointer_ed6394fb5f385a6da99652f1c901cd58, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("coeff", method_pointer_4e4dbd5156f154f0858d64a95876404b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("coeff_ref", method_pointer_3770422d94a45753893ae2777fd5ac8d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("coeff_ref", autowig::method_decorator_3770422d94a45753893ae2777fd5ac8d);
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("coeff_ref", method_pointer_bcd0e51b2aa65f738c71b35f45c229a9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("coeff_ref", autowig::method_decorator_bcd0e51b2aa65f738c71b35f45c229a9);
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("coeff_ref", method_pointer_ad391205c163502fadf4b312928d78b7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("coeff_ref", method_pointer_c6899ca316575de59a48ad723cf49481, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("resize", method_pointer_f58ad662f1fd5bc9bce32a096b96b1a1, "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("resize", method_pointer_b6d6673b71415ee1bd7692a6b4884af0, "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("resize", method_pointer_f0c6062d262659e29a86d95b3cf8c92b, "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("resize", method_pointer_d4a24a7d708c585bb99fa7b400fcca22, "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("conservative_resize", method_pointer_c7ce00d2b030579f9785f52176e07f14, "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("conservative_resize", method_pointer_a77a36b2bcb35a2bbeef4330103f5ae1, "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("conservative_resize", method_pointer_d55d64fa1af7597a8f07e9b543d0181f, "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("conservative_resize", method_pointer_c562a7b35a7450aebc91dae56806ee7c, "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_constant", method_pointer_0c836b533630513fb96545f0bfdb9345, boost::python::return_internal_reference<>(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_constant", autowig::method_decorator_0c836b533630513fb96545f0bfdb9345);
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_constant", method_pointer_9d2baf703efd58cc9d1c040a1d2481f4, boost::python::return_internal_reference<>(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_constant", autowig::method_decorator_9d2baf703efd58cc9d1c040a1d2481f4);
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_zero", method_pointer_41fc8191717f5b809b4e27392cd94973, boost::python::return_internal_reference<>(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_zero", autowig::method_decorator_41fc8191717f5b809b4e27392cd94973);
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_zero", method_pointer_4fb364facf725fac9c2be854048fd550, boost::python::return_internal_reference<>(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_zero", autowig::method_decorator_4fb364facf725fac9c2be854048fd550);
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_ones", method_pointer_9d5dd4621dc95090bc5b9ff28dd06f7a, boost::python::return_internal_reference<>(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_ones", autowig::method_decorator_9d5dd4621dc95090bc5b9ff28dd06f7a);
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_ones", method_pointer_2b233359a5e557d1a2206dd1bfacdd19, boost::python::return_internal_reference<>(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_ones", autowig::method_decorator_2b233359a5e557d1a2206dd1bfacdd19);
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_random", method_pointer_f815d1dde7785d6e8f63aea565a29c3c, boost::python::return_internal_reference<>(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_random", autowig::method_decorator_f815d1dde7785d6e8f63aea565a29c3c);
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_random", method_pointer_8929a1746b4c537fbb4aa88cbfe643bd, boost::python::return_internal_reference<>(), "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("set_random", autowig::method_decorator_8929a1746b4c537fbb4aa88cbfe643bd);
    class_bb1ceee8516758138cd4d8c2ecc6ac65.def("check_template_params", method_pointer_b28dfaf36633562c9515d43125cdff82, "");
    class_bb1ceee8516758138cd4d8c2ecc6ac65.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > > >();
    }

}