#include "_ieigen.h"


namespace autowig
{
}


void wrapper_efc2fc5dbd22514890395f1cd07f2255()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_a1cba52cd67a5c24afd5c16b8b67f0cf)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::matrixQR;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_872e6aad074f5f81a1fd77ce45fea639)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::absDeterminant;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_ce046392f6ff5dd285706cd0ae2b28fd)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_ac0d98f4e01d540dbb96e05e7d8f7f58)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_e206d7c51fc95d8e8e7958f60c6e8fef)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::cols;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_eb67250bd2e8598c8e2704ae273fc60c)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > > class_efc2fc5dbd22514890395f1cd07f2255("_HouseholderQR_efc2fc5dbd22514890395f1cd07f2255", "", boost::python::no_init);
    class_efc2fc5dbd22514890395f1cd07f2255.def("matrix_qr", method_pointer_a1cba52cd67a5c24afd5c16b8b67f0cf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_efc2fc5dbd22514890395f1cd07f2255.def("abs_determinant", method_pointer_872e6aad074f5f81a1fd77ce45fea639, "");
    class_efc2fc5dbd22514890395f1cd07f2255.def("log_abs_determinant", method_pointer_ce046392f6ff5dd285706cd0ae2b28fd, "");
    class_efc2fc5dbd22514890395f1cd07f2255.def("rows", method_pointer_ac0d98f4e01d540dbb96e05e7d8f7f58, "");
    class_efc2fc5dbd22514890395f1cd07f2255.def("cols", method_pointer_e206d7c51fc95d8e8e7958f60c6e8fef, "");
    class_efc2fc5dbd22514890395f1cd07f2255.def("h_coeffs", method_pointer_eb67250bd2e8598c8e2704ae273fc60c, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}