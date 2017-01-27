#include "_ieigen.h"


namespace autowig
{
    void method_decorator_cd086c3de168552bb1884d0e832d10dc(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, float  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_7881a9933bee50198752f12984dd21aa(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_decd969e194f5a658cb606ec481b3cfc()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_60b2abce46b0560ab20fb8eb291b9031)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::matrixQR;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_c2d9a33dc5bb5ca1836730972be46763)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, 3, 1, 1, 3 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_fe0b9e863303566d9fe7371247344683)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::rowsTranspositions;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_5f80c5bdbf545771b6c6f09806a9adaa)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::absDeterminant;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_67e2416819bb508ea95e1e0410ee7a2c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_248975f36c685a16af53181d650db93e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_753ba59be5e45c76bfb35ed68170e0ed)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_b39a5885788a53cd8379e1aaf354b3c6)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_950abda4b43c587daa164c3e97035332)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_12b3928ed7db574683bd0baf107525f5)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_76bb8516b95955bd95b44cf04564acca)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_460de06196975c3ba884300a1e3303bd)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_bcde6fc366ac5dcd9be6b3da07239468)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_cd086c3de168552bb1884d0e832d10dc)(float  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_7881a9933bee50198752f12984dd21aa)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setThreshold;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_eb3739278a865017830d0f4b24d89282)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_880d861ab10e5db4a9c8a5a5c561a739)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::nonzeroPivots;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_df016e3936e557389ac301048b00f336)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > class_decd969e194f5a658cb606ec481b3cfc("_FullPivHouseholderQR_decd969e194f5a658cb606ec481b3cfc", "", boost::python::no_init);
    class_decd969e194f5a658cb606ec481b3cfc.def("matrix_qr", method_pointer_60b2abce46b0560ab20fb8eb291b9031, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_decd969e194f5a658cb606ec481b3cfc.def("cols_permutation", method_pointer_c2d9a33dc5bb5ca1836730972be46763, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_decd969e194f5a658cb606ec481b3cfc.def("rows_transpositions", method_pointer_fe0b9e863303566d9fe7371247344683, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_decd969e194f5a658cb606ec481b3cfc.def("abs_determinant", method_pointer_5f80c5bdbf545771b6c6f09806a9adaa, "");
    class_decd969e194f5a658cb606ec481b3cfc.def("log_abs_determinant", method_pointer_67e2416819bb508ea95e1e0410ee7a2c, "");
    class_decd969e194f5a658cb606ec481b3cfc.def("rank", method_pointer_248975f36c685a16af53181d650db93e, "");
    class_decd969e194f5a658cb606ec481b3cfc.def("dimension_of_kernel", method_pointer_753ba59be5e45c76bfb35ed68170e0ed, "");
    class_decd969e194f5a658cb606ec481b3cfc.def("is_injective", method_pointer_b39a5885788a53cd8379e1aaf354b3c6, "");
    class_decd969e194f5a658cb606ec481b3cfc.def("is_surjective", method_pointer_950abda4b43c587daa164c3e97035332, "");
    class_decd969e194f5a658cb606ec481b3cfc.def("is_invertible", method_pointer_12b3928ed7db574683bd0baf107525f5, "");
    class_decd969e194f5a658cb606ec481b3cfc.def("rows", method_pointer_76bb8516b95955bd95b44cf04564acca, "");
    class_decd969e194f5a658cb606ec481b3cfc.def("cols", method_pointer_460de06196975c3ba884300a1e3303bd, "");
    class_decd969e194f5a658cb606ec481b3cfc.def("h_coeffs", method_pointer_bcde6fc366ac5dcd9be6b3da07239468, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_decd969e194f5a658cb606ec481b3cfc.def("set_threshold", method_pointer_cd086c3de168552bb1884d0e832d10dc, boost::python::return_internal_reference<>(), "");
    class_decd969e194f5a658cb606ec481b3cfc.def("set_threshold", autowig::method_decorator_cd086c3de168552bb1884d0e832d10dc);
    class_decd969e194f5a658cb606ec481b3cfc.def("set_threshold", method_pointer_7881a9933bee50198752f12984dd21aa, boost::python::return_internal_reference<>(), "");
    class_decd969e194f5a658cb606ec481b3cfc.def("set_threshold", autowig::method_decorator_7881a9933bee50198752f12984dd21aa);
    class_decd969e194f5a658cb606ec481b3cfc.def("threshold", method_pointer_eb3739278a865017830d0f4b24d89282, "");
    class_decd969e194f5a658cb606ec481b3cfc.def("nonzero_pivots", method_pointer_880d861ab10e5db4a9c8a5a5c561a739, "");
    class_decd969e194f5a658cb606ec481b3cfc.def("max_pivot", method_pointer_df016e3936e557389ac301048b00f336, "");

}