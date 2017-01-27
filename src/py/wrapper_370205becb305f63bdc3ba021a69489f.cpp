#include "_ieigen.h"


namespace autowig
{
    void method_decorator_fc076f84ff9c5158aba21a1016998ea2(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, double  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_835e6541cde5513c8180f1ee6e43dfbc(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_370205becb305f63bdc3ba021a69489f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_e25ad61edb7b5816802b3c18a87a6c1e)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::matrixQR;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_965b2520c4bb582087c142d92301f152)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::matrixR;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_0121cbe8ea2e526f95dfa594dcfe0d32)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::colsPermutation;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_27ef6cb189a758dd8538794ab00a3058)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::absDeterminant;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_dbd83e7ef34e5d0384c044aae1a634ca)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_fbf7021074b25b96aee352c061e2abc6)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_efa57f0bfc9d5d63a45196b78f59edbe)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_f6737f8e29e25cbe925a531dd17a11dc)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_df3a6f96b4485f0cb1d639a6e09005f5)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_7222f103dd7c5f26b4eea933c0708a45)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_dc1bc7d594985a3fae01d9716f823b94)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_1620c5f5e98b5d7e84b5eab798cea313)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_c7971d9d2ca35bb7ab0516651bfc451d)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_fc076f84ff9c5158aba21a1016998ea2)(double  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_835e6541cde5513c8180f1ee6e43dfbc)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setThreshold;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_8b8acf38e0c95af6a03952c40fdd160c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_a94e3824ce8c513f9e1f3bd55b025c68)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::nonzeroPivots;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_89e9d92cd5e7523a901bef264db30281)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_00ba03cfe6ab54bda16e2ce1c149c90e)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > > class_370205becb305f63bdc3ba021a69489f("_ColPivHouseholderQR_370205becb305f63bdc3ba021a69489f", "", boost::python::no_init);
    class_370205becb305f63bdc3ba021a69489f.def("matrix_qr", method_pointer_e25ad61edb7b5816802b3c18a87a6c1e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_370205becb305f63bdc3ba021a69489f.def("matrix_r", method_pointer_965b2520c4bb582087c142d92301f152, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_370205becb305f63bdc3ba021a69489f.def("cols_permutation", method_pointer_0121cbe8ea2e526f95dfa594dcfe0d32, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_370205becb305f63bdc3ba021a69489f.def("abs_determinant", method_pointer_27ef6cb189a758dd8538794ab00a3058, "");
    class_370205becb305f63bdc3ba021a69489f.def("log_abs_determinant", method_pointer_dbd83e7ef34e5d0384c044aae1a634ca, "");
    class_370205becb305f63bdc3ba021a69489f.def("rank", method_pointer_fbf7021074b25b96aee352c061e2abc6, "");
    class_370205becb305f63bdc3ba021a69489f.def("dimension_of_kernel", method_pointer_efa57f0bfc9d5d63a45196b78f59edbe, "");
    class_370205becb305f63bdc3ba021a69489f.def("is_injective", method_pointer_f6737f8e29e25cbe925a531dd17a11dc, "");
    class_370205becb305f63bdc3ba021a69489f.def("is_surjective", method_pointer_df3a6f96b4485f0cb1d639a6e09005f5, "");
    class_370205becb305f63bdc3ba021a69489f.def("is_invertible", method_pointer_7222f103dd7c5f26b4eea933c0708a45, "");
    class_370205becb305f63bdc3ba021a69489f.def("rows", method_pointer_dc1bc7d594985a3fae01d9716f823b94, "");
    class_370205becb305f63bdc3ba021a69489f.def("cols", method_pointer_1620c5f5e98b5d7e84b5eab798cea313, "");
    class_370205becb305f63bdc3ba021a69489f.def("h_coeffs", method_pointer_c7971d9d2ca35bb7ab0516651bfc451d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_370205becb305f63bdc3ba021a69489f.def("set_threshold", method_pointer_fc076f84ff9c5158aba21a1016998ea2, boost::python::return_internal_reference<>(), "");
    class_370205becb305f63bdc3ba021a69489f.def("set_threshold", autowig::method_decorator_fc076f84ff9c5158aba21a1016998ea2);
    class_370205becb305f63bdc3ba021a69489f.def("set_threshold", method_pointer_835e6541cde5513c8180f1ee6e43dfbc, boost::python::return_internal_reference<>(), "");
    class_370205becb305f63bdc3ba021a69489f.def("set_threshold", autowig::method_decorator_835e6541cde5513c8180f1ee6e43dfbc);
    class_370205becb305f63bdc3ba021a69489f.def("threshold", method_pointer_8b8acf38e0c95af6a03952c40fdd160c, "");
    class_370205becb305f63bdc3ba021a69489f.def("nonzero_pivots", method_pointer_a94e3824ce8c513f9e1f3bd55b025c68, "");
    class_370205becb305f63bdc3ba021a69489f.def("max_pivot", method_pointer_89e9d92cd5e7523a901bef264db30281, "");
    class_370205becb305f63bdc3ba021a69489f.def("info", method_pointer_00ba03cfe6ab54bda16e2ce1c149c90e, "");

}