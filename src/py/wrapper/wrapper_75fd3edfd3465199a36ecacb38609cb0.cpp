#include "_linalg.h"



namespace autowig
{

    void method_decorator_68d85a34c1a255a58ea399d7fe7b9047(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_0, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_b4261c9cd22e5293aea1159d9c575fdb(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_1, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_2, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_2cfb4850bb805967aa58381e8bb635de(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_0, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_1, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_00f3160044d4558facc67f69559dcb7c(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setZero() = param_out; }
    void method_decorator_99e5908d68725ab5ada6afe12f280908(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setOnes() = param_out; }
    void method_decorator_c3d8db9bdc3d58d1b14d34ca21427491(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setRandom() = param_out; }
    void method_decorator_84fc10f6be7858ac936740809659ca4a(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_0, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.operator*=(param_in_0) = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile * get_pointer<class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile >(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_75fd3edfd3465199a36ecacb38609cb0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_93823be0b363515cabd733ac64c6720a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::nonZeros;
    ::Eigen::Index  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_796f96533e1851dbba52009274ee47ee)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::outerSize;
    ::Eigen::Index  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_4dc49c1bbb345f4798936cac5b0cf9c4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_3fe9f396b17e57ada96e817442366eb8)(::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_fc1b44b20212571580810a010ca98216)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resize;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstTransposeReturnType  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_61d09ed46f05560d988562f38b851a36)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::transpose;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_91a058ac571456329d37caac8240dc53)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::transposeInPlace;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstantReturnType const (*method_pointer_90173514bdb85aba9d616199104c2d76)(::Eigen::Index , ::Eigen::Index , ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Constant;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstantReturnType const (*method_pointer_644d54a8942b5479af88cf26a7b2bfa4)(::Eigen::Index , ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Constant;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstantReturnType const (*method_pointer_5fba231048b853ccb42f01775e900ee0)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Constant;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstantReturnType const (*method_pointer_12ab4a77ba7e53d9b3ffc92b1564596a)(::Eigen::Index , ::Eigen::Index ) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Zero;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstantReturnType const (*method_pointer_09dac65af81558cbaec7f3bd4e640592)(::Eigen::Index ) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Zero;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstantReturnType const (*method_pointer_e3e17be20aa753188b13713531ac037b)() = ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Zero;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstantReturnType const (*method_pointer_176ffff0c3b258eeb0a694d96dad50c8)(::Eigen::Index , ::Eigen::Index ) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Ones;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstantReturnType const (*method_pointer_d21abef486785bd68f296e5c342b81f8)(::Eigen::Index ) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Ones;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstantReturnType const (*method_pointer_b4b72f619bbc5ce1a2f717c55dc13eb4)() = ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Ones;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_52a1bb28372f5d6dae0f94ad3f08d302)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::fill;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_68d85a34c1a255a58ea399d7fe7b9047)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setConstant;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_b4261c9cd22e5293aea1159d9c575fdb)(::Eigen::Index , ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2cfb4850bb805967aa58381e8bb635de)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_00f3160044d4558facc67f69559dcb7c)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_99e5908d68725ab5ada6afe12f280908)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_c3d8db9bdc3d58d1b14d34ca21427491)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_30254a49ca9b50d88f67604c32b60ac6)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_bce0f51c4f7154b19822781108b9c059)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_9a61dd318e175f249b20bf00f0efde37)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &, ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f1d008a1a32c5d28a897aed9e1a730d2)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_bf552c53df825979b9e085285c3c6026)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RealScalar const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_c92826ef61885ef28d78f2c6fc6c5a95)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f9798ffb67ba5be998bf5d5feafaf825)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::allFinite;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_84fc10f6be7858ac936740809659ca4a)(::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::operator*=;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::EvalReturnType  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_d7a529bed6b9547bb727ff827575186c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::eval;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_b79e588b565259379bda88f51361b5be)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::sum;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_4ca2a092bad25d13ae91a1335bf4e643)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::mean;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_81534b949ddb56139c8b21cf8dd5038d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::prod;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_0bd71b55dc765f809ab0e8db521e256f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::minCoeff;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_7eced26452115cdca737a1ed31183d46)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::maxCoeff;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::CoeffReturnType  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_4cbf2f4d26e555f98e2216875c06c58f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2b7f78e830885c00b2e086f54aea4d73)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_17ddc3343e6655e9bfe774cb1025220f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::any;
    ::Eigen::Index  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_89a6fd460a82536daba4829091ab4e35)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_a0e81e98e7a350488b7cd41eadd4f570)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::reverseInPlace;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::BlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_5c258a28ea0b543194b064459db5e622)(::Eigen::Index , ::Eigen::Index , ::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::block;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstBlockXpr const (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_88ae2698ef0052e3b8135d0a87b5b223)(::Eigen::Index , ::Eigen::Index , ::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::block;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::BlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_7abe505e2cfa5d38bfa0aa551e1954f6)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::topRightCorner;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstBlockXpr const (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_58b061e133d2519ea6cddc325d685901)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::topRightCorner;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::BlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_65b887ebb57b56a59eb2bad81752002c)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::topLeftCorner;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstBlockXpr const (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_59131c46c0215fdeab83096e7d9433fc)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::topLeftCorner;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::BlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_257ce4ee5e3b564e8997785eb4d5fe91)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::bottomRightCorner;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstBlockXpr const (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_3544a79a0ad45e40b2217c91eaba2316)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::bottomRightCorner;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::BlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_8d2502a228c851acba4c0a8d8c38536e)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::bottomLeftCorner;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstBlockXpr const (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_464bd5277be2574da6cd296dba5b0bd0)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::bottomLeftCorner;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RowsBlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_ad42833ed862593d86a3d1ec4d2fe097)(::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::topRows;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstRowsBlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_010d82d4cdc6579984b7efdf7316063a)(::Eigen::Index ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::topRows;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RowsBlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_087cfac0e9eb5b6596bb85ceb10cab7e)(::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::bottomRows;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstRowsBlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_4a587b53b7d8545b80e1073d88c21db9)(::Eigen::Index ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::bottomRows;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RowsBlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_707312bbeeef5ce6a200fcaae6fae660)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::middleRows;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstRowsBlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_49eb70aa3f4f5be6925d7f8f650bc3b1)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::middleRows;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstColsBlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_5de5af773b15563abccbd67fb19fb120)(::Eigen::Index ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::leftCols;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstColsBlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2e58510e440b514c810ff8e69ead93c4)(::Eigen::Index ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rightCols;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstColsBlockXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_fbda514e690651069f48b00767d04030)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::middleCols;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ColXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_fcc2a74b55235c3a80cdd31a5d1ee799)(::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::col;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstColXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_d137626f52665a1cac5a9934efb117fd)(::Eigen::Index ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::col;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::RowXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_a2728f2bdcf759d58109f6c9dcb9ac0c)(::Eigen::Index ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::row;
    ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::ConstRowXpr  (::Eigen::DenseBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_bb73f173464451dd81ae4482f39e7928)(::Eigen::Index ) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::row;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_constant_op< double >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const (*method_pointer_bb295e30838f54a49e255691c1638432)(::Eigen::Index , ::Eigen::Index , struct ::Eigen::internal::scalar_constant_op< double > const &) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::NullaryExpr;
    class ::Eigen::CwiseNullaryOp< struct ::Eigen::internal::scalar_identity_op< double >, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const (*method_pointer_545073846f4358ae8b586ab8a687e899)(::Eigen::Index , ::Eigen::Index , struct ::Eigen::internal::scalar_identity_op< double > const &) = ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::NullaryExpr;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::Held< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 > > > class_75fd3edfd3465199a36ecacb38609cb0("_DenseBase_75fd3edfd3465199a36ecacb38609cb0", "", boost::python::no_init);
    class_75fd3edfd3465199a36ecacb38609cb0.def(boost::python::init< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & >(""));
    class_75fd3edfd3465199a36ecacb38609cb0.def("non_zeros", method_pointer_93823be0b363515cabd733ac64c6720a, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("outer_size", method_pointer_796f96533e1851dbba52009274ee47ee, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("inner_size", method_pointer_4dc49c1bbb345f4798936cac5b0cf9c4, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("resize", method_pointer_3fe9f396b17e57ada96e817442366eb8, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("resize", method_pointer_fc1b44b20212571580810a010ca98216, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("transpose", method_pointer_61d09ed46f05560d988562f38b851a36, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("transpose_in_place", method_pointer_91a058ac571456329d37caac8240dc53, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("constant", method_pointer_90173514bdb85aba9d616199104c2d76, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("constant", method_pointer_644d54a8942b5479af88cf26a7b2bfa4, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("constant", method_pointer_5fba231048b853ccb42f01775e900ee0, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("zero", method_pointer_12ab4a77ba7e53d9b3ffc92b1564596a, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("zero", method_pointer_09dac65af81558cbaec7f3bd4e640592, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("zero", method_pointer_e3e17be20aa753188b13713531ac037b, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("ones", method_pointer_176ffff0c3b258eeb0a694d96dad50c8, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("ones", method_pointer_d21abef486785bd68f296e5c342b81f8, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("ones", method_pointer_b4b72f619bbc5ce1a2f717c55dc13eb4, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("fill", method_pointer_52a1bb28372f5d6dae0f94ad3f08d302, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_constant", method_pointer_68d85a34c1a255a58ea399d7fe7b9047, boost::python::return_internal_reference<>(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_constant", autowig::method_decorator_68d85a34c1a255a58ea399d7fe7b9047);
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_lin_spaced", method_pointer_b4261c9cd22e5293aea1159d9c575fdb, boost::python::return_internal_reference<>(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_lin_spaced", autowig::method_decorator_b4261c9cd22e5293aea1159d9c575fdb);
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_lin_spaced", method_pointer_2cfb4850bb805967aa58381e8bb635de, boost::python::return_internal_reference<>(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_lin_spaced", autowig::method_decorator_2cfb4850bb805967aa58381e8bb635de);
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_zero", method_pointer_00f3160044d4558facc67f69559dcb7c, boost::python::return_internal_reference<>(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_zero", autowig::method_decorator_00f3160044d4558facc67f69559dcb7c);
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_ones", method_pointer_99e5908d68725ab5ada6afe12f280908, boost::python::return_internal_reference<>(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_ones", autowig::method_decorator_99e5908d68725ab5ada6afe12f280908);
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_random", method_pointer_c3d8db9bdc3d58d1b14d34ca21427491, boost::python::return_internal_reference<>(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("set_random", autowig::method_decorator_c3d8db9bdc3d58d1b14d34ca21427491);
    class_75fd3edfd3465199a36ecacb38609cb0.def("is_much_smaller_than", method_pointer_30254a49ca9b50d88f67604c32b60ac6, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("is_approx_to_constant", method_pointer_bce0f51c4f7154b19822781108b9c059, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("is_constant", method_pointer_9a61dd318e175f249b20bf00f0efde37, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("is_zero", method_pointer_f1d008a1a32c5d28a897aed9e1a730d2, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("is_ones", method_pointer_bf552c53df825979b9e085285c3c6026, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("has_na_n", method_pointer_c92826ef61885ef28d78f2c6fc6c5a95, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("all_finite", method_pointer_f9798ffb67ba5be998bf5d5feafaf825, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("__imul__", method_pointer_84fc10f6be7858ac936740809659ca4a, boost::python::return_internal_reference<>(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("__imul__", autowig::method_decorator_84fc10f6be7858ac936740809659ca4a);
    class_75fd3edfd3465199a36ecacb38609cb0.def("eval", method_pointer_d7a529bed6b9547bb727ff827575186c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("sum", method_pointer_b79e588b565259379bda88f51361b5be, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("mean", method_pointer_4ca2a092bad25d13ae91a1335bf4e643, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("prod", method_pointer_81534b949ddb56139c8b21cf8dd5038d, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("min_coeff", method_pointer_0bd71b55dc765f809ab0e8db521e256f, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("max_coeff", method_pointer_7eced26452115cdca737a1ed31183d46, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("value", method_pointer_4cbf2f4d26e555f98e2216875c06c58f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("all", method_pointer_2b7f78e830885c00b2e086f54aea4d73, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("any", method_pointer_17ddc3343e6655e9bfe774cb1025220f, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("count", method_pointer_89a6fd460a82536daba4829091ab4e35, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("reverse_in_place", method_pointer_a0e81e98e7a350488b7cd41eadd4f570, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("block", method_pointer_5c258a28ea0b543194b064459db5e622, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("block", method_pointer_88ae2698ef0052e3b8135d0a87b5b223, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("top_right_corner", method_pointer_7abe505e2cfa5d38bfa0aa551e1954f6, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("top_right_corner", method_pointer_58b061e133d2519ea6cddc325d685901, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("top_left_corner", method_pointer_65b887ebb57b56a59eb2bad81752002c, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("top_left_corner", method_pointer_59131c46c0215fdeab83096e7d9433fc, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("bottom_right_corner", method_pointer_257ce4ee5e3b564e8997785eb4d5fe91, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("bottom_right_corner", method_pointer_3544a79a0ad45e40b2217c91eaba2316, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("bottom_left_corner", method_pointer_8d2502a228c851acba4c0a8d8c38536e, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("bottom_left_corner", method_pointer_464bd5277be2574da6cd296dba5b0bd0, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("top_rows", method_pointer_ad42833ed862593d86a3d1ec4d2fe097, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("top_rows", method_pointer_010d82d4cdc6579984b7efdf7316063a, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("bottom_rows", method_pointer_087cfac0e9eb5b6596bb85ceb10cab7e, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("bottom_rows", method_pointer_4a587b53b7d8545b80e1073d88c21db9, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("middle_rows", method_pointer_707312bbeeef5ce6a200fcaae6fae660, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("middle_rows", method_pointer_49eb70aa3f4f5be6925d7f8f650bc3b1, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("left_cols", method_pointer_5de5af773b15563abccbd67fb19fb120, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("right_cols", method_pointer_2e58510e440b514c810ff8e69ead93c4, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("middle_cols", method_pointer_fbda514e690651069f48b00767d04030, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("col", method_pointer_fcc2a74b55235c3a80cdd31a5d1ee799, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("col", method_pointer_d137626f52665a1cac5a9934efb117fd, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("row", method_pointer_a2728f2bdcf759d58109f6c9dcb9ac0c, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("row", method_pointer_bb73f173464451dd81ae4482f39e7928, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("nullary_expr", method_pointer_bb295e30838f54a49e255691c1638432, "");
    class_75fd3edfd3465199a36ecacb38609cb0.def("nullary_expr", method_pointer_545073846f4358ae8b586ab8a687e899, "");
    class_75fd3edfd3465199a36ecacb38609cb0.staticmethod("zero");
    class_75fd3edfd3465199a36ecacb38609cb0.staticmethod("nullary_expr");
    class_75fd3edfd3465199a36ecacb38609cb0.staticmethod("constant");
    class_75fd3edfd3465199a36ecacb38609cb0.staticmethod("ones");

    if(autowig::Held< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 > >::Type >();
    }

}