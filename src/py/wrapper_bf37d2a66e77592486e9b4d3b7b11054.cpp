#include "_ieigen.h"


namespace autowig
{
    void method_decorator_8e18e1d85db25fb78f9a969ef6a3e862(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_4c68a6ba1cae51649965fa4a76c0d95f(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_e391704bb4305ec295a184223541f8c6(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_c6bebd40ef6a5a68889a70ebb250a8da(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_bf37d2a66e77592486e9b4d3b7b11054()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_67ab52eb9bf95b858152fd4751c751b4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::diagonalSize;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_69a35e45f9ef5534b8701325f3655db4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_99848c7cb6ec5bddbecfdb5c4260c36e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_44413a8948b35b37b532ccfd8b80ffc8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_48c7fadad08855c7a6440f19fa2be278)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_6116fa7da6455f4aa9e44cd3cc81b258)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_6eaf5efcbcff55d2a1320b5f6eca68c4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_f1d7926a65865e29ad57eec5c263daf7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_335f2879e176589c9022ae4b99fb1944)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_71663464deb1517399feb3414d0cc1f7)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_0ee6152760a452d1ae3a91bd63b68eee)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_8e18e1d85db25fb78f9a969ef6a3e862)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_4c68a6ba1cae51649965fa4a76c0d95f)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_1ecf39689ebc596f926d82fd0aaef477)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_214268e5e8475ed2bee32a421bdf4dde)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_4c066d55638855dfb3fae3786dd6c951)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_9bda0e643bdf55c697859b8cbb97a4cc)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_8e91ffe08adf5b11829171053b3301d4)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_1b3b208bfe6553c2840631806f5446aa)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_e391704bb4305ec295a184223541f8c6)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::forceAlignedAccess;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_6377a6b46b4c589aa4d846dc37043a84)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_c6bebd40ef6a5a68889a70ebb250a8da)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_40eb93398fd252bdbc6c1ccc6b52b5dd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::matrix;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_ee6439a5fecf5c1083433ff9b500b065)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_670f18f674da5f64883990bcf7834df8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::eigenvalues;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_55e8aaa4a3f158539d6c6f2f09b4640d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::unitOrthogonal;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_a3b158b5d6af54af9fbcd77cbd5a8313)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_c94763080a3e5e20ad5158a4c6fc7aeb)(struct ::std::complex< float >  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > class_bf37d2a66e77592486e9b4d3b7b11054("_MatrixBase_bf37d2a66e77592486e9b4d3b7b11054", "", boost::python::no_init);
    class_bf37d2a66e77592486e9b4d3b7b11054.def("diagonal_size", method_pointer_67ab52eb9bf95b858152fd4751c751b4, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("squared_norm", method_pointer_69a35e45f9ef5534b8701325f3655db4, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("norm", method_pointer_99848c7cb6ec5bddbecfdb5c4260c36e, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("stable_norm", method_pointer_44413a8948b35b37b532ccfd8b80ffc8, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("blue_norm", method_pointer_48c7fadad08855c7a6440f19fa2be278, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("hypot_norm", method_pointer_6116fa7da6455f4aa9e44cd3cc81b258, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("normalized", method_pointer_6eaf5efcbcff55d2a1320b5f6eca68c4, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("stable_normalized", method_pointer_f1d7926a65865e29ad57eec5c263daf7, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("normalize", method_pointer_335f2879e176589c9022ae4b99fb1944, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("stable_normalize", method_pointer_71663464deb1517399feb3414d0cc1f7, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("adjoint_in_place", method_pointer_0ee6152760a452d1ae3a91bd63b68eee, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("set_identity", method_pointer_8e18e1d85db25fb78f9a969ef6a3e862, boost::python::return_internal_reference<>(), "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("set_identity", autowig::method_decorator_8e18e1d85db25fb78f9a969ef6a3e862);
    class_bf37d2a66e77592486e9b4d3b7b11054.def("set_identity", method_pointer_4c68a6ba1cae51649965fa4a76c0d95f, boost::python::return_internal_reference<>(), "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("set_identity", autowig::method_decorator_4c68a6ba1cae51649965fa4a76c0d95f);
    class_bf37d2a66e77592486e9b4d3b7b11054.def("is_identity", method_pointer_1ecf39689ebc596f926d82fd0aaef477, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("is_diagonal", method_pointer_214268e5e8475ed2bee32a421bdf4dde, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("is_upper_triangular", method_pointer_4c066d55638855dfb3fae3786dd6c951, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("is_lower_triangular", method_pointer_9bda0e643bdf55c697859b8cbb97a4cc, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("is_unitary", method_pointer_8e91ffe08adf5b11829171053b3301d4, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("force_aligned_access", method_pointer_1b3b208bfe6553c2840631806f5446aa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("force_aligned_access", method_pointer_e391704bb4305ec295a184223541f8c6, boost::python::return_internal_reference<>(), "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("force_aligned_access", autowig::method_decorator_e391704bb4305ec295a184223541f8c6);
    class_bf37d2a66e77592486e9b4d3b7b11054.def("trace", method_pointer_6377a6b46b4c589aa4d846dc37043a84, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("matrix", method_pointer_c6bebd40ef6a5a68889a70ebb250a8da, boost::python::return_internal_reference<>(), "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("matrix", autowig::method_decorator_c6bebd40ef6a5a68889a70ebb250a8da);
    class_bf37d2a66e77592486e9b4d3b7b11054.def("matrix", method_pointer_40eb93398fd252bdbc6c1ccc6b52b5dd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("determinant", method_pointer_ee6439a5fecf5c1083433ff9b500b065, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("eigenvalues", method_pointer_670f18f674da5f64883990bcf7834df8, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("unit_orthogonal", method_pointer_55e8aaa4a3f158539d6c6f2f09b4640d, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("euler_angles", method_pointer_a3b158b5d6af54af9fbcd77cbd5a8313, "");
    class_bf37d2a66e77592486e9b4d3b7b11054.def("make_householder_in_place", method_pointer_c94763080a3e5e20ad5158a4c6fc7aeb, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > >();
    }

}