#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f71f3a3e55b95f3e97cba9a160d7ee90(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, float  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_787a9192cb515f179410beb1fa732e09(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_8747bacb730c559ca9a3f1319f6bfcc9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_67a90c76cf1a5435b4559ead762dd29e)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::matrixQR;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_cf6f422eb8285b5ca5476e02ec62e0c1)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::matrixR;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_85a8da697fe057a7b99d69fd2f4a1100)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::colsPermutation;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_29bbca5f865454d99d161ba6b5336de3)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::absDeterminant;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_1893026a2b0b540b9097c707282085b6)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_8fa83da809c254f999ca9b7d8435d00c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_124277e9a9055d23a2c7a2ab7b885b36)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_8f333e6d5d455ccdb3f847385ab64b97)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_e29f275451485e51b2e0894e4e968b4e)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_2b97e0bd0d775322a0ba7d7393953118)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_df2f851e5be05143a40d66e8a1dcfc05)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_61a582c83520541d885319ff3653d65d)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::cols;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_40760f4841f05b7f9bea30adbff81374)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_f71f3a3e55b95f3e97cba9a160d7ee90)(float  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_787a9192cb515f179410beb1fa732e09)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setThreshold;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_a7f8c8ba096e53c894d77c0f10ca10bf)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_9f95818de2035f0587b6d7f37122c0ba)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::nonzeroPivots;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_fd84c5f194b753948b5bd26fc34dbea6)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_5c27b668d16f5d389b247674d12dc5a8)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > class_8747bacb730c559ca9a3f1319f6bfcc9("_ColPivHouseholderQR_8747bacb730c559ca9a3f1319f6bfcc9", "", boost::python::no_init);
    class_8747bacb730c559ca9a3f1319f6bfcc9.def(boost::python::init<  >(""));
    class_8747bacb730c559ca9a3f1319f6bfcc9.def(boost::python::init< long int , long int  >(""));
    class_8747bacb730c559ca9a3f1319f6bfcc9.def(boost::python::init< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  const & >(""));
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("matrix_qr", method_pointer_67a90c76cf1a5435b4559ead762dd29e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("matrix_r", method_pointer_cf6f422eb8285b5ca5476e02ec62e0c1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("cols_permutation", method_pointer_85a8da697fe057a7b99d69fd2f4a1100, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("abs_determinant", method_pointer_29bbca5f865454d99d161ba6b5336de3, "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("log_abs_determinant", method_pointer_1893026a2b0b540b9097c707282085b6, "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("rank", method_pointer_8fa83da809c254f999ca9b7d8435d00c, "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("dimension_of_kernel", method_pointer_124277e9a9055d23a2c7a2ab7b885b36, "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("is_injective", method_pointer_8f333e6d5d455ccdb3f847385ab64b97, "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("is_surjective", method_pointer_e29f275451485e51b2e0894e4e968b4e, "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("is_invertible", method_pointer_2b97e0bd0d775322a0ba7d7393953118, "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("rows", method_pointer_df2f851e5be05143a40d66e8a1dcfc05, "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("cols", method_pointer_61a582c83520541d885319ff3653d65d, "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("h_coeffs", method_pointer_40760f4841f05b7f9bea30adbff81374, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("set_threshold", method_pointer_f71f3a3e55b95f3e97cba9a160d7ee90, boost::python::return_internal_reference<>(), "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("set_threshold", autowig::method_decorator_f71f3a3e55b95f3e97cba9a160d7ee90);
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("set_threshold", method_pointer_787a9192cb515f179410beb1fa732e09, boost::python::return_internal_reference<>(), "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("set_threshold", autowig::method_decorator_787a9192cb515f179410beb1fa732e09);
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("threshold", method_pointer_a7f8c8ba096e53c894d77c0f10ca10bf, "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("nonzero_pivots", method_pointer_9f95818de2035f0587b6d7f37122c0ba, "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("max_pivot", method_pointer_fd84c5f194b753948b5bd26fc34dbea6, "");
    class_8747bacb730c559ca9a3f1319f6bfcc9.def("info", method_pointer_5c27b668d16f5d389b247674d12dc5a8, "");

}