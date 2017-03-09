#include "_linalg.h"



namespace autowig
{

    void method_decorator_81d91164d6115360a1b4c017fc04048a(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_2549b76707b5573394ab93d0646ab2ff(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile * get_pointer<class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile >(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2612ff275aa950bc811dcd5b25a1c4cc()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::MatrixType const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_a2ce72d45e3e5a6982a2bbf4c4218719)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::matrixQR;
    ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::MatrixType const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2737ef525db15399b4ba7c53b9c13d5b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::matrixR;
    ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::PermutationType const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_75f5e5fcbf9252e8945bd9fca464b49c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::colsPermutation;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_1f87de9006745179b71ad3ea6f65c1b2)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::absDeterminant;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_d8b6b9e061ea5b6985068f40fc61132b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::logAbsDeterminant;
    ::Eigen::Index  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_117f833092b65bbab47128cddd529923)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rank;
    ::Eigen::Index  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_92abffc5ec055e98b3b0d487986e9f27)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_8f6d5112e01d5be1a8f2db38d476ad76)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_9c2f83b7311d515faccc95f8e3e0a4ae)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_e99dd09a2b34567e98784b2f38d83749)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isInvertible;
    ::Eigen::Index  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_72d029d768d75097a7359f8216b545be)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rows;
    ::Eigen::Index  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_5d57a53a2c7350d486fd414e5c6405fa)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::cols;
    ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::HCoeffsType const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_e8f759350ac2575894cf9a773e9590d5)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_81d91164d6115360a1b4c017fc04048a)(::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2549b76707b5573394ab93d0646ab2ff)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setThreshold;
    ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_b282b4387de957a48f49f51cd82524c7)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::threshold;
    ::Eigen::Index  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_b93f6542f94457898d61cbcfea57e232)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::nonzeroPivots;
    ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_8db625acdb9953979a31ab19e066846a)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_714d23d02e6c58a8b7f66bf423e8eb1c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::Held< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type > class_2612ff275aa950bc811dcd5b25a1c4cc("_ColPivHouseholderQR_2612ff275aa950bc811dcd5b25a1c4cc", "", boost::python::no_init);
    class_2612ff275aa950bc811dcd5b25a1c4cc.def(boost::python::init<  >(""));
    class_2612ff275aa950bc811dcd5b25a1c4cc.def(boost::python::init< ::Eigen::Index , ::Eigen::Index  >(""));
    class_2612ff275aa950bc811dcd5b25a1c4cc.def(boost::python::init< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & >(""));
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("matrix_qr", method_pointer_a2ce72d45e3e5a6982a2bbf4c4218719, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("matrix_r", method_pointer_2737ef525db15399b4ba7c53b9c13d5b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("cols_permutation", method_pointer_75f5e5fcbf9252e8945bd9fca464b49c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("abs_determinant", method_pointer_1f87de9006745179b71ad3ea6f65c1b2, "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("log_abs_determinant", method_pointer_d8b6b9e061ea5b6985068f40fc61132b, "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("rank", method_pointer_117f833092b65bbab47128cddd529923, "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("dimension_of_kernel", method_pointer_92abffc5ec055e98b3b0d487986e9f27, "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("is_injective", method_pointer_8f6d5112e01d5be1a8f2db38d476ad76, "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("is_surjective", method_pointer_9c2f83b7311d515faccc95f8e3e0a4ae, "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("is_invertible", method_pointer_e99dd09a2b34567e98784b2f38d83749, "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("rows", method_pointer_72d029d768d75097a7359f8216b545be, "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("cols", method_pointer_5d57a53a2c7350d486fd414e5c6405fa, "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("h_coeffs", method_pointer_e8f759350ac2575894cf9a773e9590d5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("set_threshold", method_pointer_81d91164d6115360a1b4c017fc04048a, boost::python::return_internal_reference<>(), "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("set_threshold", autowig::method_decorator_81d91164d6115360a1b4c017fc04048a);
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("set_threshold", method_pointer_2549b76707b5573394ab93d0646ab2ff, boost::python::return_internal_reference<>(), "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("set_threshold", autowig::method_decorator_2549b76707b5573394ab93d0646ab2ff);
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("threshold", method_pointer_b282b4387de957a48f49f51cd82524c7, "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("nonzero_pivots", method_pointer_b93f6542f94457898d61cbcfea57e232, "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("max_pivot", method_pointer_8db625acdb9953979a31ab19e066846a, "");
    class_2612ff275aa950bc811dcd5b25a1c4cc.def("info", method_pointer_714d23d02e6c58a8b7f66bf423e8eb1c, "");

}