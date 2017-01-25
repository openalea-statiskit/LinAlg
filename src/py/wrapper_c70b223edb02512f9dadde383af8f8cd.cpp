#include "_ieigen.h"


namespace autowig
{
    void method_decorator_245812754bcf5b3f811bcfef78a60a70(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_a121aec5ace854bf9c06a8893c635eee(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, float  const & param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_8efec38e911352309aac94040594b051(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, float  const & param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_ac0c2ccf5c8154398797b48de6baa543(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_63970ef59d1c55259842b2f2a6f9948f(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_527488d70caa5497af4dd4370dbc3bea(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_f931791873265c8aa892cb316b084eff(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_c70b223edb02512f9dadde383af8f8cd()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_aac57893c5c0518f85bafef96fe0c210)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_6a6129083d765f37814e4fb53aa49888)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_05626c276dad5b1fb8a3b4f1decd8397)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_db0f93d7d48a5697abef629fcf2f6555)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_bb9f90d163aa5a2d8013b12bc75a09ed)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_40ca93da9ace54139103a91328595421)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_33813bf866d15c87836847af756111cf)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::fill;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_245812754bcf5b3f811bcfef78a60a70)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_a121aec5ace854bf9c06a8893c635eee)(long int , float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_8efec38e911352309aac94040594b051)(float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_ac0c2ccf5c8154398797b48de6baa543)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_63970ef59d1c55259842b2f2a6f9948f)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_527488d70caa5497af4dd4370dbc3bea)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_ec479b7d3cad5a47910646bc698c7845)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_46c27d435aa9541485331bb6d29236dc)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_890d7549ce895f10bcf9062305960819)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_33ec338cabda56e494cfa66bbdbea666)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_d1cd95b9f4ef57e6a4aaa05ef2017a05)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_005649d90bf5525da381b74e80dce35c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_66f82f9e39115450b3e5e9a093064425)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::allFinite;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_f931791873265c8aa892cb316b084eff)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::operator*=;
    class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_8438c7923f995ba6b7ea09e8a2d174e7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::eval;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_6cb2fc978b165413a4a345254943ef46)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::sum;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_855f0d08610e59e1ac842f31abfe9397)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::mean;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_f8c4328f44b85d87abfc23fbff6d6dc1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::trace;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_e35a2897e54c57e4a2a1bc764633a16b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::prod;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_934e52d2d3055d68952de670302f5ad2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::minCoeff;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_a57ad1bc84695b05a882a99d0f910c90)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::maxCoeff;
    float  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_b2b91918efc75343ad262fb0abe9c927)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_5eaf5a1b84015448bbc04de31c62b583)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_9256d2cbd9f95f059d5c10aa74e83782)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_b186184fe99755aab8529b5e19287f3e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::*method_pointer_0978301fb19552b19f49536d2d9ddd1c)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 > > > class_c70b223edb02512f9dadde383af8f8cd("_DenseBase_c70b223edb02512f9dadde383af8f8cd", "", boost::python::no_init);
    class_c70b223edb02512f9dadde383af8f8cd.def("non_zeros", method_pointer_aac57893c5c0518f85bafef96fe0c210, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("outer_size", method_pointer_6a6129083d765f37814e4fb53aa49888, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("inner_size", method_pointer_05626c276dad5b1fb8a3b4f1decd8397, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("resize", method_pointer_db0f93d7d48a5697abef629fcf2f6555, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("resize", method_pointer_bb9f90d163aa5a2d8013b12bc75a09ed, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("transpose_in_place", method_pointer_40ca93da9ace54139103a91328595421, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("fill", method_pointer_33813bf866d15c87836847af756111cf, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("set_constant", method_pointer_245812754bcf5b3f811bcfef78a60a70, boost::python::return_internal_reference<>(), "");
    class_c70b223edb02512f9dadde383af8f8cd.def("set_constant", autowig::method_decorator_245812754bcf5b3f811bcfef78a60a70);
    class_c70b223edb02512f9dadde383af8f8cd.def("set_lin_spaced", method_pointer_a121aec5ace854bf9c06a8893c635eee, boost::python::return_internal_reference<>(), "");
    class_c70b223edb02512f9dadde383af8f8cd.def("set_lin_spaced", autowig::method_decorator_a121aec5ace854bf9c06a8893c635eee);
    class_c70b223edb02512f9dadde383af8f8cd.def("set_lin_spaced", method_pointer_8efec38e911352309aac94040594b051, boost::python::return_internal_reference<>(), "");
    class_c70b223edb02512f9dadde383af8f8cd.def("set_lin_spaced", autowig::method_decorator_8efec38e911352309aac94040594b051);
    class_c70b223edb02512f9dadde383af8f8cd.def("set_zero", method_pointer_ac0c2ccf5c8154398797b48de6baa543, boost::python::return_internal_reference<>(), "");
    class_c70b223edb02512f9dadde383af8f8cd.def("set_zero", autowig::method_decorator_ac0c2ccf5c8154398797b48de6baa543);
    class_c70b223edb02512f9dadde383af8f8cd.def("set_ones", method_pointer_63970ef59d1c55259842b2f2a6f9948f, boost::python::return_internal_reference<>(), "");
    class_c70b223edb02512f9dadde383af8f8cd.def("set_ones", autowig::method_decorator_63970ef59d1c55259842b2f2a6f9948f);
    class_c70b223edb02512f9dadde383af8f8cd.def("set_random", method_pointer_527488d70caa5497af4dd4370dbc3bea, boost::python::return_internal_reference<>(), "");
    class_c70b223edb02512f9dadde383af8f8cd.def("set_random", autowig::method_decorator_527488d70caa5497af4dd4370dbc3bea);
    class_c70b223edb02512f9dadde383af8f8cd.def("is_much_smaller_than", method_pointer_ec479b7d3cad5a47910646bc698c7845, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("is_approx_to_constant", method_pointer_46c27d435aa9541485331bb6d29236dc, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("is_constant", method_pointer_890d7549ce895f10bcf9062305960819, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("is_zero", method_pointer_33ec338cabda56e494cfa66bbdbea666, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("is_ones", method_pointer_d1cd95b9f4ef57e6a4aaa05ef2017a05, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("has_na_n", method_pointer_005649d90bf5525da381b74e80dce35c, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("all_finite", method_pointer_66f82f9e39115450b3e5e9a093064425, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("__imul__", method_pointer_f931791873265c8aa892cb316b084eff, boost::python::return_internal_reference<>(), "");
    class_c70b223edb02512f9dadde383af8f8cd.def("__imul__", autowig::method_decorator_f931791873265c8aa892cb316b084eff);
    class_c70b223edb02512f9dadde383af8f8cd.def("eval", method_pointer_8438c7923f995ba6b7ea09e8a2d174e7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c70b223edb02512f9dadde383af8f8cd.def("sum", method_pointer_6cb2fc978b165413a4a345254943ef46, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("mean", method_pointer_855f0d08610e59e1ac842f31abfe9397, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("trace", method_pointer_f8c4328f44b85d87abfc23fbff6d6dc1, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("prod", method_pointer_e35a2897e54c57e4a2a1bc764633a16b, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("min_coeff", method_pointer_934e52d2d3055d68952de670302f5ad2, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("max_coeff", method_pointer_a57ad1bc84695b05a882a99d0f910c90, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("value", method_pointer_b2b91918efc75343ad262fb0abe9c927, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c70b223edb02512f9dadde383af8f8cd.def("all", method_pointer_5eaf5a1b84015448bbc04de31c62b583, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("any", method_pointer_9256d2cbd9f95f059d5c10aa74e83782, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("count", method_pointer_b186184fe99755aab8529b5e19287f3e, "");
    class_c70b223edb02512f9dadde383af8f8cd.def("reverse_in_place", method_pointer_0978301fb19552b19f49536d2d9ddd1c, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 3 > > >();
    }

}