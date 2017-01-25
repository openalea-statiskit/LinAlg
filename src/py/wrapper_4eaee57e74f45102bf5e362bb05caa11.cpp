#include "_ieigen.h"


namespace autowig
{
    void method_decorator_9f7158764a465aef994d849654903ea2(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_752895e4d24d5b368c576e06f0da039a(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_a6193427ed2c5209af975bd44c661232(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_4d2dc661401d5cc09b6da912357c5d5f(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_4eaee57e74f45102bf5e362bb05caa11()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_e46080487b14536cad4c7b9cc12efdb4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::diagonalSize;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_fce43efa547a51e69336848aa388f6a6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_92281955fc655be1967b57435d7e5f97)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_47d9a6c034445560a66c9957b630ffe9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_4b30abee85f554af8d07ddbe70408208)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_ffd26e1d1440512a91e4aaba5cd31dbc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_c4e205874988579cbbb84e4914dbad06)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_631bc76fd47656628a81056890f2e68a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_02dd9c607de45ddaaa72c1af5d37bd68)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_b7f217f485965088865a4dcc310844a5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_fc14a465d7ff573eafd22f11b9fbc32a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_9f7158764a465aef994d849654903ea2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_752895e4d24d5b368c576e06f0da039a)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_6b563cff614958e888d00ea0a5039d07)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_8b1c7df111095fd5be8e48685483f2c2)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_3fe7aeab7fdf5e309742088219b46956)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_7ef5d9d83ec6516f8affbdc1b0032191)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_e20c163085985d118c1d68e2b0963a32)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_19fdaef01c5e52288906b1dabce4f89e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_a6193427ed2c5209af975bd44c661232)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::forceAlignedAccess;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_670a629cd69b5ae4b570060503881599)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_4d2dc661401d5cc09b6da912357c5d5f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_d71a2f37c7685cd9ada24b0cbb16da9b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::matrix;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_13d482833b4151789551311cf1e3d0de)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_7546f1b5d1e55cfab9afaffcc40015f0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::eigenvalues;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_66e46b7028d1510080e3512eff29637f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::unitOrthogonal;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_7755c8a48cf05d6dbfa2588c2e6a2e1d)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 1, 4, 1, 1, 4 > >::*method_pointer_00334cdc9d7e5fdf9144a3aafef08d6e)(struct ::std::complex< float >  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > > > class_4eaee57e74f45102bf5e362bb05caa11("_MatrixBase_4eaee57e74f45102bf5e362bb05caa11", "", boost::python::no_init);
    class_4eaee57e74f45102bf5e362bb05caa11.def("diagonal_size", method_pointer_e46080487b14536cad4c7b9cc12efdb4, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("squared_norm", method_pointer_fce43efa547a51e69336848aa388f6a6, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("norm", method_pointer_92281955fc655be1967b57435d7e5f97, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("stable_norm", method_pointer_47d9a6c034445560a66c9957b630ffe9, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("blue_norm", method_pointer_4b30abee85f554af8d07ddbe70408208, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("hypot_norm", method_pointer_ffd26e1d1440512a91e4aaba5cd31dbc, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("normalized", method_pointer_c4e205874988579cbbb84e4914dbad06, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("stable_normalized", method_pointer_631bc76fd47656628a81056890f2e68a, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("normalize", method_pointer_02dd9c607de45ddaaa72c1af5d37bd68, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("stable_normalize", method_pointer_b7f217f485965088865a4dcc310844a5, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("adjoint_in_place", method_pointer_fc14a465d7ff573eafd22f11b9fbc32a, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("set_identity", method_pointer_9f7158764a465aef994d849654903ea2, boost::python::return_internal_reference<>(), "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("set_identity", autowig::method_decorator_9f7158764a465aef994d849654903ea2);
    class_4eaee57e74f45102bf5e362bb05caa11.def("set_identity", method_pointer_752895e4d24d5b368c576e06f0da039a, boost::python::return_internal_reference<>(), "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("set_identity", autowig::method_decorator_752895e4d24d5b368c576e06f0da039a);
    class_4eaee57e74f45102bf5e362bb05caa11.def("is_identity", method_pointer_6b563cff614958e888d00ea0a5039d07, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("is_diagonal", method_pointer_8b1c7df111095fd5be8e48685483f2c2, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("is_upper_triangular", method_pointer_3fe7aeab7fdf5e309742088219b46956, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("is_lower_triangular", method_pointer_7ef5d9d83ec6516f8affbdc1b0032191, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("is_unitary", method_pointer_e20c163085985d118c1d68e2b0963a32, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("force_aligned_access", method_pointer_19fdaef01c5e52288906b1dabce4f89e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("force_aligned_access", method_pointer_a6193427ed2c5209af975bd44c661232, boost::python::return_internal_reference<>(), "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("force_aligned_access", autowig::method_decorator_a6193427ed2c5209af975bd44c661232);
    class_4eaee57e74f45102bf5e362bb05caa11.def("trace", method_pointer_670a629cd69b5ae4b570060503881599, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("matrix", method_pointer_4d2dc661401d5cc09b6da912357c5d5f, boost::python::return_internal_reference<>(), "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("matrix", autowig::method_decorator_4d2dc661401d5cc09b6da912357c5d5f);
    class_4eaee57e74f45102bf5e362bb05caa11.def("matrix", method_pointer_d71a2f37c7685cd9ada24b0cbb16da9b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("determinant", method_pointer_13d482833b4151789551311cf1e3d0de, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("eigenvalues", method_pointer_7546f1b5d1e55cfab9afaffcc40015f0, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("unit_orthogonal", method_pointer_66e46b7028d1510080e3512eff29637f, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("euler_angles", method_pointer_7755c8a48cf05d6dbfa2588c2e6a2e1d, "");
    class_4eaee57e74f45102bf5e362bb05caa11.def("make_householder_in_place", method_pointer_00334cdc9d7e5fdf9144a3aafef08d6e, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 4, 1, 1, 4 > > > >();
    }

}