#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2a9cb2b9b8f65829bedb96512ea4cfe6(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_f8ce676540e35efbb1eba4a9278f9c01(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_17c16d3cf81a520b9478f354773419b2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, const double  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_f1513eabf7b05be4a237e356ad7ec2bd(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_5d2561ee511c5d4ebe011cfc4c68f65f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_ceba6bdab8b557019d024834e3c08001(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_fc534bc653e25eed8a8d7b83541fac63(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_20cccf16065e54239c112251e4ffdd60(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_6dbe03d98dcb525aa0f1253320eda552(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_eb6e191a392851b29ca78f4ba9b2c940(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_81ef2193a2cb56d9aa411a572f90d060(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_8aabb3d03a415c898c8a7f4ac649f937()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_2a9cb2b9b8f65829bedb96512ea4cfe6)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_9f90ea47ee7458f1923264e09242333a)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_b6e10c8d6e505258a622677a514b3eae)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_d8015a1dcae95faf80fa36b041a4afaa)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::cols;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_7365abd82b4353559ddd912c832df7c1)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::coeff;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_5e304b8b046d5a11a554899bd5cb4b59)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::coeff;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_f8ce676540e35efbb1eba4a9278f9c01)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::coeffRef;
    double  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_17c16d3cf81a520b9478f354773419b2)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_9182cf6ee6845c2c821f36ae6b21a680)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::coeffRef;
    double  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_3ce4be08d11951c1ad89b995b760f6d6)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_2064190920535734b8eea13352b42dd3)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_f4ef28c6374150628a5fcd2ee9360821)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_d106b4ed42035f0aa111309e27c4564e)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_1e272caa8d4853d9bad7f9a1f04ac44d)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_26e32e44591b50909ca5b93614c57b27)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_c61b1e32d3b05398a21e4303ad1a95a4)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_4e05dbf4c850561d9068ea40486b44b7)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_2dd014fa161f59a09a991090cce3d01e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::conservativeResize;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_f1513eabf7b05be4a237e356ad7ec2bd)(long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_5d2561ee511c5d4ebe011cfc4c68f65f)(long int , long int , double  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_ceba6bdab8b557019d024834e3c08001)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_fc534bc653e25eed8a8d7b83541fac63)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_20cccf16065e54239c112251e4ffdd60)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_6dbe03d98dcb525aa0f1253320eda552)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_eb6e191a392851b29ca78f4ba9b2c940)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setRandom;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_81ef2193a2cb56d9aa411a572f90d060)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setRandom;
    void  (*method_pointer_1be853b325b15f71983ddf49a2a16ac7)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > > > class_8aabb3d03a415c898c8a7f4ac649f937("_PlainObjectBase_8aabb3d03a415c898c8a7f4ac649f937", "", boost::python::no_init);
    class_8aabb3d03a415c898c8a7f4ac649f937.def("base", method_pointer_2a9cb2b9b8f65829bedb96512ea4cfe6, boost::python::return_internal_reference<>(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("base", autowig::method_decorator_2a9cb2b9b8f65829bedb96512ea4cfe6);
    class_8aabb3d03a415c898c8a7f4ac649f937.def("base", method_pointer_9f90ea47ee7458f1923264e09242333a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("rows", method_pointer_b6e10c8d6e505258a622677a514b3eae, "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("cols", method_pointer_d8015a1dcae95faf80fa36b041a4afaa, "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("coeff", method_pointer_7365abd82b4353559ddd912c832df7c1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("coeff", method_pointer_5e304b8b046d5a11a554899bd5cb4b59, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("coeff_ref", method_pointer_f8ce676540e35efbb1eba4a9278f9c01, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("coeff_ref", autowig::method_decorator_f8ce676540e35efbb1eba4a9278f9c01);
    class_8aabb3d03a415c898c8a7f4ac649f937.def("coeff_ref", method_pointer_17c16d3cf81a520b9478f354773419b2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("coeff_ref", autowig::method_decorator_17c16d3cf81a520b9478f354773419b2);
    class_8aabb3d03a415c898c8a7f4ac649f937.def("coeff_ref", method_pointer_9182cf6ee6845c2c821f36ae6b21a680, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("coeff_ref", method_pointer_3ce4be08d11951c1ad89b995b760f6d6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("resize", method_pointer_2064190920535734b8eea13352b42dd3, "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("resize", method_pointer_f4ef28c6374150628a5fcd2ee9360821, "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("resize", method_pointer_d106b4ed42035f0aa111309e27c4564e, "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("resize", method_pointer_1e272caa8d4853d9bad7f9a1f04ac44d, "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("conservative_resize", method_pointer_26e32e44591b50909ca5b93614c57b27, "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("conservative_resize", method_pointer_c61b1e32d3b05398a21e4303ad1a95a4, "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("conservative_resize", method_pointer_4e05dbf4c850561d9068ea40486b44b7, "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("conservative_resize", method_pointer_2dd014fa161f59a09a991090cce3d01e, "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_constant", method_pointer_f1513eabf7b05be4a237e356ad7ec2bd, boost::python::return_internal_reference<>(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_constant", autowig::method_decorator_f1513eabf7b05be4a237e356ad7ec2bd);
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_constant", method_pointer_5d2561ee511c5d4ebe011cfc4c68f65f, boost::python::return_internal_reference<>(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_constant", autowig::method_decorator_5d2561ee511c5d4ebe011cfc4c68f65f);
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_zero", method_pointer_ceba6bdab8b557019d024834e3c08001, boost::python::return_internal_reference<>(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_zero", autowig::method_decorator_ceba6bdab8b557019d024834e3c08001);
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_zero", method_pointer_fc534bc653e25eed8a8d7b83541fac63, boost::python::return_internal_reference<>(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_zero", autowig::method_decorator_fc534bc653e25eed8a8d7b83541fac63);
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_ones", method_pointer_20cccf16065e54239c112251e4ffdd60, boost::python::return_internal_reference<>(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_ones", autowig::method_decorator_20cccf16065e54239c112251e4ffdd60);
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_ones", method_pointer_6dbe03d98dcb525aa0f1253320eda552, boost::python::return_internal_reference<>(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_ones", autowig::method_decorator_6dbe03d98dcb525aa0f1253320eda552);
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_random", method_pointer_eb6e191a392851b29ca78f4ba9b2c940, boost::python::return_internal_reference<>(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_random", autowig::method_decorator_eb6e191a392851b29ca78f4ba9b2c940);
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_random", method_pointer_81ef2193a2cb56d9aa411a572f90d060, boost::python::return_internal_reference<>(), "");
    class_8aabb3d03a415c898c8a7f4ac649f937.def("set_random", autowig::method_decorator_81ef2193a2cb56d9aa411a572f90d060);
    class_8aabb3d03a415c898c8a7f4ac649f937.def("check_template_params", method_pointer_1be853b325b15f71983ddf49a2a16ac7, "");
    class_8aabb3d03a415c898c8a7f4ac649f937.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > > >();
    }

}