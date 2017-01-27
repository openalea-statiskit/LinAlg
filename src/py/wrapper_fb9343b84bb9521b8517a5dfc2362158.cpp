#include "_ieigen.h"


namespace autowig
{
    void method_decorator_08bc943894005900b7b09a4286beb787(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, double  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_ef77b72218c9553d9cda56769c430ec3(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_fb9343b84bb9521b8517a5dfc2362158()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_2f09511be16e53c39b4fa36bbca6d386)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::matrixQR;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_e23ab0162d015bf6b640ae12fe1cab14)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, -1, 1, 1, -1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_670916c11f4c59db99cfe3e3045f377a)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::rowsTranspositions;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_89225eb8b7d254e090d80fa43c220f25)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::absDeterminant;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_1187c1676ccf566fa5009f425ce14889)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_bfafc03cd65d5e4484b90113e06079fc)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_470a82d819fd5440a61b6570807175d9)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_eb448ba4150e59da88b58467050e5c02)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_b52aff4c2c3151279ee8323b36460b22)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_d5f74e095bcf55d98ae2f0eb69d275cf)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_44dbca8a2bd05f7f9075d1d37a6878d6)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_588e958957235cc497bdb9fedb239f1c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_fd77f951ced95303aa99f5ca659c6a4e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_08bc943894005900b7b09a4286beb787)(double  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_ef77b72218c9553d9cda56769c430ec3)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setThreshold;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_d0c7071113dc5cf6a69de2d60f6817c4)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_bbacf96edfb95caf9adda56786b7a493)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::nonzeroPivots;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_4d7df722214555b48687659729c433b7)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > class_fb9343b84bb9521b8517a5dfc2362158("_FullPivHouseholderQR_fb9343b84bb9521b8517a5dfc2362158", "", boost::python::no_init);
    class_fb9343b84bb9521b8517a5dfc2362158.def("matrix_qr", method_pointer_2f09511be16e53c39b4fa36bbca6d386, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("cols_permutation", method_pointer_e23ab0162d015bf6b640ae12fe1cab14, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("rows_transpositions", method_pointer_670916c11f4c59db99cfe3e3045f377a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("abs_determinant", method_pointer_89225eb8b7d254e090d80fa43c220f25, "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("log_abs_determinant", method_pointer_1187c1676ccf566fa5009f425ce14889, "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("rank", method_pointer_bfafc03cd65d5e4484b90113e06079fc, "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("dimension_of_kernel", method_pointer_470a82d819fd5440a61b6570807175d9, "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("is_injective", method_pointer_eb448ba4150e59da88b58467050e5c02, "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("is_surjective", method_pointer_b52aff4c2c3151279ee8323b36460b22, "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("is_invertible", method_pointer_d5f74e095bcf55d98ae2f0eb69d275cf, "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("rows", method_pointer_44dbca8a2bd05f7f9075d1d37a6878d6, "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("cols", method_pointer_588e958957235cc497bdb9fedb239f1c, "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("h_coeffs", method_pointer_fd77f951ced95303aa99f5ca659c6a4e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("set_threshold", method_pointer_08bc943894005900b7b09a4286beb787, boost::python::return_internal_reference<>(), "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("set_threshold", autowig::method_decorator_08bc943894005900b7b09a4286beb787);
    class_fb9343b84bb9521b8517a5dfc2362158.def("set_threshold", method_pointer_ef77b72218c9553d9cda56769c430ec3, boost::python::return_internal_reference<>(), "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("set_threshold", autowig::method_decorator_ef77b72218c9553d9cda56769c430ec3);
    class_fb9343b84bb9521b8517a5dfc2362158.def("threshold", method_pointer_d0c7071113dc5cf6a69de2d60f6817c4, "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("nonzero_pivots", method_pointer_bbacf96edfb95caf9adda56786b7a493, "");
    class_fb9343b84bb9521b8517a5dfc2362158.def("max_pivot", method_pointer_4d7df722214555b48687659729c433b7, "");

}