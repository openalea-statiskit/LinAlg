#include "_ieigen.h"


namespace autowig
{
    void method_decorator_8440363fff9d55e5957134e6a2a7969e(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_388d5a678645585ebb557b1c4e16bf70(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, int  const & param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_bf9792db407a57f6a51c3a69201e6364(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, int  const & param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_66c33c46c5395e9c98e8d81e1684cb43(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_6d6fcfee10a35d1ca743998f290a0065(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_7457752e3a8150489ef779ace24a7968(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_f7e181784dd355c3bfd62e2c287cc829(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_8324044d422857b5bd15609b90ae2f46()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_272a2c74513157be906149b9c664f147)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_8e50c94c53c5578483d4ecffecfeff82)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_d86e7a89feeb51e19350c771e3cfadb8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_6ffdabdd66895b65a269e0271ae3ad0c)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_057f1e383ed250d08db4a9ac38aeebfb)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_349f62c008f5593a92c942e33f0f60aa)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_ca014fa043ae5a27bbabdff58d85df2c)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::fill;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_8440363fff9d55e5957134e6a2a7969e)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setConstant;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_388d5a678645585ebb557b1c4e16bf70)(long int , int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_bf9792db407a57f6a51c3a69201e6364)(int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setLinSpaced;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_66c33c46c5395e9c98e8d81e1684cb43)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_6d6fcfee10a35d1ca743998f290a0065)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_7457752e3a8150489ef779ace24a7968)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_fe1e99b7c9af5036a095a2ceace730e7)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_2840531b331b509bac55ac55eee2364b)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_53ccf74e42f9555b841690c13664c38d)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_47977fbebc785737bc467185be457ae2)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_38f709fc99b05fbc9cc60e076ab09e8d)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_b27600fe665e516d875335306dd1f87f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_98857d60726b50adb38ebed33172961c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::allFinite;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_f7e181784dd355c3bfd62e2c287cc829)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::operator*=;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_d9b55b2c0c025692a161ad84ba76f98f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::eval;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_44478f71f72e57b5b085e399adce1d80)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::sum;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_ff0ce2e1db8c5d6a9ed0c2b7b78077c4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::mean;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_d2b71d18181b5583bdbf72763c96641c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::trace;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_247d14367ad35ae1b2c6c9c539c2f729)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::prod;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_7b30a02d96af5fc0b57f028584087712)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::minCoeff;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_1b9de15df98958f2a4b2f1b8791c97ef)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::maxCoeff;
    int  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_221c75296ee4518f875bc041568b78cf)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_e10a8fecc2bc5c3e9858c337349f2925)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_0d0dbaf0053e5cd0a863bd1eecae88a4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_63884b6535b35b5396c3c1368493d218)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_9e5193dba6cd57fd8912454887aa9898)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 > > > class_8324044d422857b5bd15609b90ae2f46("_DenseBase_8324044d422857b5bd15609b90ae2f46", "", boost::python::no_init);
    class_8324044d422857b5bd15609b90ae2f46.def("non_zeros", method_pointer_272a2c74513157be906149b9c664f147, "");
    class_8324044d422857b5bd15609b90ae2f46.def("outer_size", method_pointer_8e50c94c53c5578483d4ecffecfeff82, "");
    class_8324044d422857b5bd15609b90ae2f46.def("inner_size", method_pointer_d86e7a89feeb51e19350c771e3cfadb8, "");
    class_8324044d422857b5bd15609b90ae2f46.def("resize", method_pointer_6ffdabdd66895b65a269e0271ae3ad0c, "");
    class_8324044d422857b5bd15609b90ae2f46.def("resize", method_pointer_057f1e383ed250d08db4a9ac38aeebfb, "");
    class_8324044d422857b5bd15609b90ae2f46.def("transpose_in_place", method_pointer_349f62c008f5593a92c942e33f0f60aa, "");
    class_8324044d422857b5bd15609b90ae2f46.def("fill", method_pointer_ca014fa043ae5a27bbabdff58d85df2c, "");
    class_8324044d422857b5bd15609b90ae2f46.def("set_constant", method_pointer_8440363fff9d55e5957134e6a2a7969e, boost::python::return_internal_reference<>(), "");
    class_8324044d422857b5bd15609b90ae2f46.def("set_constant", autowig::method_decorator_8440363fff9d55e5957134e6a2a7969e);
    class_8324044d422857b5bd15609b90ae2f46.def("set_lin_spaced", method_pointer_388d5a678645585ebb557b1c4e16bf70, boost::python::return_internal_reference<>(), "");
    class_8324044d422857b5bd15609b90ae2f46.def("set_lin_spaced", autowig::method_decorator_388d5a678645585ebb557b1c4e16bf70);
    class_8324044d422857b5bd15609b90ae2f46.def("set_lin_spaced", method_pointer_bf9792db407a57f6a51c3a69201e6364, boost::python::return_internal_reference<>(), "");
    class_8324044d422857b5bd15609b90ae2f46.def("set_lin_spaced", autowig::method_decorator_bf9792db407a57f6a51c3a69201e6364);
    class_8324044d422857b5bd15609b90ae2f46.def("set_zero", method_pointer_66c33c46c5395e9c98e8d81e1684cb43, boost::python::return_internal_reference<>(), "");
    class_8324044d422857b5bd15609b90ae2f46.def("set_zero", autowig::method_decorator_66c33c46c5395e9c98e8d81e1684cb43);
    class_8324044d422857b5bd15609b90ae2f46.def("set_ones", method_pointer_6d6fcfee10a35d1ca743998f290a0065, boost::python::return_internal_reference<>(), "");
    class_8324044d422857b5bd15609b90ae2f46.def("set_ones", autowig::method_decorator_6d6fcfee10a35d1ca743998f290a0065);
    class_8324044d422857b5bd15609b90ae2f46.def("set_random", method_pointer_7457752e3a8150489ef779ace24a7968, boost::python::return_internal_reference<>(), "");
    class_8324044d422857b5bd15609b90ae2f46.def("set_random", autowig::method_decorator_7457752e3a8150489ef779ace24a7968);
    class_8324044d422857b5bd15609b90ae2f46.def("is_much_smaller_than", method_pointer_fe1e99b7c9af5036a095a2ceace730e7, "");
    class_8324044d422857b5bd15609b90ae2f46.def("is_approx_to_constant", method_pointer_2840531b331b509bac55ac55eee2364b, "");
    class_8324044d422857b5bd15609b90ae2f46.def("is_constant", method_pointer_53ccf74e42f9555b841690c13664c38d, "");
    class_8324044d422857b5bd15609b90ae2f46.def("is_zero", method_pointer_47977fbebc785737bc467185be457ae2, "");
    class_8324044d422857b5bd15609b90ae2f46.def("is_ones", method_pointer_38f709fc99b05fbc9cc60e076ab09e8d, "");
    class_8324044d422857b5bd15609b90ae2f46.def("has_na_n", method_pointer_b27600fe665e516d875335306dd1f87f, "");
    class_8324044d422857b5bd15609b90ae2f46.def("all_finite", method_pointer_98857d60726b50adb38ebed33172961c, "");
    class_8324044d422857b5bd15609b90ae2f46.def("__imul__", method_pointer_f7e181784dd355c3bfd62e2c287cc829, boost::python::return_internal_reference<>(), "");
    class_8324044d422857b5bd15609b90ae2f46.def("__imul__", autowig::method_decorator_f7e181784dd355c3bfd62e2c287cc829);
    class_8324044d422857b5bd15609b90ae2f46.def("eval", method_pointer_d9b55b2c0c025692a161ad84ba76f98f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8324044d422857b5bd15609b90ae2f46.def("sum", method_pointer_44478f71f72e57b5b085e399adce1d80, "");
    class_8324044d422857b5bd15609b90ae2f46.def("mean", method_pointer_ff0ce2e1db8c5d6a9ed0c2b7b78077c4, "");
    class_8324044d422857b5bd15609b90ae2f46.def("trace", method_pointer_d2b71d18181b5583bdbf72763c96641c, "");
    class_8324044d422857b5bd15609b90ae2f46.def("prod", method_pointer_247d14367ad35ae1b2c6c9c539c2f729, "");
    class_8324044d422857b5bd15609b90ae2f46.def("min_coeff", method_pointer_7b30a02d96af5fc0b57f028584087712, "");
    class_8324044d422857b5bd15609b90ae2f46.def("max_coeff", method_pointer_1b9de15df98958f2a4b2f1b8791c97ef, "");
    class_8324044d422857b5bd15609b90ae2f46.def("value", method_pointer_221c75296ee4518f875bc041568b78cf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8324044d422857b5bd15609b90ae2f46.def("all", method_pointer_e10a8fecc2bc5c3e9858c337349f2925, "");
    class_8324044d422857b5bd15609b90ae2f46.def("any", method_pointer_0d0dbaf0053e5cd0a863bd1eecae88a4, "");
    class_8324044d422857b5bd15609b90ae2f46.def("count", method_pointer_63884b6535b35b5396c3c1368493d218, "");
    class_8324044d422857b5bd15609b90ae2f46.def("reverse_in_place", method_pointer_9e5193dba6cd57fd8912454887aa9898, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, 3 > > >();
    }

}