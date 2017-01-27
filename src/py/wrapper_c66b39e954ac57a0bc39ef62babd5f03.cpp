#include "_ieigen.h"


namespace autowig
{
}


void wrapper_c66b39e954ac57a0bc39ef62babd5f03()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_0f4cd246cd215c6b9b8b7a9e4c5525c8)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::matrixQR;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_915fb221240454309851e5d30e341dcd)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::absDeterminant;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_a97a2e71dc1b57e6a16cb22a15789233)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_80d9edfaecf45317bb36d32d6c5b7e50)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_f643c21a10105cde83c3da6c3470df6c)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::cols;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_933dc4038b59542c8daf44d87b2bee87)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > > class_c66b39e954ac57a0bc39ef62babd5f03("_HouseholderQR_c66b39e954ac57a0bc39ef62babd5f03", "", boost::python::no_init);
    class_c66b39e954ac57a0bc39ef62babd5f03.def("matrix_qr", method_pointer_0f4cd246cd215c6b9b8b7a9e4c5525c8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c66b39e954ac57a0bc39ef62babd5f03.def("abs_determinant", method_pointer_915fb221240454309851e5d30e341dcd, "");
    class_c66b39e954ac57a0bc39ef62babd5f03.def("log_abs_determinant", method_pointer_a97a2e71dc1b57e6a16cb22a15789233, "");
    class_c66b39e954ac57a0bc39ef62babd5f03.def("rows", method_pointer_80d9edfaecf45317bb36d32d6c5b7e50, "");
    class_c66b39e954ac57a0bc39ef62babd5f03.def("cols", method_pointer_f643c21a10105cde83c3da6c3470df6c, "");
    class_c66b39e954ac57a0bc39ef62babd5f03.def("h_coeffs", method_pointer_933dc4038b59542c8daf44d87b2bee87, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}