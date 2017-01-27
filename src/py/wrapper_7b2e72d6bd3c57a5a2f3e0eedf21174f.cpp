#include "_ieigen.h"


namespace autowig
{
    void method_decorator_9470e301db455845b52230252c7bc300(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_427c1fba7d535786b2e1e34123e2253b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_5646fe87e04159118525abf791e8fdc3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, const int  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
// TODO     void method_decorator_d0d795aca2225daeac4cab39adadfedc(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_de6bce4c18f05ddfadccbbe08499d2cb(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO // TODO     void method_decorator_34c377a808cb512cac297b40b15722a0(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_17e25e0e312e5b7c89d91cb0c216018f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
// TODO // TODO     void method_decorator_d2a7562238635622bb3aed646303a715(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_c3a8f50b802b51c6b1368fa2c7f1c196(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
// TODO     void method_decorator_a4d61ef5434654a4aa5ffdb2988fa7f9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_6aa5a648ce37565aa56c637796012816(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_7b2e72d6bd3c57a5a2f3e0eedf21174f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_9470e301db455845b52230252c7bc300)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_aa02a3aa3b5c51ec8b487d8bd296ba41)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_9636dda0d52f5f4696b22c82535225f3)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_8d8d831816da5bbd9b27d3e9018d7546)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::cols;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_e29776d54dc059cbb5c930ae6615a9d1)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::coeff;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_1873db9add9e5775855ff728afaba6f8)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::coeff;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_427c1fba7d535786b2e1e34123e2253b)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::coeffRef;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_5646fe87e04159118525abf791e8fdc3)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_1986729e7e4b541aa10afd979df4cb08)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_42c754067ff25e63a869f8a9364ade92)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_1817b07bd8865659a93d801b346d6d20)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_6667786e20ea5f27b9d0f84d3d1de366)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_caded7e587645cb7ae584772e4c5c756)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::resize;
// TODO     class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_d0d795aca2225daeac4cab39adadfedc)(long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setConstant;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_de6bce4c18f05ddfadccbbe08499d2cb)(long int , long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setConstant;
// TODO     class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_34c377a808cb512cac297b40b15722a0)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setZero;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_17e25e0e312e5b7c89d91cb0c216018f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setZero;
// TODO     class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_d2a7562238635622bb3aed646303a715)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setOnes;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_c3a8f50b802b51c6b1368fa2c7f1c196)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setOnes;
// TODO     class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_a4d61ef5434654a4aa5ffdb2988fa7f9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setRandom;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_6aa5a648ce37565aa56c637796012816)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setRandom;
    void  (*method_pointer_d15987acc5a55b808181e531d153938c)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > >, boost::noncopyable > class_7b2e72d6bd3c57a5a2f3e0eedf21174f("_PlainObjectBase_7b2e72d6bd3c57a5a2f3e0eedf21174f", "", boost::python::no_init);
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("base", method_pointer_9470e301db455845b52230252c7bc300, boost::python::return_internal_reference<>(), "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("base", autowig::method_decorator_9470e301db455845b52230252c7bc300);
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("base", method_pointer_aa02a3aa3b5c51ec8b487d8bd296ba41, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("rows", method_pointer_9636dda0d52f5f4696b22c82535225f3, "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("cols", method_pointer_8d8d831816da5bbd9b27d3e9018d7546, "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("coeff", method_pointer_e29776d54dc059cbb5c930ae6615a9d1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("coeff", method_pointer_1873db9add9e5775855ff728afaba6f8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("coeff_ref", method_pointer_427c1fba7d535786b2e1e34123e2253b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("coeff_ref", autowig::method_decorator_427c1fba7d535786b2e1e34123e2253b);
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("coeff_ref", method_pointer_5646fe87e04159118525abf791e8fdc3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("coeff_ref", autowig::method_decorator_5646fe87e04159118525abf791e8fdc3);
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("coeff_ref", method_pointer_1986729e7e4b541aa10afd979df4cb08, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("coeff_ref", method_pointer_42c754067ff25e63a869f8a9364ade92, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("resize", method_pointer_1817b07bd8865659a93d801b346d6d20, "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("resize", method_pointer_6667786e20ea5f27b9d0f84d3d1de366, "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("resize", method_pointer_caded7e587645cb7ae584772e4c5c756, "");
// TODO     class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_constant", method_pointer_d0d795aca2225daeac4cab39adadfedc, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_constant", autowig::method_decorator_d0d795aca2225daeac4cab39adadfedc);
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_constant", method_pointer_de6bce4c18f05ddfadccbbe08499d2cb, boost::python::return_internal_reference<>(), "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_constant", autowig::method_decorator_de6bce4c18f05ddfadccbbe08499d2cb);
// TODO     class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_zero", method_pointer_34c377a808cb512cac297b40b15722a0, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_zero", autowig::method_decorator_34c377a808cb512cac297b40b15722a0);
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_zero", method_pointer_17e25e0e312e5b7c89d91cb0c216018f, boost::python::return_internal_reference<>(), "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_zero", autowig::method_decorator_17e25e0e312e5b7c89d91cb0c216018f);
// TODO     class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_ones", method_pointer_d2a7562238635622bb3aed646303a715, boost::python::return_internal_reference<>(), "");
// TODO     class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_ones", autowig::method_decorator_d2a7562238635622bb3aed646303a715);
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_ones", method_pointer_c3a8f50b802b51c6b1368fa2c7f1c196, boost::python::return_internal_reference<>(), "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_ones", autowig::method_decorator_c3a8f50b802b51c6b1368fa2c7f1c196);
// TODO     class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_random", method_pointer_a4d61ef5434654a4aa5ffdb2988fa7f9, boost::python::return_internal_reference<>(), "");
// TODO     class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_random", autowig::method_decorator_a4d61ef5434654a4aa5ffdb2988fa7f9);
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_random", method_pointer_6aa5a648ce37565aa56c637796012816, boost::python::return_internal_reference<>(), "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("set_random", autowig::method_decorator_6aa5a648ce37565aa56c637796012816);
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.def("check_template_params", method_pointer_d15987acc5a55b808181e531d153938c, "");
    class_7b2e72d6bd3c57a5a2f3e0eedf21174f.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > > >();
    }

}