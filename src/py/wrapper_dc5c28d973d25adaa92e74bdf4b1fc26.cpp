#include "_ieigen.h"


namespace autowig
{
    void method_decorator_0ca6aefe540b565eba4059f5d7ced0d2(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_942f854bbc1852b1be86b78cdc3c3582(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, float  const & param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_c3d4c7bb59b65f0985c8f93992217ddd(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, float  const & param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_8ee0d58b84c3516d92fad0819bfebd3a(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_2c536416e78257bc86e84bcadc8e63fe(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_b8ca87ac68735db088e0a6c67d73501d(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_16a223a6571e5eaea8c92a372dab5a53(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_dc5c28d973d25adaa92e74bdf4b1fc26()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_d4bd51a93f085126851165cfc93d7e8a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_25a9895eaddf519dbefc0711e29b2122)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_04e0ebce3b2a54f39fb88764f8ffc4ef)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_ff8b9d072c365e019d08c5a852a43773)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_49f58b043e67576d8edd2f4733b36946)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_52d3dcc45ebd579eaa8bef9c49b5ba43)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::fill;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_0ca6aefe540b565eba4059f5d7ced0d2)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_942f854bbc1852b1be86b78cdc3c3582)(long int , float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_c3d4c7bb59b65f0985c8f93992217ddd)(float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_8ee0d58b84c3516d92fad0819bfebd3a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_2c536416e78257bc86e84bcadc8e63fe)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_b8ca87ac68735db088e0a6c67d73501d)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_4fb935ad2de75750b8de65170f1289b9)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_10e7fd2bfd7f5382b2259ef729c4d1ee)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_a52f575465b05f30b5c84fddb8a05721)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_4808360327e85cef81e2d31772b57448)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_bd6cf6d3a1d853c6ae4b0290fb658525)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_9e45f257c12c598dae90a31cb5fe9568)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_b8a2a61ea7305a55af03011d6ff54b1b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::allFinite;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_16a223a6571e5eaea8c92a372dab5a53)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::operator*=;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_299241d376fd54a7bbcc300964918aa0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::eval;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_2ee1be8c883157f88d88f5f4bb9db22d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::sum;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_33d0d7fa5e3851e2902f797ec05c53d4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::mean;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_57f5a5f606835da2bfc1fdbcd9c42df6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::trace;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_9774264863365a24a161655c85f56fa5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::prod;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_38cf9a18eba757f1860a0a61c8b0b7c1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::minCoeff;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_ff2c0f7f1abf5e86ac9bdeb5006a51bd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::maxCoeff;
    float  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_fb04ebe8185157eda19acdf4bf5dee78)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_b038d39d92a65546895407cdeaa5d323)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_a1531c3876595aa7bd43e2ba1f3da420)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_7d606cc405325180a9a578d8a5d08f0d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::*method_pointer_6b416c06ca455e3eb899091314a78adf)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 > > > class_dc5c28d973d25adaa92e74bdf4b1fc26("_DenseBase_dc5c28d973d25adaa92e74bdf4b1fc26", "", boost::python::no_init);
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("non_zeros", method_pointer_d4bd51a93f085126851165cfc93d7e8a, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("outer_size", method_pointer_25a9895eaddf519dbefc0711e29b2122, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("inner_size", method_pointer_04e0ebce3b2a54f39fb88764f8ffc4ef, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("resize", method_pointer_ff8b9d072c365e019d08c5a852a43773, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("resize", method_pointer_49f58b043e67576d8edd2f4733b36946, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("fill", method_pointer_52d3dcc45ebd579eaa8bef9c49b5ba43, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("set_constant", method_pointer_0ca6aefe540b565eba4059f5d7ced0d2, boost::python::return_internal_reference<>(), "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("set_constant", autowig::method_decorator_0ca6aefe540b565eba4059f5d7ced0d2);
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("set_lin_spaced", method_pointer_942f854bbc1852b1be86b78cdc3c3582, boost::python::return_internal_reference<>(), "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("set_lin_spaced", autowig::method_decorator_942f854bbc1852b1be86b78cdc3c3582);
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("set_lin_spaced", method_pointer_c3d4c7bb59b65f0985c8f93992217ddd, boost::python::return_internal_reference<>(), "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("set_lin_spaced", autowig::method_decorator_c3d4c7bb59b65f0985c8f93992217ddd);
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("set_zero", method_pointer_8ee0d58b84c3516d92fad0819bfebd3a, boost::python::return_internal_reference<>(), "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("set_zero", autowig::method_decorator_8ee0d58b84c3516d92fad0819bfebd3a);
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("set_ones", method_pointer_2c536416e78257bc86e84bcadc8e63fe, boost::python::return_internal_reference<>(), "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("set_ones", autowig::method_decorator_2c536416e78257bc86e84bcadc8e63fe);
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("set_random", method_pointer_b8ca87ac68735db088e0a6c67d73501d, boost::python::return_internal_reference<>(), "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("set_random", autowig::method_decorator_b8ca87ac68735db088e0a6c67d73501d);
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("is_much_smaller_than", method_pointer_4fb935ad2de75750b8de65170f1289b9, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("is_approx_to_constant", method_pointer_10e7fd2bfd7f5382b2259ef729c4d1ee, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("is_constant", method_pointer_a52f575465b05f30b5c84fddb8a05721, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("is_zero", method_pointer_4808360327e85cef81e2d31772b57448, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("is_ones", method_pointer_bd6cf6d3a1d853c6ae4b0290fb658525, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("has_na_n", method_pointer_9e45f257c12c598dae90a31cb5fe9568, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("all_finite", method_pointer_b8a2a61ea7305a55af03011d6ff54b1b, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("__imul__", method_pointer_16a223a6571e5eaea8c92a372dab5a53, boost::python::return_internal_reference<>(), "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("__imul__", autowig::method_decorator_16a223a6571e5eaea8c92a372dab5a53);
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("eval", method_pointer_299241d376fd54a7bbcc300964918aa0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("sum", method_pointer_2ee1be8c883157f88d88f5f4bb9db22d, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("mean", method_pointer_33d0d7fa5e3851e2902f797ec05c53d4, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("trace", method_pointer_57f5a5f606835da2bfc1fdbcd9c42df6, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("prod", method_pointer_9774264863365a24a161655c85f56fa5, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("min_coeff", method_pointer_38cf9a18eba757f1860a0a61c8b0b7c1, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("max_coeff", method_pointer_ff2c0f7f1abf5e86ac9bdeb5006a51bd, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("value", method_pointer_fb04ebe8185157eda19acdf4bf5dee78, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("all", method_pointer_b038d39d92a65546895407cdeaa5d323, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("any", method_pointer_a1531c3876595aa7bd43e2ba1f3da420, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("count", method_pointer_7d606cc405325180a9a578d8a5d08f0d, "");
    class_dc5c28d973d25adaa92e74bdf4b1fc26.def("reverse_in_place", method_pointer_6b416c06ca455e3eb899091314a78adf, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 3 > > >();
    }

}