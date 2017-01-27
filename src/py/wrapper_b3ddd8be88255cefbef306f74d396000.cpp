#include "_ieigen.h"


namespace autowig
{
}


void wrapper_b3ddd8be88255cefbef306f74d396000()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_86e68029b7155aad9f428d7f0e4ddb26)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::matrixQR;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_4660669c6f625e1b9de9ddeaf06f3864)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::absDeterminant;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_c92afec7496951f3a7b64972b45ccb61)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_12400fb41c56572096602732f524c843)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_1ba3f6fd2a225b67b6c5de303de44531)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::cols;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_21388b3dc233544cad20c6f8fd014acf)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > class_b3ddd8be88255cefbef306f74d396000("_HouseholderQR_b3ddd8be88255cefbef306f74d396000", "", boost::python::no_init);
    class_b3ddd8be88255cefbef306f74d396000.def("matrix_qr", method_pointer_86e68029b7155aad9f428d7f0e4ddb26, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b3ddd8be88255cefbef306f74d396000.def("abs_determinant", method_pointer_4660669c6f625e1b9de9ddeaf06f3864, "");
    class_b3ddd8be88255cefbef306f74d396000.def("log_abs_determinant", method_pointer_c92afec7496951f3a7b64972b45ccb61, "");
    class_b3ddd8be88255cefbef306f74d396000.def("rows", method_pointer_12400fb41c56572096602732f524c843, "");
    class_b3ddd8be88255cefbef306f74d396000.def("cols", method_pointer_1ba3f6fd2a225b67b6c5de303de44531, "");
    class_b3ddd8be88255cefbef306f74d396000.def("h_coeffs", method_pointer_21388b3dc233544cad20c6f8fd014acf, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}