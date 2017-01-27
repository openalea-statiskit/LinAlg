#include "_ieigen.h"


namespace autowig
{
}


void wrapper_fcc01a395d6958889a5b693caa5089a0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_3f07d0c486f45a9ab6115aafebeea79b)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::matrixQR;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_4c124ef5e27e592a90ab584acfa7cda8)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::absDeterminant;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_f0380541116a5663b812a3693f00e94c)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_69cf253cfdc65d459ac5edc84cdb8574)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_7e74e379d0585035ae13e7fdd35bddc1)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_05bb7756792e5590b56c0ed753d9bc31)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > class_fcc01a395d6958889a5b693caa5089a0("_HouseholderQR_fcc01a395d6958889a5b693caa5089a0", "", boost::python::no_init);
    class_fcc01a395d6958889a5b693caa5089a0.def("matrix_qr", method_pointer_3f07d0c486f45a9ab6115aafebeea79b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fcc01a395d6958889a5b693caa5089a0.def("abs_determinant", method_pointer_4c124ef5e27e592a90ab584acfa7cda8, "");
    class_fcc01a395d6958889a5b693caa5089a0.def("log_abs_determinant", method_pointer_f0380541116a5663b812a3693f00e94c, "");
    class_fcc01a395d6958889a5b693caa5089a0.def("rows", method_pointer_69cf253cfdc65d459ac5edc84cdb8574, "");
    class_fcc01a395d6958889a5b693caa5089a0.def("cols", method_pointer_7e74e379d0585035ae13e7fdd35bddc1, "");
    class_fcc01a395d6958889a5b693caa5089a0.def("h_coeffs", method_pointer_05bb7756792e5590b56c0ed753d9bc31, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}