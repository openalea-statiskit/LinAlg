#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c0e1071c41b05253adfeb52b013dc41b(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_41d26dfaffcc52faad8082b4311ee3d5(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > const & instance, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_76c4fcacffc15d13890d462718a3c17c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_c0e1071c41b05253adfeb52b013dc41b)() = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::derived;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_1f6f0e11a5e152508d31722e4fff6855)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::derived;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_41d26dfaffcc52faad8082b4311ee3d5)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::const_cast_derived;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_5fa6f8300d7b5ec2bdf341cdc95283f7)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_6752a0482147563a97d739c7157e09b1)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_384d77d174fa58d7882c66d8b12a4fe7)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_a6518513bdac54d8922f66d20945db0e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > > > class_76c4fcacffc15d13890d462718a3c17c("_EigenBase_76c4fcacffc15d13890d462718a3c17c", "", boost::python::no_init);
    class_76c4fcacffc15d13890d462718a3c17c.def("derived", method_pointer_c0e1071c41b05253adfeb52b013dc41b, boost::python::return_internal_reference<>(), "");
    class_76c4fcacffc15d13890d462718a3c17c.def("derived", autowig::method_decorator_c0e1071c41b05253adfeb52b013dc41b);
    class_76c4fcacffc15d13890d462718a3c17c.def("derived", method_pointer_1f6f0e11a5e152508d31722e4fff6855, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_76c4fcacffc15d13890d462718a3c17c.def("const_cast_derived", method_pointer_41d26dfaffcc52faad8082b4311ee3d5, boost::python::return_internal_reference<>(), "");
    class_76c4fcacffc15d13890d462718a3c17c.def("const_cast_derived", autowig::method_decorator_41d26dfaffcc52faad8082b4311ee3d5);
    class_76c4fcacffc15d13890d462718a3c17c.def("const_derived", method_pointer_5fa6f8300d7b5ec2bdf341cdc95283f7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_76c4fcacffc15d13890d462718a3c17c.def("rows", method_pointer_6752a0482147563a97d739c7157e09b1, "");
    class_76c4fcacffc15d13890d462718a3c17c.def("cols", method_pointer_384d77d174fa58d7882c66d8b12a4fe7, "");
    class_76c4fcacffc15d13890d462718a3c17c.def("size", method_pointer_a6518513bdac54d8922f66d20945db0e, "");

}