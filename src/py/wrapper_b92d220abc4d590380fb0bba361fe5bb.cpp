#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a70717d2ce495d26800dd885f0f27828(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, double  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_ddb1f3fa480c5cebbcdd381779a5772e(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_b92d220abc4d590380fb0bba361fe5bb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_7ae9dd8f021458b698ce9470ff22e5a3)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::matrixQR;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_5f23177f47715860968ad6410464af4f)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, 4, 1, 1, 4 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_30b4a3c8560057e7b0a499463489ba95)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::rowsTranspositions;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_83de35411abc55f1abcf912bb7ed9a9b)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::absDeterminant;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_7e74ec3f3f47584c981b77a71e48166f)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_3580c9faf3ff5a349384ea0b3786d759)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_a102af31f99d5f409085504809939928)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_5336f0b50f7958f8ac32ce97657e0f00)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_4a1ff84a3cb55982a7b4ee04b5385680)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_ea9700dfcb2554369cdd4df6afeaf6cf)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_372c5250928358e99eae09e198a85824)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_aaf1213fd50457668aff08a19c72b715)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::cols;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_95871500fe1c56cfb0d45f7561315ecb)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_a70717d2ce495d26800dd885f0f27828)(double  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_ddb1f3fa480c5cebbcdd381779a5772e)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setThreshold;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_68142f42285b5c62b49d2899914b59ba)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_718e889b89f95dcb964c1d49943090cd)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::nonzeroPivots;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_324cfbc80a235429b4b3b7f2d5d1d073)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > class_b92d220abc4d590380fb0bba361fe5bb("_FullPivHouseholderQR_b92d220abc4d590380fb0bba361fe5bb", "", boost::python::no_init);
    class_b92d220abc4d590380fb0bba361fe5bb.def("matrix_qr", method_pointer_7ae9dd8f021458b698ce9470ff22e5a3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("cols_permutation", method_pointer_5f23177f47715860968ad6410464af4f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("rows_transpositions", method_pointer_30b4a3c8560057e7b0a499463489ba95, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("abs_determinant", method_pointer_83de35411abc55f1abcf912bb7ed9a9b, "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("log_abs_determinant", method_pointer_7e74ec3f3f47584c981b77a71e48166f, "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("rank", method_pointer_3580c9faf3ff5a349384ea0b3786d759, "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("dimension_of_kernel", method_pointer_a102af31f99d5f409085504809939928, "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("is_injective", method_pointer_5336f0b50f7958f8ac32ce97657e0f00, "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("is_surjective", method_pointer_4a1ff84a3cb55982a7b4ee04b5385680, "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("is_invertible", method_pointer_ea9700dfcb2554369cdd4df6afeaf6cf, "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("rows", method_pointer_372c5250928358e99eae09e198a85824, "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("cols", method_pointer_aaf1213fd50457668aff08a19c72b715, "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("h_coeffs", method_pointer_95871500fe1c56cfb0d45f7561315ecb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("set_threshold", method_pointer_a70717d2ce495d26800dd885f0f27828, boost::python::return_internal_reference<>(), "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("set_threshold", autowig::method_decorator_a70717d2ce495d26800dd885f0f27828);
    class_b92d220abc4d590380fb0bba361fe5bb.def("set_threshold", method_pointer_ddb1f3fa480c5cebbcdd381779a5772e, boost::python::return_internal_reference<>(), "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("set_threshold", autowig::method_decorator_ddb1f3fa480c5cebbcdd381779a5772e);
    class_b92d220abc4d590380fb0bba361fe5bb.def("threshold", method_pointer_68142f42285b5c62b49d2899914b59ba, "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("nonzero_pivots", method_pointer_718e889b89f95dcb964c1d49943090cd, "");
    class_b92d220abc4d590380fb0bba361fe5bb.def("max_pivot", method_pointer_324cfbc80a235429b4b3b7f2d5d1d073, "");

}