#include "_ieigen.h"


namespace autowig
{
}


void wrapper_068961526def5e019fa5ae2162f4399c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_787b7e270d9c56e9997dd0c4dacd2feb)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::matrixQR;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_bf5eb0408e6c51d9b292a91e008470fb)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::absDeterminant;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_ba1f363b75d553b986aa88d687c147b2)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_596c7b08038b597f97dcc31db460ed17)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_a092350dc03c542cb60325513cd42540)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_9f6d997337c05d57b93c43ed74934292)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > > class_068961526def5e019fa5ae2162f4399c("_HouseholderQR_068961526def5e019fa5ae2162f4399c", "", boost::python::no_init);
    class_068961526def5e019fa5ae2162f4399c.def("matrix_qr", method_pointer_787b7e270d9c56e9997dd0c4dacd2feb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_068961526def5e019fa5ae2162f4399c.def("abs_determinant", method_pointer_bf5eb0408e6c51d9b292a91e008470fb, "");
    class_068961526def5e019fa5ae2162f4399c.def("log_abs_determinant", method_pointer_ba1f363b75d553b986aa88d687c147b2, "");
    class_068961526def5e019fa5ae2162f4399c.def("rows", method_pointer_596c7b08038b597f97dcc31db460ed17, "");
    class_068961526def5e019fa5ae2162f4399c.def("cols", method_pointer_a092350dc03c542cb60325513cd42540, "");
    class_068961526def5e019fa5ae2162f4399c.def("h_coeffs", method_pointer_9f6d997337c05d57b93c43ed74934292, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}