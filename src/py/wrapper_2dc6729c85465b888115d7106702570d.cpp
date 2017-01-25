#include "_ieigen.h"


namespace autowig
{
    void method_decorator_86f8e4b9b6515ee1a66e74eb8302ddcb(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_9d31032e1a9e585989fe17c8a5855333(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, float  const & param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_452f20bbf8d359a38b661e7d2d9fb878(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, float  const & param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_639ec19408875f3291e21f2a4714fa5b(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_b1328c6ba5a65d6bb067d88f6d8f6c33(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_eaef5e85c3905752be3aea8348743e88(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_6e3df73936ca5865babe952072958f1b(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_2dc6729c85465b888115d7106702570d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_dea47a8098c4502986fd10c2be08dca0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_a374661cc2035f2283447fb04c84c48c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_e1e68df1d760562282df8c6ae17ae9fd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_ee352f93968c5cc19827507cd5ef71d0)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_6dc4ed242f045d64aca1e7e4b7937a32)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::resize;
    struct ::Eigen::CommaInitializer< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_05cffdfc5c185d61a55d6356a67d6ac4)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::operator<<;
    class ::Eigen::Transpose< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_d7707dc834c25ae2990b081bd350da80)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::transpose;
    class ::Eigen::Transpose< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_5e44ab45e9195b02bbe22a42ea609b92)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::transpose;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_a9672e3909db550ba15488defe99aa6c)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::transposeInPlace;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_fa5ac38b81b45f1cb44dad2cdc5c73f3)(long int , long int , float  const &) = ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Constant;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_642fbf22636751a38b8e73ef6e860fac)(long int , float  const &) = ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Constant;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_1bfd92f6dfd75e9ba507e3055b17396c)(float  const &) = ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Constant;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_007b9681173d5f9699ea2fdd3a58d7e0)(long int , long int ) = ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Zero;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_b44c5632a1035d52b5e878a3eddb935a)(long int ) = ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Zero;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_47a54e6172a25f55bc729e709150c06e)() = ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Zero;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_2deab1912f5f536db40e7a1e0b7c7ae5)(long int , long int ) = ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Ones;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_dd9d17e7b7dd53d2b201c7292ed77fb8)(long int ) = ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Ones;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_e2fe2d0f34815abf950933290341a023)() = ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Ones;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_ac97fd15c6d256bc827a833898f58fce)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::fill;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_86f8e4b9b6515ee1a66e74eb8302ddcb)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_9d31032e1a9e585989fe17c8a5855333)(long int , float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_452f20bbf8d359a38b661e7d2d9fb878)(float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_639ec19408875f3291e21f2a4714fa5b)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_b1328c6ba5a65d6bb067d88f6d8f6c33)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_eaef5e85c3905752be3aea8348743e88)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_4c8886071a56579eb3d46c3829b49db8)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_6e8f38eb22295b4fac368946c4d1261f)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_32f691df7ac95a38858a0781ba5d222b)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_7443370cfaca57e1af3bf52faefed641)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_c6421142a64c541194d92b8bec885333)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_882d82f56d7a5d86ba6f7c9600a19d54)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_4296e8740e3e56f8922dd9ea3b3e68d1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::allFinite;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_6e3df73936ca5865babe952072958f1b)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::operator*=;
    class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_ad361080d60d563fbe38152023600202)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::eval;
    class ::Eigen::NestByValue< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_e114d9cdc11f5e84b76f90d7f4eca436)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::nestByValue;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_2e2444039dde5a8da6ef6d54c71973fe)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::sum;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_5848a1fe93f458dc8f3a9dff6aa9ac46)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::mean;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_b31444b9648a5db992f5ac825e63d845)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::trace;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_7757121e8be2514b838ab430072312ce)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::prod;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_744b120ac2745700a30bdf96ee83af03)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::minCoeff;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_ff7b02b1a1df5abcad3565cad0614fac)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::maxCoeff;
    class ::Eigen::WithFormat< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_ac71f5c0db825cb185eedff69cafd8f9)(struct ::Eigen::IOFormat  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::format;
    float  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_e2c19f8bd0f65398b239e68b2384db66)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_df8307fcd41051cca219d639970008b0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_66067efa48255fbba47b3335e044af1d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_8cac8ef9b16c5320b67b268e5fb48154)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::count;
    class ::Eigen::VectorwiseOp< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, 1 >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_988b05e2ec145dccbfddcc0c12fa1c96)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::rowwise;
    class ::Eigen::VectorwiseOp< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1 >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_16241b26c9445f84ada1d2f6264e45a3)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::rowwise;
    class ::Eigen::VectorwiseOp< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, 0 >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_66afa01ae40853d5be3af55570817278)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::colwise;
    class ::Eigen::VectorwiseOp< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 0 >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_7d4381bc6d7c561eafb4faa04504c6f5)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::colwise;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_random_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_82b68583f61c5b3293f28b9bd43fe86a)(long int , long int ) = ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Random;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_random_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_4abe6d1a829c51c49657d20e14ed74be)(long int ) = ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Random;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_random_op< float >, class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >  const (*method_pointer_8e475fa91f345a65b4aa5a1f8606c13b)() = ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::Random;
    class ::Eigen::Replicate< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, -1, -1 >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_44bebbea577a584ab2c78a66897c2dd4)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::replicate;
    class ::Eigen::Reverse< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 2 >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_e13d93669f74533c9d6dfd4c1281383a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::reverse;
    class ::Eigen::Reverse< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, 2 >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_0b796da83de85383a1b7b0f2f0b07cc1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::reverse;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_60b552cdd1f157fe9f148522ae82d97a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::reverseInPlace;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, -1, -1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_e51700a141515690babc8c96e8af556d)(long int , long int , long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::block;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, -1, -1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_eeb4abad797a5edbb6ad60365a8e0e9f)(long int , long int , long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::block;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, -1, -1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_9a248accf7a75eaa89dec1a326c2bbfe)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::topRightCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, -1, -1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_306b68cd274654f180cc89eefa7aa485)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::topRightCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, -1, -1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_7181fbe8f6a35da39e034741a52db199)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::topLeftCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, -1, -1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_d1ea379904da56d5aec5e92b1e464792)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::topLeftCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, -1, -1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_5bcc6147ee2b581396fe7ac6e37f90d3)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::bottomRightCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, -1, -1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_b08cf338bd5a5757bc1c37896f96586c)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::bottomRightCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, -1, -1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_d6df2af9203e5c3fa3e5b3353b7ccfe8)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::bottomLeftCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, -1, -1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_3c321385bce8517ba5c3ab701b241da3)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::bottomLeftCorner;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, -1, 1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_34b4d6a71f5e5ff085e974a15d620c0a)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::topRows;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, -1, 1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_c006d7d4db0f53de9923cabf982f3319)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::topRows;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, -1, 1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_e752d9d3ac2d56f5a0e73313b0c4d774)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::bottomRows;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, -1, 1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_9d6313bc59f2553988b9ae7613948396)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::bottomRows;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, -1, 1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_ed41b1928ec25dbc8c69040b56a90509)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::middleRows;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, -1, 1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_d8694333703b5a5391d058024234f70d)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::middleRows;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 4, -1, true >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_b8b2f8dcabde5447b141ede3d13e2f47)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::leftCols;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, 4, -1, true >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_f8ba775aff2d509ba6c27afc102cf074)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::leftCols;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 4, -1, true >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_1c299a2693665192b2abb7b471c0f68e)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::rightCols;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, 4, -1, true >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_53e59664bcbb56289fe6654688c59d91)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::rightCols;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 4, -1, true >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_c8d86fdb9420570f8e9cfccf971ec7ad)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::middleCols;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, 4, -1, true >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_c2b861a40f85503f92ff7a8d3f344688)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::middleCols;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 4, 1, true >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_ae8720efca345f98aae4469543f75fce)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::col;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, 4, 1, true >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_5b560fe3c4b25b14988dbaafdee22775)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::col;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 1, 1, false >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_63f3996e31bd5af398f2565c9590a3e3)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::row;
    class ::Eigen::Block< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, 1, 1, false >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_564a837f69f85eb1a8ed0aa4080b168b)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::row;
    class ::Eigen::VectorBlock< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, -1 >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_cb6782384408582b80d3938432ea9ce1)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::segment;
    class ::Eigen::VectorBlock< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, -1 >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_86830cc766b45b1582ba9a03947a5e2b)(long int , long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::segment;
    class ::Eigen::VectorBlock< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, -1 >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_32e7e06e9332576da096a7644d38c72b)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::head;
    class ::Eigen::VectorBlock< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, -1 >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_0ca997b4c6955ea89f5e4bcabfad3cdf)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::head;
    class ::Eigen::VectorBlock< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, -1 >  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_80948f21488a592d9f30dc39eba113fc)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::tail;
    class ::Eigen::VectorBlock< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > const, -1 >  const (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::*method_pointer_2bc740ac00715485ac116733781e1112)(long int ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >::tail;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 > > > class_2dc6729c85465b888115d7106702570d("_DenseBase_2dc6729c85465b888115d7106702570d", "", boost::python::no_init);
    class_2dc6729c85465b888115d7106702570d.def("non_zeros", method_pointer_dea47a8098c4502986fd10c2be08dca0, "");
    class_2dc6729c85465b888115d7106702570d.def("outer_size", method_pointer_a374661cc2035f2283447fb04c84c48c, "");
    class_2dc6729c85465b888115d7106702570d.def("inner_size", method_pointer_e1e68df1d760562282df8c6ae17ae9fd, "");
    class_2dc6729c85465b888115d7106702570d.def("resize", method_pointer_ee352f93968c5cc19827507cd5ef71d0, "");
    class_2dc6729c85465b888115d7106702570d.def("resize", method_pointer_6dc4ed242f045d64aca1e7e4b7937a32, "");
    class_2dc6729c85465b888115d7106702570d.def("__lshift__", method_pointer_05cffdfc5c185d61a55d6356a67d6ac4, "");
    class_2dc6729c85465b888115d7106702570d.def("transpose", method_pointer_d7707dc834c25ae2990b081bd350da80, "");
    class_2dc6729c85465b888115d7106702570d.def("transpose", method_pointer_5e44ab45e9195b02bbe22a42ea609b92, "");
    class_2dc6729c85465b888115d7106702570d.def("transpose_in_place", method_pointer_a9672e3909db550ba15488defe99aa6c, "");
    class_2dc6729c85465b888115d7106702570d.def("constant", method_pointer_fa5ac38b81b45f1cb44dad2cdc5c73f3, "");
    class_2dc6729c85465b888115d7106702570d.def("constant", method_pointer_642fbf22636751a38b8e73ef6e860fac, "");
    class_2dc6729c85465b888115d7106702570d.def("constant", method_pointer_1bfd92f6dfd75e9ba507e3055b17396c, "");
    class_2dc6729c85465b888115d7106702570d.def("zero", method_pointer_007b9681173d5f9699ea2fdd3a58d7e0, "");
    class_2dc6729c85465b888115d7106702570d.def("zero", method_pointer_b44c5632a1035d52b5e878a3eddb935a, "");
    class_2dc6729c85465b888115d7106702570d.def("zero", method_pointer_47a54e6172a25f55bc729e709150c06e, "");
    class_2dc6729c85465b888115d7106702570d.def("ones", method_pointer_2deab1912f5f536db40e7a1e0b7c7ae5, "");
    class_2dc6729c85465b888115d7106702570d.def("ones", method_pointer_dd9d17e7b7dd53d2b201c7292ed77fb8, "");
    class_2dc6729c85465b888115d7106702570d.def("ones", method_pointer_e2fe2d0f34815abf950933290341a023, "");
    class_2dc6729c85465b888115d7106702570d.def("fill", method_pointer_ac97fd15c6d256bc827a833898f58fce, "");
    class_2dc6729c85465b888115d7106702570d.def("set_constant", method_pointer_86f8e4b9b6515ee1a66e74eb8302ddcb, boost::python::return_internal_reference<>(), "");
    class_2dc6729c85465b888115d7106702570d.def("set_constant", autowig::method_decorator_86f8e4b9b6515ee1a66e74eb8302ddcb);
    class_2dc6729c85465b888115d7106702570d.def("set_lin_spaced", method_pointer_9d31032e1a9e585989fe17c8a5855333, boost::python::return_internal_reference<>(), "");
    class_2dc6729c85465b888115d7106702570d.def("set_lin_spaced", autowig::method_decorator_9d31032e1a9e585989fe17c8a5855333);
    class_2dc6729c85465b888115d7106702570d.def("set_lin_spaced", method_pointer_452f20bbf8d359a38b661e7d2d9fb878, boost::python::return_internal_reference<>(), "");
    class_2dc6729c85465b888115d7106702570d.def("set_lin_spaced", autowig::method_decorator_452f20bbf8d359a38b661e7d2d9fb878);
    class_2dc6729c85465b888115d7106702570d.def("set_zero", method_pointer_639ec19408875f3291e21f2a4714fa5b, boost::python::return_internal_reference<>(), "");
    class_2dc6729c85465b888115d7106702570d.def("set_zero", autowig::method_decorator_639ec19408875f3291e21f2a4714fa5b);
    class_2dc6729c85465b888115d7106702570d.def("set_ones", method_pointer_b1328c6ba5a65d6bb067d88f6d8f6c33, boost::python::return_internal_reference<>(), "");
    class_2dc6729c85465b888115d7106702570d.def("set_ones", autowig::method_decorator_b1328c6ba5a65d6bb067d88f6d8f6c33);
    class_2dc6729c85465b888115d7106702570d.def("set_random", method_pointer_eaef5e85c3905752be3aea8348743e88, boost::python::return_internal_reference<>(), "");
    class_2dc6729c85465b888115d7106702570d.def("set_random", autowig::method_decorator_eaef5e85c3905752be3aea8348743e88);
    class_2dc6729c85465b888115d7106702570d.def("is_much_smaller_than", method_pointer_4c8886071a56579eb3d46c3829b49db8, "");
    class_2dc6729c85465b888115d7106702570d.def("is_approx_to_constant", method_pointer_6e8f38eb22295b4fac368946c4d1261f, "");
    class_2dc6729c85465b888115d7106702570d.def("is_constant", method_pointer_32f691df7ac95a38858a0781ba5d222b, "");
    class_2dc6729c85465b888115d7106702570d.def("is_zero", method_pointer_7443370cfaca57e1af3bf52faefed641, "");
    class_2dc6729c85465b888115d7106702570d.def("is_ones", method_pointer_c6421142a64c541194d92b8bec885333, "");
    class_2dc6729c85465b888115d7106702570d.def("has_na_n", method_pointer_882d82f56d7a5d86ba6f7c9600a19d54, "");
    class_2dc6729c85465b888115d7106702570d.def("all_finite", method_pointer_4296e8740e3e56f8922dd9ea3b3e68d1, "");
    class_2dc6729c85465b888115d7106702570d.def("__imul__", method_pointer_6e3df73936ca5865babe952072958f1b, boost::python::return_internal_reference<>(), "");
    class_2dc6729c85465b888115d7106702570d.def("__imul__", autowig::method_decorator_6e3df73936ca5865babe952072958f1b);
    class_2dc6729c85465b888115d7106702570d.def("eval", method_pointer_ad361080d60d563fbe38152023600202, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2dc6729c85465b888115d7106702570d.def("nest_by_value", method_pointer_e114d9cdc11f5e84b76f90d7f4eca436, "");
    class_2dc6729c85465b888115d7106702570d.def("sum", method_pointer_2e2444039dde5a8da6ef6d54c71973fe, "");
    class_2dc6729c85465b888115d7106702570d.def("mean", method_pointer_5848a1fe93f458dc8f3a9dff6aa9ac46, "");
    class_2dc6729c85465b888115d7106702570d.def("trace", method_pointer_b31444b9648a5db992f5ac825e63d845, "");
    class_2dc6729c85465b888115d7106702570d.def("prod", method_pointer_7757121e8be2514b838ab430072312ce, "");
    class_2dc6729c85465b888115d7106702570d.def("min_coeff", method_pointer_744b120ac2745700a30bdf96ee83af03, "");
    class_2dc6729c85465b888115d7106702570d.def("max_coeff", method_pointer_ff7b02b1a1df5abcad3565cad0614fac, "");
    class_2dc6729c85465b888115d7106702570d.def("format", method_pointer_ac71f5c0db825cb185eedff69cafd8f9, "");
    class_2dc6729c85465b888115d7106702570d.def("value", method_pointer_e2c19f8bd0f65398b239e68b2384db66, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2dc6729c85465b888115d7106702570d.def("all", method_pointer_df8307fcd41051cca219d639970008b0, "");
    class_2dc6729c85465b888115d7106702570d.def("any", method_pointer_66067efa48255fbba47b3335e044af1d, "");
    class_2dc6729c85465b888115d7106702570d.def("count", method_pointer_8cac8ef9b16c5320b67b268e5fb48154, "");
    class_2dc6729c85465b888115d7106702570d.def("rowwise", method_pointer_988b05e2ec145dccbfddcc0c12fa1c96, "");
    class_2dc6729c85465b888115d7106702570d.def("rowwise", method_pointer_16241b26c9445f84ada1d2f6264e45a3, "");
    class_2dc6729c85465b888115d7106702570d.def("colwise", method_pointer_66afa01ae40853d5be3af55570817278, "");
    class_2dc6729c85465b888115d7106702570d.def("colwise", method_pointer_7d4381bc6d7c561eafb4faa04504c6f5, "");
    class_2dc6729c85465b888115d7106702570d.def("random", method_pointer_82b68583f61c5b3293f28b9bd43fe86a, "");
    class_2dc6729c85465b888115d7106702570d.def("random", method_pointer_4abe6d1a829c51c49657d20e14ed74be, "");
    class_2dc6729c85465b888115d7106702570d.def("random", method_pointer_8e475fa91f345a65b4aa5a1f8606c13b, "");
    class_2dc6729c85465b888115d7106702570d.def("replicate", method_pointer_44bebbea577a584ab2c78a66897c2dd4, "");
    class_2dc6729c85465b888115d7106702570d.def("reverse", method_pointer_e13d93669f74533c9d6dfd4c1281383a, "");
    class_2dc6729c85465b888115d7106702570d.def("reverse", method_pointer_0b796da83de85383a1b7b0f2f0b07cc1, "");
    class_2dc6729c85465b888115d7106702570d.def("reverse_in_place", method_pointer_60b552cdd1f157fe9f148522ae82d97a, "");
    class_2dc6729c85465b888115d7106702570d.def("block", method_pointer_e51700a141515690babc8c96e8af556d, "");
    class_2dc6729c85465b888115d7106702570d.def("block", method_pointer_eeb4abad797a5edbb6ad60365a8e0e9f, "");
    class_2dc6729c85465b888115d7106702570d.def("top_right_corner", method_pointer_9a248accf7a75eaa89dec1a326c2bbfe, "");
    class_2dc6729c85465b888115d7106702570d.def("top_right_corner", method_pointer_306b68cd274654f180cc89eefa7aa485, "");
    class_2dc6729c85465b888115d7106702570d.def("top_left_corner", method_pointer_7181fbe8f6a35da39e034741a52db199, "");
    class_2dc6729c85465b888115d7106702570d.def("top_left_corner", method_pointer_d1ea379904da56d5aec5e92b1e464792, "");
    class_2dc6729c85465b888115d7106702570d.def("bottom_right_corner", method_pointer_5bcc6147ee2b581396fe7ac6e37f90d3, "");
    class_2dc6729c85465b888115d7106702570d.def("bottom_right_corner", method_pointer_b08cf338bd5a5757bc1c37896f96586c, "");
    class_2dc6729c85465b888115d7106702570d.def("bottom_left_corner", method_pointer_d6df2af9203e5c3fa3e5b3353b7ccfe8, "");
    class_2dc6729c85465b888115d7106702570d.def("bottom_left_corner", method_pointer_3c321385bce8517ba5c3ab701b241da3, "");
    class_2dc6729c85465b888115d7106702570d.def("top_rows", method_pointer_34b4d6a71f5e5ff085e974a15d620c0a, "");
    class_2dc6729c85465b888115d7106702570d.def("top_rows", method_pointer_c006d7d4db0f53de9923cabf982f3319, "");
    class_2dc6729c85465b888115d7106702570d.def("bottom_rows", method_pointer_e752d9d3ac2d56f5a0e73313b0c4d774, "");
    class_2dc6729c85465b888115d7106702570d.def("bottom_rows", method_pointer_9d6313bc59f2553988b9ae7613948396, "");
    class_2dc6729c85465b888115d7106702570d.def("middle_rows", method_pointer_ed41b1928ec25dbc8c69040b56a90509, "");
    class_2dc6729c85465b888115d7106702570d.def("middle_rows", method_pointer_d8694333703b5a5391d058024234f70d, "");
    class_2dc6729c85465b888115d7106702570d.def("left_cols", method_pointer_b8b2f8dcabde5447b141ede3d13e2f47, "");
    class_2dc6729c85465b888115d7106702570d.def("left_cols", method_pointer_f8ba775aff2d509ba6c27afc102cf074, "");
    class_2dc6729c85465b888115d7106702570d.def("right_cols", method_pointer_1c299a2693665192b2abb7b471c0f68e, "");
    class_2dc6729c85465b888115d7106702570d.def("right_cols", method_pointer_53e59664bcbb56289fe6654688c59d91, "");
    class_2dc6729c85465b888115d7106702570d.def("middle_cols", method_pointer_c8d86fdb9420570f8e9cfccf971ec7ad, "");
    class_2dc6729c85465b888115d7106702570d.def("middle_cols", method_pointer_c2b861a40f85503f92ff7a8d3f344688, "");
    class_2dc6729c85465b888115d7106702570d.def("col", method_pointer_ae8720efca345f98aae4469543f75fce, "");
    class_2dc6729c85465b888115d7106702570d.def("col", method_pointer_5b560fe3c4b25b14988dbaafdee22775, "");
    class_2dc6729c85465b888115d7106702570d.def("row", method_pointer_63f3996e31bd5af398f2565c9590a3e3, "");
    class_2dc6729c85465b888115d7106702570d.def("row", method_pointer_564a837f69f85eb1a8ed0aa4080b168b, "");
    class_2dc6729c85465b888115d7106702570d.def("segment", method_pointer_cb6782384408582b80d3938432ea9ce1, "");
    class_2dc6729c85465b888115d7106702570d.def("segment", method_pointer_86830cc766b45b1582ba9a03947a5e2b, "");
    class_2dc6729c85465b888115d7106702570d.def("head", method_pointer_32e7e06e9332576da096a7644d38c72b, "");
    class_2dc6729c85465b888115d7106702570d.def("head", method_pointer_0ca997b4c6955ea89f5e4bcabfad3cdf, "");
    class_2dc6729c85465b888115d7106702570d.def("tail", method_pointer_80948f21488a592d9f30dc39eba113fc, "");
    class_2dc6729c85465b888115d7106702570d.def("tail", method_pointer_2bc740ac00715485ac116733781e1112, "");
    class_2dc6729c85465b888115d7106702570d.staticmethod("random");
    class_2dc6729c85465b888115d7106702570d.staticmethod("zero");
    class_2dc6729c85465b888115d7106702570d.staticmethod("ones");
    class_2dc6729c85465b888115d7106702570d.staticmethod("constant");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 1, 0, 4, 1 >, 3 > > >();
    }

}