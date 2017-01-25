#include "_ieigen.h"


namespace autowig
{
    void method_decorator_157e811b11c258bba6dff5cbc70eca6c(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_d74cef645f6c55039d2d77cde6b2f65a(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > const & instance, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_8182f02d69825fec8d82280bf74b67d9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_157e811b11c258bba6dff5cbc70eca6c)() = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::derived;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_596ca68f9635565cab34b166783a573c)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::derived;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_d74cef645f6c55039d2d77cde6b2f65a)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::const_cast_derived;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_ea8c78cd1ad05781a67929ff486868e2)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_abc63bb0698752f29ad627264d5316a4)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_7fc50cbeea2e57ad817018c72d30f16b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_2be03bcc812f5011b8139416775abc1d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > > class_8182f02d69825fec8d82280bf74b67d9("_EigenBase_8182f02d69825fec8d82280bf74b67d9", "", boost::python::no_init);
    class_8182f02d69825fec8d82280bf74b67d9.def("derived", method_pointer_157e811b11c258bba6dff5cbc70eca6c, boost::python::return_internal_reference<>(), "");
    class_8182f02d69825fec8d82280bf74b67d9.def("derived", autowig::method_decorator_157e811b11c258bba6dff5cbc70eca6c);
    class_8182f02d69825fec8d82280bf74b67d9.def("derived", method_pointer_596ca68f9635565cab34b166783a573c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8182f02d69825fec8d82280bf74b67d9.def("const_cast_derived", method_pointer_d74cef645f6c55039d2d77cde6b2f65a, boost::python::return_internal_reference<>(), "");
    class_8182f02d69825fec8d82280bf74b67d9.def("const_cast_derived", autowig::method_decorator_d74cef645f6c55039d2d77cde6b2f65a);
    class_8182f02d69825fec8d82280bf74b67d9.def("const_derived", method_pointer_ea8c78cd1ad05781a67929ff486868e2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8182f02d69825fec8d82280bf74b67d9.def("rows", method_pointer_abc63bb0698752f29ad627264d5316a4, "");
    class_8182f02d69825fec8d82280bf74b67d9.def("cols", method_pointer_7fc50cbeea2e57ad817018c72d30f16b, "");
    class_8182f02d69825fec8d82280bf74b67d9.def("size", method_pointer_2be03bcc812f5011b8139416775abc1d, "");

}