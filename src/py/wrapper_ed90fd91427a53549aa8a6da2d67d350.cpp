#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f468a84720755b98abdce498c4e2db8b(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, float  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_adfd9ea2b2e753a8a81ab348ca9bf975(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_ed90fd91427a53549aa8a6da2d67d350()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_e49a6b30bdd05ef7a5810be8dd04b19a)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::matrixQR;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_7ee53fde22125313a706ecb39ef38ae2)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, -1, 1, 1, -1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_b9f1e1f7d9a65fa88f0a6f4f044fab7c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::rowsTranspositions;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_bca8c6de2b2759b489772953cefe0ed6)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::absDeterminant;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_54db096dd4525918976d17bfc4638bc2)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_9312b911c1f25da6b555aa891dcd4cbe)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_c9f0ba8a8f18572ea4800233984f6fb2)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_b07b9dc4738e502e8d02ac792dda5565)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_b41de75b79dd54c08a011595c1aff98c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_284e9517f4f35cc4b3f8b78333b5265a)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_d62c8833b5c15b9d8634f0d014b0340f)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_a67150022acc53598646895bb4e73c15)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_cb9f3c7496a45c0c9ccff309faee09ed)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_f468a84720755b98abdce498c4e2db8b)(float  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_adfd9ea2b2e753a8a81ab348ca9bf975)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setThreshold;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_d2bb66508ab55bca9f2c93169eabc612)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_fc18a74c854e5d9d9e3673760846f35e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::nonzeroPivots;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_287edbbe9ef955b98546ca7fed2ccba6)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > class_ed90fd91427a53549aa8a6da2d67d350("_FullPivHouseholderQR_ed90fd91427a53549aa8a6da2d67d350", "", boost::python::no_init);
    class_ed90fd91427a53549aa8a6da2d67d350.def("matrix_qr", method_pointer_e49a6b30bdd05ef7a5810be8dd04b19a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("cols_permutation", method_pointer_7ee53fde22125313a706ecb39ef38ae2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("rows_transpositions", method_pointer_b9f1e1f7d9a65fa88f0a6f4f044fab7c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("abs_determinant", method_pointer_bca8c6de2b2759b489772953cefe0ed6, "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("log_abs_determinant", method_pointer_54db096dd4525918976d17bfc4638bc2, "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("rank", method_pointer_9312b911c1f25da6b555aa891dcd4cbe, "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("dimension_of_kernel", method_pointer_c9f0ba8a8f18572ea4800233984f6fb2, "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("is_injective", method_pointer_b07b9dc4738e502e8d02ac792dda5565, "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("is_surjective", method_pointer_b41de75b79dd54c08a011595c1aff98c, "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("is_invertible", method_pointer_284e9517f4f35cc4b3f8b78333b5265a, "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("rows", method_pointer_d62c8833b5c15b9d8634f0d014b0340f, "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("cols", method_pointer_a67150022acc53598646895bb4e73c15, "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("h_coeffs", method_pointer_cb9f3c7496a45c0c9ccff309faee09ed, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("set_threshold", method_pointer_f468a84720755b98abdce498c4e2db8b, boost::python::return_internal_reference<>(), "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("set_threshold", autowig::method_decorator_f468a84720755b98abdce498c4e2db8b);
    class_ed90fd91427a53549aa8a6da2d67d350.def("set_threshold", method_pointer_adfd9ea2b2e753a8a81ab348ca9bf975, boost::python::return_internal_reference<>(), "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("set_threshold", autowig::method_decorator_adfd9ea2b2e753a8a81ab348ca9bf975);
    class_ed90fd91427a53549aa8a6da2d67d350.def("threshold", method_pointer_d2bb66508ab55bca9f2c93169eabc612, "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("nonzero_pivots", method_pointer_fc18a74c854e5d9d9e3673760846f35e, "");
    class_ed90fd91427a53549aa8a6da2d67d350.def("max_pivot", method_pointer_287edbbe9ef955b98546ca7fed2ccba6, "");

}