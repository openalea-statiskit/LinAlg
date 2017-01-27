#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2dcd9052d0125c7c98cdba7fd48e75e2(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
// TODO     void method_decorator_70645353618b5464a998166455176350(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO     void method_decorator_20d89a062fa15debb609fc2b9ec000bb(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, struct ::std::complex< float >  const & param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_173f1b3825bf50a0aee4ad33e5e9783b(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_7b7d9d02aba35189ab7dbcd0e00fe269(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_443fe07d2b745348acf3d887d0f1495f(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_203692a8d5f45d34af5423599f9114c4(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_74f7bf1e71f65f4eb75cb570292f1994()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_f935aff53d995ea9a5cf0c4ececb7d02)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_a1379ca178d157fb8cb03ca18caf3df5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_e7f595c4911f5ca7ae4b56a996da1adc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_2b634c3566f0520c8c021d281e0090a3)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_9a3f265455ad56c7b96c08c1033d729a)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_e2e30aa4d1215f4cbfd030691be8b9c3)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_af79095339de56a7974abf77ac0c95b4)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_2dcd9052d0125c7c98cdba7fd48e75e2)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setConstant;
// TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_70645353618b5464a998166455176350)(long int , struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setLinSpaced;
// TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_20d89a062fa15debb609fc2b9ec000bb)(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_173f1b3825bf50a0aee4ad33e5e9783b)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_7b7d9d02aba35189ab7dbcd0e00fe269)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_443fe07d2b745348acf3d887d0f1495f)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_a39644670ba750d78dc164b97f4cb82e)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_9828f1edf948536f9ad0284f65d07208)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_9705d07c94b5527bb88e14bf413e4f8f)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_9eecc92d62c7504bb1729a16c67d9c38)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_233e0d6db6065fe7ad89d9866a4fa273)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_c8745ae954735905a3163ee1bca26dd8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_5e748c18912a52fab41f4103f052bce4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_203692a8d5f45d34af5423599f9114c4)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_dd42b8f40b585b6f8b84171b01f15a03)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::eval;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_6a0cfe91f5b45db081280f9d92c56c62)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::sum;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_8996c5c00f4a5115a7823bbf7fe8e892)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::mean;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_d170ae2f548555158438f0bd15087adf)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::trace;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_4616688d9d615f6abbb90bc1b263e8bc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::prod;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_4e821abf93045584a8f9ccda6c45a5af)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 > > > class_74f7bf1e71f65f4eb75cb570292f1994("_DenseBase_74f7bf1e71f65f4eb75cb570292f1994", "", boost::python::no_init);
    class_74f7bf1e71f65f4eb75cb570292f1994.def("non_zeros", method_pointer_f935aff53d995ea9a5cf0c4ececb7d02, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("outer_size", method_pointer_a1379ca178d157fb8cb03ca18caf3df5, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("inner_size", method_pointer_e7f595c4911f5ca7ae4b56a996da1adc, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("resize", method_pointer_2b634c3566f0520c8c021d281e0090a3, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("resize", method_pointer_9a3f265455ad56c7b96c08c1033d729a, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("transpose_in_place", method_pointer_e2e30aa4d1215f4cbfd030691be8b9c3, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("fill", method_pointer_af79095339de56a7974abf77ac0c95b4, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("set_constant", method_pointer_2dcd9052d0125c7c98cdba7fd48e75e2, boost::python::return_internal_reference<>(), "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("set_constant", autowig::method_decorator_2dcd9052d0125c7c98cdba7fd48e75e2);
// TODO // TODO     class_74f7bf1e71f65f4eb75cb570292f1994.def("set_lin_spaced", method_pointer_70645353618b5464a998166455176350, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_74f7bf1e71f65f4eb75cb570292f1994.def("set_lin_spaced", autowig::method_decorator_70645353618b5464a998166455176350);
// TODO // TODO     class_74f7bf1e71f65f4eb75cb570292f1994.def("set_lin_spaced", method_pointer_20d89a062fa15debb609fc2b9ec000bb, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_74f7bf1e71f65f4eb75cb570292f1994.def("set_lin_spaced", autowig::method_decorator_20d89a062fa15debb609fc2b9ec000bb);
    class_74f7bf1e71f65f4eb75cb570292f1994.def("set_zero", method_pointer_173f1b3825bf50a0aee4ad33e5e9783b, boost::python::return_internal_reference<>(), "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("set_zero", autowig::method_decorator_173f1b3825bf50a0aee4ad33e5e9783b);
    class_74f7bf1e71f65f4eb75cb570292f1994.def("set_ones", method_pointer_7b7d9d02aba35189ab7dbcd0e00fe269, boost::python::return_internal_reference<>(), "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("set_ones", autowig::method_decorator_7b7d9d02aba35189ab7dbcd0e00fe269);
    class_74f7bf1e71f65f4eb75cb570292f1994.def("set_random", method_pointer_443fe07d2b745348acf3d887d0f1495f, boost::python::return_internal_reference<>(), "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("set_random", autowig::method_decorator_443fe07d2b745348acf3d887d0f1495f);
    class_74f7bf1e71f65f4eb75cb570292f1994.def("is_much_smaller_than", method_pointer_a39644670ba750d78dc164b97f4cb82e, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("is_approx_to_constant", method_pointer_9828f1edf948536f9ad0284f65d07208, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("is_constant", method_pointer_9705d07c94b5527bb88e14bf413e4f8f, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("is_zero", method_pointer_9eecc92d62c7504bb1729a16c67d9c38, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("is_ones", method_pointer_233e0d6db6065fe7ad89d9866a4fa273, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("has_na_n", method_pointer_c8745ae954735905a3163ee1bca26dd8, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("all_finite", method_pointer_5e748c18912a52fab41f4103f052bce4, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("__imul__", method_pointer_203692a8d5f45d34af5423599f9114c4, boost::python::return_internal_reference<>(), "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("__imul__", autowig::method_decorator_203692a8d5f45d34af5423599f9114c4);
    class_74f7bf1e71f65f4eb75cb570292f1994.def("eval", method_pointer_dd42b8f40b585b6f8b84171b01f15a03, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("sum", method_pointer_6a0cfe91f5b45db081280f9d92c56c62, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("mean", method_pointer_8996c5c00f4a5115a7823bbf7fe8e892, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("trace", method_pointer_d170ae2f548555158438f0bd15087adf, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("prod", method_pointer_4616688d9d615f6abbb90bc1b263e8bc, "");
    class_74f7bf1e71f65f4eb75cb570292f1994.def("reverse_in_place", method_pointer_4e821abf93045584a8f9ccda6c45a5af, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, 3 > > >();
    }

}