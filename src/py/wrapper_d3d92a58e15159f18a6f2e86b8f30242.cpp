#include "_linalg.h"


namespace autowig
{
}


void wrapper_d3d92a58e15159f18a6f2e86b8f30242()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::RealScalar  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_3bf34c20a65d5777a755c4f017e837f8)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::rcond;
    ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::MatrixType const & (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_7e780eca5ec458fdae2bad6457010993)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::matrixLLT;
    ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::MatrixType  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_bf77092bae7657c1b0742eeda499ffa7)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_700c80e74cf65192a01ce6aed2d6e94a)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const & (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_d30d0ad290415f22a52d6b4ad2176c05)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::adjoint;
// TODO // TODO // TODO     ::Eigen::LLT::Index  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_5d0240b3519253208da7645c6ee69187)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::rows;
// TODO // TODO // TODO     ::Eigen::LLT::Index  (::Eigen::LLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_62c560aeedfa57f9bf2823c0874cb19e)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, autowig::Held< class ::Eigen::LLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >::Type > class_d3d92a58e15159f18a6f2e86b8f30242("_LLT_d3d92a58e15159f18a6f2e86b8f30242", "", boost::python::no_init);
    class_d3d92a58e15159f18a6f2e86b8f30242.def("rcond", method_pointer_3bf34c20a65d5777a755c4f017e837f8, "");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("matrix_llt", method_pointer_7e780eca5ec458fdae2bad6457010993, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("reconstructed_matrix", method_pointer_bf77092bae7657c1b0742eeda499ffa7, "");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("info", method_pointer_700c80e74cf65192a01ce6aed2d6e94a, "");
    class_d3d92a58e15159f18a6f2e86b8f30242.def("adjoint", method_pointer_d30d0ad290415f22a52d6b4ad2176c05, boost::python::return_value_policy< boost::python::return_by_value >(), "");
// TODO     class_d3d92a58e15159f18a6f2e86b8f30242.def("rows", method_pointer_5d0240b3519253208da7645c6ee69187, "");
// TODO     class_d3d92a58e15159f18a6f2e86b8f30242.def("cols", method_pointer_62c560aeedfa57f9bf2823c0874cb19e, "");

}