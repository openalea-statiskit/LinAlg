#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f6e8aee8dc2c5638b0e15df9e3e6cc14(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, float  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_46246d3735615678b06b6ba7aa3fda94(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_cabc2aa73911563ca2351f47639dd7b5()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_83813ae2c68b51839776090f5029c13b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::matrixQR;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_1d777f2fa955595785a25682c8a4d439)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::matrixR;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_31c6397f7f9b5d7798bf72e22dc352cd)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::colsPermutation;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_5eb79249db5757638cfb8607c3fa0044)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::absDeterminant;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_b9bc715e321955bd88713e7c9f062e97)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_f2d7c053720b52f2854593d3412b5802)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_9dd689f0cf9553d4b9313f283dfcb112)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_845c357ac10e56a28719678765ae7a64)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_942503f809c457128854c347ab2b1474)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_15f6b76732055368afce8a45db809e43)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_97706b7365105e18920376ff2c48756f)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_bdb56ea49ca351718678ca121223b2dd)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_42d28a9bf0c052d0a39960efea9a3d73)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_f6e8aee8dc2c5638b0e15df9e3e6cc14)(float  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_46246d3735615678b06b6ba7aa3fda94)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setThreshold;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_605a86876dfb5d98982ae9fdeb51449e)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_cdb4bb9bf472560baa0d4f5c527d22b9)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::nonzeroPivots;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_7865f4a5bedc5adc9a251e3b37cf36ee)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_2d9e3acc278755abb8a5c3ec5d5e46d6)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > class_cabc2aa73911563ca2351f47639dd7b5("_ColPivHouseholderQR_cabc2aa73911563ca2351f47639dd7b5", "", boost::python::no_init);
    class_cabc2aa73911563ca2351f47639dd7b5.def("matrix_qr", method_pointer_83813ae2c68b51839776090f5029c13b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("matrix_r", method_pointer_1d777f2fa955595785a25682c8a4d439, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("cols_permutation", method_pointer_31c6397f7f9b5d7798bf72e22dc352cd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("abs_determinant", method_pointer_5eb79249db5757638cfb8607c3fa0044, "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("log_abs_determinant", method_pointer_b9bc715e321955bd88713e7c9f062e97, "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("rank", method_pointer_f2d7c053720b52f2854593d3412b5802, "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("dimension_of_kernel", method_pointer_9dd689f0cf9553d4b9313f283dfcb112, "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("is_injective", method_pointer_845c357ac10e56a28719678765ae7a64, "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("is_surjective", method_pointer_942503f809c457128854c347ab2b1474, "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("is_invertible", method_pointer_15f6b76732055368afce8a45db809e43, "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("rows", method_pointer_97706b7365105e18920376ff2c48756f, "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("cols", method_pointer_bdb56ea49ca351718678ca121223b2dd, "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("h_coeffs", method_pointer_42d28a9bf0c052d0a39960efea9a3d73, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("set_threshold", method_pointer_f6e8aee8dc2c5638b0e15df9e3e6cc14, boost::python::return_internal_reference<>(), "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("set_threshold", autowig::method_decorator_f6e8aee8dc2c5638b0e15df9e3e6cc14);
    class_cabc2aa73911563ca2351f47639dd7b5.def("set_threshold", method_pointer_46246d3735615678b06b6ba7aa3fda94, boost::python::return_internal_reference<>(), "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("set_threshold", autowig::method_decorator_46246d3735615678b06b6ba7aa3fda94);
    class_cabc2aa73911563ca2351f47639dd7b5.def("threshold", method_pointer_605a86876dfb5d98982ae9fdeb51449e, "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("nonzero_pivots", method_pointer_cdb4bb9bf472560baa0d4f5c527d22b9, "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("max_pivot", method_pointer_7865f4a5bedc5adc9a251e3b37cf36ee, "");
    class_cabc2aa73911563ca2351f47639dd7b5.def("info", method_pointer_2d9e3acc278755abb8a5c3ec5d5e46d6, "");

}