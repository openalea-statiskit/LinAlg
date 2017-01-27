#include "_ieigen.h"


namespace autowig
{
    void method_decorator_04647109432352a0a1f2bba96969481a(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_70755770e45a5f25a5c055e7d2a10e46(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, float  const & param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_2f5f0b095e1a503da58fd15353e4df9a(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, float  const & param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_ccefea30402157ce916583a9f6002171(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_f2f2c937806d54f39625c69cd87e8ed7(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_78eb3d016f6a5aff84b974a32846c313(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_2ca9256568ce52a3a708bb533907f0c4(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_2183e75d00bd5d3c989fb5fe76f3caa9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_815e98b74d485e988d4713d906db904d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_d0c726de7a73512f8be19e78fa76d602)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_4582ef208be25e15abb8cc4bc53728d5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_01817f8ac38752bd932ba192873843e2)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_1a15b90a87085d55aab6d01dd5669d75)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_a98122aafcd5593e98cc45c52c410e69)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_8f2684c8b66850fc819f91e8e4afe80b)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::fill;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_04647109432352a0a1f2bba96969481a)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_70755770e45a5f25a5c055e7d2a10e46)(long int , float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_2f5f0b095e1a503da58fd15353e4df9a)(float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_ccefea30402157ce916583a9f6002171)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_f2f2c937806d54f39625c69cd87e8ed7)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_78eb3d016f6a5aff84b974a32846c313)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_09cb08f5c32e5a6cae9d704dcda5e3b1)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_ad23518ebf095a33a784248508e74057)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_a6958ee3c64355a5ba0684d532664ba6)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_3b9ebd99f47f582680cb8410ccf03a5a)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_bc49f1a307a2540bb37258078d43dafc)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_8a56bbaa480c5eeda90c297ca5623d79)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_b80ebc094c6a51d684988da917ef400a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::allFinite;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_2ca9256568ce52a3a708bb533907f0c4)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::operator*=;
    class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_afcba4cf19b657979f9c3a0053528b97)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::eval;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_a9ad1e6c28185bcb91b0ee09fb186070)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::sum;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_ee58bba645495c54989856bd26474d59)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::mean;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_4267356cb2ec59bd8948254a2b2bcc58)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::trace;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_f87ff020481a5b18982b161c2fafc061)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::prod;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_5b137866757f5bfe956cb6cb160dad22)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::minCoeff;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_f1abd0ea78b558f3b5c2d007f5e2e7a5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::maxCoeff;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_ca43c0bc2d4854969641345647a7c846)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_ac21bd69d2345a5ead04cbacd56012d5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_1004a09810d85e5aa1bbc804f625ca82)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::*method_pointer_f4c5544c03225cbdb3a2a5900e1cc738)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 > > > class_2183e75d00bd5d3c989fb5fe76f3caa9("_DenseBase_2183e75d00bd5d3c989fb5fe76f3caa9", "", boost::python::no_init);
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("non_zeros", method_pointer_815e98b74d485e988d4713d906db904d, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("outer_size", method_pointer_d0c726de7a73512f8be19e78fa76d602, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("inner_size", method_pointer_4582ef208be25e15abb8cc4bc53728d5, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("resize", method_pointer_01817f8ac38752bd932ba192873843e2, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("resize", method_pointer_1a15b90a87085d55aab6d01dd5669d75, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("transpose_in_place", method_pointer_a98122aafcd5593e98cc45c52c410e69, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("fill", method_pointer_8f2684c8b66850fc819f91e8e4afe80b, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("set_constant", method_pointer_04647109432352a0a1f2bba96969481a, boost::python::return_internal_reference<>(), "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("set_constant", autowig::method_decorator_04647109432352a0a1f2bba96969481a);
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("set_lin_spaced", method_pointer_70755770e45a5f25a5c055e7d2a10e46, boost::python::return_internal_reference<>(), "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("set_lin_spaced", autowig::method_decorator_70755770e45a5f25a5c055e7d2a10e46);
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("set_lin_spaced", method_pointer_2f5f0b095e1a503da58fd15353e4df9a, boost::python::return_internal_reference<>(), "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("set_lin_spaced", autowig::method_decorator_2f5f0b095e1a503da58fd15353e4df9a);
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("set_zero", method_pointer_ccefea30402157ce916583a9f6002171, boost::python::return_internal_reference<>(), "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("set_zero", autowig::method_decorator_ccefea30402157ce916583a9f6002171);
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("set_ones", method_pointer_f2f2c937806d54f39625c69cd87e8ed7, boost::python::return_internal_reference<>(), "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("set_ones", autowig::method_decorator_f2f2c937806d54f39625c69cd87e8ed7);
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("set_random", method_pointer_78eb3d016f6a5aff84b974a32846c313, boost::python::return_internal_reference<>(), "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("set_random", autowig::method_decorator_78eb3d016f6a5aff84b974a32846c313);
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("is_much_smaller_than", method_pointer_09cb08f5c32e5a6cae9d704dcda5e3b1, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("is_approx_to_constant", method_pointer_ad23518ebf095a33a784248508e74057, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("is_constant", method_pointer_a6958ee3c64355a5ba0684d532664ba6, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("is_zero", method_pointer_3b9ebd99f47f582680cb8410ccf03a5a, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("is_ones", method_pointer_bc49f1a307a2540bb37258078d43dafc, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("has_na_n", method_pointer_8a56bbaa480c5eeda90c297ca5623d79, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("all_finite", method_pointer_b80ebc094c6a51d684988da917ef400a, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("__imul__", method_pointer_2ca9256568ce52a3a708bb533907f0c4, boost::python::return_internal_reference<>(), "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("__imul__", autowig::method_decorator_2ca9256568ce52a3a708bb533907f0c4);
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("eval", method_pointer_afcba4cf19b657979f9c3a0053528b97, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("sum", method_pointer_a9ad1e6c28185bcb91b0ee09fb186070, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("mean", method_pointer_ee58bba645495c54989856bd26474d59, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("trace", method_pointer_4267356cb2ec59bd8948254a2b2bcc58, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("prod", method_pointer_f87ff020481a5b18982b161c2fafc061, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("min_coeff", method_pointer_5b137866757f5bfe956cb6cb160dad22, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("max_coeff", method_pointer_f1abd0ea78b558f3b5c2d007f5e2e7a5, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("all", method_pointer_ca43c0bc2d4854969641345647a7c846, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("any", method_pointer_ac21bd69d2345a5ead04cbacd56012d5, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("count", method_pointer_1004a09810d85e5aa1bbc804f625ca82, "");
    class_2183e75d00bd5d3c989fb5fe76f3caa9.def("reverse_in_place", method_pointer_f4c5544c03225cbdb3a2a5900e1cc738, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, 3 > > >();
    }

}