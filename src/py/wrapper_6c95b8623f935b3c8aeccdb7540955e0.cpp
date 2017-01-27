#include "_ieigen.h"


namespace autowig
{
    void method_decorator_7f55a9df59c1548d879b0b7210e86e58(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_c06c0ed7cd405b38905e0eb1cd1e87f0(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_363dfd0068345232b5e7c00461dd81ce(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_a149e9faa66152319c5862906543e990(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_5b97ecd34b0d57bf87aa99a7b949abf5(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_6c95b8623f935b3c8aeccdb7540955e0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_26d82bb49adf55e48ac0c43ee75f2cde)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::diagonalSize;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_opposite_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_443bae499a1e5e5f8cd88ee08c5c0bd9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::operator-;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_ee9bdc4517cf57559164d7ae8784f00c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::conjugate;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_d151a34ba031504883480bbfb5489581)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::real;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_imag_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_c22d8ffd86515aa49581355bbd3cc73f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::imag;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_7f55a9df59c1548d879b0b7210e86e58)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::real;
    class ::Eigen::CwiseUnaryView< struct ::Eigen::internal::scalar_imag_ref_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_3306f6f3b4ff552c9354ffd50afc6c9d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::imag;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_abs_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_3d9a5fdebc2257dea990c8cc6d5d0988)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::cwiseAbs;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_abs2_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_56c68c85adff54f4a96b411081761324)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::cwiseAbs2;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_sqrt_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_0d81837f5cde513a98a42babce8d6848)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::cwiseSqrt;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_sign_op< double, false >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_b0ee03151b2b5d6c963e587cc0d2b270)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::cwiseSign;
    class ::Eigen::CwiseUnaryOp< struct ::Eigen::internal::scalar_inverse_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_8eeb0c9ff4a75db29b3103dd7488587a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::cwiseInverse;
    class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_min_op< double, double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_35d503efd5e35c558df23cef74fc9b0e)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::cwiseMin;
    class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_max_op< double, double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_30823266fbcb543eb87f9b81d9a12087)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::cwiseMax;
    class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_cmp_op< double, double, Eigen::internal::ComparisonName::cmp_EQ >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_8ad7991e254d59a68ddc4d5c43c63b3f)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::cwiseEqual;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_8f79a9802fda57fe9027f39dbf25f5dd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_de0dc078697855e3b78ffb641726798a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_6cdab8c6c8b856f69b7caaa7128e9777)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_c46e701acd615c0084c4d06385c8f5f0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_b576aa87a49d5a9594d5eabf980a2e56)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::hypotNorm;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_12b0d74b3f605215bd99b21a6a8161a5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::normalized;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_f31844f5b2725c5bb949ef741436ce5d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_4c7ef1b1755554c5b6b80ae7bc8f8220)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_29ccbd5c31675418842885fa6ab4fad6)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::stableNormalize;
    class ::Eigen::Transpose< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_6c7c5976a96e5b47a8e117eabe55ca08)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::adjoint;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_5c1adb987b2c554da24db81ccb51a85e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::adjointInPlace;
    class ::Eigen::Diagonal< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_3f6ddad899165e408a0098b14fe374b2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::diagonal;
    class ::Eigen::Diagonal< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, 0 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_c107889b6b1d57cdb620a848fdc5f90a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::diagonal;
    class ::Eigen::Diagonal< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 16777215 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_8f97e6429bdc599d9725cd42b592b1ec)(long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::diagonal;
    class ::Eigen::Diagonal< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, 16777215 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_23eb85b87b30582cb8bf9d8146523403)(long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::diagonal;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_8c210a5a8b2a59d98628f9b87c10e677)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Identity;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_6d22c7f8e5aa5d60892effde716641f6)(long int , long int ) = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Identity;
    class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > const, 4, 1, false >  const (*method_pointer_1d69f2f9af8c5eb186bf7e28ae42e030)(long int , long int ) = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Unit;
    class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > const, 4, 1, false >  const (*method_pointer_2fd3680e93a35e5c96955dcd7fcaf9cc)(long int ) = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Unit;
    class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > const, 4, 1, false >  const (*method_pointer_b5a458f4b57f5f268d08486c84e0cdce)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::UnitX;
    class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > const, 4, 1, false >  const (*method_pointer_e8044cb3514d593f967f55d248b4bf7f)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::UnitY;
    class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > const, 4, 1, false >  const (*method_pointer_0441cf7a7ea659cda5da9330bb3cb311)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::UnitZ;
    class ::Eigen::Block< class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > const, 4, 1, false >  const (*method_pointer_21dcd15e5c6250708af0caf1b876d5d1)() = ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::UnitW;
    class ::Eigen::DiagonalWrapper< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_015d523156dc5ae5883d2b4217874926)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::asDiagonal;
    class ::Eigen::PermutationWrapper< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_53752d36aee7507e8808b4929c8771fc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::asPermutation;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_c06c0ed7cd405b38905e0eb1cd1e87f0)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setIdentity;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_363dfd0068345232b5e7c00461dd81ce)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_5987eedfd38e5bf3904c119c5b4e8d70)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_961d56d7f42052829bb02973bf401156)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_fea9b9ace96150ef9cd6cd36ed11db3e)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_7ba8e3b0247b57de957a38fc060cd527)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_96413eab189053da9470859bfaaddacf)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::isUnitary;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_b1230ab5b9e45d5382654284d6c85b1b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_a149e9faa66152319c5862906543e990)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::forceAlignedAccess;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_03bf0f70a22e564a8f160ea49d1d183d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_5b97ecd34b0d57bf87aa99a7b949abf5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_65543af1b608558a886d0f48040a1970)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::matrix;
    class ::Eigen::ArrayWrapper< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_acd523b6bc2154f3bd1e8fe739966971)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::array;
    class ::Eigen::ArrayWrapper< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_710746e71ff95273b47a2f63df8f66af)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::array;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_40028b98b9745894a63e2c4cab19bba4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::fullPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_1a852c5a98595ba6a607d319a96d5847)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::partialPivLu;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_791ee1609a7a5213b4bb12ef79c858aa)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::lu;
    class ::Eigen::Inverse< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_bee23f4f1e355d47ba69a04c0a75fc54)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::inverse;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_92399100a0d95a27802d21b077934906)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::determinant;
    class ::Eigen::LLT< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_cd9ab277d9445ce4b32f7a265fa2a685)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::llt;
    class ::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_ba652bbb14d75366ba38d697c385144f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::ldlt;
    class ::Eigen::HouseholderQR< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_3c8635b0ec0b5e9b8c9d1de961b06d51)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::householderQr;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_27aae286087855b5af5239ef8096fd11)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::colPivHouseholderQr;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_d3b2846c938d573e8b402194672524ee)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::fullPivHouseholderQr;
    class ::Eigen::CompleteOrthogonalDecomposition< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_2dfe20ed67f85ee98b5e030e7dbfb4a2)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::completeOrthogonalDecomposition;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_2f39416ccee45d819c0ce9b0cc7c68bc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::unitOrthogonal;
    class ::Eigen::Homogeneous< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_1b606603d6eb5d18a329759c53c21d82)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::homogeneous;
    class ::Eigen::CwiseBinaryOp< struct ::Eigen::internal::scalar_quotient_op< double, double >, class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, 3, 1, false > const, class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > const > const >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_d04cdd1793835af2871d3f11552b857b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::hnormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_cb32bb5f42585c79990e3b538b287836)(double  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > > > class_6c95b8623f935b3c8aeccdb7540955e0("_MatrixBase_6c95b8623f935b3c8aeccdb7540955e0", "", boost::python::no_init);
    class_6c95b8623f935b3c8aeccdb7540955e0.def("diagonal_size", method_pointer_26d82bb49adf55e48ac0c43ee75f2cde, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("__sub__", method_pointer_443bae499a1e5e5f8cd88ee08c5c0bd9, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("conjugate", method_pointer_ee9bdc4517cf57559164d7ae8784f00c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("real", method_pointer_d151a34ba031504883480bbfb5489581, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("imag", method_pointer_c22d8ffd86515aa49581355bbd3cc73f, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("real", method_pointer_7f55a9df59c1548d879b0b7210e86e58, boost::python::return_internal_reference<>(), "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("real", autowig::method_decorator_7f55a9df59c1548d879b0b7210e86e58);
    class_6c95b8623f935b3c8aeccdb7540955e0.def("imag", method_pointer_3306f6f3b4ff552c9354ffd50afc6c9d, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("cwise_abs", method_pointer_3d9a5fdebc2257dea990c8cc6d5d0988, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("cwise_abs_2", method_pointer_56c68c85adff54f4a96b411081761324, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("cwise_sqrt", method_pointer_0d81837f5cde513a98a42babce8d6848, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("cwise_sign", method_pointer_b0ee03151b2b5d6c963e587cc0d2b270, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("cwise_inverse", method_pointer_8eeb0c9ff4a75db29b3103dd7488587a, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("cwise_min", method_pointer_35d503efd5e35c558df23cef74fc9b0e, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("cwise_max", method_pointer_30823266fbcb543eb87f9b81d9a12087, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("cwise_equal", method_pointer_8ad7991e254d59a68ddc4d5c43c63b3f, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("squared_norm", method_pointer_8f79a9802fda57fe9027f39dbf25f5dd, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("norm", method_pointer_de0dc078697855e3b78ffb641726798a, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("stable_norm", method_pointer_6cdab8c6c8b856f69b7caaa7128e9777, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("blue_norm", method_pointer_c46e701acd615c0084c4d06385c8f5f0, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("hypot_norm", method_pointer_b576aa87a49d5a9594d5eabf980a2e56, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("normalized", method_pointer_12b0d74b3f605215bd99b21a6a8161a5, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("stable_normalized", method_pointer_f31844f5b2725c5bb949ef741436ce5d, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("normalize", method_pointer_4c7ef1b1755554c5b6b80ae7bc8f8220, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("stable_normalize", method_pointer_29ccbd5c31675418842885fa6ab4fad6, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("adjoint", method_pointer_6c7c5976a96e5b47a8e117eabe55ca08, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("adjoint_in_place", method_pointer_5c1adb987b2c554da24db81ccb51a85e, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("diagonal", method_pointer_3f6ddad899165e408a0098b14fe374b2, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("diagonal", method_pointer_c107889b6b1d57cdb620a848fdc5f90a, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("diagonal", method_pointer_8f97e6429bdc599d9725cd42b592b1ec, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("diagonal", method_pointer_23eb85b87b30582cb8bf9d8146523403, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("identity", method_pointer_8c210a5a8b2a59d98628f9b87c10e677, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("identity", method_pointer_6d22c7f8e5aa5d60892effde716641f6, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("unit", method_pointer_1d69f2f9af8c5eb186bf7e28ae42e030, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("unit", method_pointer_2fd3680e93a35e5c96955dcd7fcaf9cc, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("unit_x", method_pointer_b5a458f4b57f5f268d08486c84e0cdce, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("unit_y", method_pointer_e8044cb3514d593f967f55d248b4bf7f, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("unit_z", method_pointer_0441cf7a7ea659cda5da9330bb3cb311, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("unit_w", method_pointer_21dcd15e5c6250708af0caf1b876d5d1, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("as_diagonal", method_pointer_015d523156dc5ae5883d2b4217874926, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("as_permutation", method_pointer_53752d36aee7507e8808b4929c8771fc, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("set_identity", method_pointer_c06c0ed7cd405b38905e0eb1cd1e87f0, boost::python::return_internal_reference<>(), "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("set_identity", autowig::method_decorator_c06c0ed7cd405b38905e0eb1cd1e87f0);
    class_6c95b8623f935b3c8aeccdb7540955e0.def("set_identity", method_pointer_363dfd0068345232b5e7c00461dd81ce, boost::python::return_internal_reference<>(), "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("set_identity", autowig::method_decorator_363dfd0068345232b5e7c00461dd81ce);
    class_6c95b8623f935b3c8aeccdb7540955e0.def("is_identity", method_pointer_5987eedfd38e5bf3904c119c5b4e8d70, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("is_diagonal", method_pointer_961d56d7f42052829bb02973bf401156, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("is_upper_triangular", method_pointer_fea9b9ace96150ef9cd6cd36ed11db3e, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("is_lower_triangular", method_pointer_7ba8e3b0247b57de957a38fc060cd527, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("is_unitary", method_pointer_96413eab189053da9470859bfaaddacf, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("force_aligned_access", method_pointer_b1230ab5b9e45d5382654284d6c85b1b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("force_aligned_access", method_pointer_a149e9faa66152319c5862906543e990, boost::python::return_internal_reference<>(), "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("force_aligned_access", autowig::method_decorator_a149e9faa66152319c5862906543e990);
    class_6c95b8623f935b3c8aeccdb7540955e0.def("trace", method_pointer_03bf0f70a22e564a8f160ea49d1d183d, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("matrix", method_pointer_5b97ecd34b0d57bf87aa99a7b949abf5, boost::python::return_internal_reference<>(), "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("matrix", autowig::method_decorator_5b97ecd34b0d57bf87aa99a7b949abf5);
    class_6c95b8623f935b3c8aeccdb7540955e0.def("matrix", method_pointer_65543af1b608558a886d0f48040a1970, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("array", method_pointer_acd523b6bc2154f3bd1e8fe739966971, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("array", method_pointer_710746e71ff95273b47a2f63df8f66af, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("full_piv_lu", method_pointer_40028b98b9745894a63e2c4cab19bba4, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("partial_piv_lu", method_pointer_1a852c5a98595ba6a607d319a96d5847, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("lu", method_pointer_791ee1609a7a5213b4bb12ef79c858aa, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("inverse", method_pointer_bee23f4f1e355d47ba69a04c0a75fc54, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("determinant", method_pointer_92399100a0d95a27802d21b077934906, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("llt", method_pointer_cd9ab277d9445ce4b32f7a265fa2a685, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("ldlt", method_pointer_ba652bbb14d75366ba38d697c385144f, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("householder_qr", method_pointer_3c8635b0ec0b5e9b8c9d1de961b06d51, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("col_piv_householder_qr", method_pointer_27aae286087855b5af5239ef8096fd11, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("full_piv_householder_qr", method_pointer_d3b2846c938d573e8b402194672524ee, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("complete_orthogonal_decomposition", method_pointer_2dfe20ed67f85ee98b5e030e7dbfb4a2, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("unit_orthogonal", method_pointer_2f39416ccee45d819c0ce9b0cc7c68bc, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("homogeneous", method_pointer_1b606603d6eb5d18a329759c53c21d82, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("hnormalized", method_pointer_d04cdd1793835af2871d3f11552b857b, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.def("make_householder_in_place", method_pointer_cb32bb5f42585c79990e3b538b287836, "");
    class_6c95b8623f935b3c8aeccdb7540955e0.staticmethod("unit_w");
    class_6c95b8623f935b3c8aeccdb7540955e0.staticmethod("unit_y");
    class_6c95b8623f935b3c8aeccdb7540955e0.staticmethod("unit_x");
    class_6c95b8623f935b3c8aeccdb7540955e0.staticmethod("unit_z");
    class_6c95b8623f935b3c8aeccdb7540955e0.staticmethod("identity");
    class_6c95b8623f935b3c8aeccdb7540955e0.staticmethod("unit");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > > >();
    }

}