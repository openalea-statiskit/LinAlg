#include "_linalg.h"


namespace autowig
{
    void method_decorator_9f3116f2a8c05d22a71eda0fd8fdb5f5(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::NonConstRealReturnType  param_out)     { instance.real() = param_out; }
    void method_decorator_98ad7e6dda285fe29a37cd0d97687f76(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_fc1e1dedd3905ea78b18cc3624e6b871(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_06840a3e23a7526d8ba22a531bc93d38(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_0e2e904fbba256629a3383e363838541(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & param_out)     { instance.matrix() = param_out; }
}


void wrapper_188d9a4d2cfb562385c42fe005cf6a4c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_bf27f693997c5cd1bd6b0ee4ed88e63b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::diagonalSize;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::ConjugateReturnType  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_b1739ec0fe9b50279eae0fc36fd2ce15)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::conjugate;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealReturnType  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_1ee01396c8245cae9c843ad389c0046f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::real;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::NonConstRealReturnType  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_9f3116f2a8c05d22a71eda0fd8fdb5f5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::real;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_6369d2847d475b9bb03dd13f1bae51f5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::squaredNorm;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_1b5bf3d31a8654729fc3ba85b53e7851)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::norm;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_3eb2e32ba44e5ea7b694884ad4190ebe)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::stableNorm;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_318a9edcebde516dbd5d4cae7673a08b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::blueNorm;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_d98b3daa7d585011959588dff33994ba)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::hypotNorm;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::PlainObject const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_34e1bb29a73a5302aabcb6da6fc2267c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::normalized;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::PlainObject const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_07b99237a8965cc0843154685d178adc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_4b672bdba91b5a768001b83ed60dfb75)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_82fcead8ab02572ab528dfd3f92caf6c)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_71e08f157323524ba8d30c222b5bf7e0)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::adjointInPlace;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_98ad7e6dda285fe29a37cd0d97687f76)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setIdentity;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_fc1e1dedd3905ea78b18cc3624e6b871)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_231b9c20f88f5112b9cfbae51948753b)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_f0ddd4ff84e5529097c503433929acdb)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_7eea48c623545711a3cdca5bddfda47d)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_c37f4f8feda35a05b56f16a671fcd87c)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_af985f9bd6dd5718bc2bff1e29455662)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::isUnitary;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_92e8bc51b5b65471a92bcae16bff8e42)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_06840a3e23a7526d8ba22a531bc93d38)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::forceAlignedAccess;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_5f16942f2bb15a39bc8bcc0bb875004c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_0e2e904fbba256629a3383e363838541)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_3e8dbb6e60b45690a48389b344f523f7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::matrix;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_8a8aa80a58915cfdbb0706646b0711dd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::determinant;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::EigenvaluesReturnType  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_743a1ca6b1e65f0aa961613c41ba5809)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::eigenvalues;
    ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::PlainObject  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_b095a1297c13541d80eb6e462144ea29)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::unitOrthogonal;
// TODO     class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_9060776305cc5769987ea50e712b2153)(::Eigen::Index , ::Eigen::Index , ::Eigen::Index ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::*method_pointer_c5ff66690587562fa9a4b3decb87c064)(::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::Scalar &, ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::RealScalar &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >, autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::Type, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > > > class_188d9a4d2cfb562385c42fe005cf6a4c("_MatrixBase_188d9a4d2cfb562385c42fe005cf6a4c", "", boost::python::no_init);
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("diagonal_size", method_pointer_bf27f693997c5cd1bd6b0ee4ed88e63b, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("conjugate", method_pointer_b1739ec0fe9b50279eae0fc36fd2ce15, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("real", method_pointer_1ee01396c8245cae9c843ad389c0046f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("real", method_pointer_9f3116f2a8c05d22a71eda0fd8fdb5f5, boost::python::return_internal_reference<>(), "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("real", autowig::method_decorator_9f3116f2a8c05d22a71eda0fd8fdb5f5);
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("squared_norm", method_pointer_6369d2847d475b9bb03dd13f1bae51f5, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("norm", method_pointer_1b5bf3d31a8654729fc3ba85b53e7851, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("stable_norm", method_pointer_3eb2e32ba44e5ea7b694884ad4190ebe, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("blue_norm", method_pointer_318a9edcebde516dbd5d4cae7673a08b, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("hypot_norm", method_pointer_d98b3daa7d585011959588dff33994ba, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("normalized", method_pointer_34e1bb29a73a5302aabcb6da6fc2267c, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("stable_normalized", method_pointer_07b99237a8965cc0843154685d178adc, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("normalize", method_pointer_4b672bdba91b5a768001b83ed60dfb75, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("stable_normalize", method_pointer_82fcead8ab02572ab528dfd3f92caf6c, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("adjoint_in_place", method_pointer_71e08f157323524ba8d30c222b5bf7e0, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("set_identity", method_pointer_98ad7e6dda285fe29a37cd0d97687f76, boost::python::return_internal_reference<>(), "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("set_identity", autowig::method_decorator_98ad7e6dda285fe29a37cd0d97687f76);
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("set_identity", method_pointer_fc1e1dedd3905ea78b18cc3624e6b871, boost::python::return_internal_reference<>(), "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("set_identity", autowig::method_decorator_fc1e1dedd3905ea78b18cc3624e6b871);
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("is_identity", method_pointer_231b9c20f88f5112b9cfbae51948753b, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("is_diagonal", method_pointer_f0ddd4ff84e5529097c503433929acdb, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("is_upper_triangular", method_pointer_7eea48c623545711a3cdca5bddfda47d, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("is_lower_triangular", method_pointer_c37f4f8feda35a05b56f16a671fcd87c, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("is_unitary", method_pointer_af985f9bd6dd5718bc2bff1e29455662, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("force_aligned_access", method_pointer_92e8bc51b5b65471a92bcae16bff8e42, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("force_aligned_access", method_pointer_06840a3e23a7526d8ba22a531bc93d38, boost::python::return_internal_reference<>(), "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("force_aligned_access", autowig::method_decorator_06840a3e23a7526d8ba22a531bc93d38);
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("trace", method_pointer_5f16942f2bb15a39bc8bcc0bb875004c, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("matrix", method_pointer_0e2e904fbba256629a3383e363838541, boost::python::return_internal_reference<>(), "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("matrix", autowig::method_decorator_0e2e904fbba256629a3383e363838541);
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("matrix", method_pointer_3e8dbb6e60b45690a48389b344f523f7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("determinant", method_pointer_8a8aa80a58915cfdbb0706646b0711dd, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("eigenvalues", method_pointer_743a1ca6b1e65f0aa961613c41ba5809, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("unit_orthogonal", method_pointer_b095a1297c13541d80eb6e462144ea29, "");
// TODO     class_188d9a4d2cfb562385c42fe005cf6a4c.def("euler_angles", method_pointer_9060776305cc5769987ea50e712b2153, "");
    class_188d9a4d2cfb562385c42fe005cf6a4c.def("make_householder_in_place", method_pointer_c5ff66690587562fa9a4b3decb87c064, "");

    if(autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::Type, autowig::Held< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > > >::Type >();
    }

}