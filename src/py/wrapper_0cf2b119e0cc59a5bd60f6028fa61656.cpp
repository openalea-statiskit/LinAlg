#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d7d884d1a62f59ea835e7992bcff5059(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, float  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_865fc914d2765beb93501278e5025501(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_0cf2b119e0cc59a5bd60f6028fa61656()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_e14216b030935ef88424f516698eec75)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::matrixQR;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_723a1a4f6c49545cae677e65481726fa)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, 2, 1, 1, 2 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_02675b4ac7d5593599e41bbb6d115e2c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::rowsTranspositions;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_249c0b648ffb5aa5a071ede5b4c3cb5e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::absDeterminant;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_e5b8171d3c6c5cf4a255e1616fab2c85)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_75c7c9cb63e85a15bad3ad24f9452a33)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_370d0acd8d46503d80df9067d3d94e66)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_f47a3a75dddb526b9f0506dde47d4536)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_361228731e8f5525bef07f6e4041b987)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_0070ffd8d5445a24af8c78ae255003eb)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_7f9940bf196a5170acd3e3919db93326)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_82c5feaa75e65a288ef6dd40450c2739)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_3d366a7cf9485b65be49afceeeb8c508)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_d7d884d1a62f59ea835e7992bcff5059)(float  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_865fc914d2765beb93501278e5025501)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setThreshold;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_fc6f033ec8225ce6b536169b9498bb61)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_dd0aa965f4095ba6860efaaef944460a)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::nonzeroPivots;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_7c147dd3298c59d594d6db320ce19b95)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > class_0cf2b119e0cc59a5bd60f6028fa61656("_FullPivHouseholderQR_0cf2b119e0cc59a5bd60f6028fa61656", "", boost::python::no_init);
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("matrix_qr", method_pointer_e14216b030935ef88424f516698eec75, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("cols_permutation", method_pointer_723a1a4f6c49545cae677e65481726fa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("rows_transpositions", method_pointer_02675b4ac7d5593599e41bbb6d115e2c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("abs_determinant", method_pointer_249c0b648ffb5aa5a071ede5b4c3cb5e, "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("log_abs_determinant", method_pointer_e5b8171d3c6c5cf4a255e1616fab2c85, "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("rank", method_pointer_75c7c9cb63e85a15bad3ad24f9452a33, "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("dimension_of_kernel", method_pointer_370d0acd8d46503d80df9067d3d94e66, "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("is_injective", method_pointer_f47a3a75dddb526b9f0506dde47d4536, "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("is_surjective", method_pointer_361228731e8f5525bef07f6e4041b987, "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("is_invertible", method_pointer_0070ffd8d5445a24af8c78ae255003eb, "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("rows", method_pointer_7f9940bf196a5170acd3e3919db93326, "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("cols", method_pointer_82c5feaa75e65a288ef6dd40450c2739, "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("h_coeffs", method_pointer_3d366a7cf9485b65be49afceeeb8c508, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("set_threshold", method_pointer_d7d884d1a62f59ea835e7992bcff5059, boost::python::return_internal_reference<>(), "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("set_threshold", autowig::method_decorator_d7d884d1a62f59ea835e7992bcff5059);
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("set_threshold", method_pointer_865fc914d2765beb93501278e5025501, boost::python::return_internal_reference<>(), "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("set_threshold", autowig::method_decorator_865fc914d2765beb93501278e5025501);
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("threshold", method_pointer_fc6f033ec8225ce6b536169b9498bb61, "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("nonzero_pivots", method_pointer_dd0aa965f4095ba6860efaaef944460a, "");
    class_0cf2b119e0cc59a5bd60f6028fa61656.def("max_pivot", method_pointer_7c147dd3298c59d594d6db320ce19b95, "");

}