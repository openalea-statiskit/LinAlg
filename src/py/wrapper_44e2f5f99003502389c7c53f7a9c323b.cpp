#include "_ieigen.h"


namespace autowig
{
    void method_decorator_377e7e13094e57179d06446d6ecf8372(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_bcf51d2ced37523ea667c676259dba84(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_13427397a7655ddaa78c6ef59c6a6663(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_5fd5bb5a473458b1804faf3d9b157610(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_44e2f5f99003502389c7c53f7a9c323b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_9dc5e7f1a3175f9091ddcedfb661122c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::diagonalSize;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_c3bfdf8d28245b5e845fe5d4e1362b32)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_09ec05dd3c885f409239f4b8377a4b5a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_93e9a0ecb1805e0288bf60240ffa15ee)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_f901e1928de4521dbff274ac906ee822)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_2f2750bdaabb5282add636bc2c2fa66f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_5e6e2751e37d5051ad383e95b5fabd05)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_131b775b053d55a28dcf04859918db4e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_5a27125b04655bf393efe5e036fe8589)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_245e14a6de0b5438b717a9a0b6ec0314)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_6f5d421805e6544a9e6e0d9ed7dd99a0)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_377e7e13094e57179d06446d6ecf8372)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_bcf51d2ced37523ea667c676259dba84)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_0cc9dd83cb395097b03a5806f2e7c046)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_aef4b162a84c55c7b8b71868a2f5a8ca)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_b7829747557555d997175043fb29f530)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_89d3ec14fdbd5a58be79303fe65862ca)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_6ea718c17e5d5c3ebb22b42661045ab0)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_4c6a0ff0544255169d81c4f374db2f31)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_13427397a7655ddaa78c6ef59c6a6663)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::forceAlignedAccess;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_7b1c9faa1c4255eebcc1e25aeed14335)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_5fd5bb5a473458b1804faf3d9b157610)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_3a6852631dd5551ea420d66297e63012)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::matrix;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_1dc5a422c7c05384a5e7138528ce1269)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_3831ffaff74554009c8726f3e0a602b2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::eigenvalues;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_54bf1bab75eb5c64b156aec5d3fad947)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_b844938ba2aa50b6997c5db0b9d6da3e)(struct ::std::complex< float >  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > > > class_44e2f5f99003502389c7c53f7a9c323b("_MatrixBase_44e2f5f99003502389c7c53f7a9c323b", "", boost::python::no_init);
    class_44e2f5f99003502389c7c53f7a9c323b.def("diagonal_size", method_pointer_9dc5e7f1a3175f9091ddcedfb661122c, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("squared_norm", method_pointer_c3bfdf8d28245b5e845fe5d4e1362b32, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("norm", method_pointer_09ec05dd3c885f409239f4b8377a4b5a, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("stable_norm", method_pointer_93e9a0ecb1805e0288bf60240ffa15ee, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("blue_norm", method_pointer_f901e1928de4521dbff274ac906ee822, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("hypot_norm", method_pointer_2f2750bdaabb5282add636bc2c2fa66f, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("normalized", method_pointer_5e6e2751e37d5051ad383e95b5fabd05, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("stable_normalized", method_pointer_131b775b053d55a28dcf04859918db4e, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("normalize", method_pointer_5a27125b04655bf393efe5e036fe8589, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("stable_normalize", method_pointer_245e14a6de0b5438b717a9a0b6ec0314, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("adjoint_in_place", method_pointer_6f5d421805e6544a9e6e0d9ed7dd99a0, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("set_identity", method_pointer_377e7e13094e57179d06446d6ecf8372, boost::python::return_internal_reference<>(), "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("set_identity", autowig::method_decorator_377e7e13094e57179d06446d6ecf8372);
    class_44e2f5f99003502389c7c53f7a9c323b.def("set_identity", method_pointer_bcf51d2ced37523ea667c676259dba84, boost::python::return_internal_reference<>(), "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("set_identity", autowig::method_decorator_bcf51d2ced37523ea667c676259dba84);
    class_44e2f5f99003502389c7c53f7a9c323b.def("is_identity", method_pointer_0cc9dd83cb395097b03a5806f2e7c046, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("is_diagonal", method_pointer_aef4b162a84c55c7b8b71868a2f5a8ca, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("is_upper_triangular", method_pointer_b7829747557555d997175043fb29f530, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("is_lower_triangular", method_pointer_89d3ec14fdbd5a58be79303fe65862ca, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("is_unitary", method_pointer_6ea718c17e5d5c3ebb22b42661045ab0, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("force_aligned_access", method_pointer_4c6a0ff0544255169d81c4f374db2f31, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("force_aligned_access", method_pointer_13427397a7655ddaa78c6ef59c6a6663, boost::python::return_internal_reference<>(), "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("force_aligned_access", autowig::method_decorator_13427397a7655ddaa78c6ef59c6a6663);
    class_44e2f5f99003502389c7c53f7a9c323b.def("trace", method_pointer_7b1c9faa1c4255eebcc1e25aeed14335, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("matrix", method_pointer_5fd5bb5a473458b1804faf3d9b157610, boost::python::return_internal_reference<>(), "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("matrix", autowig::method_decorator_5fd5bb5a473458b1804faf3d9b157610);
    class_44e2f5f99003502389c7c53f7a9c323b.def("matrix", method_pointer_3a6852631dd5551ea420d66297e63012, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("determinant", method_pointer_1dc5a422c7c05384a5e7138528ce1269, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("eigenvalues", method_pointer_3831ffaff74554009c8726f3e0a602b2, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("unit_orthogonal", method_pointer_54bf1bab75eb5c64b156aec5d3fad947, "");
    class_44e2f5f99003502389c7c53f7a9c323b.def("make_householder_in_place", method_pointer_b844938ba2aa50b6997c5db0b9d6da3e, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > > >();
    }

}