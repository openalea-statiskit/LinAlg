#include "_ieigen.h"


namespace autowig
{
    void method_decorator_cf3f930e13d75ca4b70866c54de7e1be(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, double  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_aac3647fb606523481c4448483d294c0(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_86a99cc167e95ec0a42d71f1ac58befe()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_b700015d3fff5960b6fb1f5612809665)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::matrixQR;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_009fa5d147875e43b3dbfc9cc9fafeab)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::matrixR;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_7eb3c0284b805488995e4ab290a8e5e1)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::colsPermutation;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_b5eac5f82e915ba9b63671ec839cb917)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::absDeterminant;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_0a4e937eb05a5305b5da29e2159892f3)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_c24ffc818305596486bc32bd8fd6f978)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_bc57674de85752fca44fa58c54ccf052)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_93485a14b95d5762be048682ddbf7aad)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_4285e4c6b40553f1ba2944097f102f67)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_aae89998c74b5608bc9d595ed4ec8362)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_73121c59689a50ed8b7ee995d96d65fa)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_3a3fc9850ed85b2d8e0736a8c0ef1e3d)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::cols;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_dad5c9e00a3653b4a37fa50398b242f5)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_cf3f930e13d75ca4b70866c54de7e1be)(double  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_aac3647fb606523481c4448483d294c0)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::setThreshold;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_a025a159a328526ba92538055bc13f53)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_a40bccb2966f5a4db2901abfa00506a6)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::nonzeroPivots;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_4e96deda035051659d092858580028b1)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_95613cab964f59849dde953a0846c481)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > class_86a99cc167e95ec0a42d71f1ac58befe("_ColPivHouseholderQR_86a99cc167e95ec0a42d71f1ac58befe", "", boost::python::no_init);
    class_86a99cc167e95ec0a42d71f1ac58befe.def("matrix_qr", method_pointer_b700015d3fff5960b6fb1f5612809665, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("matrix_r", method_pointer_009fa5d147875e43b3dbfc9cc9fafeab, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("cols_permutation", method_pointer_7eb3c0284b805488995e4ab290a8e5e1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("abs_determinant", method_pointer_b5eac5f82e915ba9b63671ec839cb917, "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("log_abs_determinant", method_pointer_0a4e937eb05a5305b5da29e2159892f3, "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("rank", method_pointer_c24ffc818305596486bc32bd8fd6f978, "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("dimension_of_kernel", method_pointer_bc57674de85752fca44fa58c54ccf052, "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("is_injective", method_pointer_93485a14b95d5762be048682ddbf7aad, "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("is_surjective", method_pointer_4285e4c6b40553f1ba2944097f102f67, "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("is_invertible", method_pointer_aae89998c74b5608bc9d595ed4ec8362, "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("rows", method_pointer_73121c59689a50ed8b7ee995d96d65fa, "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("cols", method_pointer_3a3fc9850ed85b2d8e0736a8c0ef1e3d, "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("h_coeffs", method_pointer_dad5c9e00a3653b4a37fa50398b242f5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("set_threshold", method_pointer_cf3f930e13d75ca4b70866c54de7e1be, boost::python::return_internal_reference<>(), "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("set_threshold", autowig::method_decorator_cf3f930e13d75ca4b70866c54de7e1be);
    class_86a99cc167e95ec0a42d71f1ac58befe.def("set_threshold", method_pointer_aac3647fb606523481c4448483d294c0, boost::python::return_internal_reference<>(), "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("set_threshold", autowig::method_decorator_aac3647fb606523481c4448483d294c0);
    class_86a99cc167e95ec0a42d71f1ac58befe.def("threshold", method_pointer_a025a159a328526ba92538055bc13f53, "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("nonzero_pivots", method_pointer_a40bccb2966f5a4db2901abfa00506a6, "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("max_pivot", method_pointer_4e96deda035051659d092858580028b1, "");
    class_86a99cc167e95ec0a42d71f1ac58befe.def("info", method_pointer_95613cab964f59849dde953a0846c481, "");

}