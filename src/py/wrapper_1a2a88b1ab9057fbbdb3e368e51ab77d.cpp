#include "_linalg.h"


namespace autowig
{
    void method_decorator_62353c8512025c09a0d54a926ce8a092(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_3e536eb4aaff529db962b38d21098547(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_1a2a88b1ab9057fbbdb3e368e51ab77d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::MatrixType const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f72e05b2c1b65993b8aecd4600bb8cc4)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::matrixQR;
    ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::PermutationType const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_3613c88d06f55ddeb56dbc656b9f8712)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::colsPermutation;
    ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::IntDiagSizeVectorType const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_6c07bedcf4da50e483a993cf4d4eb75f)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rowsTranspositions;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_306539b941e452b992163682421bb340)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::absDeterminant;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_616ede2107dc5489a9435594f22a2915)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::logAbsDeterminant;
    ::Eigen::Index  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2040c23afb2f53d9813df25ade80afce)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rank;
    ::Eigen::Index  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_bb6a9e8d72395f66989dac63ab72d72c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_67aed84c5bb15ed983c885acfede5420)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_5f292b95b96e533bbbee79acc428aa2e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_b0059eb4e9165e898cd0666ef77b3695)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isInvertible;
    ::Eigen::Index  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_e82be33999d75be9b3726c781f383377)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rows;
    ::Eigen::Index  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_339be91280185321a0618400755addf1)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::cols;
    ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::HCoeffsType const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_ebb5c93cc79452ba857e6693cb36ac06)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_62353c8512025c09a0d54a926ce8a092)(::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_3e536eb4aaff529db962b38d21098547)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setThreshold;
    ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_51d7a912bfe655109eb2dce7edc4bd9f)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::threshold;
    ::Eigen::Index  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_dd6ef9388d0e55e4aca432adacd290b3)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::nonzeroPivots;
    ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_d90943c047c353c38011049aa88a0eba)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > class_1a2a88b1ab9057fbbdb3e368e51ab77d("_FullPivHouseholderQR_1a2a88b1ab9057fbbdb3e368e51ab77d", "", boost::python::no_init);
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("matrix_qr", method_pointer_f72e05b2c1b65993b8aecd4600bb8cc4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("cols_permutation", method_pointer_3613c88d06f55ddeb56dbc656b9f8712, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("rows_transpositions", method_pointer_6c07bedcf4da50e483a993cf4d4eb75f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("abs_determinant", method_pointer_306539b941e452b992163682421bb340, "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("log_abs_determinant", method_pointer_616ede2107dc5489a9435594f22a2915, "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("rank", method_pointer_2040c23afb2f53d9813df25ade80afce, "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("dimension_of_kernel", method_pointer_bb6a9e8d72395f66989dac63ab72d72c, "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("is_injective", method_pointer_67aed84c5bb15ed983c885acfede5420, "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("is_surjective", method_pointer_5f292b95b96e533bbbee79acc428aa2e, "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("is_invertible", method_pointer_b0059eb4e9165e898cd0666ef77b3695, "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("rows", method_pointer_e82be33999d75be9b3726c781f383377, "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("cols", method_pointer_339be91280185321a0618400755addf1, "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("h_coeffs", method_pointer_ebb5c93cc79452ba857e6693cb36ac06, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("set_threshold", method_pointer_62353c8512025c09a0d54a926ce8a092, boost::python::return_internal_reference<>(), "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("set_threshold", autowig::method_decorator_62353c8512025c09a0d54a926ce8a092);
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("set_threshold", method_pointer_3e536eb4aaff529db962b38d21098547, boost::python::return_internal_reference<>(), "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("set_threshold", autowig::method_decorator_3e536eb4aaff529db962b38d21098547);
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("threshold", method_pointer_51d7a912bfe655109eb2dce7edc4bd9f, "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("nonzero_pivots", method_pointer_dd6ef9388d0e55e4aca432adacd290b3, "");
    class_1a2a88b1ab9057fbbdb3e368e51ab77d.def("max_pivot", method_pointer_d90943c047c353c38011049aa88a0eba, "");

}