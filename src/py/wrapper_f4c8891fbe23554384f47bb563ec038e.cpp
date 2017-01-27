#include "_ieigen.h"


namespace autowig
{
}


void wrapper_f4c8891fbe23554384f47bb563ec038e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_a24f44bae455505fa7c834db1b1fddf3)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::matrixQR;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_18cd5e4de7bb5bd6b552838bee604d1d)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::absDeterminant;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_d5419f4e812054b5b94ccad91a7788b5)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_1ab00c45250453e68604481edf47a95c)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_b9f86b0d9c055aab82ae9d0a45dd4b14)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::cols;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_444757abd2b1561891f2486e2a33c876)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > class_f4c8891fbe23554384f47bb563ec038e("_HouseholderQR_f4c8891fbe23554384f47bb563ec038e", "", boost::python::no_init);
    class_f4c8891fbe23554384f47bb563ec038e.def("matrix_qr", method_pointer_a24f44bae455505fa7c834db1b1fddf3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f4c8891fbe23554384f47bb563ec038e.def("abs_determinant", method_pointer_18cd5e4de7bb5bd6b552838bee604d1d, "");
    class_f4c8891fbe23554384f47bb563ec038e.def("log_abs_determinant", method_pointer_d5419f4e812054b5b94ccad91a7788b5, "");
    class_f4c8891fbe23554384f47bb563ec038e.def("rows", method_pointer_1ab00c45250453e68604481edf47a95c, "");
    class_f4c8891fbe23554384f47bb563ec038e.def("cols", method_pointer_b9f86b0d9c055aab82ae9d0a45dd4b14, "");
    class_f4c8891fbe23554384f47bb563ec038e.def("h_coeffs", method_pointer_444757abd2b1561891f2486e2a33c876, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}