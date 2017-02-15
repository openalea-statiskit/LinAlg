#include "_linalg.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const volatile * get_pointer<class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const volatile >(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    void method_decorator_d31b9d30203b5cc6aef84d4e83e4fd5e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::NonConstRealReturnType  param_out)     { instance.real() = param_out; }
    void method_decorator_4ca8fc950e7d543cb64e63a3ceb91193(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_26d443696efb5173bb3734311ec8cca8(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_2c677337bf695dfd93c35bb76e28d245(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_49d4c439562050bf99532b853a7bca9e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & param_out)     { instance.matrix() = param_out; }
}


void wrapper_94b3e4cf36a654a98d46f7431a732180()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_b2dc1374f71b5670bdeb5d3e3a1af0b9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::diagonalSize;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::ConjugateReturnType  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_71d7f1b033ee5aa8827db25ce34c6110)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::conjugate;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealReturnType  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_9f1558ea2a585062a0be2d3fb7282022)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::real;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::NonConstRealReturnType  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_d31b9d30203b5cc6aef84d4e83e4fd5e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::real;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_48397cefbecc5a81bdf1e02d172d3ae5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::squaredNorm;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_74c2fb6413c75de2b55e99fe9402e7bd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::norm;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_2c582ed2316b53d8b5f4b0dea157ac78)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::stableNorm;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_1f49c443224b56a9a2561b893455f7fe)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::blueNorm;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_2510c8ac8866563694eaef9cf3bdd9a9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::hypotNorm;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::PlainObject const (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_41a7ae451cfe5eefaa4a98508b5c2b03)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::normalized;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::PlainObject const (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_3be2cac7dd66594da4de9fe6c596650c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_8f461bb0b7155df5b45bb95136b3d66a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_512906b0f37b5887b6167f21c9655c84)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_38f42dce32bd5361b68181eb39af5248)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_4ca8fc950e7d543cb64e63a3ceb91193)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setIdentity;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_26d443696efb5173bb3734311ec8cca8)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_9f2f9e330cae515f8891b5f5ef28fddb)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_ce5ca2806fa2549393ac74cec1c17cdd)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_d9cf22e2e7505d2f8c643299146a1fc5)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_f811f29fd5575dabab61e53fe3dd8529)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_77c2962698b651a3a05b90541f8d7875)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::isUnitary;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_33c927c5f30952e78c8bbc7b47d70aa9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_2c677337bf695dfd93c35bb76e28d245)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::forceAlignedAccess;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_61eb3b0294bc5882b156792201c35aa5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_49d4c439562050bf99532b853a7bca9e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_ff386723c68757e0a52ba4756a36fbd4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::matrix;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_9bacdc2d3d355582be235e61fdde8682)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::determinant;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::EigenvaluesReturnType  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_892d4b3bdc685fa6ae9ddc643bc9821b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::eigenvalues;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::PlainObject  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_e43680b3d85259cab64232bb4f2d0f14)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::unitOrthogonal;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_9de13193eea659529e852733dd46cb00)(::Eigen::Index , ::Eigen::Index , ::Eigen::Index ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_6ceac7d0b13858c4a65016c403074a6d)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar &, ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >, autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::Type, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > > class_94b3e4cf36a654a98d46f7431a732180("_MatrixBase_94b3e4cf36a654a98d46f7431a732180", "", boost::python::no_init);
    class_94b3e4cf36a654a98d46f7431a732180.def("diagonal_size", method_pointer_b2dc1374f71b5670bdeb5d3e3a1af0b9, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("conjugate", method_pointer_71d7f1b033ee5aa8827db25ce34c6110, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("real", method_pointer_9f1558ea2a585062a0be2d3fb7282022, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("real", method_pointer_d31b9d30203b5cc6aef84d4e83e4fd5e, boost::python::return_internal_reference<>(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("real", autowig::method_decorator_d31b9d30203b5cc6aef84d4e83e4fd5e);
    class_94b3e4cf36a654a98d46f7431a732180.def("squared_norm", method_pointer_48397cefbecc5a81bdf1e02d172d3ae5, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("norm", method_pointer_74c2fb6413c75de2b55e99fe9402e7bd, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("stable_norm", method_pointer_2c582ed2316b53d8b5f4b0dea157ac78, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("blue_norm", method_pointer_1f49c443224b56a9a2561b893455f7fe, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("hypot_norm", method_pointer_2510c8ac8866563694eaef9cf3bdd9a9, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("normalized", method_pointer_41a7ae451cfe5eefaa4a98508b5c2b03, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("stable_normalized", method_pointer_3be2cac7dd66594da4de9fe6c596650c, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("normalize", method_pointer_8f461bb0b7155df5b45bb95136b3d66a, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("stable_normalize", method_pointer_512906b0f37b5887b6167f21c9655c84, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("adjoint_in_place", method_pointer_38f42dce32bd5361b68181eb39af5248, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("set_identity", method_pointer_4ca8fc950e7d543cb64e63a3ceb91193, boost::python::return_internal_reference<>(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("set_identity", autowig::method_decorator_4ca8fc950e7d543cb64e63a3ceb91193);
    class_94b3e4cf36a654a98d46f7431a732180.def("set_identity", method_pointer_26d443696efb5173bb3734311ec8cca8, boost::python::return_internal_reference<>(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("set_identity", autowig::method_decorator_26d443696efb5173bb3734311ec8cca8);
    class_94b3e4cf36a654a98d46f7431a732180.def("is_identity", method_pointer_9f2f9e330cae515f8891b5f5ef28fddb, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("is_diagonal", method_pointer_ce5ca2806fa2549393ac74cec1c17cdd, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("is_upper_triangular", method_pointer_d9cf22e2e7505d2f8c643299146a1fc5, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("is_lower_triangular", method_pointer_f811f29fd5575dabab61e53fe3dd8529, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("is_unitary", method_pointer_77c2962698b651a3a05b90541f8d7875, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("force_aligned_access", method_pointer_33c927c5f30952e78c8bbc7b47d70aa9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("force_aligned_access", method_pointer_2c677337bf695dfd93c35bb76e28d245, boost::python::return_internal_reference<>(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("force_aligned_access", autowig::method_decorator_2c677337bf695dfd93c35bb76e28d245);
    class_94b3e4cf36a654a98d46f7431a732180.def("trace", method_pointer_61eb3b0294bc5882b156792201c35aa5, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("matrix", method_pointer_49d4c439562050bf99532b853a7bca9e, boost::python::return_internal_reference<>(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("matrix", autowig::method_decorator_49d4c439562050bf99532b853a7bca9e);
    class_94b3e4cf36a654a98d46f7431a732180.def("matrix", method_pointer_ff386723c68757e0a52ba4756a36fbd4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("determinant", method_pointer_9bacdc2d3d355582be235e61fdde8682, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("eigenvalues", method_pointer_892d4b3bdc685fa6ae9ddc643bc9821b, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("unit_orthogonal", method_pointer_e43680b3d85259cab64232bb4f2d0f14, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("euler_angles", method_pointer_9de13193eea659529e852733dd46cb00, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("make_householder_in_place", method_pointer_6ceac7d0b13858c4a65016c403074a6d, "");

    if(autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::Type, autowig::Held< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::Type >();
    }

}