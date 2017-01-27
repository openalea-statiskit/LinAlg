#include "_ieigen.h"


namespace autowig
{
}


void wrapper_12ce62bb2028533496dadc5a28a0aa18()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_82369c20c52357fa8f92a82987b29a89)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_6958a3b787565374a3b31f95ce8c9ec9)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_9370c82355555ff486a629c023a08140)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_0b1b313eee8a5144a8046a9948bc501b)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_2197af7d36fa5be892c0fe9ad637c8d9)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_797dc7f8df4a5532887f474ce3a8f079)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_c38368c384905394ac50f96d56369dd7)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 1 > > > class_12ce62bb2028533496dadc5a28a0aa18("_LLT_12ce62bb2028533496dadc5a28a0aa18", "", boost::python::no_init);
    class_12ce62bb2028533496dadc5a28a0aa18.def("rcond", method_pointer_82369c20c52357fa8f92a82987b29a89, "");
    class_12ce62bb2028533496dadc5a28a0aa18.def("matrix_llt", method_pointer_6958a3b787565374a3b31f95ce8c9ec9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_12ce62bb2028533496dadc5a28a0aa18.def("reconstructed_matrix", method_pointer_9370c82355555ff486a629c023a08140, "");
    class_12ce62bb2028533496dadc5a28a0aa18.def("info", method_pointer_0b1b313eee8a5144a8046a9948bc501b, "");
    class_12ce62bb2028533496dadc5a28a0aa18.def("adjoint", method_pointer_2197af7d36fa5be892c0fe9ad637c8d9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_12ce62bb2028533496dadc5a28a0aa18.def("rows", method_pointer_797dc7f8df4a5532887f474ce3a8f079, "");
    class_12ce62bb2028533496dadc5a28a0aa18.def("cols", method_pointer_c38368c384905394ac50f96d56369dd7, "");

}