#include "_ieigen.h"


namespace autowig
{
    void method_decorator_564c36a435f659de8a6e9162227c5290(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_91a1d132918757d48e81f3eb4e3eeb72(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_7f4f520df3ad56bcb28b3ec6b1541036(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_658e6b2f0ef254a1b2f047b4aa4632ac(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_fc5a3172742d5789b52345013259f8da()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_34fc0f5ca4b456029ce64bab4c52fa23)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::diagonalSize;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_d81620dd8a6f5ddbaad1536cb7e3af9e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_c5def89cd78e581fac283d820488d7b1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_14f39f7b969552d297a797daa93ea1bc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_04d66cfc96b2568f813e3472f3861854)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_8f85e507dc7758bf97080a1cf87804fb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_f629647b4c255bf2b3f22d028fe8a581)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_ba43d466a653545287e451fa1b65f704)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_e6c1c8e34b7657c183c95b3e42748cd4)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_74dcbed22e585eaaa37ce87430d2eac9)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_564c36a435f659de8a6e9162227c5290)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_91a1d132918757d48e81f3eb4e3eeb72)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_1f27d0082b7d59948b4967cc6321b456)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_79d8ca78dfd6558dbd49c6b3b40c6996)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_34f428b031f85e169db54deaded56077)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_e80782bbbb1e5464a161f0308194a204)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_e4321af4eef0585eb39bd5de1620489c)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_de9a008aba9b500b91c0cce38a61a8f1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_7f4f520df3ad56bcb28b3ec6b1541036)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::forceAlignedAccess;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_d274482b02235842a447b4211c1aaa3b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_658e6b2f0ef254a1b2f047b4aa4632ac)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_8a776d4626785b308194a797b9c8091b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::matrix;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_94cbae08278e57fe9ba0ff099b8ccb56)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::fullPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_37ae706f39305ea0b557fc82a760df4c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::partialPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_89a629e0d2365406beeb5a24afa44300)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::lu;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_f8c790217e285cf4ba40af571bf6d44f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::determinant;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_63254bab505e5bf2b7b6083c772c3cfa)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::llt;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_56252cda219c5d6093026d202ada0592)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::ldlt;
    class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_a3ca33bad00c5f4986170d0b7f6b665f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::householderQr;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_1c32c4a37c15504b8c5925af6d7a22c6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::colPivHouseholderQr;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_e111146438ab5517bc2d96c77e4e2a63)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::fullPivHouseholderQr;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_65977d70e32f5bdebf73532c34ba6ff6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::eigenvalues;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_1dfbd5c1d5425d02b9dcbeadab4339c9)(unsigned int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::jacobiSvd;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_ead5201d508c5b18a213cfa4e8930197)(struct ::std::complex< float >  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > class_fc5a3172742d5789b52345013259f8da("_MatrixBase_fc5a3172742d5789b52345013259f8da", "", boost::python::no_init);
    class_fc5a3172742d5789b52345013259f8da.def("diagonal_size", method_pointer_34fc0f5ca4b456029ce64bab4c52fa23, "");
    class_fc5a3172742d5789b52345013259f8da.def("squared_norm", method_pointer_d81620dd8a6f5ddbaad1536cb7e3af9e, "");
    class_fc5a3172742d5789b52345013259f8da.def("norm", method_pointer_c5def89cd78e581fac283d820488d7b1, "");
    class_fc5a3172742d5789b52345013259f8da.def("blue_norm", method_pointer_14f39f7b969552d297a797daa93ea1bc, "");
    class_fc5a3172742d5789b52345013259f8da.def("hypot_norm", method_pointer_04d66cfc96b2568f813e3472f3861854, "");
    class_fc5a3172742d5789b52345013259f8da.def("normalized", method_pointer_8f85e507dc7758bf97080a1cf87804fb, "");
    class_fc5a3172742d5789b52345013259f8da.def("stable_normalized", method_pointer_f629647b4c255bf2b3f22d028fe8a581, "");
    class_fc5a3172742d5789b52345013259f8da.def("normalize", method_pointer_ba43d466a653545287e451fa1b65f704, "");
    class_fc5a3172742d5789b52345013259f8da.def("stable_normalize", method_pointer_e6c1c8e34b7657c183c95b3e42748cd4, "");
    class_fc5a3172742d5789b52345013259f8da.def("adjoint_in_place", method_pointer_74dcbed22e585eaaa37ce87430d2eac9, "");
    class_fc5a3172742d5789b52345013259f8da.def("set_identity", method_pointer_564c36a435f659de8a6e9162227c5290, boost::python::return_internal_reference<>(), "");
    class_fc5a3172742d5789b52345013259f8da.def("set_identity", autowig::method_decorator_564c36a435f659de8a6e9162227c5290);
    class_fc5a3172742d5789b52345013259f8da.def("set_identity", method_pointer_91a1d132918757d48e81f3eb4e3eeb72, boost::python::return_internal_reference<>(), "");
    class_fc5a3172742d5789b52345013259f8da.def("set_identity", autowig::method_decorator_91a1d132918757d48e81f3eb4e3eeb72);
    class_fc5a3172742d5789b52345013259f8da.def("is_identity", method_pointer_1f27d0082b7d59948b4967cc6321b456, "");
    class_fc5a3172742d5789b52345013259f8da.def("is_diagonal", method_pointer_79d8ca78dfd6558dbd49c6b3b40c6996, "");
    class_fc5a3172742d5789b52345013259f8da.def("is_upper_triangular", method_pointer_34f428b031f85e169db54deaded56077, "");
    class_fc5a3172742d5789b52345013259f8da.def("is_lower_triangular", method_pointer_e80782bbbb1e5464a161f0308194a204, "");
    class_fc5a3172742d5789b52345013259f8da.def("is_unitary", method_pointer_e4321af4eef0585eb39bd5de1620489c, "");
    class_fc5a3172742d5789b52345013259f8da.def("force_aligned_access", method_pointer_de9a008aba9b500b91c0cce38a61a8f1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc5a3172742d5789b52345013259f8da.def("force_aligned_access", method_pointer_7f4f520df3ad56bcb28b3ec6b1541036, boost::python::return_internal_reference<>(), "");
    class_fc5a3172742d5789b52345013259f8da.def("force_aligned_access", autowig::method_decorator_7f4f520df3ad56bcb28b3ec6b1541036);
    class_fc5a3172742d5789b52345013259f8da.def("trace", method_pointer_d274482b02235842a447b4211c1aaa3b, "");
    class_fc5a3172742d5789b52345013259f8da.def("matrix", method_pointer_658e6b2f0ef254a1b2f047b4aa4632ac, boost::python::return_internal_reference<>(), "");
    class_fc5a3172742d5789b52345013259f8da.def("matrix", autowig::method_decorator_658e6b2f0ef254a1b2f047b4aa4632ac);
    class_fc5a3172742d5789b52345013259f8da.def("matrix", method_pointer_8a776d4626785b308194a797b9c8091b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc5a3172742d5789b52345013259f8da.def("full_piv_lu", method_pointer_94cbae08278e57fe9ba0ff099b8ccb56, "");
    class_fc5a3172742d5789b52345013259f8da.def("partial_piv_lu", method_pointer_37ae706f39305ea0b557fc82a760df4c, "");
    class_fc5a3172742d5789b52345013259f8da.def("lu", method_pointer_89a629e0d2365406beeb5a24afa44300, "");
    class_fc5a3172742d5789b52345013259f8da.def("determinant", method_pointer_f8c790217e285cf4ba40af571bf6d44f, "");
    class_fc5a3172742d5789b52345013259f8da.def("llt", method_pointer_63254bab505e5bf2b7b6083c772c3cfa, "");
    class_fc5a3172742d5789b52345013259f8da.def("ldlt", method_pointer_56252cda219c5d6093026d202ada0592, "");
    class_fc5a3172742d5789b52345013259f8da.def("householder_qr", method_pointer_a3ca33bad00c5f4986170d0b7f6b665f, "");
    class_fc5a3172742d5789b52345013259f8da.def("col_piv_householder_qr", method_pointer_1c32c4a37c15504b8c5925af6d7a22c6, "");
    class_fc5a3172742d5789b52345013259f8da.def("full_piv_householder_qr", method_pointer_e111146438ab5517bc2d96c77e4e2a63, "");
    class_fc5a3172742d5789b52345013259f8da.def("eigenvalues", method_pointer_65977d70e32f5bdebf73532c34ba6ff6, "");
    class_fc5a3172742d5789b52345013259f8da.def("jacobi_svd", method_pointer_1dfbd5c1d5425d02b9dcbeadab4339c9, "");
    class_fc5a3172742d5789b52345013259f8da.def("make_householder_in_place", method_pointer_ead5201d508c5b18a213cfa4e8930197, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > >();
    }

}