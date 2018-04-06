#include "_linalg.h"



namespace autowig
{

    void method_decorator_d31b9d30203b5cc6aef84d4e83e4fd5e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, const ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::NonConstRealReturnType  param_out) { instance.real() = param_out; }
    void method_decorator_4ca8fc950e7d543cb64e63a3ceb91193(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, const class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out) { instance.setIdentity() = param_out; }
    void method_decorator_4f08c2d51c3f5fb096c2280bd18a24d1(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out) { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_2c677337bf695dfd93c35bb76e28d245(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, const class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out) { instance.forceAlignedAccess() = param_out; }
    void method_decorator_49d4c439562050bf99532b853a7bca9e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, const class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & param_out) { instance.matrix() = param_out; }
    void method_decorator_1c1ed1bf9c2e598ba055c5d172322297(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_product_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const, class ::Eigen::Map< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 2, class ::Eigen::Stride< 0, 0 > > const > > const & param_in_0, const class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out) { instance.operator+=(param_in_0) = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const volatile * get_pointer<class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const volatile >(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const volatile *c) { return c; }
}
    #endif
#endif



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
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::CwiseAbsReturnType const (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_a17189a2e1d257e5b002e5b238bdb109)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::cwiseAbs;
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
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::BasisReturnType const (*method_pointer_f7526a7631525f3d9af86f1d66680ebc)(::Eigen::Index , ::Eigen::Index ) = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Unit;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::BasisReturnType const (*method_pointer_8cf09744664d51aab1b4f55744096008)(::Eigen::Index ) = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Unit;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::BasisReturnType const (*method_pointer_795101dfbe515336adef19adc277210f)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::UnitX;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::BasisReturnType const (*method_pointer_7f194f78bea85ead821b246f2c18a92b)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::UnitY;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::BasisReturnType const (*method_pointer_4224195739ad5a9a85d0907ffec0b491)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::UnitZ;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::BasisReturnType const (*method_pointer_788aaa9616e054c397d7d914870061f1)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::UnitW;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_4ca8fc950e7d543cb64e63a3ceb91193)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setIdentity;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_4f08c2d51c3f5fb096c2280bd18a24d1)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setIdentity;
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
    class ::Eigen::ArrayWrapper< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_c8bfd1164a2e5e79a3ad8458e350bd5d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::array;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_9bacdc2d3d355582be235e61fdde8682)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::determinant;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::PlainObject  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_e43680b3d85259cab64232bb4f2d0f14)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_6ceac7d0b13858c4a65016c403074a6d)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar &, ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::makeHouseholderInPlace;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_1fb1dd2f35e3504188b73a6754a7c943)(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::operator==;
    class ::Eigen::CwiseBinaryOp< struct ::std::equal_to< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_4994af8fa9ef542480dc25b3d54f8d58)(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::cwiseEqual;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_1c1ed1bf9c2e598ba055c5d172322297)(class ::Eigen::MatrixBase< class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_product_op< double, double >, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const > const, class ::Eigen::Map< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 2, class ::Eigen::Stride< 0, 0 > > const > > const &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::operator+=;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >, autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::Type, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > > class_94b3e4cf36a654a98d46f7431a732180("_MatrixBase_94b3e4cf36a654a98d46f7431a732180", "", boost::python::no_init);
    class_94b3e4cf36a654a98d46f7431a732180.def(boost::python::init< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const & >(""));
    class_94b3e4cf36a654a98d46f7431a732180.def("diagonal_size", method_pointer_b2dc1374f71b5670bdeb5d3e3a1af0b9, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("conjugate", method_pointer_71d7f1b033ee5aa8827db25ce34c6110, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("real", method_pointer_9f1558ea2a585062a0be2d3fb7282022, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("real", method_pointer_d31b9d30203b5cc6aef84d4e83e4fd5e, boost::python::return_internal_reference<>(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("real", autowig::method_decorator_d31b9d30203b5cc6aef84d4e83e4fd5e);
    class_94b3e4cf36a654a98d46f7431a732180.def("cwise_abs", method_pointer_a17189a2e1d257e5b002e5b238bdb109, "");
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
    class_94b3e4cf36a654a98d46f7431a732180.def("unit", method_pointer_f7526a7631525f3d9af86f1d66680ebc, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("unit", method_pointer_8cf09744664d51aab1b4f55744096008, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("unit_x", method_pointer_795101dfbe515336adef19adc277210f, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("unit_y", method_pointer_7f194f78bea85ead821b246f2c18a92b, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("unit_z", method_pointer_4224195739ad5a9a85d0907ffec0b491, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("unit_w", method_pointer_788aaa9616e054c397d7d914870061f1, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("set_identity", method_pointer_4ca8fc950e7d543cb64e63a3ceb91193, boost::python::return_internal_reference<>(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("set_identity", autowig::method_decorator_4ca8fc950e7d543cb64e63a3ceb91193);
    class_94b3e4cf36a654a98d46f7431a732180.def("set_identity", method_pointer_4f08c2d51c3f5fb096c2280bd18a24d1, boost::python::return_internal_reference<>(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("set_identity", autowig::method_decorator_4f08c2d51c3f5fb096c2280bd18a24d1);
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
    class_94b3e4cf36a654a98d46f7431a732180.def("array", method_pointer_c8bfd1164a2e5e79a3ad8458e350bd5d, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("determinant", method_pointer_9bacdc2d3d355582be235e61fdde8682, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("unit_orthogonal", method_pointer_e43680b3d85259cab64232bb4f2d0f14, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("make_householder_in_place", method_pointer_6ceac7d0b13858c4a65016c403074a6d, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("__eq__", method_pointer_1fb1dd2f35e3504188b73a6754a7c943, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("cwise_equal", method_pointer_4994af8fa9ef542480dc25b3d54f8d58, "");
    class_94b3e4cf36a654a98d46f7431a732180.def("__iadd__", method_pointer_1c1ed1bf9c2e598ba055c5d172322297, boost::python::return_internal_reference<>(), "");
    class_94b3e4cf36a654a98d46f7431a732180.def("__iadd__", autowig::method_decorator_1c1ed1bf9c2e598ba055c5d172322297);
    class_94b3e4cf36a654a98d46f7431a732180.staticmethod("unit_w");
    class_94b3e4cf36a654a98d46f7431a732180.staticmethod("unit_x");
    class_94b3e4cf36a654a98d46f7431a732180.staticmethod("unit");
    class_94b3e4cf36a654a98d46f7431a732180.staticmethod("unit_z");
    class_94b3e4cf36a654a98d46f7431a732180.staticmethod("unit_y");

    if(autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::Type, autowig::Held< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::Type >();
    }

}