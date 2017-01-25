#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a1097cc97c125bc89d9c3ab1e058e853(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_ab43e6f66d8052e69bd9233d6495f315(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_13618a4d47f358cb95f1b48c7b9a0672(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, struct ::std::complex< float >  const & param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_6407e4ee41fb52ecb0f80d8dec2d8325(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_1683f121746453a481f4ca866c103dfb(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_5ee44ccce4e75c0c99ff59e0416cf256(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_58f582d0620d554cbb48e69b49c07459(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_93b0fb9c014a5638a999d3e5fa6d3d5b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_f087ac0b2b7e59b29d17b84e475ceafc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_f8d0ef246d7b52bb979c2e9a8d94672f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_f64269a949345795b3e7fd70b4dc8977)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_2b805b06c5c9550ab7a224d5cc8338d6)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_9495a876cc1d516a9ca1ee3dd3774eeb)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_148c747e9a0d538aae53c84767a054f2)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_648bb106e3f05fa7addf25f4c9eacb9f)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_a1097cc97c125bc89d9c3ab1e058e853)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_ab43e6f66d8052e69bd9233d6495f315)(long int , struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_13618a4d47f358cb95f1b48c7b9a0672)(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_6407e4ee41fb52ecb0f80d8dec2d8325)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_1683f121746453a481f4ca866c103dfb)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_5ee44ccce4e75c0c99ff59e0416cf256)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_10d6d88f702f5aef85c90d5c72049b61)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_b99c2214595553b4b3972ccbfd345b56)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_441c2d415e4e5dcda391db2dd68f81be)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_2478e804e9af5c3e83a89bf643f6478f)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_a73e4eef7c5b5b5c8ee19031723de652)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_d0825f768dbb5a11804d8e4bde0b3497)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_d7e93dbc84aa54bba5f3252f34b6bb45)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_58f582d0620d554cbb48e69b49c07459)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_ad3e398bddf8570ebd2428a53b58af51)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::eval;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_5e1be5df39975bb89b157b4515f5490b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::sum;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_0e30b942837b5cb9ba61cdd83d16b79d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::mean;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_4e1314a2f4dc58e3a7a292cafb269615)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::trace;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_81fa823a31ce56118fa97642c7bcf9b3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::prod;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_6342d12023e75ab6b88e5b93fc6348af)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::minCoeff;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_4e42391d4c6a50d488335b50030923b0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::maxCoeff;
    struct ::std::complex< float >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_c8925f0fb97751a9bd3321491b0e3d57)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_3121381917695464a91cd407bd32a2e9)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_68988e2972db5b1180addf0e347933e8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_a408386f7866511db004872ff03244e6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_fe16a6417a68539b9098cf7ffde617b9)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 > > > class_93b0fb9c014a5638a999d3e5fa6d3d5b("_DenseBase_93b0fb9c014a5638a999d3e5fa6d3d5b", "", boost::python::no_init);
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("non_zeros", method_pointer_f087ac0b2b7e59b29d17b84e475ceafc, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("outer_size", method_pointer_f8d0ef246d7b52bb979c2e9a8d94672f, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("inner_size", method_pointer_f64269a949345795b3e7fd70b4dc8977, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("resize", method_pointer_2b805b06c5c9550ab7a224d5cc8338d6, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("resize", method_pointer_9495a876cc1d516a9ca1ee3dd3774eeb, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("transpose_in_place", method_pointer_148c747e9a0d538aae53c84767a054f2, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("fill", method_pointer_648bb106e3f05fa7addf25f4c9eacb9f, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("set_constant", method_pointer_a1097cc97c125bc89d9c3ab1e058e853, boost::python::return_internal_reference<>(), "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("set_constant", autowig::method_decorator_a1097cc97c125bc89d9c3ab1e058e853);
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("set_lin_spaced", method_pointer_ab43e6f66d8052e69bd9233d6495f315, boost::python::return_internal_reference<>(), "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("set_lin_spaced", autowig::method_decorator_ab43e6f66d8052e69bd9233d6495f315);
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("set_lin_spaced", method_pointer_13618a4d47f358cb95f1b48c7b9a0672, boost::python::return_internal_reference<>(), "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("set_lin_spaced", autowig::method_decorator_13618a4d47f358cb95f1b48c7b9a0672);
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("set_zero", method_pointer_6407e4ee41fb52ecb0f80d8dec2d8325, boost::python::return_internal_reference<>(), "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("set_zero", autowig::method_decorator_6407e4ee41fb52ecb0f80d8dec2d8325);
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("set_ones", method_pointer_1683f121746453a481f4ca866c103dfb, boost::python::return_internal_reference<>(), "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("set_ones", autowig::method_decorator_1683f121746453a481f4ca866c103dfb);
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("set_random", method_pointer_5ee44ccce4e75c0c99ff59e0416cf256, boost::python::return_internal_reference<>(), "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("set_random", autowig::method_decorator_5ee44ccce4e75c0c99ff59e0416cf256);
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("is_much_smaller_than", method_pointer_10d6d88f702f5aef85c90d5c72049b61, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("is_approx_to_constant", method_pointer_b99c2214595553b4b3972ccbfd345b56, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("is_constant", method_pointer_441c2d415e4e5dcda391db2dd68f81be, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("is_zero", method_pointer_2478e804e9af5c3e83a89bf643f6478f, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("is_ones", method_pointer_a73e4eef7c5b5b5c8ee19031723de652, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("has_na_n", method_pointer_d0825f768dbb5a11804d8e4bde0b3497, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("all_finite", method_pointer_d7e93dbc84aa54bba5f3252f34b6bb45, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("__imul__", method_pointer_58f582d0620d554cbb48e69b49c07459, boost::python::return_internal_reference<>(), "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("__imul__", autowig::method_decorator_58f582d0620d554cbb48e69b49c07459);
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("eval", method_pointer_ad3e398bddf8570ebd2428a53b58af51, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("sum", method_pointer_5e1be5df39975bb89b157b4515f5490b, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("mean", method_pointer_0e30b942837b5cb9ba61cdd83d16b79d, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("trace", method_pointer_4e1314a2f4dc58e3a7a292cafb269615, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("prod", method_pointer_81fa823a31ce56118fa97642c7bcf9b3, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("min_coeff", method_pointer_6342d12023e75ab6b88e5b93fc6348af, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("max_coeff", method_pointer_4e42391d4c6a50d488335b50030923b0, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("value", method_pointer_c8925f0fb97751a9bd3321491b0e3d57, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("all", method_pointer_3121381917695464a91cd407bd32a2e9, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("any", method_pointer_68988e2972db5b1180addf0e347933e8, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("count", method_pointer_a408386f7866511db004872ff03244e6, "");
    class_93b0fb9c014a5638a999d3e5fa6d3d5b.def("reverse_in_place", method_pointer_fe16a6417a68539b9098cf7ffde617b9, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 3 > > >();
    }

}