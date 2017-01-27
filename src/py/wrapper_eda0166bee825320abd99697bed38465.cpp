#include "_ieigen.h"


namespace autowig
{
    void method_decorator_1bd12e88b3035f50b276f5f76af32d64(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
// TODO     void method_decorator_60ea08df604d5c0daf0640907f94c80a(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, int  const & param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO     void method_decorator_d09009ad0d625ccd8d569f6c53d1fadc(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, int  const & param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_e5ae46ad500a5dd28909d4213f167ea2(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_00220c6fde3b5381b87b3454eae3fb5f(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_5616c30b061e5a948b4a6bfe98d26320(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_3f16f8ecabf95897837e13fc12a3dc9d(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_eda0166bee825320abd99697bed38465()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_6661ad87f62c51f19a0ed03aef3d8f0a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_b22296275aff56dab6df515dd7f26ecb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_24b6fd6701da5e00a099c7dda4f64933)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_460bb6ff8f50502481398cadce70fdb3)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_580f85af094f54d5825fd79304a8ca69)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_fbfc21cb6a875dd1b81282c18e9bb801)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_e54dd41b16b555148cb6601c3e4ae449)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::fill;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_1bd12e88b3035f50b276f5f76af32d64)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setConstant;
// TODO // TODO     class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_60ea08df604d5c0daf0640907f94c80a)(long int , int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setLinSpaced;
// TODO // TODO     class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_d09009ad0d625ccd8d569f6c53d1fadc)(int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_e5ae46ad500a5dd28909d4213f167ea2)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setZero;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_00220c6fde3b5381b87b3454eae3fb5f)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setOnes;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_5616c30b061e5a948b4a6bfe98d26320)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_323c17f8ddc754638f8d2bee8ddeb33e)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_81da9a5df14d53718b242a8a96ecdd99)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_2a35d08626ec51f0b62472c364de8a0c)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_4ade26a20a6d575aa552e2e30cf63557)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_5798465e20a05672800eb766c44ab057)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_be644667fc975169a3265be3a6005e0e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_67b264e343755d87ae9797de2d87e2b3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::allFinite;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_3f16f8ecabf95897837e13fc12a3dc9d)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::operator*=;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_5c888630214d54bea5b6d9c0233dbbd2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::eval;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_e075ea612e4155dcbe0b481a1b134653)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::sum;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_d77964f20fe458e1981cf3db2e230f19)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::mean;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_9c96344813795860909b182452ae73fa)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::trace;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_6d5f75df477056d69620c2fd49d095c8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::prod;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_88c2915f7a3e587789a978715c5508a9)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::minCoeff;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_71ed4a222f2f58148651c8ba41cdbd9d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::maxCoeff;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_c482951551895dad981a15e73b0ddeff)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_640c568c8d9858748fbc6bcdad9025fb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_358afd68627a59efbd8488f353f01409)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_68bee1389b3a533894ab43b68e299b77)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 > > > class_eda0166bee825320abd99697bed38465("_DenseBase_eda0166bee825320abd99697bed38465", "", boost::python::no_init);
    class_eda0166bee825320abd99697bed38465.def("non_zeros", method_pointer_6661ad87f62c51f19a0ed03aef3d8f0a, "");
    class_eda0166bee825320abd99697bed38465.def("outer_size", method_pointer_b22296275aff56dab6df515dd7f26ecb, "");
    class_eda0166bee825320abd99697bed38465.def("inner_size", method_pointer_24b6fd6701da5e00a099c7dda4f64933, "");
    class_eda0166bee825320abd99697bed38465.def("resize", method_pointer_460bb6ff8f50502481398cadce70fdb3, "");
    class_eda0166bee825320abd99697bed38465.def("resize", method_pointer_580f85af094f54d5825fd79304a8ca69, "");
    class_eda0166bee825320abd99697bed38465.def("transpose_in_place", method_pointer_fbfc21cb6a875dd1b81282c18e9bb801, "");
    class_eda0166bee825320abd99697bed38465.def("fill", method_pointer_e54dd41b16b555148cb6601c3e4ae449, "");
    class_eda0166bee825320abd99697bed38465.def("set_constant", method_pointer_1bd12e88b3035f50b276f5f76af32d64, boost::python::return_internal_reference<>(), "");
    class_eda0166bee825320abd99697bed38465.def("set_constant", autowig::method_decorator_1bd12e88b3035f50b276f5f76af32d64);
// TODO // TODO     class_eda0166bee825320abd99697bed38465.def("set_lin_spaced", method_pointer_60ea08df604d5c0daf0640907f94c80a, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_eda0166bee825320abd99697bed38465.def("set_lin_spaced", autowig::method_decorator_60ea08df604d5c0daf0640907f94c80a);
// TODO // TODO     class_eda0166bee825320abd99697bed38465.def("set_lin_spaced", method_pointer_d09009ad0d625ccd8d569f6c53d1fadc, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_eda0166bee825320abd99697bed38465.def("set_lin_spaced", autowig::method_decorator_d09009ad0d625ccd8d569f6c53d1fadc);
    class_eda0166bee825320abd99697bed38465.def("set_zero", method_pointer_e5ae46ad500a5dd28909d4213f167ea2, boost::python::return_internal_reference<>(), "");
    class_eda0166bee825320abd99697bed38465.def("set_zero", autowig::method_decorator_e5ae46ad500a5dd28909d4213f167ea2);
    class_eda0166bee825320abd99697bed38465.def("set_ones", method_pointer_00220c6fde3b5381b87b3454eae3fb5f, boost::python::return_internal_reference<>(), "");
    class_eda0166bee825320abd99697bed38465.def("set_ones", autowig::method_decorator_00220c6fde3b5381b87b3454eae3fb5f);
    class_eda0166bee825320abd99697bed38465.def("set_random", method_pointer_5616c30b061e5a948b4a6bfe98d26320, boost::python::return_internal_reference<>(), "");
    class_eda0166bee825320abd99697bed38465.def("set_random", autowig::method_decorator_5616c30b061e5a948b4a6bfe98d26320);
    class_eda0166bee825320abd99697bed38465.def("is_much_smaller_than", method_pointer_323c17f8ddc754638f8d2bee8ddeb33e, "");
    class_eda0166bee825320abd99697bed38465.def("is_approx_to_constant", method_pointer_81da9a5df14d53718b242a8a96ecdd99, "");
    class_eda0166bee825320abd99697bed38465.def("is_constant", method_pointer_2a35d08626ec51f0b62472c364de8a0c, "");
    class_eda0166bee825320abd99697bed38465.def("is_zero", method_pointer_4ade26a20a6d575aa552e2e30cf63557, "");
    class_eda0166bee825320abd99697bed38465.def("is_ones", method_pointer_5798465e20a05672800eb766c44ab057, "");
    class_eda0166bee825320abd99697bed38465.def("has_na_n", method_pointer_be644667fc975169a3265be3a6005e0e, "");
    class_eda0166bee825320abd99697bed38465.def("all_finite", method_pointer_67b264e343755d87ae9797de2d87e2b3, "");
    class_eda0166bee825320abd99697bed38465.def("__imul__", method_pointer_3f16f8ecabf95897837e13fc12a3dc9d, boost::python::return_internal_reference<>(), "");
    class_eda0166bee825320abd99697bed38465.def("__imul__", autowig::method_decorator_3f16f8ecabf95897837e13fc12a3dc9d);
    class_eda0166bee825320abd99697bed38465.def("eval", method_pointer_5c888630214d54bea5b6d9c0233dbbd2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_eda0166bee825320abd99697bed38465.def("sum", method_pointer_e075ea612e4155dcbe0b481a1b134653, "");
    class_eda0166bee825320abd99697bed38465.def("mean", method_pointer_d77964f20fe458e1981cf3db2e230f19, "");
    class_eda0166bee825320abd99697bed38465.def("trace", method_pointer_9c96344813795860909b182452ae73fa, "");
    class_eda0166bee825320abd99697bed38465.def("prod", method_pointer_6d5f75df477056d69620c2fd49d095c8, "");
    class_eda0166bee825320abd99697bed38465.def("min_coeff", method_pointer_88c2915f7a3e587789a978715c5508a9, "");
    class_eda0166bee825320abd99697bed38465.def("max_coeff", method_pointer_71ed4a222f2f58148651c8ba41cdbd9d, "");
    class_eda0166bee825320abd99697bed38465.def("all", method_pointer_c482951551895dad981a15e73b0ddeff, "");
    class_eda0166bee825320abd99697bed38465.def("any", method_pointer_640c568c8d9858748fbc6bcdad9025fb, "");
    class_eda0166bee825320abd99697bed38465.def("count", method_pointer_358afd68627a59efbd8488f353f01409, "");
    class_eda0166bee825320abd99697bed38465.def("reverse_in_place", method_pointer_68bee1389b3a533894ab43b68e299b77, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, 3 > > >();
    }

}