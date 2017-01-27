#include "_ieigen.h"


namespace autowig
{
    void method_decorator_495f14c6778f5204b332e92a0bb2dd47(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_da1d1927ebd959d08e3cd7bcb89f828d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_2c3267186ef15ffab0b0cda625bf12a2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, const double  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_3a5ccc711f5f59f6b332bd7b0c61b88d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_dfab47808e485655ad9ec89860441ac2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO // TODO     void method_decorator_2e1fb263607b5eee9add51193a624806(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_b66d3181dc055245b3bd406be63163fc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
// TODO // TODO     void method_decorator_fab208a2c984574b8d25f023ee3d40d5(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_8560aa17c26a5a66a101ad70bf3131a4(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
// TODO     void method_decorator_3cdd09c7f91850cebe491ff6a237c8a3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_fbd16b90f0b858b3aedb7a5b67994089(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_474e8b06dc685c1e9deb485a1426bbb0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_495f14c6778f5204b332e92a0bb2dd47)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_f08312e96c04576e83ab74e1b4523d4e)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_75bb6b3b969950e28185e05ee2a61a5b)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_9a7ea26dd6ed51a7b8a05f4132f726e4)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::cols;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_35ec5d89689253bc8ff460c6777cbf84)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::coeff;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_c067ffc25c315fc49ecca3ae69497c11)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::coeff;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_da1d1927ebd959d08e3cd7bcb89f828d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::coeffRef;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_2c3267186ef15ffab0b0cda625bf12a2)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_5bfd5748657b569294f28b15a23cedbf)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_077a8dccfcf05c599f8eca047d0b88fe)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_24705d88e88b52f480de91b37f66fef9)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_b1bba70dbba154c6bccd7d052c5140ad)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_b6287dbba5d65c819299c36f35e2f651)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::resize;
// TODO     class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_3a5ccc711f5f59f6b332bd7b0c61b88d)(long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setConstant;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_dfab47808e485655ad9ec89860441ac2)(long int , long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setConstant;
// TODO     class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_2e1fb263607b5eee9add51193a624806)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setZero;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_b66d3181dc055245b3bd406be63163fc)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setZero;
// TODO     class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_fab208a2c984574b8d25f023ee3d40d5)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setOnes;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_8560aa17c26a5a66a101ad70bf3131a4)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setOnes;
// TODO     class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_3cdd09c7f91850cebe491ff6a237c8a3)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setRandom;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_fbd16b90f0b858b3aedb7a5b67994089)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setRandom;
    void  (*method_pointer_bd0bb7474faa5663b81f4235eeb910e9)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >, boost::noncopyable > class_474e8b06dc685c1e9deb485a1426bbb0("_PlainObjectBase_474e8b06dc685c1e9deb485a1426bbb0", "", boost::python::no_init);
    class_474e8b06dc685c1e9deb485a1426bbb0.def("base", method_pointer_495f14c6778f5204b332e92a0bb2dd47, boost::python::return_internal_reference<>(), "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("base", autowig::method_decorator_495f14c6778f5204b332e92a0bb2dd47);
    class_474e8b06dc685c1e9deb485a1426bbb0.def("base", method_pointer_f08312e96c04576e83ab74e1b4523d4e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("rows", method_pointer_75bb6b3b969950e28185e05ee2a61a5b, "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("cols", method_pointer_9a7ea26dd6ed51a7b8a05f4132f726e4, "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("coeff", method_pointer_35ec5d89689253bc8ff460c6777cbf84, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("coeff", method_pointer_c067ffc25c315fc49ecca3ae69497c11, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("coeff_ref", method_pointer_da1d1927ebd959d08e3cd7bcb89f828d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("coeff_ref", autowig::method_decorator_da1d1927ebd959d08e3cd7bcb89f828d);
    class_474e8b06dc685c1e9deb485a1426bbb0.def("coeff_ref", method_pointer_2c3267186ef15ffab0b0cda625bf12a2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("coeff_ref", autowig::method_decorator_2c3267186ef15ffab0b0cda625bf12a2);
    class_474e8b06dc685c1e9deb485a1426bbb0.def("coeff_ref", method_pointer_5bfd5748657b569294f28b15a23cedbf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("coeff_ref", method_pointer_077a8dccfcf05c599f8eca047d0b88fe, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("resize", method_pointer_24705d88e88b52f480de91b37f66fef9, "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("resize", method_pointer_b1bba70dbba154c6bccd7d052c5140ad, "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("resize", method_pointer_b6287dbba5d65c819299c36f35e2f651, "");
// TODO     class_474e8b06dc685c1e9deb485a1426bbb0.def("set_constant", method_pointer_3a5ccc711f5f59f6b332bd7b0c61b88d, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_474e8b06dc685c1e9deb485a1426bbb0.def("set_constant", autowig::method_decorator_3a5ccc711f5f59f6b332bd7b0c61b88d);
    class_474e8b06dc685c1e9deb485a1426bbb0.def("set_constant", method_pointer_dfab47808e485655ad9ec89860441ac2, boost::python::return_internal_reference<>(), "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("set_constant", autowig::method_decorator_dfab47808e485655ad9ec89860441ac2);
// TODO     class_474e8b06dc685c1e9deb485a1426bbb0.def("set_zero", method_pointer_2e1fb263607b5eee9add51193a624806, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_474e8b06dc685c1e9deb485a1426bbb0.def("set_zero", autowig::method_decorator_2e1fb263607b5eee9add51193a624806);
    class_474e8b06dc685c1e9deb485a1426bbb0.def("set_zero", method_pointer_b66d3181dc055245b3bd406be63163fc, boost::python::return_internal_reference<>(), "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("set_zero", autowig::method_decorator_b66d3181dc055245b3bd406be63163fc);
// TODO     class_474e8b06dc685c1e9deb485a1426bbb0.def("set_ones", method_pointer_fab208a2c984574b8d25f023ee3d40d5, boost::python::return_internal_reference<>(), "");
// TODO     class_474e8b06dc685c1e9deb485a1426bbb0.def("set_ones", autowig::method_decorator_fab208a2c984574b8d25f023ee3d40d5);
    class_474e8b06dc685c1e9deb485a1426bbb0.def("set_ones", method_pointer_8560aa17c26a5a66a101ad70bf3131a4, boost::python::return_internal_reference<>(), "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("set_ones", autowig::method_decorator_8560aa17c26a5a66a101ad70bf3131a4);
// TODO     class_474e8b06dc685c1e9deb485a1426bbb0.def("set_random", method_pointer_3cdd09c7f91850cebe491ff6a237c8a3, boost::python::return_internal_reference<>(), "");
// TODO     class_474e8b06dc685c1e9deb485a1426bbb0.def("set_random", autowig::method_decorator_3cdd09c7f91850cebe491ff6a237c8a3);
    class_474e8b06dc685c1e9deb485a1426bbb0.def("set_random", method_pointer_fbd16b90f0b858b3aedb7a5b67994089, boost::python::return_internal_reference<>(), "");
    class_474e8b06dc685c1e9deb485a1426bbb0.def("set_random", autowig::method_decorator_fbd16b90f0b858b3aedb7a5b67994089);
    class_474e8b06dc685c1e9deb485a1426bbb0.def("check_template_params", method_pointer_bd0bb7474faa5663b81f4235eeb910e9, "");
    class_474e8b06dc685c1e9deb485a1426bbb0.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > >();
    }

}