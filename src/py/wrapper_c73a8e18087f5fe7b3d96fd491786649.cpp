#include "_ieigen.h"


namespace autowig
{
    void method_decorator_191a8fc3fdf052b4a02ee98fe07361fa(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_61692035df605f2ca712824c711a0152(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_f97ab3b2807e54b1a64c76c19e133135(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, struct ::std::complex< double >  const & param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_684cbaa06f815de5b6e17fdd42f0e868(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_a2051aebdc56556d95928e9fd0cbaedf(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_290890c16d0f5c708be93a68dde0071a(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_4abe4d9cab7258f6b17ad4171c684540(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_c73a8e18087f5fe7b3d96fd491786649()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_aef6a760497f51fc88c07ea1fb49b9b0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_78a60e31e5b05d3aa3cefe2248e4dbb1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_ad856f873a7d595399a719eb0256a39f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_ff4ed7dfc76b5a7c919ba186d48fe9b1)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_80ca3b261f1f5c1db810d3de94625cf9)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_c050b29ca5835e89abb4d0ba19260507)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_0744721cdc4452868feec90d62415e08)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_191a8fc3fdf052b4a02ee98fe07361fa)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_61692035df605f2ca712824c711a0152)(long int , struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_f97ab3b2807e54b1a64c76c19e133135)(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_684cbaa06f815de5b6e17fdd42f0e868)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_a2051aebdc56556d95928e9fd0cbaedf)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_290890c16d0f5c708be93a68dde0071a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_7c672fd4bf3457d287fcd742aacd77bc)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_db7d612e52655432a7c34efcbe1d3363)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_3dd926bdb70d52a6aaad32be090cf13f)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_c7c4268514be5d66aab4f834674117bf)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_d5fd8e573d3d5d87bf48712250321c5b)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_5c7e80795d805063ad267a46a16778c1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_269f2b12f4d759ae8fa60e14e40cc4ab)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_4abe4d9cab7258f6b17ad4171c684540)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_6961fab10b0d5fdbadcc407b853b744b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::eval;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_8ae2674e3a30563aa56b3a5240ca9a24)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::sum;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_2a28e98f478c5180be6a915c2573ba59)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::mean;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_0b244358b1de53b396cfcf5fe3226e43)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::trace;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_b52f42b39faf54c8917b05f77176cb0e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::prod;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_178eab6f4f21561da913bb97492d4bfa)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::minCoeff;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_07c422e6bbe354859968745cd41ec70f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::maxCoeff;
    struct ::std::complex< double >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_677711e5d1d55291a687b91af6182236)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_962df23101e458bf94607e69a66f8a5e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_5f1e4de752a850bbbdf910e6cf728c27)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_604ef7c16ee4592eb632919e7fd5e823)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_e51951799b5a571a93e6ef27cf932c63)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 > > > class_c73a8e18087f5fe7b3d96fd491786649("_DenseBase_c73a8e18087f5fe7b3d96fd491786649", "", boost::python::no_init);
    class_c73a8e18087f5fe7b3d96fd491786649.def("non_zeros", method_pointer_aef6a760497f51fc88c07ea1fb49b9b0, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("outer_size", method_pointer_78a60e31e5b05d3aa3cefe2248e4dbb1, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("inner_size", method_pointer_ad856f873a7d595399a719eb0256a39f, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("resize", method_pointer_ff4ed7dfc76b5a7c919ba186d48fe9b1, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("resize", method_pointer_80ca3b261f1f5c1db810d3de94625cf9, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("transpose_in_place", method_pointer_c050b29ca5835e89abb4d0ba19260507, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("fill", method_pointer_0744721cdc4452868feec90d62415e08, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("set_constant", method_pointer_191a8fc3fdf052b4a02ee98fe07361fa, boost::python::return_internal_reference<>(), "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("set_constant", autowig::method_decorator_191a8fc3fdf052b4a02ee98fe07361fa);
    class_c73a8e18087f5fe7b3d96fd491786649.def("set_lin_spaced", method_pointer_61692035df605f2ca712824c711a0152, boost::python::return_internal_reference<>(), "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("set_lin_spaced", autowig::method_decorator_61692035df605f2ca712824c711a0152);
    class_c73a8e18087f5fe7b3d96fd491786649.def("set_lin_spaced", method_pointer_f97ab3b2807e54b1a64c76c19e133135, boost::python::return_internal_reference<>(), "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("set_lin_spaced", autowig::method_decorator_f97ab3b2807e54b1a64c76c19e133135);
    class_c73a8e18087f5fe7b3d96fd491786649.def("set_zero", method_pointer_684cbaa06f815de5b6e17fdd42f0e868, boost::python::return_internal_reference<>(), "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("set_zero", autowig::method_decorator_684cbaa06f815de5b6e17fdd42f0e868);
    class_c73a8e18087f5fe7b3d96fd491786649.def("set_ones", method_pointer_a2051aebdc56556d95928e9fd0cbaedf, boost::python::return_internal_reference<>(), "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("set_ones", autowig::method_decorator_a2051aebdc56556d95928e9fd0cbaedf);
    class_c73a8e18087f5fe7b3d96fd491786649.def("set_random", method_pointer_290890c16d0f5c708be93a68dde0071a, boost::python::return_internal_reference<>(), "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("set_random", autowig::method_decorator_290890c16d0f5c708be93a68dde0071a);
    class_c73a8e18087f5fe7b3d96fd491786649.def("is_much_smaller_than", method_pointer_7c672fd4bf3457d287fcd742aacd77bc, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("is_approx_to_constant", method_pointer_db7d612e52655432a7c34efcbe1d3363, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("is_constant", method_pointer_3dd926bdb70d52a6aaad32be090cf13f, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("is_zero", method_pointer_c7c4268514be5d66aab4f834674117bf, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("is_ones", method_pointer_d5fd8e573d3d5d87bf48712250321c5b, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("has_na_n", method_pointer_5c7e80795d805063ad267a46a16778c1, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("all_finite", method_pointer_269f2b12f4d759ae8fa60e14e40cc4ab, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("__imul__", method_pointer_4abe4d9cab7258f6b17ad4171c684540, boost::python::return_internal_reference<>(), "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("__imul__", autowig::method_decorator_4abe4d9cab7258f6b17ad4171c684540);
    class_c73a8e18087f5fe7b3d96fd491786649.def("eval", method_pointer_6961fab10b0d5fdbadcc407b853b744b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("sum", method_pointer_8ae2674e3a30563aa56b3a5240ca9a24, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("mean", method_pointer_2a28e98f478c5180be6a915c2573ba59, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("trace", method_pointer_0b244358b1de53b396cfcf5fe3226e43, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("prod", method_pointer_b52f42b39faf54c8917b05f77176cb0e, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("min_coeff", method_pointer_178eab6f4f21561da913bb97492d4bfa, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("max_coeff", method_pointer_07c422e6bbe354859968745cd41ec70f, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("value", method_pointer_677711e5d1d55291a687b91af6182236, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("all", method_pointer_962df23101e458bf94607e69a66f8a5e, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("any", method_pointer_5f1e4de752a850bbbdf910e6cf728c27, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("count", method_pointer_604ef7c16ee4592eb632919e7fd5e823, "");
    class_c73a8e18087f5fe7b3d96fd491786649.def("reverse_in_place", method_pointer_e51951799b5a571a93e6ef27cf932c63, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 > > >();
    }

}