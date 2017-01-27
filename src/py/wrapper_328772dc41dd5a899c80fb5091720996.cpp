#include "_ieigen.h"


namespace autowig
{
    void method_decorator_09bb2ed506715981851d6c3d7989b6b9(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_6aa466256d265d509b5beb1292347c59(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_6f596f0261815396af7685ef17648dba(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_0f51e04c6e5c5f30bc548ca9abbbbda1(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_328772dc41dd5a899c80fb5091720996()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_673d8196803150b58bd4f1fb19b076d0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::diagonalSize;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_20ae7d45961254c9ba984c094fb7411b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_8bc613c3600c5674b8b0486cda748ff2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_4d4e12e53a755ab2adcba24fae17a65b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_be0c5712424f50cfa6eec3d6e6fd8354)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_082af0eb5bca5c26b59cc22cfc10af83)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_ff8d08bfea3753e5ae0c796cc98478f0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_a3a4dad17bf155a19b83cb2d7a8c93f9)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_cb88d0301dd459449a6f0bd55a14ed8e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_6178098c8d695b1ba0f06f6ac55cd340)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_09bb2ed506715981851d6c3d7989b6b9)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_6aa466256d265d509b5beb1292347c59)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_45fa9580a46f5400bf792ec4bf980b51)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_927851823c3c532a91ea4b84d084d09e)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_f628a1bca0a95fbba5aa02a8d18e7bd5)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_f0b0eb36b9695d1299355f066db14225)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_b5f9618fb041538db9a031fd2bb3b982)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_944ed7acd7ae5baebb1c161206dbfa63)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_6f596f0261815396af7685ef17648dba)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::forceAlignedAccess;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_56e59fd74c675a489dfa6ceb5aa7d0a3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_0f51e04c6e5c5f30bc548ca9abbbbda1)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_0abddc3267e4563aafe90f630db5519f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::matrix;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_c438090534305afd810d7664c2d4f1f6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::fullPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_d0522ecdb14857e8ac3ab42779ee606d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::partialPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_78517e63e8165947b9aa0b1d4e4ebae6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::lu;
    struct ::std::complex< double >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_0239dfbe7b0c51b0a6975885bca660ce)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::determinant;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_c3876d006de75fb29e494cf4969ffa4b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::llt;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_d364decfe3b057fea7b95b44ecbfe647)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::ldlt;
    class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_d6001c5a139455c99be215272fcfffdd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::householderQr;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_e3fff3c2f2d25feea9fbd7ba5c0e5f54)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::colPivHouseholderQr;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_3eba06fd9be6543ab97566ae674426d4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::fullPivHouseholderQr;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_873666c4afae5028b9b2aaf24a7a73b1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::eigenvalues;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_123d95c702325ca6915e1097ab6456ef)(unsigned int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::jacobiSvd;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_8815806979855656ad331e8e01a41a93)(struct ::std::complex< double >  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > class_328772dc41dd5a899c80fb5091720996("_MatrixBase_328772dc41dd5a899c80fb5091720996", "", boost::python::no_init);
    class_328772dc41dd5a899c80fb5091720996.def("diagonal_size", method_pointer_673d8196803150b58bd4f1fb19b076d0, "");
    class_328772dc41dd5a899c80fb5091720996.def("squared_norm", method_pointer_20ae7d45961254c9ba984c094fb7411b, "");
    class_328772dc41dd5a899c80fb5091720996.def("norm", method_pointer_8bc613c3600c5674b8b0486cda748ff2, "");
    class_328772dc41dd5a899c80fb5091720996.def("blue_norm", method_pointer_4d4e12e53a755ab2adcba24fae17a65b, "");
    class_328772dc41dd5a899c80fb5091720996.def("hypot_norm", method_pointer_be0c5712424f50cfa6eec3d6e6fd8354, "");
    class_328772dc41dd5a899c80fb5091720996.def("normalized", method_pointer_082af0eb5bca5c26b59cc22cfc10af83, "");
    class_328772dc41dd5a899c80fb5091720996.def("stable_normalized", method_pointer_ff8d08bfea3753e5ae0c796cc98478f0, "");
    class_328772dc41dd5a899c80fb5091720996.def("normalize", method_pointer_a3a4dad17bf155a19b83cb2d7a8c93f9, "");
    class_328772dc41dd5a899c80fb5091720996.def("stable_normalize", method_pointer_cb88d0301dd459449a6f0bd55a14ed8e, "");
    class_328772dc41dd5a899c80fb5091720996.def("adjoint_in_place", method_pointer_6178098c8d695b1ba0f06f6ac55cd340, "");
    class_328772dc41dd5a899c80fb5091720996.def("set_identity", method_pointer_09bb2ed506715981851d6c3d7989b6b9, boost::python::return_internal_reference<>(), "");
    class_328772dc41dd5a899c80fb5091720996.def("set_identity", autowig::method_decorator_09bb2ed506715981851d6c3d7989b6b9);
    class_328772dc41dd5a899c80fb5091720996.def("set_identity", method_pointer_6aa466256d265d509b5beb1292347c59, boost::python::return_internal_reference<>(), "");
    class_328772dc41dd5a899c80fb5091720996.def("set_identity", autowig::method_decorator_6aa466256d265d509b5beb1292347c59);
    class_328772dc41dd5a899c80fb5091720996.def("is_identity", method_pointer_45fa9580a46f5400bf792ec4bf980b51, "");
    class_328772dc41dd5a899c80fb5091720996.def("is_diagonal", method_pointer_927851823c3c532a91ea4b84d084d09e, "");
    class_328772dc41dd5a899c80fb5091720996.def("is_upper_triangular", method_pointer_f628a1bca0a95fbba5aa02a8d18e7bd5, "");
    class_328772dc41dd5a899c80fb5091720996.def("is_lower_triangular", method_pointer_f0b0eb36b9695d1299355f066db14225, "");
    class_328772dc41dd5a899c80fb5091720996.def("is_unitary", method_pointer_b5f9618fb041538db9a031fd2bb3b982, "");
    class_328772dc41dd5a899c80fb5091720996.def("force_aligned_access", method_pointer_944ed7acd7ae5baebb1c161206dbfa63, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_328772dc41dd5a899c80fb5091720996.def("force_aligned_access", method_pointer_6f596f0261815396af7685ef17648dba, boost::python::return_internal_reference<>(), "");
    class_328772dc41dd5a899c80fb5091720996.def("force_aligned_access", autowig::method_decorator_6f596f0261815396af7685ef17648dba);
    class_328772dc41dd5a899c80fb5091720996.def("trace", method_pointer_56e59fd74c675a489dfa6ceb5aa7d0a3, "");
    class_328772dc41dd5a899c80fb5091720996.def("matrix", method_pointer_0f51e04c6e5c5f30bc548ca9abbbbda1, boost::python::return_internal_reference<>(), "");
    class_328772dc41dd5a899c80fb5091720996.def("matrix", autowig::method_decorator_0f51e04c6e5c5f30bc548ca9abbbbda1);
    class_328772dc41dd5a899c80fb5091720996.def("matrix", method_pointer_0abddc3267e4563aafe90f630db5519f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_328772dc41dd5a899c80fb5091720996.def("full_piv_lu", method_pointer_c438090534305afd810d7664c2d4f1f6, "");
    class_328772dc41dd5a899c80fb5091720996.def("partial_piv_lu", method_pointer_d0522ecdb14857e8ac3ab42779ee606d, "");
    class_328772dc41dd5a899c80fb5091720996.def("lu", method_pointer_78517e63e8165947b9aa0b1d4e4ebae6, "");
    class_328772dc41dd5a899c80fb5091720996.def("determinant", method_pointer_0239dfbe7b0c51b0a6975885bca660ce, "");
    class_328772dc41dd5a899c80fb5091720996.def("llt", method_pointer_c3876d006de75fb29e494cf4969ffa4b, "");
    class_328772dc41dd5a899c80fb5091720996.def("ldlt", method_pointer_d364decfe3b057fea7b95b44ecbfe647, "");
    class_328772dc41dd5a899c80fb5091720996.def("householder_qr", method_pointer_d6001c5a139455c99be215272fcfffdd, "");
    class_328772dc41dd5a899c80fb5091720996.def("col_piv_householder_qr", method_pointer_e3fff3c2f2d25feea9fbd7ba5c0e5f54, "");
    class_328772dc41dd5a899c80fb5091720996.def("full_piv_householder_qr", method_pointer_3eba06fd9be6543ab97566ae674426d4, "");
    class_328772dc41dd5a899c80fb5091720996.def("eigenvalues", method_pointer_873666c4afae5028b9b2aaf24a7a73b1, "");
    class_328772dc41dd5a899c80fb5091720996.def("jacobi_svd", method_pointer_123d95c702325ca6915e1097ab6456ef, "");
    class_328772dc41dd5a899c80fb5091720996.def("make_householder_in_place", method_pointer_8815806979855656ad331e8e01a41a93, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > >();
    }

}