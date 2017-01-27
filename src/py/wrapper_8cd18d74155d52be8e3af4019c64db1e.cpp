#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8cd18d74155d52be8e3af4019c64db1e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_93beaa7b86e85ebf9b2bc6c492c53c17)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::matrixQR;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_39fb9efe54625844bad44bcdd709ffdc)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::absDeterminant;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_f0878de185045de4a021cada93061075)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_c73b89e35d2a523c87737cd40ff3a5ff)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_5d7876e014ee5f5aa513279b9a31e4bf)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::cols;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_93a8a6fdb73254f78c096a19618b3a8d)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > class_8cd18d74155d52be8e3af4019c64db1e("_HouseholderQR_8cd18d74155d52be8e3af4019c64db1e", "", boost::python::no_init);
    class_8cd18d74155d52be8e3af4019c64db1e.def("matrix_qr", method_pointer_93beaa7b86e85ebf9b2bc6c492c53c17, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8cd18d74155d52be8e3af4019c64db1e.def("abs_determinant", method_pointer_39fb9efe54625844bad44bcdd709ffdc, "");
    class_8cd18d74155d52be8e3af4019c64db1e.def("log_abs_determinant", method_pointer_f0878de185045de4a021cada93061075, "");
    class_8cd18d74155d52be8e3af4019c64db1e.def("rows", method_pointer_c73b89e35d2a523c87737cd40ff3a5ff, "");
    class_8cd18d74155d52be8e3af4019c64db1e.def("cols", method_pointer_5d7876e014ee5f5aa513279b9a31e4bf, "");
    class_8cd18d74155d52be8e3af4019c64db1e.def("h_coeffs", method_pointer_93a8a6fdb73254f78c096a19618b3a8d, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}