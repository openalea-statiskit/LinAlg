#include "_ieigen.h"


namespace autowig
{
    void method_decorator_3b54cb323df45b6281d4956ea8b61282(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_37bc46b9afe556179c58b8d4f2a28b60(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_e328ebe2aa7d5c35ac71d0aaabaa5fce(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_57e5a2602f3b5a7fa20ac726539824a4(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_86840cfa1ee35967819edd62c4ef453e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_6918e7a733d2595bbd0a993622919b61()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_fae53f85f2265679a020984863316eca)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::diagonalSize;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_4afe9347fee5548bb63a87a4a8c279f1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::conjugate;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_7b44d78742025d90abc8281decb5f98b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::real;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_3b54cb323df45b6281d4956ea8b61282)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::real;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_653809675a5f523cba00ae49510a913f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_7c3ccca1ecb65ba7875f5a79e8e8de3f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_020977ca8e1e55c19054ed36fcb36a64)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_f7c25e380f4d5eb39cdec065700e680c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_f2d77d72c0f25a0097068820a3546b40)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::hypotNorm;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_cfb8c8168f6f5945bba4337f63afa773)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::normalized;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_477746ec538f52c2a893bde6ecf7e602)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_b19a6d9a2d9b52daaa51406c43c1e144)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_913e61a11ca85b0fa9b96c5fbf31e75e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_7082347fb75253f9a7098b474fa835ab)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::adjointInPlace;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_37bc46b9afe556179c58b8d4f2a28b60)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setIdentity;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_e328ebe2aa7d5c35ac71d0aaabaa5fce)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_175ba4ab8c4a5e17af533b8fe2dc2f17)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_1563c6d1c0c85503b21af57a6ac7c429)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_fee1f9b279415b938107efd760fff91c)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_1a9a37115a625a0896ed133ac45f286a)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_7dd1c715f71d5f4a96ca47da02853083)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::isUnitary;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_7dfdf112afe75b8fb0b0688325413a31)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::forceAlignedAccess;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_57e5a2602f3b5a7fa20ac726539824a4)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::forceAlignedAccess;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_8de2383b22e35493af3ee81c3bc5af06)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_86840cfa1ee35967819edd62c4ef453e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_bab79ace9bc8589185a901a020a63bb9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::matrix;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_a02284b60afb599bae9f70d9b1d66a6f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::determinant;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_4e2e98864a405199973c514fae8c15e4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_93a89c8eeee75a3bae689506d59864a4)(float  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > > > class_6918e7a733d2595bbd0a993622919b61("_MatrixBase_6918e7a733d2595bbd0a993622919b61", "", boost::python::no_init);
    class_6918e7a733d2595bbd0a993622919b61.def("diagonal_size", method_pointer_fae53f85f2265679a020984863316eca, "");
    class_6918e7a733d2595bbd0a993622919b61.def("conjugate", method_pointer_4afe9347fee5548bb63a87a4a8c279f1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6918e7a733d2595bbd0a993622919b61.def("real", method_pointer_7b44d78742025d90abc8281decb5f98b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6918e7a733d2595bbd0a993622919b61.def("real", method_pointer_3b54cb323df45b6281d4956ea8b61282, boost::python::return_internal_reference<>(), "");
    class_6918e7a733d2595bbd0a993622919b61.def("real", autowig::method_decorator_3b54cb323df45b6281d4956ea8b61282);
    class_6918e7a733d2595bbd0a993622919b61.def("squared_norm", method_pointer_653809675a5f523cba00ae49510a913f, "");
    class_6918e7a733d2595bbd0a993622919b61.def("norm", method_pointer_7c3ccca1ecb65ba7875f5a79e8e8de3f, "");
    class_6918e7a733d2595bbd0a993622919b61.def("stable_norm", method_pointer_020977ca8e1e55c19054ed36fcb36a64, "");
    class_6918e7a733d2595bbd0a993622919b61.def("blue_norm", method_pointer_f7c25e380f4d5eb39cdec065700e680c, "");
    class_6918e7a733d2595bbd0a993622919b61.def("hypot_norm", method_pointer_f2d77d72c0f25a0097068820a3546b40, "");
    class_6918e7a733d2595bbd0a993622919b61.def("normalized", method_pointer_cfb8c8168f6f5945bba4337f63afa773, "");
    class_6918e7a733d2595bbd0a993622919b61.def("stable_normalized", method_pointer_477746ec538f52c2a893bde6ecf7e602, "");
    class_6918e7a733d2595bbd0a993622919b61.def("normalize", method_pointer_b19a6d9a2d9b52daaa51406c43c1e144, "");
    class_6918e7a733d2595bbd0a993622919b61.def("stable_normalize", method_pointer_913e61a11ca85b0fa9b96c5fbf31e75e, "");
    class_6918e7a733d2595bbd0a993622919b61.def("adjoint_in_place", method_pointer_7082347fb75253f9a7098b474fa835ab, "");
    class_6918e7a733d2595bbd0a993622919b61.def("set_identity", method_pointer_37bc46b9afe556179c58b8d4f2a28b60, boost::python::return_internal_reference<>(), "");
    class_6918e7a733d2595bbd0a993622919b61.def("set_identity", autowig::method_decorator_37bc46b9afe556179c58b8d4f2a28b60);
    class_6918e7a733d2595bbd0a993622919b61.def("set_identity", method_pointer_e328ebe2aa7d5c35ac71d0aaabaa5fce, boost::python::return_internal_reference<>(), "");
    class_6918e7a733d2595bbd0a993622919b61.def("set_identity", autowig::method_decorator_e328ebe2aa7d5c35ac71d0aaabaa5fce);
    class_6918e7a733d2595bbd0a993622919b61.def("is_identity", method_pointer_175ba4ab8c4a5e17af533b8fe2dc2f17, "");
    class_6918e7a733d2595bbd0a993622919b61.def("is_diagonal", method_pointer_1563c6d1c0c85503b21af57a6ac7c429, "");
    class_6918e7a733d2595bbd0a993622919b61.def("is_upper_triangular", method_pointer_fee1f9b279415b938107efd760fff91c, "");
    class_6918e7a733d2595bbd0a993622919b61.def("is_lower_triangular", method_pointer_1a9a37115a625a0896ed133ac45f286a, "");
    class_6918e7a733d2595bbd0a993622919b61.def("is_unitary", method_pointer_7dd1c715f71d5f4a96ca47da02853083, "");
    class_6918e7a733d2595bbd0a993622919b61.def("force_aligned_access", method_pointer_7dfdf112afe75b8fb0b0688325413a31, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6918e7a733d2595bbd0a993622919b61.def("force_aligned_access", method_pointer_57e5a2602f3b5a7fa20ac726539824a4, boost::python::return_internal_reference<>(), "");
    class_6918e7a733d2595bbd0a993622919b61.def("force_aligned_access", autowig::method_decorator_57e5a2602f3b5a7fa20ac726539824a4);
    class_6918e7a733d2595bbd0a993622919b61.def("trace", method_pointer_8de2383b22e35493af3ee81c3bc5af06, "");
    class_6918e7a733d2595bbd0a993622919b61.def("matrix", method_pointer_86840cfa1ee35967819edd62c4ef453e, boost::python::return_internal_reference<>(), "");
    class_6918e7a733d2595bbd0a993622919b61.def("matrix", autowig::method_decorator_86840cfa1ee35967819edd62c4ef453e);
    class_6918e7a733d2595bbd0a993622919b61.def("matrix", method_pointer_bab79ace9bc8589185a901a020a63bb9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6918e7a733d2595bbd0a993622919b61.def("determinant", method_pointer_a02284b60afb599bae9f70d9b1d66a6f, "");
    class_6918e7a733d2595bbd0a993622919b61.def("unit_orthogonal", method_pointer_4e2e98864a405199973c514fae8c15e4, "");
    class_6918e7a733d2595bbd0a993622919b61.def("make_householder_in_place", method_pointer_93a89c8eeee75a3bae689506d59864a4, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > > >();
    }

}