#include "_ieigen.h"


namespace autowig
{
    void method_decorator_798ccc7fcaa653a99be19fd0f3606677(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, float  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_0331096486165d7cb54e413bd122b93c(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_bec0e94e1da5586296b27dbe7c46563d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_a60a8333861b5fa9b331e8591abbff7f)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::matrixQR;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_d4f5b912a1125269a5d4977ca15a704c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, 2, 1, 1, 2 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_caddc4f145bb5ad1a48af151ff082ded)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::rowsTranspositions;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_ad5072a4e3055311b12c16c831ea0ff7)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::absDeterminant;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_7640a8879dd85e75b3861ee4ce8add98)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_c7f021d5e984541297b8aba3a5656a82)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_9bd35ab04e3557e6a50fac2dd6e1ab50)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_a3278c8f244357fda5b237ba759f0fa9)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_90c50468861a5262ae0e13efa092921d)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_e1477a0fd38c5002853bf05b53d9baff)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_54b8e5a2807e51aa834a11db72f1f659)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_4cc3af8903265972a6efbf37022b0bee)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::cols;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_0f2ccd64b0a25057a020eb444ebc4f12)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_798ccc7fcaa653a99be19fd0f3606677)(float  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_0331096486165d7cb54e413bd122b93c)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setThreshold;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_49a87423cced569d88e17cbcff3596ae)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_ddff36b416ab5d5da84ecbf27ceeece2)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::nonzeroPivots;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_96ec7233fa735d81b597d6242dc92b84)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > > class_bec0e94e1da5586296b27dbe7c46563d("_FullPivHouseholderQR_bec0e94e1da5586296b27dbe7c46563d", "", boost::python::no_init);
    class_bec0e94e1da5586296b27dbe7c46563d.def("matrix_qr", method_pointer_a60a8333861b5fa9b331e8591abbff7f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("cols_permutation", method_pointer_d4f5b912a1125269a5d4977ca15a704c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("rows_transpositions", method_pointer_caddc4f145bb5ad1a48af151ff082ded, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("abs_determinant", method_pointer_ad5072a4e3055311b12c16c831ea0ff7, "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("log_abs_determinant", method_pointer_7640a8879dd85e75b3861ee4ce8add98, "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("rank", method_pointer_c7f021d5e984541297b8aba3a5656a82, "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("dimension_of_kernel", method_pointer_9bd35ab04e3557e6a50fac2dd6e1ab50, "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("is_injective", method_pointer_a3278c8f244357fda5b237ba759f0fa9, "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("is_surjective", method_pointer_90c50468861a5262ae0e13efa092921d, "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("is_invertible", method_pointer_e1477a0fd38c5002853bf05b53d9baff, "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("rows", method_pointer_54b8e5a2807e51aa834a11db72f1f659, "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("cols", method_pointer_4cc3af8903265972a6efbf37022b0bee, "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("h_coeffs", method_pointer_0f2ccd64b0a25057a020eb444ebc4f12, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("set_threshold", method_pointer_798ccc7fcaa653a99be19fd0f3606677, boost::python::return_internal_reference<>(), "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("set_threshold", autowig::method_decorator_798ccc7fcaa653a99be19fd0f3606677);
    class_bec0e94e1da5586296b27dbe7c46563d.def("set_threshold", method_pointer_0331096486165d7cb54e413bd122b93c, boost::python::return_internal_reference<>(), "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("set_threshold", autowig::method_decorator_0331096486165d7cb54e413bd122b93c);
    class_bec0e94e1da5586296b27dbe7c46563d.def("threshold", method_pointer_49a87423cced569d88e17cbcff3596ae, "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("nonzero_pivots", method_pointer_ddff36b416ab5d5da84ecbf27ceeece2, "");
    class_bec0e94e1da5586296b27dbe7c46563d.def("max_pivot", method_pointer_96ec7233fa735d81b597d6242dc92b84, "");

}