#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b24b0af981265e96bc3081fd757bfc0f(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_1174dbd2ee7259d19a676d519b82899a(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_2e0d56de8d37507bab1bae6fb48e2b0e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_d6abfdee00a55d10994ee28921da8910(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_dbae73a968f754c3bf1d57250e00304a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_57d1fcf9863551a49cf1c91a2776df16)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::diagonalSize;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_e60b88a165a0520db38d9fa7ef7fc0ec)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_45c36db9efec5ac9af8dec9778a774c5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_0c3ae6dd758e573d8b946514c5e77733)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_488a30abd0f65343900cd4f44ed53244)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_162d2a38eac45185b15135f510b6ed49)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_fc37208858c75c088e4285c54aba3d24)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_6c299d421c0755e39d31635b1f0a318d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_0b9e60feacdb5343b1ba9988940152cb)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_f80b6036493d57c29a8bb267066f68b1)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_94922b6f64df5839bc90cebbe75116c4)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_b24b0af981265e96bc3081fd757bfc0f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_1174dbd2ee7259d19a676d519b82899a)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_7d9f97145f09508eba973ab63f4deb05)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_383664d2062e584381890496299c36e9)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_e5efcac77d7158af93c0c948ee5a348c)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_366f1c6507a8507d919a6216749dc14e)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_d6af9d3a850d5215875e9221d2bea53c)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_48aa6823c3bb5b8e8e3520bb11e414b1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_2e0d56de8d37507bab1bae6fb48e2b0e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::forceAlignedAccess;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_f3f844dac10c5de185ca609642b31dee)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_d6abfdee00a55d10994ee28921da8910)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_c6e72ed7a3cd5d3983624a661c3c8578)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::matrix;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_a649a1b5d7b252beae874377999e6383)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_6c345c74bcfe58bf89290803f841cedd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_7bde76436cd553799f170206c29c9a4d)(struct ::std::complex< float >  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > > > class_dbae73a968f754c3bf1d57250e00304a("_MatrixBase_dbae73a968f754c3bf1d57250e00304a", "", boost::python::no_init);
    class_dbae73a968f754c3bf1d57250e00304a.def("diagonal_size", method_pointer_57d1fcf9863551a49cf1c91a2776df16, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("squared_norm", method_pointer_e60b88a165a0520db38d9fa7ef7fc0ec, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("norm", method_pointer_45c36db9efec5ac9af8dec9778a774c5, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("stable_norm", method_pointer_0c3ae6dd758e573d8b946514c5e77733, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("blue_norm", method_pointer_488a30abd0f65343900cd4f44ed53244, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("hypot_norm", method_pointer_162d2a38eac45185b15135f510b6ed49, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("normalized", method_pointer_fc37208858c75c088e4285c54aba3d24, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("stable_normalized", method_pointer_6c299d421c0755e39d31635b1f0a318d, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("normalize", method_pointer_0b9e60feacdb5343b1ba9988940152cb, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("stable_normalize", method_pointer_f80b6036493d57c29a8bb267066f68b1, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("adjoint_in_place", method_pointer_94922b6f64df5839bc90cebbe75116c4, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("set_identity", method_pointer_b24b0af981265e96bc3081fd757bfc0f, boost::python::return_internal_reference<>(), "");
    class_dbae73a968f754c3bf1d57250e00304a.def("set_identity", autowig::method_decorator_b24b0af981265e96bc3081fd757bfc0f);
    class_dbae73a968f754c3bf1d57250e00304a.def("set_identity", method_pointer_1174dbd2ee7259d19a676d519b82899a, boost::python::return_internal_reference<>(), "");
    class_dbae73a968f754c3bf1d57250e00304a.def("set_identity", autowig::method_decorator_1174dbd2ee7259d19a676d519b82899a);
    class_dbae73a968f754c3bf1d57250e00304a.def("is_identity", method_pointer_7d9f97145f09508eba973ab63f4deb05, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("is_diagonal", method_pointer_383664d2062e584381890496299c36e9, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("is_upper_triangular", method_pointer_e5efcac77d7158af93c0c948ee5a348c, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("is_lower_triangular", method_pointer_366f1c6507a8507d919a6216749dc14e, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("is_unitary", method_pointer_d6af9d3a850d5215875e9221d2bea53c, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("force_aligned_access", method_pointer_48aa6823c3bb5b8e8e3520bb11e414b1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dbae73a968f754c3bf1d57250e00304a.def("force_aligned_access", method_pointer_2e0d56de8d37507bab1bae6fb48e2b0e, boost::python::return_internal_reference<>(), "");
    class_dbae73a968f754c3bf1d57250e00304a.def("force_aligned_access", autowig::method_decorator_2e0d56de8d37507bab1bae6fb48e2b0e);
    class_dbae73a968f754c3bf1d57250e00304a.def("trace", method_pointer_f3f844dac10c5de185ca609642b31dee, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("matrix", method_pointer_d6abfdee00a55d10994ee28921da8910, boost::python::return_internal_reference<>(), "");
    class_dbae73a968f754c3bf1d57250e00304a.def("matrix", autowig::method_decorator_d6abfdee00a55d10994ee28921da8910);
    class_dbae73a968f754c3bf1d57250e00304a.def("matrix", method_pointer_c6e72ed7a3cd5d3983624a661c3c8578, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dbae73a968f754c3bf1d57250e00304a.def("determinant", method_pointer_a649a1b5d7b252beae874377999e6383, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("unit_orthogonal", method_pointer_6c345c74bcfe58bf89290803f841cedd, "");
    class_dbae73a968f754c3bf1d57250e00304a.def("make_householder_in_place", method_pointer_7bde76436cd553799f170206c29c9a4d, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > > >();
    }

}