#include "_ieigen.h"


namespace autowig
{
}


void wrapper_3997ce961e9156b49207a8ebfda7e8e3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_f82342f4b50f50ae8d3ea70ae8c66b5b)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::matrixQR;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_a00530f9ea40567982fe7285bde82f2d)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::absDeterminant;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_83917f81a8e5592791ec47bb3a18c1e8)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_1383bcf9b6fa51e6bff581b468fc60f7)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_8b6419cffdc250daa1b1e0de910ff661)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_19be130fbb4055838f0d88ca30127801)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > class_3997ce961e9156b49207a8ebfda7e8e3("_HouseholderQR_3997ce961e9156b49207a8ebfda7e8e3", "", boost::python::no_init);
    class_3997ce961e9156b49207a8ebfda7e8e3.def("matrix_qr", method_pointer_f82342f4b50f50ae8d3ea70ae8c66b5b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3997ce961e9156b49207a8ebfda7e8e3.def("abs_determinant", method_pointer_a00530f9ea40567982fe7285bde82f2d, "");
    class_3997ce961e9156b49207a8ebfda7e8e3.def("log_abs_determinant", method_pointer_83917f81a8e5592791ec47bb3a18c1e8, "");
    class_3997ce961e9156b49207a8ebfda7e8e3.def("rows", method_pointer_1383bcf9b6fa51e6bff581b468fc60f7, "");
    class_3997ce961e9156b49207a8ebfda7e8e3.def("cols", method_pointer_8b6419cffdc250daa1b1e0de910ff661, "");
    class_3997ce961e9156b49207a8ebfda7e8e3.def("h_coeffs", method_pointer_19be130fbb4055838f0d88ca30127801, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}