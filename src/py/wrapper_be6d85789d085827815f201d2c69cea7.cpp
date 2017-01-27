#include "_ieigen.h"


namespace autowig
{
}


void wrapper_be6d85789d085827815f201d2c69cea7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_2e8efb84031d5c4f843dae35bfd5fa9d)() = &::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::setZero;
    class ::Eigen::Transpositions< 3, 3, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_28f0e10b683353bb9c5e3651ac964aa9)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_6992d90995b95b7ca78bc4bc0c4d7221)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_2fd5a7c48e2f530ebb62b8d90a9fa38a)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::isNegative;
    double  (::Eigen::LDLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_678b3d3ed4ea576194abb079b60310b3)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::rcond;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::LDLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_08e4b5545d965cee82f33b4dd2fb1db2)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  (::Eigen::LDLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_489b9f667f5c5c58b5fe3cacc4107d9c)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_627ab9aec32451f3b66cae2e629ced84)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_972eb3f4b5ef57a9a9a40fe5393d4828)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_b69824e6752658819cc3e9bce7144778)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_f98a84a2f94b57ab84fbff0362095cbd)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > > > class_be6d85789d085827815f201d2c69cea7("_LDLT_be6d85789d085827815f201d2c69cea7", "", boost::python::no_init);
    class_be6d85789d085827815f201d2c69cea7.def("set_zero", method_pointer_2e8efb84031d5c4f843dae35bfd5fa9d, "");
    class_be6d85789d085827815f201d2c69cea7.def("transpositions_p", method_pointer_28f0e10b683353bb9c5e3651ac964aa9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be6d85789d085827815f201d2c69cea7.def("is_positive", method_pointer_6992d90995b95b7ca78bc4bc0c4d7221, "");
    class_be6d85789d085827815f201d2c69cea7.def("is_negative", method_pointer_2fd5a7c48e2f530ebb62b8d90a9fa38a, "");
    class_be6d85789d085827815f201d2c69cea7.def("rcond", method_pointer_678b3d3ed4ea576194abb079b60310b3, "");
    class_be6d85789d085827815f201d2c69cea7.def("matrix_ldlt", method_pointer_08e4b5545d965cee82f33b4dd2fb1db2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be6d85789d085827815f201d2c69cea7.def("reconstructed_matrix", method_pointer_489b9f667f5c5c58b5fe3cacc4107d9c, "");
    class_be6d85789d085827815f201d2c69cea7.def("adjoint", method_pointer_627ab9aec32451f3b66cae2e629ced84, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be6d85789d085827815f201d2c69cea7.def("rows", method_pointer_972eb3f4b5ef57a9a9a40fe5393d4828, "");
    class_be6d85789d085827815f201d2c69cea7.def("cols", method_pointer_b69824e6752658819cc3e9bce7144778, "");
    class_be6d85789d085827815f201d2c69cea7.def("info", method_pointer_f98a84a2f94b57ab84fbff0362095cbd, "");

}