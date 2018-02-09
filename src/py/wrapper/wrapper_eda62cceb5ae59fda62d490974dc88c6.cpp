#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile * get_pointer<class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile >(class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_eda62cceb5ae59fda62d490974dc88c6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::MatrixType const & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_940cc526321f55aca072a70d45536f2d)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::matrixLU;
    ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::PermutationType const & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_c51efb5221ab58a997d4ab1d9e7473d1)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::permutationP;
    ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_92627bcb7a3e5a91852e2bc895bd96a7)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rcond;
    class ::Eigen::Inverse< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2b72cb91d5fd5ebe9f21663df52252f8)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::inverse;
    ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_9f2338ae478e56a2915cdb00108c4a87)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::determinant;
    ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::MatrixType  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_ff35f5e0f94b58f3bf94657b02544832)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::reconstructedMatrix;
    ::Eigen::Index  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_35a5a003217552a4b8f709d1c307056e)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rows;
    ::Eigen::Index  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_00e65e636a385e63a97f21d24fe73ada)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::cols;
    class ::Eigen::Solve< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const > > const (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_20316d384eec5551957b74ef4abb45a6)(class ::Eigen::MatrixBase< class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const > > const &) const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::solve;
    void  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_a7de7ad6a44d54b5be69559bbf5e47e6)(class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &) const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::_solve_impl;
    class ::Eigen::Solve< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const, -1, 1, false > > const (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_e699ad0357ca5278a34c045deb4028c9)(class ::Eigen::MatrixBase< class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const, -1, 1, false > > const &) const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::solve;
    void  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_4e3f309c655359d3887a0fb530af2862)(class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const, -1, 1, false > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &) const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::_solve_impl;
    class ::Eigen::Solve< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_7476ebf57efe558e8828775e0113c5b0)(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const &) const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::solve;
    void  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_ec6a647cfce15acfad2a78f42f6f3a24)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &) const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::_solve_impl;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::Held< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > > class_eda62cceb5ae59fda62d490974dc88c6("_PartialPivLU_eda62cceb5ae59fda62d490974dc88c6", "", boost::python::no_init);
    class_eda62cceb5ae59fda62d490974dc88c6.def(boost::python::init<  >(""));
    class_eda62cceb5ae59fda62d490974dc88c6.def(boost::python::init< ::Eigen::Index  >(""));
    class_eda62cceb5ae59fda62d490974dc88c6.def(boost::python::init< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & >(""));
    class_eda62cceb5ae59fda62d490974dc88c6.def("matrix_lu", method_pointer_940cc526321f55aca072a70d45536f2d, boost::python::return_value_policy< boost::python::return_by_value >(), ":Returns:\n    the LU decomposition matrix: the upper-triangular part is U, the\n    unit-lower-triangular part is L (at least for square matrices; in the\n    non-square case, special care is needed, see the documentation of class\n    FullPivLU).\n\n:Return Type:\n    :cpp:any:`::Eigen::Matrix<` double, -1, -1, 0, -1, -1 >\n\n");
    class_eda62cceb5ae59fda62d490974dc88c6.def("permutation_p", method_pointer_c51efb5221ab58a997d4ab1d9e7473d1, boost::python::return_value_policy< boost::python::return_by_value >(), ":Returns:\n    the permutation matrix P.\n\n:Return Type:\n    :cpp:any:`::Eigen::PermutationMatrix<` -1, -1, int >\n\n");
    class_eda62cceb5ae59fda62d490974dc88c6.def("rcond", method_pointer_92627bcb7a3e5a91852e2bc895bd96a7, ":Returns:\n    an estimate of the reciprocal condition number of the matrix of which\n    :raw-latex:`\\c *t`his is the LU decomposition.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_eda62cceb5ae59fda62d490974dc88c6.def("inverse", method_pointer_2b72cb91d5fd5ebe9f21663df52252f8, ":Returns:\n    the inverse of the matrix of which \\*this is the LU decomposition.\n\n:Return Type:\n    :cpp:any:`::Eigen::Inverse<` class ::Eigen::PartialPivLU<\n    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >\n\n.. warning::\n\n    The matrix being decomposed here is assumed to be invertible. If you\n    need to check for invertibility, use class FullPivLU instead.\n\n");
    class_eda62cceb5ae59fda62d490974dc88c6.def("determinant", method_pointer_9f2338ae478e56a2915cdb00108c4a87, ":Returns:\n    the determinant of the matrix of which this is the LU decomposition. It\n    has only linear complexity (that is, O(n) where n is the dimension of\n    the square matrix) as the LU decomposition has already been computed.\n\n:Return Type:\n    :cpp:any:`double`\n\n.. note::\n\n    For fixed-size matrices of size up to 4, MatrixBase::determinant()\n    offers optimized paths.\n\n.. warning::\n\n    a determinant can be very big or small, so for matrices of large enough\n    dimension, there is a risk of overflow/underflow.\n\n");
    class_eda62cceb5ae59fda62d490974dc88c6.def("reconstructed_matrix", method_pointer_ff35f5e0f94b58f3bf94657b02544832, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("rows", method_pointer_35a5a003217552a4b8f709d1c307056e, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("cols", method_pointer_00e65e636a385e63a97f21d24fe73ada, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("solve", method_pointer_20316d384eec5551957b74ef4abb45a6, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("solve_impl", method_pointer_a7de7ad6a44d54b5be69559bbf5e47e6, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("solve", method_pointer_e699ad0357ca5278a34c045deb4028c9, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("solve_impl", method_pointer_4e3f309c655359d3887a0fb530af2862, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("solve", method_pointer_7476ebf57efe558e8828775e0113c5b0, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("solve_impl", method_pointer_ec6a647cfce15acfad2a78f42f6f3a24, "");

    if(autowig::Held< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, autowig::Held< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::Type >();
    }

}