#include "_ieigen.h"


namespace autowig
{
    void method_decorator_763aacb9640254deaaae94ba55c26ee4(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_e9bb75a99d2e5b199e62616eb630f6c4(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_b55cb5855ff557f9b1758af00b30bcca(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_21a2f77334165e519e85649e5d7f1564(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_5cb84d9f5d0d589782a2baa412c07ad2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_d410c0e768d35b68bb2cdd7fc72da8d3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::diagonalSize;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_2973773adaed514b8fc067219b115231)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_3118d551103257bcb7577b346898b1c0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_01baf000ec6e5762a2579e33fb7ea90f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_20d38ce8e09555758ea113bcbfd1e5a8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_726c1a1599385f45a001f45c3f31b69e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_d4221a4e63575bce9115f1615138da89)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_118d03c2fffb58cb8aae285326abff40)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_904b2fbea7b4505bb7220bd34d016e2e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_5410b1ada0795b71b28fef955ebae4c8)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_bad7718a18655eaa96efe62602c6d1b9)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_763aacb9640254deaaae94ba55c26ee4)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_e9bb75a99d2e5b199e62616eb630f6c4)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_c4c40b4604b95064ac2581e68529710c)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_03790e8817fd5d6180383ce93f989949)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_068ba5a86fef57f896eeb5a5cfd6d3ea)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_0773f07ffcf75d8dbe4703d2146a7f9c)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_b1fbfb9d64c551b6aadb0329a05a8c10)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_0fc541978f105d30a441d0914dc0f058)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_b55cb5855ff557f9b1758af00b30bcca)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::forceAlignedAccess;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_02c9566877e758b9923eb7502ca6999b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_21a2f77334165e519e85649e5d7f1564)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_59a11350f54159239abcbf599ca26ba7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::matrix;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_aecc1ce0515d5c2196348f4251869a80)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_f3b37a5f9de15261a3a7698d5be878a3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_092f18e4254e57e5a7bef8e26ccfaa22)(struct ::std::complex< float >  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > > > class_5cb84d9f5d0d589782a2baa412c07ad2("_MatrixBase_5cb84d9f5d0d589782a2baa412c07ad2", "", boost::python::no_init);
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("diagonal_size", method_pointer_d410c0e768d35b68bb2cdd7fc72da8d3, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("squared_norm", method_pointer_2973773adaed514b8fc067219b115231, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("norm", method_pointer_3118d551103257bcb7577b346898b1c0, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("stable_norm", method_pointer_01baf000ec6e5762a2579e33fb7ea90f, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("blue_norm", method_pointer_20d38ce8e09555758ea113bcbfd1e5a8, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("hypot_norm", method_pointer_726c1a1599385f45a001f45c3f31b69e, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("normalized", method_pointer_d4221a4e63575bce9115f1615138da89, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("stable_normalized", method_pointer_118d03c2fffb58cb8aae285326abff40, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("normalize", method_pointer_904b2fbea7b4505bb7220bd34d016e2e, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("stable_normalize", method_pointer_5410b1ada0795b71b28fef955ebae4c8, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("adjoint_in_place", method_pointer_bad7718a18655eaa96efe62602c6d1b9, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("set_identity", method_pointer_763aacb9640254deaaae94ba55c26ee4, boost::python::return_internal_reference<>(), "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("set_identity", autowig::method_decorator_763aacb9640254deaaae94ba55c26ee4);
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("set_identity", method_pointer_e9bb75a99d2e5b199e62616eb630f6c4, boost::python::return_internal_reference<>(), "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("set_identity", autowig::method_decorator_e9bb75a99d2e5b199e62616eb630f6c4);
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("is_identity", method_pointer_c4c40b4604b95064ac2581e68529710c, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("is_diagonal", method_pointer_03790e8817fd5d6180383ce93f989949, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("is_upper_triangular", method_pointer_068ba5a86fef57f896eeb5a5cfd6d3ea, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("is_lower_triangular", method_pointer_0773f07ffcf75d8dbe4703d2146a7f9c, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("is_unitary", method_pointer_b1fbfb9d64c551b6aadb0329a05a8c10, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("force_aligned_access", method_pointer_0fc541978f105d30a441d0914dc0f058, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("force_aligned_access", method_pointer_b55cb5855ff557f9b1758af00b30bcca, boost::python::return_internal_reference<>(), "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("force_aligned_access", autowig::method_decorator_b55cb5855ff557f9b1758af00b30bcca);
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("trace", method_pointer_02c9566877e758b9923eb7502ca6999b, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("matrix", method_pointer_21a2f77334165e519e85649e5d7f1564, boost::python::return_internal_reference<>(), "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("matrix", autowig::method_decorator_21a2f77334165e519e85649e5d7f1564);
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("matrix", method_pointer_59a11350f54159239abcbf599ca26ba7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("determinant", method_pointer_aecc1ce0515d5c2196348f4251869a80, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("unit_orthogonal", method_pointer_f3b37a5f9de15261a3a7698d5be878a3, "");
    class_5cb84d9f5d0d589782a2baa412c07ad2.def("make_householder_in_place", method_pointer_092f18e4254e57e5a7bef8e26ccfaa22, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > > >();
    }

}