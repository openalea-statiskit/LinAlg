#include "_ieigen.h"


namespace autowig
{
    void method_decorator_1bdc7f6545bc5516a5b901b4b31eb76c(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_89c0e2a0d18b500197cb2bf1ebbf1a0e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_655b028418e655c892761900eff56163(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_d5ba1530acf75f4cbf6eeada6772c041(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_a47b93f9149c5d43937b385e0c1777b0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_d31b822fa9c15922bd4281283e9f306a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::diagonalSize;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_7fc9ec5bcf5c57b69ede7463f21567cd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_87ab516d97cd5888a90fec6126635ce8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_87544aa7c3c05d679fdeede62e3a4871)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_1e4d386dfd3f5da793bef9a8b59437b5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_04f821f384bf5412a4620a98a52c2637)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_5971047cd6fd58b8a6eda3fac76c60e8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_a21e2a34a38056bdac57b7d088f97d30)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_a640d4423cf25ea48c231b674bf3bd48)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_a53879bd6ada58b2ba6fc1dc01ebb494)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_c10836be0b19575390d1ded540a8869a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_1bdc7f6545bc5516a5b901b4b31eb76c)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_89c0e2a0d18b500197cb2bf1ebbf1a0e)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_a0ef0403d8af5974be75b0d3470ec6c6)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_2fe0b0787a6755b1a47d76acecc01150)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_ad443ca9d03850df82ee241f496b2299)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_493c37b09a355b31931f1d0e1057b603)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_1a343d0be5a05f1ab08895abe5a82b64)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_a55b852565ce5dbeb78c1ab15541b25c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_655b028418e655c892761900eff56163)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::forceAlignedAccess;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_e1d7010185f652488b464b9dbf22ab0b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_d5ba1530acf75f4cbf6eeada6772c041)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_719732b6341450c397e32975e3f195d5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::matrix;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_11db47a8f5365bfe86f8b4e6595f628d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_d608453d68865f1ba012397a88bbf9a9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_58226f87a97b55c29196add70c5fb97a)(struct ::std::complex< float >  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > > > class_a47b93f9149c5d43937b385e0c1777b0("_MatrixBase_a47b93f9149c5d43937b385e0c1777b0", "", boost::python::no_init);
    class_a47b93f9149c5d43937b385e0c1777b0.def("diagonal_size", method_pointer_d31b822fa9c15922bd4281283e9f306a, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("squared_norm", method_pointer_7fc9ec5bcf5c57b69ede7463f21567cd, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("norm", method_pointer_87ab516d97cd5888a90fec6126635ce8, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("stable_norm", method_pointer_87544aa7c3c05d679fdeede62e3a4871, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("blue_norm", method_pointer_1e4d386dfd3f5da793bef9a8b59437b5, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("hypot_norm", method_pointer_04f821f384bf5412a4620a98a52c2637, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("normalized", method_pointer_5971047cd6fd58b8a6eda3fac76c60e8, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("stable_normalized", method_pointer_a21e2a34a38056bdac57b7d088f97d30, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("normalize", method_pointer_a640d4423cf25ea48c231b674bf3bd48, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("stable_normalize", method_pointer_a53879bd6ada58b2ba6fc1dc01ebb494, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("adjoint_in_place", method_pointer_c10836be0b19575390d1ded540a8869a, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("set_identity", method_pointer_1bdc7f6545bc5516a5b901b4b31eb76c, boost::python::return_internal_reference<>(), "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("set_identity", autowig::method_decorator_1bdc7f6545bc5516a5b901b4b31eb76c);
    class_a47b93f9149c5d43937b385e0c1777b0.def("set_identity", method_pointer_89c0e2a0d18b500197cb2bf1ebbf1a0e, boost::python::return_internal_reference<>(), "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("set_identity", autowig::method_decorator_89c0e2a0d18b500197cb2bf1ebbf1a0e);
    class_a47b93f9149c5d43937b385e0c1777b0.def("is_identity", method_pointer_a0ef0403d8af5974be75b0d3470ec6c6, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("is_diagonal", method_pointer_2fe0b0787a6755b1a47d76acecc01150, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("is_upper_triangular", method_pointer_ad443ca9d03850df82ee241f496b2299, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("is_lower_triangular", method_pointer_493c37b09a355b31931f1d0e1057b603, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("is_unitary", method_pointer_1a343d0be5a05f1ab08895abe5a82b64, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("force_aligned_access", method_pointer_a55b852565ce5dbeb78c1ab15541b25c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("force_aligned_access", method_pointer_655b028418e655c892761900eff56163, boost::python::return_internal_reference<>(), "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("force_aligned_access", autowig::method_decorator_655b028418e655c892761900eff56163);
    class_a47b93f9149c5d43937b385e0c1777b0.def("trace", method_pointer_e1d7010185f652488b464b9dbf22ab0b, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("matrix", method_pointer_d5ba1530acf75f4cbf6eeada6772c041, boost::python::return_internal_reference<>(), "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("matrix", autowig::method_decorator_d5ba1530acf75f4cbf6eeada6772c041);
    class_a47b93f9149c5d43937b385e0c1777b0.def("matrix", method_pointer_719732b6341450c397e32975e3f195d5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("determinant", method_pointer_11db47a8f5365bfe86f8b4e6595f628d, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("unit_orthogonal", method_pointer_d608453d68865f1ba012397a88bbf9a9, "");
    class_a47b93f9149c5d43937b385e0c1777b0.def("make_householder_in_place", method_pointer_58226f87a97b55c29196add70c5fb97a, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > > >();
    }

}