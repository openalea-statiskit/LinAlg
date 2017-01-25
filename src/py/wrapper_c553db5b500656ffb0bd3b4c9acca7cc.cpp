#include "_ieigen.h"


namespace autowig
{
    void method_decorator_392c64580cc65d16b0ced37f10bf947d(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_41442593ef055218bb7b167330c057dd(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_415dc7dc165559b5be75c474b13c17d0(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_188eccfc37f05f58b61cb12918b5aa8e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_794153ad9a425159b2e06d18c9462c0e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_c553db5b500656ffb0bd3b4c9acca7cc()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_27b05398fdf4524695a19c3b1e090cf3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::diagonalSize;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_98899d622d205f2382dcb90f25b8da3a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::conjugate;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_28a45b92ef065a7c970e44432730eafb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::real;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_392c64580cc65d16b0ced37f10bf947d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::real;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_4cd6902fa77e551099839c2e8d15d0ef)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_d3adbd6d9aca5948b375ae1031bfed62)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_1e64fce1d3415d8593a064abb25b67f6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_a8ac2e66539c5b87baf4f8bb9b874e6b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_b928ca52a5b158228bb975c7719f8c29)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::hypotNorm;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_0fdbeaf5be065cb989e04eeb56ef958b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::normalized;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_969d859268a5524f91e24b31a1c3b58f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_a0649aac4c955a8d916786b268385eae)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_d858aafcf46a5b1ca85de8edbb932a48)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_a72b386ab30f596e9225b8f8b6b3d090)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_41442593ef055218bb7b167330c057dd)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setIdentity;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_415dc7dc165559b5be75c474b13c17d0)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_d6bc5d65a4a55e428b39d4a90a3a6852)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_dd4a92e184265995b2ff44bcc5a4b2b0)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_976e07598a825f92b8d133bb130bed5e)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_d658dc8cd1565adfb3b553036854f1c7)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_d0d46849123c53ecaa4c6a4148cee928)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::isUnitary;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_9f192d3e9fe8579f88feed6edf747059)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_188eccfc37f05f58b61cb12918b5aa8e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::forceAlignedAccess;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_ad881c0d2dab58c6bbbe632031d1764d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_794153ad9a425159b2e06d18c9462c0e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_518bd7aff164507795d70d0b632b0711)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::matrix;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_4db2c4f7e9725fc5be54cc83b69a6d6e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 1, 0, 1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_daffd4cac6605d8f90a901fac4a01074)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::eigenvalues;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_9aeb55086ee157269b5f5dca22168cfb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::unitOrthogonal;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_bbb447897d0f5eeca1884e8b8d89ce0c)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_33ddbf98265956348ecd22c39b6c1443)(float  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > > > class_c553db5b500656ffb0bd3b4c9acca7cc("_MatrixBase_c553db5b500656ffb0bd3b4c9acca7cc", "", boost::python::no_init);
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("diagonal_size", method_pointer_27b05398fdf4524695a19c3b1e090cf3, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("conjugate", method_pointer_98899d622d205f2382dcb90f25b8da3a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("real", method_pointer_28a45b92ef065a7c970e44432730eafb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("real", method_pointer_392c64580cc65d16b0ced37f10bf947d, boost::python::return_internal_reference<>(), "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("real", autowig::method_decorator_392c64580cc65d16b0ced37f10bf947d);
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("squared_norm", method_pointer_4cd6902fa77e551099839c2e8d15d0ef, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("norm", method_pointer_d3adbd6d9aca5948b375ae1031bfed62, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("stable_norm", method_pointer_1e64fce1d3415d8593a064abb25b67f6, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("blue_norm", method_pointer_a8ac2e66539c5b87baf4f8bb9b874e6b, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("hypot_norm", method_pointer_b928ca52a5b158228bb975c7719f8c29, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("normalized", method_pointer_0fdbeaf5be065cb989e04eeb56ef958b, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("stable_normalized", method_pointer_969d859268a5524f91e24b31a1c3b58f, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("normalize", method_pointer_a0649aac4c955a8d916786b268385eae, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("stable_normalize", method_pointer_d858aafcf46a5b1ca85de8edbb932a48, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("adjoint_in_place", method_pointer_a72b386ab30f596e9225b8f8b6b3d090, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("set_identity", method_pointer_41442593ef055218bb7b167330c057dd, boost::python::return_internal_reference<>(), "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("set_identity", autowig::method_decorator_41442593ef055218bb7b167330c057dd);
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("set_identity", method_pointer_415dc7dc165559b5be75c474b13c17d0, boost::python::return_internal_reference<>(), "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("set_identity", autowig::method_decorator_415dc7dc165559b5be75c474b13c17d0);
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("is_identity", method_pointer_d6bc5d65a4a55e428b39d4a90a3a6852, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("is_diagonal", method_pointer_dd4a92e184265995b2ff44bcc5a4b2b0, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("is_upper_triangular", method_pointer_976e07598a825f92b8d133bb130bed5e, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("is_lower_triangular", method_pointer_d658dc8cd1565adfb3b553036854f1c7, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("is_unitary", method_pointer_d0d46849123c53ecaa4c6a4148cee928, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("force_aligned_access", method_pointer_9f192d3e9fe8579f88feed6edf747059, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("force_aligned_access", method_pointer_188eccfc37f05f58b61cb12918b5aa8e, boost::python::return_internal_reference<>(), "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("force_aligned_access", autowig::method_decorator_188eccfc37f05f58b61cb12918b5aa8e);
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("trace", method_pointer_ad881c0d2dab58c6bbbe632031d1764d, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("matrix", method_pointer_794153ad9a425159b2e06d18c9462c0e, boost::python::return_internal_reference<>(), "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("matrix", autowig::method_decorator_794153ad9a425159b2e06d18c9462c0e);
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("matrix", method_pointer_518bd7aff164507795d70d0b632b0711, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("determinant", method_pointer_4db2c4f7e9725fc5be54cc83b69a6d6e, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("eigenvalues", method_pointer_daffd4cac6605d8f90a901fac4a01074, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("unit_orthogonal", method_pointer_9aeb55086ee157269b5f5dca22168cfb, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("euler_angles", method_pointer_bbb447897d0f5eeca1884e8b8d89ce0c, "");
    class_c553db5b500656ffb0bd3b4c9acca7cc.def("make_householder_in_place", method_pointer_33ddbf98265956348ecd22c39b6c1443, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > > >();
    }

}