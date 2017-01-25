#include "_ieigen.h"


namespace autowig
{
    void method_decorator_8b2f1af56b1b577d9f4599883612f891(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_c5542ff7769156bf80fa0d5e2b929737(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_df91e1671f105f11b5b25083b243cb8f(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_0e684714abde5664a3df4311b6e232f6(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_1737c97c5a245f2bb9f34bd6cfb665d3(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_98c884df77b759738b06d566a363f778()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_46a6fc5386b85495a96c2b58e1309b57)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::diagonalSize;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_31ab8a7148ec501e9d5964a5cd6e902d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::conjugate;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_039e4d3c1a475844bc65942f42fcaef6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::real;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_8b2f1af56b1b577d9f4599883612f891)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::real;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_c2076d614a9a5564b3beff2e80fb2d7a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::squaredNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_9c7f5aaa726558ba869c3ac08e0affbf)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::norm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_ce4a91b37df153e3863f4594152b909f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::stableNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_9b004ffef3655ef6b356c76040f17baa)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::blueNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_73975958b915532facd58ce24e32b5ee)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::hypotNorm;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_781f547cc727572a9446a3347a5c9809)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::normalized;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_60d83de809a557eab8c4010aee66abf3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_d75b752b26675bc5bdb71ebe0800a95e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_0806a86e864952efbed1daae586b053c)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_0a2aaa57d4325f06ba97fa67b96c82d2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_c5542ff7769156bf80fa0d5e2b929737)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setIdentity;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_df91e1671f105f11b5b25083b243cb8f)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_1466598e0df7584ab9df3d7406c963cd)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_b6049a497d16545789aebbe80f61f621)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_3c4086e357cd5335b684193bc57f07e9)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_ff3899854ccd50d7adb537b73227a075)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_37b90b9a808559e0a2369475560f8bd6)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::isUnitary;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_f823c18638b65aa687c28b3ad32e5cec)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_0e684714abde5664a3df4311b6e232f6)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::forceAlignedAccess;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_426857caa8df511589c3109b99609c37)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_1737c97c5a245f2bb9f34bd6cfb665d3)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_9240dc7367655fd8a93ac7efd51449e4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::matrix;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_b34c295bb64c5dfa88ffbeb876e42d50)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::determinant;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_ec0126d5700e51b2bf236dc1cfc23300)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::unitOrthogonal;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_25daeed3480a591bb2fca3bfea2b9b25)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_3e5bfa4d0e8b5904a18cf80a7521b669)(int  &, int  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > > > class_98c884df77b759738b06d566a363f778("_MatrixBase_98c884df77b759738b06d566a363f778", "", boost::python::no_init);
    class_98c884df77b759738b06d566a363f778.def("diagonal_size", method_pointer_46a6fc5386b85495a96c2b58e1309b57, "");
    class_98c884df77b759738b06d566a363f778.def("conjugate", method_pointer_31ab8a7148ec501e9d5964a5cd6e902d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_98c884df77b759738b06d566a363f778.def("real", method_pointer_039e4d3c1a475844bc65942f42fcaef6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_98c884df77b759738b06d566a363f778.def("real", method_pointer_8b2f1af56b1b577d9f4599883612f891, boost::python::return_internal_reference<>(), "");
    class_98c884df77b759738b06d566a363f778.def("real", autowig::method_decorator_8b2f1af56b1b577d9f4599883612f891);
    class_98c884df77b759738b06d566a363f778.def("squared_norm", method_pointer_c2076d614a9a5564b3beff2e80fb2d7a, "");
    class_98c884df77b759738b06d566a363f778.def("norm", method_pointer_9c7f5aaa726558ba869c3ac08e0affbf, "");
    class_98c884df77b759738b06d566a363f778.def("stable_norm", method_pointer_ce4a91b37df153e3863f4594152b909f, "");
    class_98c884df77b759738b06d566a363f778.def("blue_norm", method_pointer_9b004ffef3655ef6b356c76040f17baa, "");
    class_98c884df77b759738b06d566a363f778.def("hypot_norm", method_pointer_73975958b915532facd58ce24e32b5ee, "");
    class_98c884df77b759738b06d566a363f778.def("normalized", method_pointer_781f547cc727572a9446a3347a5c9809, "");
    class_98c884df77b759738b06d566a363f778.def("stable_normalized", method_pointer_60d83de809a557eab8c4010aee66abf3, "");
    class_98c884df77b759738b06d566a363f778.def("normalize", method_pointer_d75b752b26675bc5bdb71ebe0800a95e, "");
    class_98c884df77b759738b06d566a363f778.def("stable_normalize", method_pointer_0806a86e864952efbed1daae586b053c, "");
    class_98c884df77b759738b06d566a363f778.def("adjoint_in_place", method_pointer_0a2aaa57d4325f06ba97fa67b96c82d2, "");
    class_98c884df77b759738b06d566a363f778.def("set_identity", method_pointer_c5542ff7769156bf80fa0d5e2b929737, boost::python::return_internal_reference<>(), "");
    class_98c884df77b759738b06d566a363f778.def("set_identity", autowig::method_decorator_c5542ff7769156bf80fa0d5e2b929737);
    class_98c884df77b759738b06d566a363f778.def("set_identity", method_pointer_df91e1671f105f11b5b25083b243cb8f, boost::python::return_internal_reference<>(), "");
    class_98c884df77b759738b06d566a363f778.def("set_identity", autowig::method_decorator_df91e1671f105f11b5b25083b243cb8f);
    class_98c884df77b759738b06d566a363f778.def("is_identity", method_pointer_1466598e0df7584ab9df3d7406c963cd, "");
    class_98c884df77b759738b06d566a363f778.def("is_diagonal", method_pointer_b6049a497d16545789aebbe80f61f621, "");
    class_98c884df77b759738b06d566a363f778.def("is_upper_triangular", method_pointer_3c4086e357cd5335b684193bc57f07e9, "");
    class_98c884df77b759738b06d566a363f778.def("is_lower_triangular", method_pointer_ff3899854ccd50d7adb537b73227a075, "");
    class_98c884df77b759738b06d566a363f778.def("is_unitary", method_pointer_37b90b9a808559e0a2369475560f8bd6, "");
    class_98c884df77b759738b06d566a363f778.def("force_aligned_access", method_pointer_f823c18638b65aa687c28b3ad32e5cec, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_98c884df77b759738b06d566a363f778.def("force_aligned_access", method_pointer_0e684714abde5664a3df4311b6e232f6, boost::python::return_internal_reference<>(), "");
    class_98c884df77b759738b06d566a363f778.def("force_aligned_access", autowig::method_decorator_0e684714abde5664a3df4311b6e232f6);
    class_98c884df77b759738b06d566a363f778.def("trace", method_pointer_426857caa8df511589c3109b99609c37, "");
    class_98c884df77b759738b06d566a363f778.def("matrix", method_pointer_1737c97c5a245f2bb9f34bd6cfb665d3, boost::python::return_internal_reference<>(), "");
    class_98c884df77b759738b06d566a363f778.def("matrix", autowig::method_decorator_1737c97c5a245f2bb9f34bd6cfb665d3);
    class_98c884df77b759738b06d566a363f778.def("matrix", method_pointer_9240dc7367655fd8a93ac7efd51449e4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_98c884df77b759738b06d566a363f778.def("determinant", method_pointer_b34c295bb64c5dfa88ffbeb876e42d50, "");
    class_98c884df77b759738b06d566a363f778.def("unit_orthogonal", method_pointer_ec0126d5700e51b2bf236dc1cfc23300, "");
    class_98c884df77b759738b06d566a363f778.def("euler_angles", method_pointer_25daeed3480a591bb2fca3bfea2b9b25, "");
    class_98c884df77b759738b06d566a363f778.def("make_householder_in_place", method_pointer_3e5bfa4d0e8b5904a18cf80a7521b669, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > > >();
    }

}