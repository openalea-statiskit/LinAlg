#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b16c9ab4a2c85ea19ef18381132be3ba(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_97c4dc3b11db527d909783849c85198e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_2b0614059d895278a5d16284718a5b49(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, const float  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_e7dbd2c932ad5f0d811b2fa240124935(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_4c58e51ad77057f39e20d8368512b4b2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_4c996fbf34415a4ab6316ae4b933c248(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_80a0d8b680f95b489930d1926fa08134(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_efcd755942435cada0bd5a55e0936ea6(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_403a174ea56f5490a32b8dfae18de1de(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_4fb165370a1650b4a4ed002c15e0d3df(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_3aa979fe81335e00a5fc18f2884de66a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_6e0d2452034c5c859c06ecf52df2f75c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_b16c9ab4a2c85ea19ef18381132be3ba)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_4a75fcd3c8425aee89eebd65dac12aed)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_769645bd21fd5b66904ac30e1da666d8)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_ef8fcbeea21b5a3a9b8caaef923395f2)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::cols;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_c37bba4fc082510a86cd0ebe11afa341)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::coeff;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_b6ed42840c335d4084c18a4ea652ba6e)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::coeff;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_97c4dc3b11db527d909783849c85198e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::coeffRef;
    float  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_2b0614059d895278a5d16284718a5b49)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_3b365dd75d25548cb7d75ee05e349ae0)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::coeffRef;
    float  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_50e754649e4f52c396664ef9cfb70bc0)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_f7aaaa4e5d8356a3bb5f620561f55e27)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_a5eb000b4b2855628c50c7bdbfd8caee)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_8e7c44a48d7d59aca6b41b089e967b1c)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_81a48f482c2f580eb29470443f1e4441)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_62502d5b37555508bd2b4837a9bf2326)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::conservativeResize;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_e7dbd2c932ad5f0d811b2fa240124935)(long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_4c58e51ad77057f39e20d8368512b4b2)(long int , long int , float  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_4c996fbf34415a4ab6316ae4b933c248)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_80a0d8b680f95b489930d1926fa08134)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_efcd755942435cada0bd5a55e0936ea6)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_403a174ea56f5490a32b8dfae18de1de)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_4fb165370a1650b4a4ed002c15e0d3df)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setRandom;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_3aa979fe81335e00a5fc18f2884de66a)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setRandom;
    void  (*method_pointer_fd621888483b5d3ba42251878f0b042d)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > >, boost::noncopyable > class_6e0d2452034c5c859c06ecf52df2f75c("_PlainObjectBase_6e0d2452034c5c859c06ecf52df2f75c", "", boost::python::no_init);
    class_6e0d2452034c5c859c06ecf52df2f75c.def("base", method_pointer_b16c9ab4a2c85ea19ef18381132be3ba, boost::python::return_internal_reference<>(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("base", autowig::method_decorator_b16c9ab4a2c85ea19ef18381132be3ba);
    class_6e0d2452034c5c859c06ecf52df2f75c.def("base", method_pointer_4a75fcd3c8425aee89eebd65dac12aed, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("rows", method_pointer_769645bd21fd5b66904ac30e1da666d8, "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("cols", method_pointer_ef8fcbeea21b5a3a9b8caaef923395f2, "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("coeff", method_pointer_c37bba4fc082510a86cd0ebe11afa341, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("coeff", method_pointer_b6ed42840c335d4084c18a4ea652ba6e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("coeff_ref", method_pointer_97c4dc3b11db527d909783849c85198e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("coeff_ref", autowig::method_decorator_97c4dc3b11db527d909783849c85198e);
    class_6e0d2452034c5c859c06ecf52df2f75c.def("coeff_ref", method_pointer_2b0614059d895278a5d16284718a5b49, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("coeff_ref", autowig::method_decorator_2b0614059d895278a5d16284718a5b49);
    class_6e0d2452034c5c859c06ecf52df2f75c.def("coeff_ref", method_pointer_3b365dd75d25548cb7d75ee05e349ae0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("coeff_ref", method_pointer_50e754649e4f52c396664ef9cfb70bc0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("resize", method_pointer_f7aaaa4e5d8356a3bb5f620561f55e27, "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("resize", method_pointer_a5eb000b4b2855628c50c7bdbfd8caee, "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("resize", method_pointer_8e7c44a48d7d59aca6b41b089e967b1c, "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("resize", method_pointer_81a48f482c2f580eb29470443f1e4441, "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("conservative_resize", method_pointer_62502d5b37555508bd2b4837a9bf2326, "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_constant", method_pointer_e7dbd2c932ad5f0d811b2fa240124935, boost::python::return_internal_reference<>(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_constant", autowig::method_decorator_e7dbd2c932ad5f0d811b2fa240124935);
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_constant", method_pointer_4c58e51ad77057f39e20d8368512b4b2, boost::python::return_internal_reference<>(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_constant", autowig::method_decorator_4c58e51ad77057f39e20d8368512b4b2);
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_zero", method_pointer_4c996fbf34415a4ab6316ae4b933c248, boost::python::return_internal_reference<>(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_zero", autowig::method_decorator_4c996fbf34415a4ab6316ae4b933c248);
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_zero", method_pointer_80a0d8b680f95b489930d1926fa08134, boost::python::return_internal_reference<>(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_zero", autowig::method_decorator_80a0d8b680f95b489930d1926fa08134);
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_ones", method_pointer_efcd755942435cada0bd5a55e0936ea6, boost::python::return_internal_reference<>(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_ones", autowig::method_decorator_efcd755942435cada0bd5a55e0936ea6);
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_ones", method_pointer_403a174ea56f5490a32b8dfae18de1de, boost::python::return_internal_reference<>(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_ones", autowig::method_decorator_403a174ea56f5490a32b8dfae18de1de);
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_random", method_pointer_4fb165370a1650b4a4ed002c15e0d3df, boost::python::return_internal_reference<>(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_random", autowig::method_decorator_4fb165370a1650b4a4ed002c15e0d3df);
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_random", method_pointer_3aa979fe81335e00a5fc18f2884de66a, boost::python::return_internal_reference<>(), "");
    class_6e0d2452034c5c859c06ecf52df2f75c.def("set_random", autowig::method_decorator_3aa979fe81335e00a5fc18f2884de66a);
    class_6e0d2452034c5c859c06ecf52df2f75c.def("check_template_params", method_pointer_fd621888483b5d3ba42251878f0b042d, "");
    class_6e0d2452034c5c859c06ecf52df2f75c.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > > >();
    }

}