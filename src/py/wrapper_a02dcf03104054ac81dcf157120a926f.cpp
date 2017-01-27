#include "_ieigen.h"


namespace autowig
{
}


void wrapper_a02dcf03104054ac81dcf157120a926f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_306082e331865e0895569c42baa56143)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::matrixQR;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_28f680b0774853b2abf506916ace0e67)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::absDeterminant;
    double  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_7c944642926f5bbfbe676400c917235f)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::logAbsDeterminant;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_56adfe34a3ac5dc18e95ae96fef9bf8e)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_ee7021e15f005e4e87fa8d7ab13e2591)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  const & (::Eigen::HouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_f0944f8a42235e85aaadbb2e965ea7af)() const = &::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::hCoeffs;
    boost::python::class_< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > class_a02dcf03104054ac81dcf157120a926f("_HouseholderQR_a02dcf03104054ac81dcf157120a926f", "", boost::python::no_init);
    class_a02dcf03104054ac81dcf157120a926f.def("matrix_qr", method_pointer_306082e331865e0895569c42baa56143, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a02dcf03104054ac81dcf157120a926f.def("abs_determinant", method_pointer_28f680b0774853b2abf506916ace0e67, "");
    class_a02dcf03104054ac81dcf157120a926f.def("log_abs_determinant", method_pointer_7c944642926f5bbfbe676400c917235f, "");
    class_a02dcf03104054ac81dcf157120a926f.def("rows", method_pointer_56adfe34a3ac5dc18e95ae96fef9bf8e, "");
    class_a02dcf03104054ac81dcf157120a926f.def("cols", method_pointer_ee7021e15f005e4e87fa8d7ab13e2591, "");
    class_a02dcf03104054ac81dcf157120a926f.def("h_coeffs", method_pointer_f0944f8a42235e85aaadbb2e965ea7af, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}