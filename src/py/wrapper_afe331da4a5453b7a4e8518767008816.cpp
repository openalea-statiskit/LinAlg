#include "_linalg.h"


namespace autowig
{
}


void wrapper_afe331da4a5453b7a4e8518767008816()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::MatrixType  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_10351077ec12590bb516a06b6fa85805)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::matrixQR;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_dd541f7d8b855abaa467e4786019a5a9)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::absDeterminant;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_8968bbad94b6544ca010161fa623c7cd)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::logAbsDeterminant;
    ::Eigen::Index  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_98fc866b0ad15b499db03313e90b7b03)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rows;
    ::Eigen::Index  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_30c55c2c2f585ece8b050cdcea2d67b9)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::cols;
    ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::HCoeffsType  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f5b0fd92791c573fa3268f5c6c7fe3d6)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > class_afe331da4a5453b7a4e8518767008816("_HouseholderQR_afe331da4a5453b7a4e8518767008816", "", boost::python::no_init);
    class_afe331da4a5453b7a4e8518767008816.def("matrix_qr", method_pointer_10351077ec12590bb516a06b6fa85805, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_afe331da4a5453b7a4e8518767008816.def("abs_determinant", method_pointer_dd541f7d8b855abaa467e4786019a5a9, "");
    class_afe331da4a5453b7a4e8518767008816.def("log_abs_determinant", method_pointer_8968bbad94b6544ca010161fa623c7cd, "");
    class_afe331da4a5453b7a4e8518767008816.def("rows", method_pointer_98fc866b0ad15b499db03313e90b7b03, "");
    class_afe331da4a5453b7a4e8518767008816.def("cols", method_pointer_30c55c2c2f585ece8b050cdcea2d67b9, "");
    class_afe331da4a5453b7a4e8518767008816.def("h_coeffs", method_pointer_f5b0fd92791c573fa3268f5c6c7fe3d6, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}