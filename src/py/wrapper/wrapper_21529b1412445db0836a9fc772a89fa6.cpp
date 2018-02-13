#include "_linalg.h"



namespace autowig
{

    void method_decorator_6d96ecc23b33581982fbf86ccb1ed9b0(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, const ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::NonConstRealReturnType  param_out) { instance.real() = param_out; }
    void method_decorator_428b40980e015b09846df5b49a42ab5c(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setIdentity() = param_out; }
    void method_decorator_d13072340907536bb86839eea7fea3fd(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_eb67bd3e7d3b57b1853dba30a61ce3b5(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.forceAlignedAccess() = param_out; }
    void method_decorator_154d38a6859f53b4aec09a8e0f2bc596(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, const class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out) { instance.matrix() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile * get_pointer<class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile >(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_21529b1412445db0836a9fc772a89fa6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_9e9ccdc8129a57a38544b6a8fe879560)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::diagonalSize;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConjugateReturnType  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_8b7661d091495d7c9b4f9f6c48ee840a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::conjugate;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealReturnType  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_af383671d67650489a9a21dd5f2ca378)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::real;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::NonConstRealReturnType  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_6d96ecc23b33581982fbf86ccb1ed9b0)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::real;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_c03aed48ede757d99c87deb35c8e3db9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::norm;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_332dcb5b950959d5bb550d8c78e9f13b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::blueNorm;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_92945b2135f65e3c9dae94874bbb1e38)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::hypotNorm;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::PlainObject const (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_9452168a4a4a58f48b7a5cedd703bfc6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::normalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_45ad7382c22a5c7eb2a9aa3e0d5b5f44)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::stableNormalize;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::IdentityReturnType const (*method_pointer_470cf6165a8b56dc8f0be553c55ffc4b)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Identity;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::IdentityReturnType const (*method_pointer_19aac0deaaa250fe8edd1cd6e995b4a6)(::Eigen::Index , ::Eigen::Index ) = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Identity;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_428b40980e015b09846df5b49a42ab5c)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setIdentity;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_d13072340907536bb86839eea7fea3fd)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_3b67820ac2a959dcbcaba60a957bb332)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_a4a98abdc59d56399853a0f23068a987)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_6363651ba4d9590082d3749cf92a6816)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_876b1af6079852fdbaf82e4c478bd8bb)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isLowerTriangular;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_339095227b8852b68c3151be1ecf1b33)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_eb67bd3e7d3b57b1853dba30a61ce3b5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::forceAlignedAccess;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_add71d3bf4d852e09961923017997b7c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_154d38a6859f53b4aec09a8e0f2bc596)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_1d70c2c4b4095a9d84e0201ce1281dac)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::matrix;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_aed07528ce725d018d2ad592885c9ad9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::lu;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_712bf01891a75b7b971d13e20549d888)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::determinant;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_8f129f91d864559caf936c6ed8cfd496)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::fullPivHouseholderQr;
    struct function_group
    {
        static class ::Eigen::Product< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::Eigen::Inverse< class ::Eigen::PermutationMatrix< -1, -1, int > >, 2 > const function_03dcc19d7704577793fd9ad6b606b9f1(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & parameter_0, ::Eigen::InverseImpl< class ::Eigen::PermutationMatrix< -1, -1, int >, struct ::Eigen::PermutationStorage >::InverseType const & parameter_1)
        { return operator*(parameter_0, parameter_1); }
        static class ::Eigen::Product< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 2 >, 0 > const function_557a33a7ade659668895d06362949086(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & parameter_0, class ::Eigen::TriangularViewImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 2, struct ::Eigen::Dense > const & parameter_1)
        { return operator*(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > class_21529b1412445db0836a9fc772a89fa6("_MatrixBase_21529b1412445db0836a9fc772a89fa6", "", boost::python::no_init);
    class_21529b1412445db0836a9fc772a89fa6.def(boost::python::init< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & >(""));
    class_21529b1412445db0836a9fc772a89fa6.def("diagonal_size", method_pointer_9e9ccdc8129a57a38544b6a8fe879560, "");
    class_21529b1412445db0836a9fc772a89fa6.def("conjugate", method_pointer_8b7661d091495d7c9b4f9f6c48ee840a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_21529b1412445db0836a9fc772a89fa6.def("real", method_pointer_af383671d67650489a9a21dd5f2ca378, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_21529b1412445db0836a9fc772a89fa6.def("real", method_pointer_6d96ecc23b33581982fbf86ccb1ed9b0, boost::python::return_internal_reference<>(), "");
    class_21529b1412445db0836a9fc772a89fa6.def("real", autowig::method_decorator_6d96ecc23b33581982fbf86ccb1ed9b0);
    class_21529b1412445db0836a9fc772a89fa6.def("norm", method_pointer_c03aed48ede757d99c87deb35c8e3db9, "");
    class_21529b1412445db0836a9fc772a89fa6.def("blue_norm", method_pointer_332dcb5b950959d5bb550d8c78e9f13b, "");
    class_21529b1412445db0836a9fc772a89fa6.def("hypot_norm", method_pointer_92945b2135f65e3c9dae94874bbb1e38, "");
    class_21529b1412445db0836a9fc772a89fa6.def("normalized", method_pointer_9452168a4a4a58f48b7a5cedd703bfc6, "");
    class_21529b1412445db0836a9fc772a89fa6.def("stable_normalize", method_pointer_45ad7382c22a5c7eb2a9aa3e0d5b5f44, "");
    class_21529b1412445db0836a9fc772a89fa6.def("identity", method_pointer_470cf6165a8b56dc8f0be553c55ffc4b, "");
    class_21529b1412445db0836a9fc772a89fa6.def("identity", method_pointer_19aac0deaaa250fe8edd1cd6e995b4a6, "");
    class_21529b1412445db0836a9fc772a89fa6.def("set_identity", method_pointer_428b40980e015b09846df5b49a42ab5c, boost::python::return_internal_reference<>(), "");
    class_21529b1412445db0836a9fc772a89fa6.def("set_identity", autowig::method_decorator_428b40980e015b09846df5b49a42ab5c);
    class_21529b1412445db0836a9fc772a89fa6.def("set_identity", method_pointer_d13072340907536bb86839eea7fea3fd, boost::python::return_internal_reference<>(), "");
    class_21529b1412445db0836a9fc772a89fa6.def("set_identity", autowig::method_decorator_d13072340907536bb86839eea7fea3fd);
    class_21529b1412445db0836a9fc772a89fa6.def("is_identity", method_pointer_3b67820ac2a959dcbcaba60a957bb332, "");
    class_21529b1412445db0836a9fc772a89fa6.def("is_diagonal", method_pointer_a4a98abdc59d56399853a0f23068a987, "");
    class_21529b1412445db0836a9fc772a89fa6.def("is_upper_triangular", method_pointer_6363651ba4d9590082d3749cf92a6816, "");
    class_21529b1412445db0836a9fc772a89fa6.def("is_lower_triangular", method_pointer_876b1af6079852fdbaf82e4c478bd8bb, "");
    class_21529b1412445db0836a9fc772a89fa6.def("force_aligned_access", method_pointer_339095227b8852b68c3151be1ecf1b33, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_21529b1412445db0836a9fc772a89fa6.def("force_aligned_access", method_pointer_eb67bd3e7d3b57b1853dba30a61ce3b5, boost::python::return_internal_reference<>(), "");
    class_21529b1412445db0836a9fc772a89fa6.def("force_aligned_access", autowig::method_decorator_eb67bd3e7d3b57b1853dba30a61ce3b5);
    class_21529b1412445db0836a9fc772a89fa6.def("trace", method_pointer_add71d3bf4d852e09961923017997b7c, "");
    class_21529b1412445db0836a9fc772a89fa6.def("matrix", method_pointer_154d38a6859f53b4aec09a8e0f2bc596, boost::python::return_internal_reference<>(), "");
    class_21529b1412445db0836a9fc772a89fa6.def("matrix", autowig::method_decorator_154d38a6859f53b4aec09a8e0f2bc596);
    class_21529b1412445db0836a9fc772a89fa6.def("matrix", method_pointer_1d70c2c4b4095a9d84e0201ce1281dac, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_21529b1412445db0836a9fc772a89fa6.def("lu", method_pointer_aed07528ce725d018d2ad592885c9ad9, "");
    class_21529b1412445db0836a9fc772a89fa6.def("determinant", method_pointer_712bf01891a75b7b971d13e20549d888, "");
    class_21529b1412445db0836a9fc772a89fa6.def("full_piv_householder_qr", method_pointer_8f129f91d864559caf936c6ed8cfd496, "");
    class_21529b1412445db0836a9fc772a89fa6.staticmethod("identity");
    class_21529b1412445db0836a9fc772a89fa6.def("__mul__", function_group::function_03dcc19d7704577793fd9ad6b606b9f1, "");
    class_21529b1412445db0836a9fc772a89fa6.def("__mul__", function_group::function_557a33a7ade659668895d06362949086, "");

    if(autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, autowig::Held< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type >();
    }

}