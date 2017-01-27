#include "_ieigen.h"


namespace autowig
{
}


void wrapper_fd4fba8f1df754398bb29b3599620884()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_8a68304f8c2f52e1b9012a029df75866)() = &::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::setZero;
    class ::Eigen::Transpositions< 4, 4, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_a8126428dee45c4484ea2bded2a10822)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_f0f6565b71925beaa3522bc6c218dcb3)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_5ec7cd413b0e53fab9bcf182d1da8314)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::isNegative;
    float  (::Eigen::LDLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_8ca519ba805d551f9428e1362cb7aa55)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::rcond;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::LDLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_d045754f763359a4a9f2ebbeaaf923c2)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  (::Eigen::LDLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_2a86e28d9bb15c6381e65fa79c996cf4)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_1435eb9db37859acb939210c371d2ca2)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_72c78823395d53318f7e90454e92bcf8)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_4adb6d9543d9547abbd6d9d5b1c5eddd)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_27da25e8479c515db65deb6b378a7a60)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > > > class_fd4fba8f1df754398bb29b3599620884("_LDLT_fd4fba8f1df754398bb29b3599620884", "", boost::python::no_init);
    class_fd4fba8f1df754398bb29b3599620884.def("set_zero", method_pointer_8a68304f8c2f52e1b9012a029df75866, "");
    class_fd4fba8f1df754398bb29b3599620884.def("transpositions_p", method_pointer_a8126428dee45c4484ea2bded2a10822, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fd4fba8f1df754398bb29b3599620884.def("is_positive", method_pointer_f0f6565b71925beaa3522bc6c218dcb3, "");
    class_fd4fba8f1df754398bb29b3599620884.def("is_negative", method_pointer_5ec7cd413b0e53fab9bcf182d1da8314, "");
    class_fd4fba8f1df754398bb29b3599620884.def("rcond", method_pointer_8ca519ba805d551f9428e1362cb7aa55, "");
    class_fd4fba8f1df754398bb29b3599620884.def("matrix_ldlt", method_pointer_d045754f763359a4a9f2ebbeaaf923c2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fd4fba8f1df754398bb29b3599620884.def("reconstructed_matrix", method_pointer_2a86e28d9bb15c6381e65fa79c996cf4, "");
    class_fd4fba8f1df754398bb29b3599620884.def("adjoint", method_pointer_1435eb9db37859acb939210c371d2ca2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fd4fba8f1df754398bb29b3599620884.def("rows", method_pointer_72c78823395d53318f7e90454e92bcf8, "");
    class_fd4fba8f1df754398bb29b3599620884.def("cols", method_pointer_4adb6d9543d9547abbd6d9d5b1c5eddd, "");
    class_fd4fba8f1df754398bb29b3599620884.def("info", method_pointer_27da25e8479c515db65deb6b378a7a60, "");

}