#include "_ieigen.h"


namespace autowig
{
}


void wrapper_598cdfd4c6615e4084c84d114ba4483a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_a0bdfc5105f2562a82dc928781126288)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::matrixQR;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_bd95abc1ec4e5dc69e46c41da3b98006)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::absDeterminant;
    float  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_4d9f5bf6b6b0524da033775edb928dd4)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_946d7ce333375e5c9a5ad5121e590c0e)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_e81734d258895c5fb8e1fda8d1b8b138)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_7feb3fc4228d5cf789b788b416811165)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > class_598cdfd4c6615e4084c84d114ba4483a("_HouseholderQR_598cdfd4c6615e4084c84d114ba4483a", "", boost::python::no_init);
    class_598cdfd4c6615e4084c84d114ba4483a.def("matrix_qr", method_pointer_a0bdfc5105f2562a82dc928781126288, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_598cdfd4c6615e4084c84d114ba4483a.def("abs_determinant", method_pointer_bd95abc1ec4e5dc69e46c41da3b98006, "");
    class_598cdfd4c6615e4084c84d114ba4483a.def("log_abs_determinant", method_pointer_4d9f5bf6b6b0524da033775edb928dd4, "");
    class_598cdfd4c6615e4084c84d114ba4483a.def("rows", method_pointer_946d7ce333375e5c9a5ad5121e590c0e, "");
    class_598cdfd4c6615e4084c84d114ba4483a.def("cols", method_pointer_e81734d258895c5fb8e1fda8d1b8b138, "");
    class_598cdfd4c6615e4084c84d114ba4483a.def("h_coeffs", method_pointer_7feb3fc4228d5cf789b788b416811165, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}