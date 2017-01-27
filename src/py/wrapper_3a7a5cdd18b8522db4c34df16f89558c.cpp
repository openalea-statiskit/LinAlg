#include "_ieigen.h"


namespace autowig
{
}


void wrapper_3a7a5cdd18b8522db4c34df16f89558c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_f936594ea52c564fa29318b747a327ab)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::matrixQR;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_2170c0d86cf052baa6fe505ff8a93043)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::absDeterminant;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_c5c5b9c6a82f58f4828b23a9a11363f0)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_5c97e256c81f5c13842ce897dc66daa8)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_33463b0409e95662a82d2c4b676ca383)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_a695a51840335a738bcd1926e4167126)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > class_3a7a5cdd18b8522db4c34df16f89558c("_HouseholderQR_3a7a5cdd18b8522db4c34df16f89558c", "", boost::python::no_init);
    class_3a7a5cdd18b8522db4c34df16f89558c.def("matrix_qr", method_pointer_f936594ea52c564fa29318b747a327ab, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3a7a5cdd18b8522db4c34df16f89558c.def("abs_determinant", method_pointer_2170c0d86cf052baa6fe505ff8a93043, "");
    class_3a7a5cdd18b8522db4c34df16f89558c.def("log_abs_determinant", method_pointer_c5c5b9c6a82f58f4828b23a9a11363f0, "");
    class_3a7a5cdd18b8522db4c34df16f89558c.def("rows", method_pointer_5c97e256c81f5c13842ce897dc66daa8, "");
    class_3a7a5cdd18b8522db4c34df16f89558c.def("cols", method_pointer_33463b0409e95662a82d2c4b676ca383, "");
    class_3a7a5cdd18b8522db4c34df16f89558c.def("h_coeffs", method_pointer_a695a51840335a738bcd1926e4167126, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}