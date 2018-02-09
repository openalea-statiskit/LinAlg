#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile * get_pointer<class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile >(class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_afe331da4a5453b7a4e8518767008816()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::HouseholderSequenceType  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_fd6381171a555ffcbadc6dc2f7e972de)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::householderQ;
    ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::MatrixType const & (::Eigen::HouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_10351077ec12590bb516a06b6fa85805)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::matrixQR;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_dd541f7d8b855abaa467e4786019a5a9)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::absDeterminant;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_8968bbad94b6544ca010161fa623c7cd)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::logAbsDeterminant;
    ::Eigen::Index  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_98fc866b0ad15b499db03313e90b7b03)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rows;
    ::Eigen::Index  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_30c55c2c2f585ece8b050cdcea2d67b9)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::cols;
    ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::HCoeffsType const & (::Eigen::HouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f5b0fd92791c573fa3268f5c6c7fe3d6)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::Held< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type > class_afe331da4a5453b7a4e8518767008816("_HouseholderQR_afe331da4a5453b7a4e8518767008816", "", boost::python::no_init);
    class_afe331da4a5453b7a4e8518767008816.def("householder_q", method_pointer_fd6381171a555ffcbadc6dc2f7e972de, ":Return Type:\n    :cpp:any:`::Eigen::HouseholderSequence<` class\n    ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::Eigen::Matrix<\n    double, -1, 1, 0, -1, 1 >, 1 >\n\n");
    class_afe331da4a5453b7a4e8518767008816.def("matrix_qr", method_pointer_10351077ec12590bb516a06b6fa85805, boost::python::return_value_policy< boost::python::return_by_value >(), ":Returns:\n    a reference to the matrix where the Householder QR decomposition is\n    stored in a LAPACK-compatible way.\n\n:Return Type:\n    :cpp:any:`::Eigen::Matrix<` double, -1, -1, 0, -1, -1 >\n\n");
    class_afe331da4a5453b7a4e8518767008816.def("abs_determinant", method_pointer_dd541f7d8b855abaa467e4786019a5a9, ":Returns:\n    the absolute value of the determinant of the matrix of which this is the\n    QR decomposition. It has only linear complexity (that is, O(n) where n\n    is the dimension of the square matrix) as the QR decomposition has\n    already been computed.\n\n:Return Type:\n    :cpp:any:`double`\n\n.. note::\n\n    This is only for square matrices.\n\n.. warning::\n\n    a determinant can be very big or small, so for matrices of large enough\n    dimension, there is a risk of overflow/underflow. One way to work around\n    that is to use logAbsDeterminant() instead.\n\n");
    class_afe331da4a5453b7a4e8518767008816.def("log_abs_determinant", method_pointer_8968bbad94b6544ca010161fa623c7cd, ":Returns:\n    the natural log of the absolute value of the determinant of the matrix\n    of which this is the QR decomposition. It has only linear complexity\n    (that is, O(n) where n is the dimension of the square matrix) as the QR\n    decomposition has already been computed.\n\n:Return Type:\n    :cpp:any:`double`\n\n.. note::\n\n    This is only for square matrices.\n\n.. note::\n\n    This method is useful to work around the risk of overflow/underflow\n    that's inherent to determinant computation.\n\n");
    class_afe331da4a5453b7a4e8518767008816.def("rows", method_pointer_98fc866b0ad15b499db03313e90b7b03, "");
    class_afe331da4a5453b7a4e8518767008816.def("cols", method_pointer_30c55c2c2f585ece8b050cdcea2d67b9, "");
    class_afe331da4a5453b7a4e8518767008816.def("h_coeffs", method_pointer_f5b0fd92791c573fa3268f5c6c7fe3d6, boost::python::return_value_policy< boost::python::return_by_value >(), ":Returns:\n    a const reference to the vector of Householder coefficients used to\n    represent the factor :raw-latex:`\\c Q`.\n    \n    For advanced uses only.\n\n:Return Type:\n    :cpp:any:`::Eigen::Matrix<` double, -1, 1, 0, -1, 1 >\n\n");

}