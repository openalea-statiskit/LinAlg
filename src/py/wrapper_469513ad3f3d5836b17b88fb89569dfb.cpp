#include "_ieigen.h"


namespace autowig
{
}


void wrapper_469513ad3f3d5836b17b88fb89569dfb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_4d5be85d9960501698cdd4132b3fbd32)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::matrixQR;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_09c87464dfbc5626b5fee95da75d7331)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::absDeterminant;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_c744e52c5ce95e829254862b0eaa3018)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_39c11f5b176b5bc1a2552a3ee66e13a7)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_e8575d43c1e55ce3a17f91816bd768c4)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_4cb5144e152050a5bf9763caabbfc6c1)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > class_469513ad3f3d5836b17b88fb89569dfb("_HouseholderQR_469513ad3f3d5836b17b88fb89569dfb", "", boost::python::no_init);
    class_469513ad3f3d5836b17b88fb89569dfb.def("matrix_qr", method_pointer_4d5be85d9960501698cdd4132b3fbd32, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_469513ad3f3d5836b17b88fb89569dfb.def("abs_determinant", method_pointer_09c87464dfbc5626b5fee95da75d7331, "");
    class_469513ad3f3d5836b17b88fb89569dfb.def("log_abs_determinant", method_pointer_c744e52c5ce95e829254862b0eaa3018, "");
    class_469513ad3f3d5836b17b88fb89569dfb.def("rows", method_pointer_39c11f5b176b5bc1a2552a3ee66e13a7, "");
    class_469513ad3f3d5836b17b88fb89569dfb.def("cols", method_pointer_e8575d43c1e55ce3a17f91816bd768c4, "");
    class_469513ad3f3d5836b17b88fb89569dfb.def("h_coeffs", method_pointer_4cb5144e152050a5bf9763caabbfc6c1, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}