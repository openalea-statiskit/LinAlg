#include "_ieigen.h"


namespace autowig
{
}


void wrapper_a140d1a9710f5022ae7b3156bdc9bbf1()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_7830ac4bd62d55f48837aa8dc8da9344)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::matrixQR;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_20ad7513d8505eb0ad7a7d45fcc8d422)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::absDeterminant;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_c2fbd9713adb5cb2a48230955cc54219)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_464195611c2752c79406d5e86c66228a)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_0f7ab02b6d5a58fbb38f5736873b98e0)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::cols;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_894b79eb1fa0507985094d2d8fbf81cd)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > class_a140d1a9710f5022ae7b3156bdc9bbf1("_HouseholderQR_a140d1a9710f5022ae7b3156bdc9bbf1", "", boost::python::no_init);
    class_a140d1a9710f5022ae7b3156bdc9bbf1.def("matrix_qr", method_pointer_7830ac4bd62d55f48837aa8dc8da9344, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a140d1a9710f5022ae7b3156bdc9bbf1.def("abs_determinant", method_pointer_20ad7513d8505eb0ad7a7d45fcc8d422, "");
    class_a140d1a9710f5022ae7b3156bdc9bbf1.def("log_abs_determinant", method_pointer_c2fbd9713adb5cb2a48230955cc54219, "");
    class_a140d1a9710f5022ae7b3156bdc9bbf1.def("rows", method_pointer_464195611c2752c79406d5e86c66228a, "");
    class_a140d1a9710f5022ae7b3156bdc9bbf1.def("cols", method_pointer_0f7ab02b6d5a58fbb38f5736873b98e0, "");
    class_a140d1a9710f5022ae7b3156bdc9bbf1.def("h_coeffs", method_pointer_894b79eb1fa0507985094d2d8fbf81cd, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}