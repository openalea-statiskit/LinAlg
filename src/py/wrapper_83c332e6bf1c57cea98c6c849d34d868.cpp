#include "_ieigen.h"


namespace autowig
{
    void method_decorator_28099b9c16c65f9aa3e1a60ae46ede10(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_1cef3a3b23435a968b68b8f4d96aee30(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_af524de5f58055ecbd555909544cbadf(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_25f4953a07765344be968a2144a4986e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_d7b08e7ac1315ba08f0b35343a915463(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_83c332e6bf1c57cea98c6c849d34d868()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_b67bfcb72b195f93a455fcc271b5f5b8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::diagonalSize;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_4668c983e62d555bbea78eeff44a7f67)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::conjugate;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_54ab39bff269538795c0a586bb4f6d0d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::real;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_28099b9c16c65f9aa3e1a60ae46ede10)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::real;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_b3da583b0db45c99b4bbaf4e8449c9e1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_77cc1568d3985089afa6750f5ed622bc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_e25b34de60b852b980a3b42990a964a8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_6542b8ab99c25acb93685a029b6716c9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_2b6609cbfa7d5f828ca185d89e0a26db)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::hypotNorm;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_fb8582c3cee5589c95a6d70b66903043)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::normalized;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_b3f2915c116e5fa6889a4502ed3e98ab)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_bae9f31c5cec54c5b7bf26f95829d3db)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_d2018f5371fe5712afdf4d8bd7ddbcb1)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_1709905c15f2541190daf0d5d5d3e2cd)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_1cef3a3b23435a968b68b8f4d96aee30)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setIdentity;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_af524de5f58055ecbd555909544cbadf)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_0e18caf1a9075b358589913e41584623)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_561d5e1c4356518f9de9c46891f92588)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_22c7c677e8215c15a961839d79457fed)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_90657ab71ae6554b8e4b1b9a445982c1)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_14423858fcb057d2af3faeb17ca198da)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::isUnitary;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_83e7301c17b15dcd940c75df3c270c15)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_25f4953a07765344be968a2144a4986e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::forceAlignedAccess;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_66ed88f6e2915dfd8f53bea5880f4a75)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_d7b08e7ac1315ba08f0b35343a915463)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_5e898a38227f5227b0e4c0d792499fea)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::matrix;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_ee3aba14b1ef5c098f3aca9ac802d0c6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_2259f2dcb42c529ca5abed85ac4df1c7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::eigenvalues;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_ceaab65d8b38540b9392c623eecf932b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::unitOrthogonal;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_204d0932a9c65055847f063bd99cdb14)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::*method_pointer_8a4fa783dd195b3eab953295e0830075)(float  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > > > class_83c332e6bf1c57cea98c6c849d34d868("_MatrixBase_83c332e6bf1c57cea98c6c849d34d868", "", boost::python::no_init);
    class_83c332e6bf1c57cea98c6c849d34d868.def("diagonal_size", method_pointer_b67bfcb72b195f93a455fcc271b5f5b8, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("conjugate", method_pointer_4668c983e62d555bbea78eeff44a7f67, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("real", method_pointer_54ab39bff269538795c0a586bb4f6d0d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("real", method_pointer_28099b9c16c65f9aa3e1a60ae46ede10, boost::python::return_internal_reference<>(), "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("real", autowig::method_decorator_28099b9c16c65f9aa3e1a60ae46ede10);
    class_83c332e6bf1c57cea98c6c849d34d868.def("squared_norm", method_pointer_b3da583b0db45c99b4bbaf4e8449c9e1, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("norm", method_pointer_77cc1568d3985089afa6750f5ed622bc, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("stable_norm", method_pointer_e25b34de60b852b980a3b42990a964a8, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("blue_norm", method_pointer_6542b8ab99c25acb93685a029b6716c9, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("hypot_norm", method_pointer_2b6609cbfa7d5f828ca185d89e0a26db, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("normalized", method_pointer_fb8582c3cee5589c95a6d70b66903043, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("stable_normalized", method_pointer_b3f2915c116e5fa6889a4502ed3e98ab, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("normalize", method_pointer_bae9f31c5cec54c5b7bf26f95829d3db, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("stable_normalize", method_pointer_d2018f5371fe5712afdf4d8bd7ddbcb1, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("adjoint_in_place", method_pointer_1709905c15f2541190daf0d5d5d3e2cd, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("set_identity", method_pointer_1cef3a3b23435a968b68b8f4d96aee30, boost::python::return_internal_reference<>(), "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("set_identity", autowig::method_decorator_1cef3a3b23435a968b68b8f4d96aee30);
    class_83c332e6bf1c57cea98c6c849d34d868.def("set_identity", method_pointer_af524de5f58055ecbd555909544cbadf, boost::python::return_internal_reference<>(), "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("set_identity", autowig::method_decorator_af524de5f58055ecbd555909544cbadf);
    class_83c332e6bf1c57cea98c6c849d34d868.def("is_identity", method_pointer_0e18caf1a9075b358589913e41584623, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("is_diagonal", method_pointer_561d5e1c4356518f9de9c46891f92588, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("is_upper_triangular", method_pointer_22c7c677e8215c15a961839d79457fed, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("is_lower_triangular", method_pointer_90657ab71ae6554b8e4b1b9a445982c1, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("is_unitary", method_pointer_14423858fcb057d2af3faeb17ca198da, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("force_aligned_access", method_pointer_83e7301c17b15dcd940c75df3c270c15, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("force_aligned_access", method_pointer_25f4953a07765344be968a2144a4986e, boost::python::return_internal_reference<>(), "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("force_aligned_access", autowig::method_decorator_25f4953a07765344be968a2144a4986e);
    class_83c332e6bf1c57cea98c6c849d34d868.def("trace", method_pointer_66ed88f6e2915dfd8f53bea5880f4a75, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("matrix", method_pointer_d7b08e7ac1315ba08f0b35343a915463, boost::python::return_internal_reference<>(), "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("matrix", autowig::method_decorator_d7b08e7ac1315ba08f0b35343a915463);
    class_83c332e6bf1c57cea98c6c849d34d868.def("matrix", method_pointer_5e898a38227f5227b0e4c0d792499fea, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("determinant", method_pointer_ee3aba14b1ef5c098f3aca9ac802d0c6, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("eigenvalues", method_pointer_2259f2dcb42c529ca5abed85ac4df1c7, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("unit_orthogonal", method_pointer_ceaab65d8b38540b9392c623eecf932b, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("euler_angles", method_pointer_204d0932a9c65055847f063bd99cdb14, "");
    class_83c332e6bf1c57cea98c6c849d34d868.def("make_householder_in_place", method_pointer_8a4fa783dd195b3eab953295e0830075, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > > >();
    }

}