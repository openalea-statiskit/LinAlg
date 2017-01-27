#include "_ieigen.h"


namespace autowig
{
}


void wrapper_c17bbb052b72514ea9e29eed81b87818()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_30343c2ceb8c5843a9a3a4a2d87eed97)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::matrixQR;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_06c7fd99884759a28f8b338afc76c27a)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::absDeterminant;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_7f0eba8f04d25be69ed06bfaf8378d8c)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_b1f0b402f68a52cabdf6644ce0349442)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_3fc1dbb03ec55fb7b3090cbe8ead9a1f)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_8fe6d63b16de5153a620c95edd71ea1d)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > class_c17bbb052b72514ea9e29eed81b87818("_HouseholderQR_c17bbb052b72514ea9e29eed81b87818", "", boost::python::no_init);
    class_c17bbb052b72514ea9e29eed81b87818.def("matrix_qr", method_pointer_30343c2ceb8c5843a9a3a4a2d87eed97, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c17bbb052b72514ea9e29eed81b87818.def("abs_determinant", method_pointer_06c7fd99884759a28f8b338afc76c27a, "");
    class_c17bbb052b72514ea9e29eed81b87818.def("log_abs_determinant", method_pointer_7f0eba8f04d25be69ed06bfaf8378d8c, "");
    class_c17bbb052b72514ea9e29eed81b87818.def("rows", method_pointer_b1f0b402f68a52cabdf6644ce0349442, "");
    class_c17bbb052b72514ea9e29eed81b87818.def("cols", method_pointer_3fc1dbb03ec55fb7b3090cbe8ead9a1f, "");
    class_c17bbb052b72514ea9e29eed81b87818.def("h_coeffs", method_pointer_8fe6d63b16de5153a620c95edd71ea1d, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}