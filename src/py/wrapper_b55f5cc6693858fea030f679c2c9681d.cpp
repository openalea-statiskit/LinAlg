#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e879caf890e1517bbbd937fa294939c4(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_b1e4ff523640548e844dae217ef560c6(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_051113dd0e625f239a069967d68495eb(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_9bb57f37d8ae5a57838227df6f312d64(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_c25a79fafda05aa18843d61544b992fd(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_b55f5cc6693858fea030f679c2c9681d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_915b5a74c41e5db5b2a26c38350a80e7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::diagonalSize;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_opposite_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_786cec540ac05958847857217d6da71e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::operator-;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_1aaa790e8ae55711954cfb97ad8e142b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::conjugate;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_19e14113856350008d381d2bd8162380)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::real;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_imag_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_40a22d65300c52c5a70485c68b70a46f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::imag;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_e879caf890e1517bbbd937fa294939c4)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::real;
    class ::Eigen::CwiseUnaryView< struct ::Eigen::internal::scalar_imag_ref_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_eb874d205f8f5bfa97bc4bf29acc0ba5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::imag;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_abs_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_0dc638155ab151918c04aa553c769e54)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::cwiseAbs;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_abs2_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_faddbf91692a53128d4a06a65c2b71ca)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::cwiseAbs2;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_sqrt_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_51fd5b7ace6c55f2b7fabb08f582b879)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::cwiseSqrt;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_sign_op< float, false >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_1c7d55f2e1365bccbb5ef40e4186e42d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::cwiseSign;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_inverse_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_3e7f3eaac9be5f67a7ba6d189e91a532)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::cwiseInverse;
    class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_min_op< float, float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_e9e2702ca3255341b60f0a0aa36c00ee)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::cwiseMin;
    class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_max_op< float, float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_e861f95ecbb95063b6cff21003ee99ae)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::cwiseMax;
    class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_cmp_op< float, float, Eigen::internal::ComparisonName::cmp_EQ >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_0e34f2be6e3e5b20bcf4ab32c41b95c9)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::cwiseEqual;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_d5c74cb060df5626992d0185340faa5e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_320db5278f31517da9dfd1cac1dd1833)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_231e02bda0d55b1580374144d55c0bf9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_090510392fa15f9aaad76513fca7eced)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_ac6e116e02d55ed880d4fc0253779e6c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::hypotNorm;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_43f6dd4896445f75b5f24dffba7fa570)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::normalized;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_7e7d75138db45f9c9f2dbc2bbd52f93a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_69772c0cf33952e1a3b48a686599c4e4)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_2f9baea948585193a6fb3dd582646e9a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::stableNormalize;
    class ::Eigen::Transpose< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_8bbf691ead8b53ea8013338bf5184c8c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::adjoint;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_b495e0cb632751dfafaea2aab6308e3e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::adjointInPlace;
    class ::Eigen::Diagonal< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_a93edb04a8c05b1d90e5b4a1e4a41a10)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::diagonal;
    class ::Eigen::Diagonal< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, 0 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_dff2f50934e052adb69afc873165bf75)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::diagonal;
    class ::Eigen::Diagonal< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 16777215 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_872dcbf81a345fc3ab84667c5bb9ade7)(long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::diagonal;
    class ::Eigen::Diagonal< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, 16777215 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_606c9a481a4e5bd598d159f6976d7f27)(long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::diagonal;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_2c6462f13933518b881ef2194dacda17)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Identity;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_6db7e617a68059f99a46b1dc9a732437)(long int , long int ) = ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Identity;
    class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< float >, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > const, 4, 1, false >  const (*method_pointer_be427aaa48f25dfebdc28f051e279567)(long int , long int ) = ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Unit;
    class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< float >, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > const, 4, 1, false >  const (*method_pointer_973ec21e6be059ab8199cc9890a11f24)(long int ) = ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Unit;
    class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< float >, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > const, 4, 1, false >  const (*method_pointer_7c7390c4331e59df92596757cafe63e2)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::UnitX;
    class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< float >, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > const, 4, 1, false >  const (*method_pointer_ee21fb8d104d555facf15a8be48b9fe7)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::UnitY;
    class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< float >, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > const, 4, 1, false >  const (*method_pointer_c6c5fabfa7f75fa4845a631a2e255b5e)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::UnitZ;
    class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< float >, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > const, 4, 1, false >  const (*method_pointer_ba86af42cd6c5169845e001774f6daf1)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::UnitW;
    class ::Eigen::DiagonalWrapper< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_7653accfec435febb6951e1f92e14d63)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::asDiagonal;
    class ::Eigen::PermutationWrapper< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_d8795ee95ac15505976b3bf24ee3c7fa)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::asPermutation;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_b1e4ff523640548e844dae217ef560c6)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setIdentity;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_051113dd0e625f239a069967d68495eb)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_7b383ca6368553a395fa8e72fc40f78d)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_b9650e90bacf5ab1aaade464df71b56c)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_9c7d12522a2455679d573b822dd54b7e)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_a00529a9fc9857c3b062be91063c58c3)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_fd1cbafbbacf59b28047c94abb0bc0ec)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::isUnitary;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_801c6a1faf6b59f798ff5bff6c60cceb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_9bb57f37d8ae5a57838227df6f312d64)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::forceAlignedAccess;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_d52833f031695bebb8a2b2044d67d553)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_c25a79fafda05aa18843d61544b992fd)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_c3c33a6d1b4d53029771edffae04d5b6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::matrix;
    class ::Eigen::ArrayWrapper< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_2c7c4005248d5c9ba70b825df3182e85)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::array;
    class ::Eigen::ArrayWrapper< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_1b7aaa00f740534bb0e5e280a9b4b725)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::array;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_d287338249f75aeab42af4e30fe67d81)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::fullPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_ec4a97dd345053d59d605a3d67f00705)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::partialPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_fce7768fb2a059b7a95b67396ac7ac67)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::lu;
    class ::Eigen::Inverse< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_70701c9b3bc152ad88e19e63c8f59807)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::inverse;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_747bae6a5f2a5d26877ac8d557f8e520)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::determinant;
    class ::Eigen::LLT< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_a131489142bf5dbd8126f967af5f3ae8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::llt;
    class ::Eigen::LDLT< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_ffa853f27a2b55a99f62b3daf7ee7541)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::ldlt;
    class ::Eigen::HouseholderQR< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_91481bab3d1355b3b91fdb0c6d75bf7c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::householderQr;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_8cf10960f8c753c0b3aa01e1dbdb1311)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::colPivHouseholderQr;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_f4e2a6c0402658e1a904498d1b824220)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::fullPivHouseholderQr;
    class ::Eigen::CompleteOrthogonalDecomposition< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_6a8d0b3d10205887ad4bce0e9119e791)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::completeOrthogonalDecomposition;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_515e9e159cb555949dab7c292f96b2bc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::unitOrthogonal;
    class ::Eigen::Homogeneous< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_7815837657c05caa8a51593d0f6409f4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::homogeneous;
    class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< float, float >, class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, 3, 1, false > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< float >, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > const > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_05f5bf3093cb5f74945281587734a0ad)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::hnormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_dfa9f9fba5dd526f819847a2e0fe10b4)(float  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > > > class_b55f5cc6693858fea030f679c2c9681d("_MatrixBase_b55f5cc6693858fea030f679c2c9681d", "", boost::python::no_init);
    class_b55f5cc6693858fea030f679c2c9681d.def("diagonal_size", method_pointer_915b5a74c41e5db5b2a26c38350a80e7, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("__sub__", method_pointer_786cec540ac05958847857217d6da71e, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("conjugate", method_pointer_1aaa790e8ae55711954cfb97ad8e142b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b55f5cc6693858fea030f679c2c9681d.def("real", method_pointer_19e14113856350008d381d2bd8162380, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b55f5cc6693858fea030f679c2c9681d.def("imag", method_pointer_40a22d65300c52c5a70485c68b70a46f, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("real", method_pointer_e879caf890e1517bbbd937fa294939c4, boost::python::return_internal_reference<>(), "");
    class_b55f5cc6693858fea030f679c2c9681d.def("real", autowig::method_decorator_e879caf890e1517bbbd937fa294939c4);
    class_b55f5cc6693858fea030f679c2c9681d.def("imag", method_pointer_eb874d205f8f5bfa97bc4bf29acc0ba5, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("cwise_abs", method_pointer_0dc638155ab151918c04aa553c769e54, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("cwise_abs_2", method_pointer_faddbf91692a53128d4a06a65c2b71ca, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("cwise_sqrt", method_pointer_51fd5b7ace6c55f2b7fabb08f582b879, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("cwise_sign", method_pointer_1c7d55f2e1365bccbb5ef40e4186e42d, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("cwise_inverse", method_pointer_3e7f3eaac9be5f67a7ba6d189e91a532, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("cwise_min", method_pointer_e9e2702ca3255341b60f0a0aa36c00ee, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("cwise_max", method_pointer_e861f95ecbb95063b6cff21003ee99ae, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("cwise_equal", method_pointer_0e34f2be6e3e5b20bcf4ab32c41b95c9, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("squared_norm", method_pointer_d5c74cb060df5626992d0185340faa5e, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("norm", method_pointer_320db5278f31517da9dfd1cac1dd1833, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("stable_norm", method_pointer_231e02bda0d55b1580374144d55c0bf9, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("blue_norm", method_pointer_090510392fa15f9aaad76513fca7eced, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("hypot_norm", method_pointer_ac6e116e02d55ed880d4fc0253779e6c, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("normalized", method_pointer_43f6dd4896445f75b5f24dffba7fa570, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("stable_normalized", method_pointer_7e7d75138db45f9c9f2dbc2bbd52f93a, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("normalize", method_pointer_69772c0cf33952e1a3b48a686599c4e4, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("stable_normalize", method_pointer_2f9baea948585193a6fb3dd582646e9a, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("adjoint", method_pointer_8bbf691ead8b53ea8013338bf5184c8c, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("adjoint_in_place", method_pointer_b495e0cb632751dfafaea2aab6308e3e, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("diagonal", method_pointer_a93edb04a8c05b1d90e5b4a1e4a41a10, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("diagonal", method_pointer_dff2f50934e052adb69afc873165bf75, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("diagonal", method_pointer_872dcbf81a345fc3ab84667c5bb9ade7, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("diagonal", method_pointer_606c9a481a4e5bd598d159f6976d7f27, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("identity", method_pointer_2c6462f13933518b881ef2194dacda17, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("identity", method_pointer_6db7e617a68059f99a46b1dc9a732437, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("unit", method_pointer_be427aaa48f25dfebdc28f051e279567, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("unit", method_pointer_973ec21e6be059ab8199cc9890a11f24, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("unit_x", method_pointer_7c7390c4331e59df92596757cafe63e2, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("unit_y", method_pointer_ee21fb8d104d555facf15a8be48b9fe7, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("unit_z", method_pointer_c6c5fabfa7f75fa4845a631a2e255b5e, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("unit_w", method_pointer_ba86af42cd6c5169845e001774f6daf1, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("as_diagonal", method_pointer_7653accfec435febb6951e1f92e14d63, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("as_permutation", method_pointer_d8795ee95ac15505976b3bf24ee3c7fa, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("set_identity", method_pointer_b1e4ff523640548e844dae217ef560c6, boost::python::return_internal_reference<>(), "");
    class_b55f5cc6693858fea030f679c2c9681d.def("set_identity", autowig::method_decorator_b1e4ff523640548e844dae217ef560c6);
    class_b55f5cc6693858fea030f679c2c9681d.def("set_identity", method_pointer_051113dd0e625f239a069967d68495eb, boost::python::return_internal_reference<>(), "");
    class_b55f5cc6693858fea030f679c2c9681d.def("set_identity", autowig::method_decorator_051113dd0e625f239a069967d68495eb);
    class_b55f5cc6693858fea030f679c2c9681d.def("is_identity", method_pointer_7b383ca6368553a395fa8e72fc40f78d, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("is_diagonal", method_pointer_b9650e90bacf5ab1aaade464df71b56c, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("is_upper_triangular", method_pointer_9c7d12522a2455679d573b822dd54b7e, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("is_lower_triangular", method_pointer_a00529a9fc9857c3b062be91063c58c3, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("is_unitary", method_pointer_fd1cbafbbacf59b28047c94abb0bc0ec, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("force_aligned_access", method_pointer_801c6a1faf6b59f798ff5bff6c60cceb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b55f5cc6693858fea030f679c2c9681d.def("force_aligned_access", method_pointer_9bb57f37d8ae5a57838227df6f312d64, boost::python::return_internal_reference<>(), "");
    class_b55f5cc6693858fea030f679c2c9681d.def("force_aligned_access", autowig::method_decorator_9bb57f37d8ae5a57838227df6f312d64);
    class_b55f5cc6693858fea030f679c2c9681d.def("trace", method_pointer_d52833f031695bebb8a2b2044d67d553, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("matrix", method_pointer_c25a79fafda05aa18843d61544b992fd, boost::python::return_internal_reference<>(), "");
    class_b55f5cc6693858fea030f679c2c9681d.def("matrix", autowig::method_decorator_c25a79fafda05aa18843d61544b992fd);
    class_b55f5cc6693858fea030f679c2c9681d.def("matrix", method_pointer_c3c33a6d1b4d53029771edffae04d5b6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b55f5cc6693858fea030f679c2c9681d.def("array", method_pointer_2c7c4005248d5c9ba70b825df3182e85, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("array", method_pointer_1b7aaa00f740534bb0e5e280a9b4b725, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("full_piv_lu", method_pointer_d287338249f75aeab42af4e30fe67d81, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("partial_piv_lu", method_pointer_ec4a97dd345053d59d605a3d67f00705, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("lu", method_pointer_fce7768fb2a059b7a95b67396ac7ac67, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("inverse", method_pointer_70701c9b3bc152ad88e19e63c8f59807, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("determinant", method_pointer_747bae6a5f2a5d26877ac8d557f8e520, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("llt", method_pointer_a131489142bf5dbd8126f967af5f3ae8, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("ldlt", method_pointer_ffa853f27a2b55a99f62b3daf7ee7541, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("householder_qr", method_pointer_91481bab3d1355b3b91fdb0c6d75bf7c, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("col_piv_householder_qr", method_pointer_8cf10960f8c753c0b3aa01e1dbdb1311, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("full_piv_householder_qr", method_pointer_f4e2a6c0402658e1a904498d1b824220, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("complete_orthogonal_decomposition", method_pointer_6a8d0b3d10205887ad4bce0e9119e791, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("unit_orthogonal", method_pointer_515e9e159cb555949dab7c292f96b2bc, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("homogeneous", method_pointer_7815837657c05caa8a51593d0f6409f4, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("hnormalized", method_pointer_05f5bf3093cb5f74945281587734a0ad, "");
    class_b55f5cc6693858fea030f679c2c9681d.def("make_householder_in_place", method_pointer_dfa9f9fba5dd526f819847a2e0fe10b4, "");
    class_b55f5cc6693858fea030f679c2c9681d.staticmethod("unit_w");
    class_b55f5cc6693858fea030f679c2c9681d.staticmethod("unit_y");
    class_b55f5cc6693858fea030f679c2c9681d.staticmethod("unit_x");
    class_b55f5cc6693858fea030f679c2c9681d.staticmethod("unit_z");
    class_b55f5cc6693858fea030f679c2c9681d.staticmethod("identity");
    class_b55f5cc6693858fea030f679c2c9681d.staticmethod("unit");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > > >();
    }

}