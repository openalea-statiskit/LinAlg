#include "_ieigen.h"


namespace autowig
{
    void method_decorator_22dc117d540e5c49923fecf9e2981098(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_c92260af372e5e478c10c664143b2c9e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_f71a9d0562005aaba5c7c07df6654e33(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_385888581f865dd7b0124a5042e0b77b(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_32c3bfc9b6a85963be49a1aa7ba70185()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_b12900f07e745688bee823ae6476ed55)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::diagonalSize;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_678d806ac920524b8d144a7fcc1a4ce8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_1207b411023f57a597fc5cf10395d7ce)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_4fa7136733a15b97a4570794065c6717)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_fdcfe083f72e59a69da5f7b95273f1d7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_dc086b94997a5515a27a5325ad85fc70)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_6f957bfdd9175ab5aaea2e9dcc625164)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_fff26a4ddf435c178411d1c8d8371c73)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_fcda93116eba5f389477d3a80af3154b)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_cca4bfbeb8e15d32ae3f5438de717d51)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_22dc117d540e5c49923fecf9e2981098)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_c92260af372e5e478c10c664143b2c9e)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_446c4da3dc075d09ab5b4c5ce5c8a657)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_bec11b212d4b5cdc99f5a26318276880)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_ce47a8f35f515ae0bfdab60bbb87d663)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_10e3e22da3ba5af7ab1685c648cdfc9c)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_fa07f98497755e33bb877922f2cccc4e)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_8b5d0d5362c157d8a68296b6de57dd20)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_f71a9d0562005aaba5c7c07df6654e33)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::forceAlignedAccess;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_0387853c505b5fa1bcef882f447710f2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_385888581f865dd7b0124a5042e0b77b)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_131b4f4754e950f4993ed2b946e0fd7e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::matrix;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_e212e9f2c13a57ad9fc777100ef90406)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::fullPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_501516a35b8751309670bef9304111e8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::partialPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_a01d69723a34575bbba5b750ba724247)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::lu;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_35323545a1225454ab6c8a253edc1a60)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::determinant;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_fcc51acc260e5cbca6db24813c60abb7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::llt;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_173e067c1d9d5339b9a6415975781d36)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::ldlt;
    class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_a852fe3614905b0e879bec7e21c04dee)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::householderQr;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_2354ef14e28251c58a00734787ed6688)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::colPivHouseholderQr;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_66345a6e0fca55239f4b581347facbb3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::fullPivHouseholderQr;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_6044fe32825c5c9db1bb9465ea396339)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::eigenvalues;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_11083afb13f45b1cbda17b7af8c7e5b1)(unsigned int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::jacobiSvd;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_d4d407c8d5bd5162b79ee3722370e77b)(struct ::std::complex< double >  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > class_32c3bfc9b6a85963be49a1aa7ba70185("_MatrixBase_32c3bfc9b6a85963be49a1aa7ba70185", "", boost::python::no_init);
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("diagonal_size", method_pointer_b12900f07e745688bee823ae6476ed55, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("squared_norm", method_pointer_678d806ac920524b8d144a7fcc1a4ce8, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("norm", method_pointer_1207b411023f57a597fc5cf10395d7ce, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("blue_norm", method_pointer_4fa7136733a15b97a4570794065c6717, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("hypot_norm", method_pointer_fdcfe083f72e59a69da5f7b95273f1d7, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("normalized", method_pointer_dc086b94997a5515a27a5325ad85fc70, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("stable_normalized", method_pointer_6f957bfdd9175ab5aaea2e9dcc625164, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("normalize", method_pointer_fff26a4ddf435c178411d1c8d8371c73, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("stable_normalize", method_pointer_fcda93116eba5f389477d3a80af3154b, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("adjoint_in_place", method_pointer_cca4bfbeb8e15d32ae3f5438de717d51, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("set_identity", method_pointer_22dc117d540e5c49923fecf9e2981098, boost::python::return_internal_reference<>(), "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("set_identity", autowig::method_decorator_22dc117d540e5c49923fecf9e2981098);
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("set_identity", method_pointer_c92260af372e5e478c10c664143b2c9e, boost::python::return_internal_reference<>(), "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("set_identity", autowig::method_decorator_c92260af372e5e478c10c664143b2c9e);
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("is_identity", method_pointer_446c4da3dc075d09ab5b4c5ce5c8a657, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("is_diagonal", method_pointer_bec11b212d4b5cdc99f5a26318276880, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("is_upper_triangular", method_pointer_ce47a8f35f515ae0bfdab60bbb87d663, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("is_lower_triangular", method_pointer_10e3e22da3ba5af7ab1685c648cdfc9c, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("is_unitary", method_pointer_fa07f98497755e33bb877922f2cccc4e, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("force_aligned_access", method_pointer_8b5d0d5362c157d8a68296b6de57dd20, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("force_aligned_access", method_pointer_f71a9d0562005aaba5c7c07df6654e33, boost::python::return_internal_reference<>(), "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("force_aligned_access", autowig::method_decorator_f71a9d0562005aaba5c7c07df6654e33);
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("trace", method_pointer_0387853c505b5fa1bcef882f447710f2, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("matrix", method_pointer_385888581f865dd7b0124a5042e0b77b, boost::python::return_internal_reference<>(), "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("matrix", autowig::method_decorator_385888581f865dd7b0124a5042e0b77b);
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("matrix", method_pointer_131b4f4754e950f4993ed2b946e0fd7e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("full_piv_lu", method_pointer_e212e9f2c13a57ad9fc777100ef90406, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("partial_piv_lu", method_pointer_501516a35b8751309670bef9304111e8, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("lu", method_pointer_a01d69723a34575bbba5b750ba724247, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("determinant", method_pointer_35323545a1225454ab6c8a253edc1a60, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("llt", method_pointer_fcc51acc260e5cbca6db24813c60abb7, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("ldlt", method_pointer_173e067c1d9d5339b9a6415975781d36, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("householder_qr", method_pointer_a852fe3614905b0e879bec7e21c04dee, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("col_piv_householder_qr", method_pointer_2354ef14e28251c58a00734787ed6688, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("full_piv_householder_qr", method_pointer_66345a6e0fca55239f4b581347facbb3, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("eigenvalues", method_pointer_6044fe32825c5c9db1bb9465ea396339, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("jacobi_svd", method_pointer_11083afb13f45b1cbda17b7af8c7e5b1, "");
    class_32c3bfc9b6a85963be49a1aa7ba70185.def("make_householder_in_place", method_pointer_d4d407c8d5bd5162b79ee3722370e77b, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > >();
    }

}