#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e7890080659052e3b4a5a06b42661b01(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_8c67a3deb9c2507684ab94bfacd92675(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, double  const & param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_5ba93605e0de5d099fafdefd6e595ea7(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, double  const & param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_55c694537fbd5192b7782a88248598b1(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_16fe656b06005e0085aad637cfd49625(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_45a1589322415a55bd0aad63bb9432ca(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_13f91213fd595dccbf76bb14bbc1039c(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_8c83aedf61db55c9beb74d07ed4dc49e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_bee820838ee05cf1b718a106ec428eba)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_c6e0bb54d1ec5aefb6bd89d1f2873062)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_c553519155765891b2a9ecef15e38e0c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_94a44c619852560aa2eb7e29882364a6)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_831fc20c88e256bd82bce6f366bb4af8)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::resize;
    struct ::Eigen::CommaInitializer< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_ef5e0849b7ad5854b296e9d7642830c7)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::operator<<;
    class ::Eigen::Transpose< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_07a881b593d25805806b31b4744b4ebb)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::transpose;
    class ::Eigen::Transpose< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_fe5d37ee16e45fd68eb2fb2443fcc0d2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::transpose;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_d732a22fd3b85faea0634c3e4fdb353e)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::transposeInPlace;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_72d55a21c4f552ad940e72a91267a18e)(long int , long int , double  const &) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Constant;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_f64d6c2e2fff5a1494ac3be47df21c70)(long int , double  const &) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Constant;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_8384786619e552db91bdde441054a843)(double  const &) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Constant;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_f563d181ac7651dbb64702be05df74e1)(long int , long int ) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Zero;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_49e0154961185feda6ce9f674f2ac2e8)(long int ) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Zero;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_cb023b7e75d35c7ea3dadb2cfb79cc21)() = ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Zero;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_020d981d301753aa90667dfd2c482228)(long int , long int ) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Ones;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_18a4b671971c5d53a51f46c83becbb6e)(long int ) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Ones;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_e96a49fc62eb5c76a929c31f841995af)() = ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Ones;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_a135d2dc06a85386a28575c66adfa521)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::fill;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_e7890080659052e3b4a5a06b42661b01)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_8c67a3deb9c2507684ab94bfacd92675)(long int , double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_5ba93605e0de5d099fafdefd6e595ea7)(double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_55c694537fbd5192b7782a88248598b1)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_16fe656b06005e0085aad637cfd49625)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_45a1589322415a55bd0aad63bb9432ca)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_a8c545c389715fe5a5a84fab7ca481a1)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_3d7eb8a2450351b8b8983122a7f0b467)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_cc6acd2d44975bd5a2e3c922b9653186)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_1bdc8d952fcb5be1ad3b304662dc86cf)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_41ce36fa18d0515abaf6e506a88f0ff3)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_32e9c2a1f9cf5111834eec53dc174f47)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_7c7cd873a1e95748992e47551af7c322)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::allFinite;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_13f91213fd595dccbf76bb14bbc1039c)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::operator*=;
    class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_b415bb711d9359c0a4a99b4c90e98fde)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::eval;
    class ::Eigen::NestByValue< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_36b0101750715c72994df0ee408b8343)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::nestByValue;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_7ffd6028bd5d5c5a97f54194a60cda3f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::sum;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_126b1406797e51c68adc550f7c7d786b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::mean;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_fdaffc7715f15c1c99c22586155330a6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::trace;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_150662539cf65e39bba8056bb4aa9d51)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::prod;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_bdfce7332cd754c09dbe874edf663f9d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::minCoeff;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_5d8b31bef23c53cb891349422a691b61)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::maxCoeff;
    class ::Eigen::WithFormat< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_39adb87467b6553aa9d86d615f889332)(struct ::Eigen::IOFormat  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::format;
    double  const & (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_87bbca7bf96352129364824e0e18bc92)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_01e3ece2a605576d91b0d55ceeac2ffe)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_1fead0ee1d095a77a2e7db55ca75fdd8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_994a04cfa2b0517ca01e068c62d1cc67)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::count;
    class ::Eigen::VectorwiseOp< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, 1 >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_626afca4f5ed548fb77dcd34e45adf38)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::rowwise;
    class ::Eigen::VectorwiseOp< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1 >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_1312e8095f645802a31fc6ccdfa51ce5)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::rowwise;
    class ::Eigen::VectorwiseOp< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, 0 >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_07ee885f610a58c7bebb1ebcc01ed47d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::colwise;
    class ::Eigen::VectorwiseOp< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_c61a0093b82d5eb5b4e5bd599fc0ce5e)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::colwise;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_random_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_ccf09145f0235e57ba5e4d5391a88040)(long int , long int ) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Random;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_random_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_b315c2937850507d99e19b796d792f46)(long int ) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Random;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_random_op< double >, class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >  const (*method_pointer_bc37814ae289591bab66a1e6278e3ca5)() = ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::Random;
    class ::Eigen::Replicate< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, -1, -1 >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_bc4fcb047e2a56ebb52c111a255554ec)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::replicate;
    class ::Eigen::Reverse< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 2 >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_41044408d5e2529ca715cc09632e7719)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::reverse;
    class ::Eigen::Reverse< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, 2 >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_37ba6d6f24955c4797ff7930bc3401ad)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::reverse;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_4ed69123655a5604bb6f2fc888a7be9c)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::reverseInPlace;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, -1, -1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_9e3951c93ec052d288046e047068c176)(long int , long int , long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::block;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, -1, -1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_6164df1636195a34a14e331bb435050c)(long int , long int , long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::block;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, -1, -1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_2810becfa810505a8c070e1184d2f242)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::topRightCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, -1, -1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_7d8365d2ba1059bdb0f4b01388b7b21d)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::topRightCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, -1, -1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_8ed420ec2f0b5821a7e3601d9845c9c2)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::topLeftCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, -1, -1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_94063018e9625a8bb48b6561991a464c)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::topLeftCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, -1, -1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_13884d4b82e25ae983d378d7eb4d6e88)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::bottomRightCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, -1, -1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_62490bd1f3bc5d8292f4a073988b5660)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::bottomRightCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, -1, -1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_f6d0f21d468d5f089d6e3c4668a24d43)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::bottomLeftCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, -1, -1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_130584c3d614578db50340fc87d4d4f1)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::bottomLeftCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, -1, 1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_93e1045eb737573092b6418492f261f6)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::topRows;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, -1, 1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_7494c74d8622593a8cb5e59ef360159f)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::topRows;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, -1, 1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_29238f2584a15866b6bf51c2b03dd765)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::bottomRows;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, -1, 1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_5de5cf57d97c5a5da6aac9a89c9e4a1d)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::bottomRows;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, -1, 1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_8453bfe592ca526ca732ad284bd62841)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::middleRows;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, -1, 1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_ab611156a25c57588136914215be850e)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::middleRows;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 4, -1, true >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_9918c275046353e6aa33a3d47828e6df)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::leftCols;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, 4, -1, true >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_96b9ee53f032578cb0e6317d563ba428)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::leftCols;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 4, -1, true >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_f15de7217e485bafbddcd8e1e06a2679)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::rightCols;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, 4, -1, true >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_0723a8f846e55e1f87adc3866a7b97ef)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::rightCols;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 4, -1, true >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_55baa53c3233530e960178d027b3cc7c)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::middleCols;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, 4, -1, true >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_55e4beda41b353198201730824e58111)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::middleCols;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 4, 1, true >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_37ae7e37177f502ca77933d8c0a228e6)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::col;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, 4, 1, true >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_ad218582949d5c6196dcfff3dbd0d64a)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::col;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 1, 1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_4764f5677bb052209362e7c34ec8e8c7)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::row;
    class ::Eigen::Block< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, 1, 1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_f392483efbc559edb833204d68e2285d)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::row;
    class ::Eigen::VectorBlock< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, -1 >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_fd80cfa2abda5907aaff987e73f0e74a)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::segment;
    class ::Eigen::VectorBlock< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, -1 >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_222544b1422f52fb8008e8ebaedc30ab)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::segment;
    class ::Eigen::VectorBlock< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, -1 >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_e8b3dce3b90956cab667b17df44b9616)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::head;
    class ::Eigen::VectorBlock< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, -1 >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_6641c083c63a5d3ba18023e8df5f9a87)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::head;
    class ::Eigen::VectorBlock< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, -1 >  (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_58792752e81753a5abbc967cdf9f2eb8)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::tail;
    class ::Eigen::VectorBlock< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > const, -1 >  const (::Eigen::DenseBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::*method_pointer_702dc34f688e55be9f67f88cb5727736)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >::tail;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 > > > class_8c83aedf61db55c9beb74d07ed4dc49e("_DenseBase_8c83aedf61db55c9beb74d07ed4dc49e", "", boost::python::no_init);
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("non_zeros", method_pointer_bee820838ee05cf1b718a106ec428eba, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("outer_size", method_pointer_c6e0bb54d1ec5aefb6bd89d1f2873062, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("inner_size", method_pointer_c553519155765891b2a9ecef15e38e0c, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("resize", method_pointer_94a44c619852560aa2eb7e29882364a6, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("resize", method_pointer_831fc20c88e256bd82bce6f366bb4af8, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("__lshift__", method_pointer_ef5e0849b7ad5854b296e9d7642830c7, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("transpose", method_pointer_07a881b593d25805806b31b4744b4ebb, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("transpose", method_pointer_fe5d37ee16e45fd68eb2fb2443fcc0d2, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("transpose_in_place", method_pointer_d732a22fd3b85faea0634c3e4fdb353e, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("constant", method_pointer_72d55a21c4f552ad940e72a91267a18e, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("constant", method_pointer_f64d6c2e2fff5a1494ac3be47df21c70, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("constant", method_pointer_8384786619e552db91bdde441054a843, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("zero", method_pointer_f563d181ac7651dbb64702be05df74e1, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("zero", method_pointer_49e0154961185feda6ce9f674f2ac2e8, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("zero", method_pointer_cb023b7e75d35c7ea3dadb2cfb79cc21, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("ones", method_pointer_020d981d301753aa90667dfd2c482228, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("ones", method_pointer_18a4b671971c5d53a51f46c83becbb6e, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("ones", method_pointer_e96a49fc62eb5c76a929c31f841995af, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("fill", method_pointer_a135d2dc06a85386a28575c66adfa521, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("set_constant", method_pointer_e7890080659052e3b4a5a06b42661b01, boost::python::return_internal_reference<>(), "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("set_constant", autowig::method_decorator_e7890080659052e3b4a5a06b42661b01);
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("set_lin_spaced", method_pointer_8c67a3deb9c2507684ab94bfacd92675, boost::python::return_internal_reference<>(), "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("set_lin_spaced", autowig::method_decorator_8c67a3deb9c2507684ab94bfacd92675);
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("set_lin_spaced", method_pointer_5ba93605e0de5d099fafdefd6e595ea7, boost::python::return_internal_reference<>(), "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("set_lin_spaced", autowig::method_decorator_5ba93605e0de5d099fafdefd6e595ea7);
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("set_zero", method_pointer_55c694537fbd5192b7782a88248598b1, boost::python::return_internal_reference<>(), "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("set_zero", autowig::method_decorator_55c694537fbd5192b7782a88248598b1);
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("set_ones", method_pointer_16fe656b06005e0085aad637cfd49625, boost::python::return_internal_reference<>(), "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("set_ones", autowig::method_decorator_16fe656b06005e0085aad637cfd49625);
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("set_random", method_pointer_45a1589322415a55bd0aad63bb9432ca, boost::python::return_internal_reference<>(), "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("set_random", autowig::method_decorator_45a1589322415a55bd0aad63bb9432ca);
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("is_much_smaller_than", method_pointer_a8c545c389715fe5a5a84fab7ca481a1, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("is_approx_to_constant", method_pointer_3d7eb8a2450351b8b8983122a7f0b467, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("is_constant", method_pointer_cc6acd2d44975bd5a2e3c922b9653186, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("is_zero", method_pointer_1bdc8d952fcb5be1ad3b304662dc86cf, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("is_ones", method_pointer_41ce36fa18d0515abaf6e506a88f0ff3, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("has_na_n", method_pointer_32e9c2a1f9cf5111834eec53dc174f47, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("all_finite", method_pointer_7c7cd873a1e95748992e47551af7c322, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("__imul__", method_pointer_13f91213fd595dccbf76bb14bbc1039c, boost::python::return_internal_reference<>(), "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("__imul__", autowig::method_decorator_13f91213fd595dccbf76bb14bbc1039c);
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("eval", method_pointer_b415bb711d9359c0a4a99b4c90e98fde, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("nest_by_value", method_pointer_36b0101750715c72994df0ee408b8343, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("sum", method_pointer_7ffd6028bd5d5c5a97f54194a60cda3f, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("mean", method_pointer_126b1406797e51c68adc550f7c7d786b, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("trace", method_pointer_fdaffc7715f15c1c99c22586155330a6, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("prod", method_pointer_150662539cf65e39bba8056bb4aa9d51, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("min_coeff", method_pointer_bdfce7332cd754c09dbe874edf663f9d, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("max_coeff", method_pointer_5d8b31bef23c53cb891349422a691b61, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("format", method_pointer_39adb87467b6553aa9d86d615f889332, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("value", method_pointer_87bbca7bf96352129364824e0e18bc92, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("all", method_pointer_01e3ece2a605576d91b0d55ceeac2ffe, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("any", method_pointer_1fead0ee1d095a77a2e7db55ca75fdd8, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("count", method_pointer_994a04cfa2b0517ca01e068c62d1cc67, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("rowwise", method_pointer_626afca4f5ed548fb77dcd34e45adf38, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("rowwise", method_pointer_1312e8095f645802a31fc6ccdfa51ce5, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("colwise", method_pointer_07ee885f610a58c7bebb1ebcc01ed47d, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("colwise", method_pointer_c61a0093b82d5eb5b4e5bd599fc0ce5e, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("random", method_pointer_ccf09145f0235e57ba5e4d5391a88040, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("random", method_pointer_b315c2937850507d99e19b796d792f46, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("random", method_pointer_bc37814ae289591bab66a1e6278e3ca5, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("replicate", method_pointer_bc4fcb047e2a56ebb52c111a255554ec, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("reverse", method_pointer_41044408d5e2529ca715cc09632e7719, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("reverse", method_pointer_37ba6d6f24955c4797ff7930bc3401ad, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("reverse_in_place", method_pointer_4ed69123655a5604bb6f2fc888a7be9c, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("block", method_pointer_9e3951c93ec052d288046e047068c176, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("block", method_pointer_6164df1636195a34a14e331bb435050c, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("top_right_corner", method_pointer_2810becfa810505a8c070e1184d2f242, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("top_right_corner", method_pointer_7d8365d2ba1059bdb0f4b01388b7b21d, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("top_left_corner", method_pointer_8ed420ec2f0b5821a7e3601d9845c9c2, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("top_left_corner", method_pointer_94063018e9625a8bb48b6561991a464c, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("bottom_right_corner", method_pointer_13884d4b82e25ae983d378d7eb4d6e88, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("bottom_right_corner", method_pointer_62490bd1f3bc5d8292f4a073988b5660, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("bottom_left_corner", method_pointer_f6d0f21d468d5f089d6e3c4668a24d43, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("bottom_left_corner", method_pointer_130584c3d614578db50340fc87d4d4f1, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("top_rows", method_pointer_93e1045eb737573092b6418492f261f6, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("top_rows", method_pointer_7494c74d8622593a8cb5e59ef360159f, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("bottom_rows", method_pointer_29238f2584a15866b6bf51c2b03dd765, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("bottom_rows", method_pointer_5de5cf57d97c5a5da6aac9a89c9e4a1d, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("middle_rows", method_pointer_8453bfe592ca526ca732ad284bd62841, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("middle_rows", method_pointer_ab611156a25c57588136914215be850e, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("left_cols", method_pointer_9918c275046353e6aa33a3d47828e6df, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("left_cols", method_pointer_96b9ee53f032578cb0e6317d563ba428, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("right_cols", method_pointer_f15de7217e485bafbddcd8e1e06a2679, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("right_cols", method_pointer_0723a8f846e55e1f87adc3866a7b97ef, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("middle_cols", method_pointer_55baa53c3233530e960178d027b3cc7c, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("middle_cols", method_pointer_55e4beda41b353198201730824e58111, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("col", method_pointer_37ae7e37177f502ca77933d8c0a228e6, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("col", method_pointer_ad218582949d5c6196dcfff3dbd0d64a, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("row", method_pointer_4764f5677bb052209362e7c34ec8e8c7, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("row", method_pointer_f392483efbc559edb833204d68e2285d, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("segment", method_pointer_fd80cfa2abda5907aaff987e73f0e74a, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("segment", method_pointer_222544b1422f52fb8008e8ebaedc30ab, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("head", method_pointer_e8b3dce3b90956cab667b17df44b9616, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("head", method_pointer_6641c083c63a5d3ba18023e8df5f9a87, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("tail", method_pointer_58792752e81753a5abbc967cdf9f2eb8, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.def("tail", method_pointer_702dc34f688e55be9f67f88cb5727736, "");
    class_8c83aedf61db55c9beb74d07ed4dc49e.staticmethod("random");
    class_8c83aedf61db55c9beb74d07ed4dc49e.staticmethod("zero");
    class_8c83aedf61db55c9beb74d07ed4dc49e.staticmethod("ones");
    class_8c83aedf61db55c9beb74d07ed4dc49e.staticmethod("constant");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 3 > > >();
    }

}