#include "_linalg.h"



namespace autowig
{

    void method_decorator_4eeb1a45dde858c08e876902e05cc8ac(class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const & param_in_0, const class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out) { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_ee8ad3adc67256ddadde3db5475dfdb1(class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, enum ::Eigen::Default_t  param_in_0, const class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out) { instance.setThreshold(param_in_0) = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile * get_pointer<class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile >(class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d7e4b289ec0c5e2c86f6756f76073d8b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::MatrixType const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_9b6c9bc34ed7581cbbc6e12ca5a40775)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::matrixLU;
    ::Eigen::Index  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f2008827c6d05579ba85b97c0e8c971f)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::nonzeroPivots;
    ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_39ac9046dffe5f69b26712ce3e041cf7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::maxPivot;
    ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::PermutationPType const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_ebd31bfe6eae589ba7467077007ec806)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::permutationP;
    ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::PermutationQType const & (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2623b31a8b485365a076556eb3db0f0e)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::permutationQ;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_4eeb1a45dde858c08e876902e05cc8ac)(::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_ee8ad3adc67256ddadde3db5475dfdb1)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setThreshold;
    ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_d5533978374c56d0ab6636e6b571e5b1)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::threshold;
    ::Eigen::Index  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_ba764ccf891c5930bbcd736b1452b152)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rank;
    ::Eigen::Index  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_a4ddb27aa1125fca8bf843f9bea9557d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_24b05a74183b567ba6b6a7091dd9bfe7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_573e49aa04015c20ab4da8d5f7c32306)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_666a66fdd39e53579d0abbb527d90228)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isInvertible;
    ::Eigen::Index  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_bfa8f4283a5e5e0c8f7b09615995177b)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rows;
    ::Eigen::Index  (::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_dca806b9b7225afdb176d2d96ced1203)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::Held< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > > class_d7e4b289ec0c5e2c86f6756f76073d8b("_FullPivLU_d7e4b289ec0c5e2c86f6756f76073d8b", "", boost::python::no_init);
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def(boost::python::init<  >(""));
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def(boost::python::init< ::Eigen::Index , ::Eigen::Index  >(""));
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def(boost::python::init< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & >(""));
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("matrix_lu", method_pointer_9b6c9bc34ed7581cbbc6e12ca5a40775, boost::python::return_value_policy< boost::python::return_by_value >(), ":Returns:\n    the LU decomposition matrix: the upper-triangular part is U, the\n    unit-lower-triangular part is L (at least for square matrices; in the\n    non-square case, special care is needed, see the documentation of class\n    FullPivLU).\n\n:Return Type:\n    :cpp:any:`::Eigen::Matrix<` double, -1, -1, 0, -1, -1 >\n\n");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("nonzero_pivots", method_pointer_f2008827c6d05579ba85b97c0e8c971f, ":Returns:\n    the number of nonzero pivots in the LU decomposition. Here nonzero is\n    meant in the exact sense, not in a fuzzy sense. So that notion isn't\n    really intrinsically interesting, but it is still useful when\n    implementing algorithms.\n\n:Return Type:\n    :cpp:any:`long` int\n\n");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("max_pivot", method_pointer_39ac9046dffe5f69b26712ce3e041cf7, ":Returns:\n    the absolute value of the biggest pivot, i.e. the biggest diagonal\n    coefficient of U.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("permutation_p", method_pointer_ebd31bfe6eae589ba7467077007ec806, boost::python::return_value_policy< boost::python::return_by_value >(), ":Returns:\n    the permutation matrix P\n\n:Return Type:\n    :cpp:any:`::Eigen::PermutationMatrix<` -1, -1, int >\n\n");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("permutation_q", method_pointer_2623b31a8b485365a076556eb3db0f0e, boost::python::return_value_policy< boost::python::return_by_value >(), ":Returns:\n    the permutation matrix Q\n\n:Return Type:\n    :cpp:any:`::Eigen::PermutationMatrix<` -1, -1, int >\n\n");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("set_threshold", method_pointer_4eeb1a45dde858c08e876902e05cc8ac, boost::python::return_internal_reference<>(), ":Parameter:\n    `threshold` (:cpp:any:`double`) - The new value to use as the threshold.\n                                      \n                                      A pivot will be considered nonzero if its absolute value is strictly\n                                      greater than $ :raw-latex:`\\vert `pivot\n                                      :raw-latex:`\\vert `:raw-latex:`\\leqslant `threshold\n                                      :raw-latex:`\\times `:raw-latex:`\\vert `maxpivot :raw-latex:`\\vert `$\n                                      where maxpivot is the biggest pivot.\n                                      \n                                      If you want to come back to the default behavior, call\n                                      setThreshold(Default\\_t)\n\n:Return Type:\n    :cpp:any:`::Eigen::FullPivLU<` class ::Eigen::Matrix<\n    double, -1, -1, 0, -1, -1 > >\n\n");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("set_threshold", autowig::method_decorator_4eeb1a45dde858c08e876902e05cc8ac);
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("set_threshold", method_pointer_ee8ad3adc67256ddadde3db5475dfdb1, boost::python::return_internal_reference<>(), ":Parameter:\n    `` (:cpp:enumerator:`::Eigen::Default_t`) - Undocumented\n\n:Return Type:\n    :cpp:any:`::Eigen::FullPivLU<` class ::Eigen::Matrix<\n    double, -1, -1, 0, -1, -1 > >\n\n");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("set_threshold", autowig::method_decorator_ee8ad3adc67256ddadde3db5475dfdb1);
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("threshold", method_pointer_d5533978374c56d0ab6636e6b571e5b1, ":Return Type:\n    :cpp:any:`double`\n\n");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("rank", method_pointer_ba764ccf891c5930bbcd736b1452b152, ":Returns:\n    the rank of the matrix of which \\*this is the LU decomposition.\n\n:Return Type:\n    :cpp:any:`long` int\n\n.. note::\n\n    This method has to determine which pivots should be considered nonzero.\n    For that, it uses the threshold value that you can control by calling\n    setThreshold(const RealScalar&).\n\n");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("dimension_of_kernel", method_pointer_a4ddb27aa1125fca8bf843f9bea9557d, ":Returns:\n    the dimension of the kernel of the matrix of which \\*this is the LU\n    decomposition.\n\n:Return Type:\n    :cpp:any:`long` int\n\n.. note::\n\n    This method has to determine which pivots should be considered nonzero.\n    For that, it uses the threshold value that you can control by calling\n    setThreshold(const RealScalar&).\n\n");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("is_injective", method_pointer_24b05a74183b567ba6b6a7091dd9bfe7, ":Returns:\n    true if the matrix of which \\*this is the LU decomposition represents an\n    injective linear map, i.e. has trivial kernel; false otherwise.\n\n:Return Type:\n    :cpp:any:`bool`\n\n.. note::\n\n    This method has to determine which pivots should be considered nonzero.\n    For that, it uses the threshold value that you can control by calling\n    setThreshold(const RealScalar&).\n\n");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("is_surjective", method_pointer_573e49aa04015c20ab4da8d5f7c32306, ":Returns:\n    true if the matrix of which \\*this is the LU decomposition represents a\n    surjective linear map; false otherwise.\n\n:Return Type:\n    :cpp:any:`bool`\n\n.. note::\n\n    This method has to determine which pivots should be considered nonzero.\n    For that, it uses the threshold value that you can control by calling\n    setThreshold(const RealScalar&).\n\n");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("is_invertible", method_pointer_666a66fdd39e53579d0abbb527d90228, ":Returns:\n    true if the matrix of which \\*this is the LU decomposition is\n    invertible.\n\n:Return Type:\n    :cpp:any:`bool`\n\n.. note::\n\n    This method has to determine which pivots should be considered nonzero.\n    For that, it uses the threshold value that you can control by calling\n    setThreshold(const RealScalar&).\n\n");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("rows", method_pointer_bfa8f4283a5e5e0c8f7b09615995177b, "");
    class_d7e4b289ec0c5e2c86f6756f76073d8b.def("cols", method_pointer_dca806b9b7225afdb176d2d96ced1203, "");

    if(autowig::Held< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, autowig::Held< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::Type >();
    }

}