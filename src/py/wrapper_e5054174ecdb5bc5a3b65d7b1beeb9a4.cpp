#include "_ieigen.h"


namespace autowig
{
    void method_decorator_948b392a3ed151dcbea4f4eec733aad5(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_e1f526bedc3e5226b2832633bd405521(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_40ace7ca6c055444a4d095b612d7a0b7(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_42cceb65fd2f5252b440552a90fa667b(class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_e5054174ecdb5bc5a3b65d7b1beeb9a4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_b0cd816dd3585a1786cdd700027dd81b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::diagonalSize;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_a8db797c713a568f8b882e3fa1d48dd6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_c47d1f76f38f54b1a55d18f3c9857f78)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_59911b556e2d57599fd9fa87455371d6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_790b0ac8602d5c9890989c378a39baab)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::hypotNorm;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_ad4efb54e8105d6c9acf31185eab6fc2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::normalized;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_a6592bacb2945fb1ab2bc12c4dd48953)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_44306683f29357c4965ccbfa8aebabcc)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_d9eef83c982e5febb7859b03b3f9b615)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_5f47347d21b8511fa3284b1baaf18796)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::adjointInPlace;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_948b392a3ed151dcbea4f4eec733aad5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setIdentity;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_e1f526bedc3e5226b2832633bd405521)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_f8f068d1af0d58078bfcf14b15b359b4)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_34b356f6cba75ee598107d65f313ea78)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_548b00bbde225c4ea2805fcf41044e58)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_ae1139518fe45aae814da72b5dce7118)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_f3311806cb5c5b0fa111d463139a8e08)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isUnitary;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_4f0b43a28c04587085245f0badec04c5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_40ace7ca6c055444a4d095b612d7a0b7)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::forceAlignedAccess;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_5a3a7f6c3f80591fb9b4f30d8ee5f319)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_42cceb65fd2f5252b440552a90fa667b)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_1ec5db0c92ff5d5cb1967f3fed9c11ce)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::matrix;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_5a6d12dc2bb85b1592bef205e1dc2ba1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::fullPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_1d7e1babb9315428b9872c6e726d4aa0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::partialPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_04f17a49b44a523dad58647e0aea2ae4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::lu;
    struct ::std::complex< float >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_7bcc2d27951a5c2eb6ec8dc4e139f114)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::determinant;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_f33a1ecc76745ffcae0b0088d9711b9d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::llt;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_af04d643e3d559ec91f4b83877728dc1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::ldlt;
    class ::Eigen::HouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_9c7d412c531e5952bb1d3f8636ffb7c6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::householderQr;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_a221b92f73d7565581ffe5f478ed6fe8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::colPivHouseholderQr;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_d34e9eaee3ce58ac841de1376de14b70)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::fullPivHouseholderQr;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_22e4a16c04a356ddb0ae0a9e8580d524)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::eigenvalues;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_38637d6f7e0653abb2268cd4d69e372e)(unsigned int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::jacobiSvd;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_eca43498089753248f40d287d52129b4)(struct ::std::complex< float >  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > class_e5054174ecdb5bc5a3b65d7b1beeb9a4("_MatrixBase_e5054174ecdb5bc5a3b65d7b1beeb9a4", "", boost::python::no_init);
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("diagonal_size", method_pointer_b0cd816dd3585a1786cdd700027dd81b, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("squared_norm", method_pointer_a8db797c713a568f8b882e3fa1d48dd6, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("norm", method_pointer_c47d1f76f38f54b1a55d18f3c9857f78, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("blue_norm", method_pointer_59911b556e2d57599fd9fa87455371d6, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("hypot_norm", method_pointer_790b0ac8602d5c9890989c378a39baab, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("normalized", method_pointer_ad4efb54e8105d6c9acf31185eab6fc2, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("stable_normalized", method_pointer_a6592bacb2945fb1ab2bc12c4dd48953, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("normalize", method_pointer_44306683f29357c4965ccbfa8aebabcc, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("stable_normalize", method_pointer_d9eef83c982e5febb7859b03b3f9b615, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("adjoint_in_place", method_pointer_5f47347d21b8511fa3284b1baaf18796, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("set_identity", method_pointer_948b392a3ed151dcbea4f4eec733aad5, boost::python::return_internal_reference<>(), "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("set_identity", autowig::method_decorator_948b392a3ed151dcbea4f4eec733aad5);
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("set_identity", method_pointer_e1f526bedc3e5226b2832633bd405521, boost::python::return_internal_reference<>(), "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("set_identity", autowig::method_decorator_e1f526bedc3e5226b2832633bd405521);
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("is_identity", method_pointer_f8f068d1af0d58078bfcf14b15b359b4, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("is_diagonal", method_pointer_34b356f6cba75ee598107d65f313ea78, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("is_upper_triangular", method_pointer_548b00bbde225c4ea2805fcf41044e58, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("is_lower_triangular", method_pointer_ae1139518fe45aae814da72b5dce7118, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("is_unitary", method_pointer_f3311806cb5c5b0fa111d463139a8e08, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("force_aligned_access", method_pointer_4f0b43a28c04587085245f0badec04c5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("force_aligned_access", method_pointer_40ace7ca6c055444a4d095b612d7a0b7, boost::python::return_internal_reference<>(), "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("force_aligned_access", autowig::method_decorator_40ace7ca6c055444a4d095b612d7a0b7);
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("trace", method_pointer_5a3a7f6c3f80591fb9b4f30d8ee5f319, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("matrix", method_pointer_42cceb65fd2f5252b440552a90fa667b, boost::python::return_internal_reference<>(), "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("matrix", autowig::method_decorator_42cceb65fd2f5252b440552a90fa667b);
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("matrix", method_pointer_1ec5db0c92ff5d5cb1967f3fed9c11ce, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("full_piv_lu", method_pointer_5a6d12dc2bb85b1592bef205e1dc2ba1, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("partial_piv_lu", method_pointer_1d7e1babb9315428b9872c6e726d4aa0, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("lu", method_pointer_04f17a49b44a523dad58647e0aea2ae4, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("determinant", method_pointer_7bcc2d27951a5c2eb6ec8dc4e139f114, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("llt", method_pointer_f33a1ecc76745ffcae0b0088d9711b9d, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("ldlt", method_pointer_af04d643e3d559ec91f4b83877728dc1, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("householder_qr", method_pointer_9c7d412c531e5952bb1d3f8636ffb7c6, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("col_piv_householder_qr", method_pointer_a221b92f73d7565581ffe5f478ed6fe8, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("full_piv_householder_qr", method_pointer_d34e9eaee3ce58ac841de1376de14b70, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("eigenvalues", method_pointer_22e4a16c04a356ddb0ae0a9e8580d524, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("jacobi_svd", method_pointer_38637d6f7e0653abb2268cd4d69e372e, "");
    class_e5054174ecdb5bc5a3b65d7b1beeb9a4.def("make_householder_in_place", method_pointer_eca43498089753248f40d287d52129b4, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > >();
    }

}