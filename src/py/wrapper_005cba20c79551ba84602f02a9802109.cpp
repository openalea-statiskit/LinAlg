#include "_ieigen.h"


namespace autowig
{
    void method_decorator_b233fa0886055a33891564d9ff0aa815(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
// TODO     void method_decorator_bae27bfe00645e72ab15a7991ff02eae(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO     void method_decorator_54668748a53652df95f9a7c456243cab(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, struct ::std::complex< double >  const & param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_7589e3aeb6fa57a4b616d40529ada9eb(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_5258dd73a3365e0fa08f669ac4530867(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_61c7f816289a5b01887b6868d61be3b3(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_72d839ab3ee15a35917e851f5df54ea0(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_005cba20c79551ba84602f02a9802109()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_cdabf540c0665003812c0a2ca512f829)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_30de2062cf0459a3adc3bb1306253f42)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_a33a115ac7ab59069674b01cbabf56b5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_15cc7a5d421056a683ca49914681190e)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_d976ac13038b52c5993540f97ef3fccc)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_7720cf419fff591b91715a930cb904f4)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_de92c40f8ffc5ed689d7f18cbf584803)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_b233fa0886055a33891564d9ff0aa815)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setConstant;
// TODO     class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_bae27bfe00645e72ab15a7991ff02eae)(long int , struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setLinSpaced;
// TODO     class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_54668748a53652df95f9a7c456243cab)(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_7589e3aeb6fa57a4b616d40529ada9eb)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_5258dd73a3365e0fa08f669ac4530867)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_61c7f816289a5b01887b6868d61be3b3)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_798c495ec84d5ef0b7be82aef6011fd1)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_6eb00a63700e5b64a84d2e3aa539fc00)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_4679d64ab19f51a1b4e1e6982f34179d)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_850824e1bd055c3cad0efdf242a94946)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_fe59d5ac48d85705905914f0fd32d767)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_c63a0dca9f5952bcb20e8a5417327e53)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_45e24495aa5b57fba6b334be3d7d92dc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_72d839ab3ee15a35917e851f5df54ea0)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_e5af9af0e7c253a1a291a7f796537c9e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::eval;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_64e1fcf068715e98ada8aea3e4c54830)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::sum;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_c5c1b4ca0ef653f08d0a72d87045e6de)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::mean;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_2afe575332905ff8bed1ae7dd9bfd541)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::trace;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_f9ee8625fdce596992b5519e9a92d03b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::prod;
    struct ::std::complex< double >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_e37d05479cdd5b098c439bd7e82fefb0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::value;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_261b5c93ce445800926fa7f4c871c1fa)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 > > > class_005cba20c79551ba84602f02a9802109("_DenseBase_005cba20c79551ba84602f02a9802109", "", boost::python::no_init);
    class_005cba20c79551ba84602f02a9802109.def("non_zeros", method_pointer_cdabf540c0665003812c0a2ca512f829, "");
    class_005cba20c79551ba84602f02a9802109.def("outer_size", method_pointer_30de2062cf0459a3adc3bb1306253f42, "");
    class_005cba20c79551ba84602f02a9802109.def("inner_size", method_pointer_a33a115ac7ab59069674b01cbabf56b5, "");
    class_005cba20c79551ba84602f02a9802109.def("resize", method_pointer_15cc7a5d421056a683ca49914681190e, "");
    class_005cba20c79551ba84602f02a9802109.def("resize", method_pointer_d976ac13038b52c5993540f97ef3fccc, "");
    class_005cba20c79551ba84602f02a9802109.def("transpose_in_place", method_pointer_7720cf419fff591b91715a930cb904f4, "");
    class_005cba20c79551ba84602f02a9802109.def("fill", method_pointer_de92c40f8ffc5ed689d7f18cbf584803, "");
    class_005cba20c79551ba84602f02a9802109.def("set_constant", method_pointer_b233fa0886055a33891564d9ff0aa815, boost::python::return_internal_reference<>(), "");
    class_005cba20c79551ba84602f02a9802109.def("set_constant", autowig::method_decorator_b233fa0886055a33891564d9ff0aa815);
// TODO     class_005cba20c79551ba84602f02a9802109.def("set_lin_spaced", method_pointer_bae27bfe00645e72ab15a7991ff02eae, boost::python::return_internal_reference<>(), "");
// TODO     class_005cba20c79551ba84602f02a9802109.def("set_lin_spaced", autowig::method_decorator_bae27bfe00645e72ab15a7991ff02eae);
// TODO     class_005cba20c79551ba84602f02a9802109.def("set_lin_spaced", method_pointer_54668748a53652df95f9a7c456243cab, boost::python::return_internal_reference<>(), "");
// TODO     class_005cba20c79551ba84602f02a9802109.def("set_lin_spaced", autowig::method_decorator_54668748a53652df95f9a7c456243cab);
    class_005cba20c79551ba84602f02a9802109.def("set_zero", method_pointer_7589e3aeb6fa57a4b616d40529ada9eb, boost::python::return_internal_reference<>(), "");
    class_005cba20c79551ba84602f02a9802109.def("set_zero", autowig::method_decorator_7589e3aeb6fa57a4b616d40529ada9eb);
    class_005cba20c79551ba84602f02a9802109.def("set_ones", method_pointer_5258dd73a3365e0fa08f669ac4530867, boost::python::return_internal_reference<>(), "");
    class_005cba20c79551ba84602f02a9802109.def("set_ones", autowig::method_decorator_5258dd73a3365e0fa08f669ac4530867);
    class_005cba20c79551ba84602f02a9802109.def("set_random", method_pointer_61c7f816289a5b01887b6868d61be3b3, boost::python::return_internal_reference<>(), "");
    class_005cba20c79551ba84602f02a9802109.def("set_random", autowig::method_decorator_61c7f816289a5b01887b6868d61be3b3);
    class_005cba20c79551ba84602f02a9802109.def("is_much_smaller_than", method_pointer_798c495ec84d5ef0b7be82aef6011fd1, "");
    class_005cba20c79551ba84602f02a9802109.def("is_approx_to_constant", method_pointer_6eb00a63700e5b64a84d2e3aa539fc00, "");
    class_005cba20c79551ba84602f02a9802109.def("is_constant", method_pointer_4679d64ab19f51a1b4e1e6982f34179d, "");
    class_005cba20c79551ba84602f02a9802109.def("is_zero", method_pointer_850824e1bd055c3cad0efdf242a94946, "");
    class_005cba20c79551ba84602f02a9802109.def("is_ones", method_pointer_fe59d5ac48d85705905914f0fd32d767, "");
    class_005cba20c79551ba84602f02a9802109.def("has_na_n", method_pointer_c63a0dca9f5952bcb20e8a5417327e53, "");
    class_005cba20c79551ba84602f02a9802109.def("all_finite", method_pointer_45e24495aa5b57fba6b334be3d7d92dc, "");
    class_005cba20c79551ba84602f02a9802109.def("__imul__", method_pointer_72d839ab3ee15a35917e851f5df54ea0, boost::python::return_internal_reference<>(), "");
    class_005cba20c79551ba84602f02a9802109.def("__imul__", autowig::method_decorator_72d839ab3ee15a35917e851f5df54ea0);
    class_005cba20c79551ba84602f02a9802109.def("eval", method_pointer_e5af9af0e7c253a1a291a7f796537c9e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_005cba20c79551ba84602f02a9802109.def("sum", method_pointer_64e1fcf068715e98ada8aea3e4c54830, "");
    class_005cba20c79551ba84602f02a9802109.def("mean", method_pointer_c5c1b4ca0ef653f08d0a72d87045e6de, "");
    class_005cba20c79551ba84602f02a9802109.def("trace", method_pointer_2afe575332905ff8bed1ae7dd9bfd541, "");
    class_005cba20c79551ba84602f02a9802109.def("prod", method_pointer_f9ee8625fdce596992b5519e9a92d03b, "");
    class_005cba20c79551ba84602f02a9802109.def("value", method_pointer_e37d05479cdd5b098c439bd7e82fefb0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_005cba20c79551ba84602f02a9802109.def("reverse_in_place", method_pointer_261b5c93ce445800926fa7f4c871c1fa, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 > > >();
    }

}