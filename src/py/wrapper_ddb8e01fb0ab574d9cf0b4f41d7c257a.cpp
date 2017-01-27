#include "_ieigen.h"


namespace autowig
{
    void method_decorator_8396a6a4c79a5e07a8edc2ce69e529c2(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_80200c38f0f753ebb9f9fe8b36dacb77(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_17984dd6081e56ab96ade3e7ff8159a6(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_b6feb66abd425cc79780417d4015929d(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_2e076362127a58038de8254d5291d106(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_ddb8e01fb0ab574d9cf0b4f41d7c257a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_1297f7c7862653588b5313015904b798)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::diagonalSize;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_31e3f22039e85f27a80527f616fe9808)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::conjugate;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_759f0f1654ab5e4bb542265ac11a6918)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::real;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_8396a6a4c79a5e07a8edc2ce69e529c2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::real;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_454e958da20259608e1d4dec05cc47e4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_8e8cc4d626675896a82076a720fd18cd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_948cb5a013b350ae941c639b5ef76c6a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_5660cac3681856c7ad044fe59e867b04)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::hypotNorm;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_9efbfff5257f5ac5b80774936e2e536e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::normalized;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_6982cc04608154b1a5fe47947ec12947)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_8c8952cbd82e545a83758f4f031cbd49)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_0a542b7c21eb5ee49a81b9b3257d0f0f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_ad72db7b2a755ea1b94784712eabd30f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::adjointInPlace;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< float >, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const (*method_pointer_22d125aca17c501f9e30153e64285dfc)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::Identity;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< float >, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const (*method_pointer_30778cf6388557b7bf16415d0872a73a)(long int , long int ) = ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::Identity;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_80200c38f0f753ebb9f9fe8b36dacb77)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setIdentity;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_17984dd6081e56ab96ade3e7ff8159a6)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_fa7649a2782b546b87fe50021787f934)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_870db549d3bd59e4b19e957746e436af)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_13acfffc40b552ec97df710118ce3e0f)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_83552ed11f175829aae33af50e5c38af)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_f0cd1b3dc03a5d8f97101ee1b819ca3a)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isUnitary;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_7a7d97f8b7c65c7fa0039ec9994568ab)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::forceAlignedAccess;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_b6feb66abd425cc79780417d4015929d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::forceAlignedAccess;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_a23c090e435e52a094038be0c725420f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_2e076362127a58038de8254d5291d106)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_5059f5734e255d8e935414f77d7d85e9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::matrix;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_079ad792d15d56b9a365a3762ba932f9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::fullPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_d2df4cce843554dfbdd240021cf1d979)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::partialPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_49d28269150d5ce1b1e511565d9b97ee)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::lu;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_8c0ca596f8045479905bc69732ad3204)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::determinant;
    class ::Eigen::LLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_79ad5eadeea653eeb46dc63ead7589f6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::llt;
    class ::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_1c0fcd2658515dc495a9e13bf845835f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::ldlt;
    class ::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_9cc7d16bed7a5a929a632f2c8f9ac146)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::householderQr;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_6466275a6c945ce4911cf1b435577110)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::colPivHouseholderQr;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_40b9b7a913b05416b2703800f8566093)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::fullPivHouseholderQr;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_5365e4ae6aa4544c8238a2cf2ef00c91)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::eigenvalues;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_976d9f3b5bba524d887951b090a0eaa5)(unsigned int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::jacobiSvd;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_a8db39d3a2d752858e33cffe16da3e64)(float  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > class_ddb8e01fb0ab574d9cf0b4f41d7c257a("_MatrixBase_ddb8e01fb0ab574d9cf0b4f41d7c257a", "", boost::python::no_init);
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("diagonal_size", method_pointer_1297f7c7862653588b5313015904b798, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("conjugate", method_pointer_31e3f22039e85f27a80527f616fe9808, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("real", method_pointer_759f0f1654ab5e4bb542265ac11a6918, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("real", method_pointer_8396a6a4c79a5e07a8edc2ce69e529c2, boost::python::return_internal_reference<>(), "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("real", autowig::method_decorator_8396a6a4c79a5e07a8edc2ce69e529c2);
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("squared_norm", method_pointer_454e958da20259608e1d4dec05cc47e4, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("norm", method_pointer_8e8cc4d626675896a82076a720fd18cd, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("blue_norm", method_pointer_948cb5a013b350ae941c639b5ef76c6a, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("hypot_norm", method_pointer_5660cac3681856c7ad044fe59e867b04, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("normalized", method_pointer_9efbfff5257f5ac5b80774936e2e536e, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("stable_normalized", method_pointer_6982cc04608154b1a5fe47947ec12947, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("normalize", method_pointer_8c8952cbd82e545a83758f4f031cbd49, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("stable_normalize", method_pointer_0a542b7c21eb5ee49a81b9b3257d0f0f, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("adjoint_in_place", method_pointer_ad72db7b2a755ea1b94784712eabd30f, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("identity", method_pointer_22d125aca17c501f9e30153e64285dfc, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("identity", method_pointer_30778cf6388557b7bf16415d0872a73a, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("set_identity", method_pointer_80200c38f0f753ebb9f9fe8b36dacb77, boost::python::return_internal_reference<>(), "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("set_identity", autowig::method_decorator_80200c38f0f753ebb9f9fe8b36dacb77);
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("set_identity", method_pointer_17984dd6081e56ab96ade3e7ff8159a6, boost::python::return_internal_reference<>(), "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("set_identity", autowig::method_decorator_17984dd6081e56ab96ade3e7ff8159a6);
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("is_identity", method_pointer_fa7649a2782b546b87fe50021787f934, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("is_diagonal", method_pointer_870db549d3bd59e4b19e957746e436af, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("is_upper_triangular", method_pointer_13acfffc40b552ec97df710118ce3e0f, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("is_lower_triangular", method_pointer_83552ed11f175829aae33af50e5c38af, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("is_unitary", method_pointer_f0cd1b3dc03a5d8f97101ee1b819ca3a, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("force_aligned_access", method_pointer_7a7d97f8b7c65c7fa0039ec9994568ab, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("force_aligned_access", method_pointer_b6feb66abd425cc79780417d4015929d, boost::python::return_internal_reference<>(), "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("force_aligned_access", autowig::method_decorator_b6feb66abd425cc79780417d4015929d);
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("trace", method_pointer_a23c090e435e52a094038be0c725420f, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("matrix", method_pointer_2e076362127a58038de8254d5291d106, boost::python::return_internal_reference<>(), "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("matrix", autowig::method_decorator_2e076362127a58038de8254d5291d106);
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("matrix", method_pointer_5059f5734e255d8e935414f77d7d85e9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("full_piv_lu", method_pointer_079ad792d15d56b9a365a3762ba932f9, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("partial_piv_lu", method_pointer_d2df4cce843554dfbdd240021cf1d979, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("lu", method_pointer_49d28269150d5ce1b1e511565d9b97ee, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("determinant", method_pointer_8c0ca596f8045479905bc69732ad3204, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("llt", method_pointer_79ad5eadeea653eeb46dc63ead7589f6, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("ldlt", method_pointer_1c0fcd2658515dc495a9e13bf845835f, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("householder_qr", method_pointer_9cc7d16bed7a5a929a632f2c8f9ac146, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("col_piv_householder_qr", method_pointer_6466275a6c945ce4911cf1b435577110, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("full_piv_householder_qr", method_pointer_40b9b7a913b05416b2703800f8566093, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("eigenvalues", method_pointer_5365e4ae6aa4544c8238a2cf2ef00c91, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("jacobi_svd", method_pointer_976d9f3b5bba524d887951b090a0eaa5, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.def("make_householder_in_place", method_pointer_a8db39d3a2d752858e33cffe16da3e64, "");
    class_ddb8e01fb0ab574d9cf0b4f41d7c257a.staticmethod("identity");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > >();
    }

}