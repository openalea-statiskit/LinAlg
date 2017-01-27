#include "_ieigen.h"


namespace autowig
{
    void method_decorator_7e3294d849eb5dd0b0c801e5eb05dd5f(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, float  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_a3bea88b4dfa5be58e7a9c1d33d9b4e0(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_fe533e30429e56e4b7583383234444e9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_3659ce71ea655b4ab9a40f1aee29837a)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::matrixQR;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_1ccd935058af5fc6a2b9a6b65f080609)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::matrixR;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_62247c75625e52d19bd375736f22f177)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::colsPermutation;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_b325d95570a750c696473742062c5fc3)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::absDeterminant;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_101e7e5001065d20bcc2f4cbe3adb79f)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_ae6a36fc83725600be2693d512568d32)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_e87cec62c55459feb76c97073002dc2e)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_54f607bbb7105439a7e08c7ff0ab6f16)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_82bad4fb229f590da4a6608c25192399)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_ce9322fa14e95fcebd2bb27adcf16a84)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_2f3adc390e775e16ab9563d295ae913f)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_10d14263410a5f2aa4e7831ee076fce0)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_61a702b71b2e516488b22356b0823f7d)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_7e3294d849eb5dd0b0c801e5eb05dd5f)(float  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_a3bea88b4dfa5be58e7a9c1d33d9b4e0)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setThreshold;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_e99e90b5be1050e8ab50a632bc166022)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_77663290cef15de59e73e984cd160a6c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::nonzeroPivots;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_26675be509e25a6eaf52b0a3c2ae320b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_a61fe41291a55d89bdaa496b0a9f87c6)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > class_fe533e30429e56e4b7583383234444e9("_ColPivHouseholderQR_fe533e30429e56e4b7583383234444e9", "", boost::python::no_init);
    class_fe533e30429e56e4b7583383234444e9.def("matrix_qr", method_pointer_3659ce71ea655b4ab9a40f1aee29837a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fe533e30429e56e4b7583383234444e9.def("matrix_r", method_pointer_1ccd935058af5fc6a2b9a6b65f080609, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fe533e30429e56e4b7583383234444e9.def("cols_permutation", method_pointer_62247c75625e52d19bd375736f22f177, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fe533e30429e56e4b7583383234444e9.def("abs_determinant", method_pointer_b325d95570a750c696473742062c5fc3, "");
    class_fe533e30429e56e4b7583383234444e9.def("log_abs_determinant", method_pointer_101e7e5001065d20bcc2f4cbe3adb79f, "");
    class_fe533e30429e56e4b7583383234444e9.def("rank", method_pointer_ae6a36fc83725600be2693d512568d32, "");
    class_fe533e30429e56e4b7583383234444e9.def("dimension_of_kernel", method_pointer_e87cec62c55459feb76c97073002dc2e, "");
    class_fe533e30429e56e4b7583383234444e9.def("is_injective", method_pointer_54f607bbb7105439a7e08c7ff0ab6f16, "");
    class_fe533e30429e56e4b7583383234444e9.def("is_surjective", method_pointer_82bad4fb229f590da4a6608c25192399, "");
    class_fe533e30429e56e4b7583383234444e9.def("is_invertible", method_pointer_ce9322fa14e95fcebd2bb27adcf16a84, "");
    class_fe533e30429e56e4b7583383234444e9.def("rows", method_pointer_2f3adc390e775e16ab9563d295ae913f, "");
    class_fe533e30429e56e4b7583383234444e9.def("cols", method_pointer_10d14263410a5f2aa4e7831ee076fce0, "");
    class_fe533e30429e56e4b7583383234444e9.def("h_coeffs", method_pointer_61a702b71b2e516488b22356b0823f7d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fe533e30429e56e4b7583383234444e9.def("set_threshold", method_pointer_7e3294d849eb5dd0b0c801e5eb05dd5f, boost::python::return_internal_reference<>(), "");
    class_fe533e30429e56e4b7583383234444e9.def("set_threshold", autowig::method_decorator_7e3294d849eb5dd0b0c801e5eb05dd5f);
    class_fe533e30429e56e4b7583383234444e9.def("set_threshold", method_pointer_a3bea88b4dfa5be58e7a9c1d33d9b4e0, boost::python::return_internal_reference<>(), "");
    class_fe533e30429e56e4b7583383234444e9.def("set_threshold", autowig::method_decorator_a3bea88b4dfa5be58e7a9c1d33d9b4e0);
    class_fe533e30429e56e4b7583383234444e9.def("threshold", method_pointer_e99e90b5be1050e8ab50a632bc166022, "");
    class_fe533e30429e56e4b7583383234444e9.def("nonzero_pivots", method_pointer_77663290cef15de59e73e984cd160a6c, "");
    class_fe533e30429e56e4b7583383234444e9.def("max_pivot", method_pointer_26675be509e25a6eaf52b0a3c2ae320b, "");
    class_fe533e30429e56e4b7583383234444e9.def("info", method_pointer_a61fe41291a55d89bdaa496b0a9f87c6, "");

}