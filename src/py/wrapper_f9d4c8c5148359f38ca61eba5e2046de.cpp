#include "_ieigen.h"


namespace autowig
{
    void method_decorator_412a8cd46ded523c9d749cd8adb07e97(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, double  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_440fb58ad16f56bba54810c217bed14c(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_f9d4c8c5148359f38ca61eba5e2046de()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_f302a2531c075a6fa9afb71fefd3c170)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::matrixQR;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_27736113c10d5fde8788330d3d71d2b1)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, 3, 1, 1, 3 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_af0035ed28f051fcaab6459fa33208e0)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::rowsTranspositions;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_0775a92db9965d34a7a5130cd90fc336)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::absDeterminant;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_a4d0251fa3e35410b9425897ecda185f)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_97ec9f7d6d115d2aa627998300767c07)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_6910c365161759e6b98d62a5e53d9a11)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_2c8d779bf0ff5c538622bf4dc9543b5d)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_c9df37ff91f75c3ebc4eb719211a911d)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_702087994098579c9024925914e47208)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_b4c8861fef505b088ce2268ba464712e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_fd2e3882d6b75d23815b617ea29e4a10)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_56e661f28d4255f895c202de4fe9fe08)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_412a8cd46ded523c9d749cd8adb07e97)(double  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_440fb58ad16f56bba54810c217bed14c)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setThreshold;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_18d6c64bf4885c2e86c624cfef3304d7)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_5449eb9b33b455e4b4897008c4d55a6f)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::nonzeroPivots;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_f584fe1afc9452fc8e0fd68ad9263780)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > class_f9d4c8c5148359f38ca61eba5e2046de("_FullPivHouseholderQR_f9d4c8c5148359f38ca61eba5e2046de", "", boost::python::no_init);
    class_f9d4c8c5148359f38ca61eba5e2046de.def("matrix_qr", method_pointer_f302a2531c075a6fa9afb71fefd3c170, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("cols_permutation", method_pointer_27736113c10d5fde8788330d3d71d2b1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("rows_transpositions", method_pointer_af0035ed28f051fcaab6459fa33208e0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("abs_determinant", method_pointer_0775a92db9965d34a7a5130cd90fc336, "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("log_abs_determinant", method_pointer_a4d0251fa3e35410b9425897ecda185f, "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("rank", method_pointer_97ec9f7d6d115d2aa627998300767c07, "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("dimension_of_kernel", method_pointer_6910c365161759e6b98d62a5e53d9a11, "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("is_injective", method_pointer_2c8d779bf0ff5c538622bf4dc9543b5d, "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("is_surjective", method_pointer_c9df37ff91f75c3ebc4eb719211a911d, "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("is_invertible", method_pointer_702087994098579c9024925914e47208, "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("rows", method_pointer_b4c8861fef505b088ce2268ba464712e, "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("cols", method_pointer_fd2e3882d6b75d23815b617ea29e4a10, "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("h_coeffs", method_pointer_56e661f28d4255f895c202de4fe9fe08, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("set_threshold", method_pointer_412a8cd46ded523c9d749cd8adb07e97, boost::python::return_internal_reference<>(), "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("set_threshold", autowig::method_decorator_412a8cd46ded523c9d749cd8adb07e97);
    class_f9d4c8c5148359f38ca61eba5e2046de.def("set_threshold", method_pointer_440fb58ad16f56bba54810c217bed14c, boost::python::return_internal_reference<>(), "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("set_threshold", autowig::method_decorator_440fb58ad16f56bba54810c217bed14c);
    class_f9d4c8c5148359f38ca61eba5e2046de.def("threshold", method_pointer_18d6c64bf4885c2e86c624cfef3304d7, "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("nonzero_pivots", method_pointer_5449eb9b33b455e4b4897008c4d55a6f, "");
    class_f9d4c8c5148359f38ca61eba5e2046de.def("max_pivot", method_pointer_f584fe1afc9452fc8e0fd68ad9263780, "");

}