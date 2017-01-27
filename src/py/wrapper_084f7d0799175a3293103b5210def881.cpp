#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c2d5842d2b155f7897b7802e7327b141(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, double  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_dd775ef026285ee6b8c76b356d0e35fa(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_084f7d0799175a3293103b5210def881()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_602f0013cf325f8c849d58b61f6d01c8)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::matrixQR;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_09916728f0e651879b903e476316d937)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, 2, 1, 1, 2 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_200635b140d95a1db4e01708747a147c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::rowsTranspositions;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_5742249c3c725f439ef2fa0c95a17878)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::absDeterminant;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_8b2df775abe35fd29dbb60597c4efa09)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_03afcd6312725e9b91e5be654de70194)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_958f57e9cd215e64a764eac1db459668)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_669e570f4a0957f28eb25f564094a6c9)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_fbbb26aaf50452be8b67d7562fc36ef1)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_a722441ac2005d0eb4f5def4a5f54c6e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_80b5a362ff4b5bc8a6aedf8e067c27e7)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_5c7f175d37cf5f4e801dd1b2f659f2a6)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::cols;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_7995c3ddeedf54e2b109b2f4cab8254c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_c2d5842d2b155f7897b7802e7327b141)(double  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_dd775ef026285ee6b8c76b356d0e35fa)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setThreshold;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_9af58b88eac85a58b5d100b25eb0531a)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_68e112a161e75ed4989298fdd570559d)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::nonzeroPivots;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_721034f1212d585ba563046c74e1092c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > > class_084f7d0799175a3293103b5210def881("_FullPivHouseholderQR_084f7d0799175a3293103b5210def881", "", boost::python::no_init);
    class_084f7d0799175a3293103b5210def881.def("matrix_qr", method_pointer_602f0013cf325f8c849d58b61f6d01c8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_084f7d0799175a3293103b5210def881.def("cols_permutation", method_pointer_09916728f0e651879b903e476316d937, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_084f7d0799175a3293103b5210def881.def("rows_transpositions", method_pointer_200635b140d95a1db4e01708747a147c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_084f7d0799175a3293103b5210def881.def("abs_determinant", method_pointer_5742249c3c725f439ef2fa0c95a17878, "");
    class_084f7d0799175a3293103b5210def881.def("log_abs_determinant", method_pointer_8b2df775abe35fd29dbb60597c4efa09, "");
    class_084f7d0799175a3293103b5210def881.def("rank", method_pointer_03afcd6312725e9b91e5be654de70194, "");
    class_084f7d0799175a3293103b5210def881.def("dimension_of_kernel", method_pointer_958f57e9cd215e64a764eac1db459668, "");
    class_084f7d0799175a3293103b5210def881.def("is_injective", method_pointer_669e570f4a0957f28eb25f564094a6c9, "");
    class_084f7d0799175a3293103b5210def881.def("is_surjective", method_pointer_fbbb26aaf50452be8b67d7562fc36ef1, "");
    class_084f7d0799175a3293103b5210def881.def("is_invertible", method_pointer_a722441ac2005d0eb4f5def4a5f54c6e, "");
    class_084f7d0799175a3293103b5210def881.def("rows", method_pointer_80b5a362ff4b5bc8a6aedf8e067c27e7, "");
    class_084f7d0799175a3293103b5210def881.def("cols", method_pointer_5c7f175d37cf5f4e801dd1b2f659f2a6, "");
    class_084f7d0799175a3293103b5210def881.def("h_coeffs", method_pointer_7995c3ddeedf54e2b109b2f4cab8254c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_084f7d0799175a3293103b5210def881.def("set_threshold", method_pointer_c2d5842d2b155f7897b7802e7327b141, boost::python::return_internal_reference<>(), "");
    class_084f7d0799175a3293103b5210def881.def("set_threshold", autowig::method_decorator_c2d5842d2b155f7897b7802e7327b141);
    class_084f7d0799175a3293103b5210def881.def("set_threshold", method_pointer_dd775ef026285ee6b8c76b356d0e35fa, boost::python::return_internal_reference<>(), "");
    class_084f7d0799175a3293103b5210def881.def("set_threshold", autowig::method_decorator_dd775ef026285ee6b8c76b356d0e35fa);
    class_084f7d0799175a3293103b5210def881.def("threshold", method_pointer_9af58b88eac85a58b5d100b25eb0531a, "");
    class_084f7d0799175a3293103b5210def881.def("nonzero_pivots", method_pointer_68e112a161e75ed4989298fdd570559d, "");
    class_084f7d0799175a3293103b5210def881.def("max_pivot", method_pointer_721034f1212d585ba563046c74e1092c, "");

}