#include "_ieigen.h"


namespace autowig
{
    void method_decorator_57171d3dd3755ccc8688b8bb5ebda805(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, double  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_3f37e628783c57ceb426cbdcf4d51622(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_f44a17a64b8557eea07ef73c4188e061()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_aa6c3915631253349d8e6ae8e5e48ecb)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::matrixQR;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_fa2bcce926905b949908d44c2e3e5c3e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, 2, 1, 1, 2 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_a7aa0a9d4b4d5f71b4218ae9718089f4)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::rowsTranspositions;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_63645f311ed250d0a1dfe98695ffbdfc)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::absDeterminant;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_28608071c9635daa825372f3add6987f)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_8b550b0ee07b5cec8d526fa0cc0fdeb2)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_3aa8870a06485be2b0abcb604c860d19)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_2006292528055e9f9fc8756997e96fb8)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_2892932e24d7575b932a864b51a57ef4)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_8a9a02df658a597ebdb0bc0864e5fb3e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_51815242d3595e36872101d90024ca30)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_b998788edded52f08c3a95319e02405e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_11a0bfd66c2c5af09aac5de43be595bd)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_57171d3dd3755ccc8688b8bb5ebda805)(double  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_3f37e628783c57ceb426cbdcf4d51622)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setThreshold;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_d1179b0631345aea9d092345e2a03e62)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_d118e976c7e75ee48dd4f5c0ceb995f4)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::nonzeroPivots;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_14ef7a69d9b55cfe8de7af795d459542)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > class_f44a17a64b8557eea07ef73c4188e061("_FullPivHouseholderQR_f44a17a64b8557eea07ef73c4188e061", "", boost::python::no_init);
    class_f44a17a64b8557eea07ef73c4188e061.def("matrix_qr", method_pointer_aa6c3915631253349d8e6ae8e5e48ecb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f44a17a64b8557eea07ef73c4188e061.def("cols_permutation", method_pointer_fa2bcce926905b949908d44c2e3e5c3e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f44a17a64b8557eea07ef73c4188e061.def("rows_transpositions", method_pointer_a7aa0a9d4b4d5f71b4218ae9718089f4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f44a17a64b8557eea07ef73c4188e061.def("abs_determinant", method_pointer_63645f311ed250d0a1dfe98695ffbdfc, "");
    class_f44a17a64b8557eea07ef73c4188e061.def("log_abs_determinant", method_pointer_28608071c9635daa825372f3add6987f, "");
    class_f44a17a64b8557eea07ef73c4188e061.def("rank", method_pointer_8b550b0ee07b5cec8d526fa0cc0fdeb2, "");
    class_f44a17a64b8557eea07ef73c4188e061.def("dimension_of_kernel", method_pointer_3aa8870a06485be2b0abcb604c860d19, "");
    class_f44a17a64b8557eea07ef73c4188e061.def("is_injective", method_pointer_2006292528055e9f9fc8756997e96fb8, "");
    class_f44a17a64b8557eea07ef73c4188e061.def("is_surjective", method_pointer_2892932e24d7575b932a864b51a57ef4, "");
    class_f44a17a64b8557eea07ef73c4188e061.def("is_invertible", method_pointer_8a9a02df658a597ebdb0bc0864e5fb3e, "");
    class_f44a17a64b8557eea07ef73c4188e061.def("rows", method_pointer_51815242d3595e36872101d90024ca30, "");
    class_f44a17a64b8557eea07ef73c4188e061.def("cols", method_pointer_b998788edded52f08c3a95319e02405e, "");
    class_f44a17a64b8557eea07ef73c4188e061.def("h_coeffs", method_pointer_11a0bfd66c2c5af09aac5de43be595bd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f44a17a64b8557eea07ef73c4188e061.def("set_threshold", method_pointer_57171d3dd3755ccc8688b8bb5ebda805, boost::python::return_internal_reference<>(), "");
    class_f44a17a64b8557eea07ef73c4188e061.def("set_threshold", autowig::method_decorator_57171d3dd3755ccc8688b8bb5ebda805);
    class_f44a17a64b8557eea07ef73c4188e061.def("set_threshold", method_pointer_3f37e628783c57ceb426cbdcf4d51622, boost::python::return_internal_reference<>(), "");
    class_f44a17a64b8557eea07ef73c4188e061.def("set_threshold", autowig::method_decorator_3f37e628783c57ceb426cbdcf4d51622);
    class_f44a17a64b8557eea07ef73c4188e061.def("threshold", method_pointer_d1179b0631345aea9d092345e2a03e62, "");
    class_f44a17a64b8557eea07ef73c4188e061.def("nonzero_pivots", method_pointer_d118e976c7e75ee48dd4f5c0ceb995f4, "");
    class_f44a17a64b8557eea07ef73c4188e061.def("max_pivot", method_pointer_14ef7a69d9b55cfe8de7af795d459542, "");

}