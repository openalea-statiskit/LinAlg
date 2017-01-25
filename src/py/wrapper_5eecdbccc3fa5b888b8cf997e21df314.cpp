#include "_ieigen.h"


namespace autowig
{
    void method_decorator_4a106de93b605d5280e5f44bc0fb354d(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_4a03d12f0de45d6ab3057375794537fc(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, int  const & param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_8e940f72ad78557ea1435f9c77a0d9dd(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, int  const & param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_034e28b41b1b5427823d0ca87241016f(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_c24ce34aa9c8562c8e7c51d8ff424c55(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_d151538a4b495b05a5b20235836de90a(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_7d23d8a260e155bb8c2a570f9f497cc6(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_5eecdbccc3fa5b888b8cf997e21df314()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_2c500383a0fe5165891f21c7851b4ecb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_90fbc84d5f4c5a02bb36b363dd7aa2c8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_1933c56952c95362a019d55dd4450fe3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_0f55ed3a80fc5f0d8ba6a04822a1ac5c)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_9f0289ead39a551cadef9a6f4fe14196)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_47812f9dafe95f7eaa0bbcbc993bc301)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_83c436d6954d5c0c9eb15b7c4cae3283)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::fill;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_4a106de93b605d5280e5f44bc0fb354d)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setConstant;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_4a03d12f0de45d6ab3057375794537fc)(long int , int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_8e940f72ad78557ea1435f9c77a0d9dd)(int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_034e28b41b1b5427823d0ca87241016f)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setZero;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_c24ce34aa9c8562c8e7c51d8ff424c55)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setOnes;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_d151538a4b495b05a5b20235836de90a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_2a9c2d1599cf53afb9b7ace17e75b53c)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_1bf6ca22cb5953a38fcfb0e4231238ed)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_e51915d64b5c59e4a8fd430d2bb02052)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_27229765713656c3865d1fa0f2a893a7)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_f683d8ad88b9507a91df4dd843b1313f)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_63aa6ccafd9555deaec5709db7b9c07d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_b25fa2542ff7579ca317d0bbb37b6934)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::allFinite;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_7d23d8a260e155bb8c2a570f9f497cc6)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::operator*=;
    class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_9b0c56ca72bf574f85617e2e13081807)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::eval;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_2337fd42f3c05bdf86c2ffff56fcd20d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::sum;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_c142936db45651bc8a4a86014430c96e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::mean;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_fb351ec9ea4d5d28b62f26be3d39bb58)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::trace;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_0e1ed7921e675b9d840e09e09836bf79)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::prod;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_ad694090a9425d31a45fdd6eb9716f93)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::minCoeff;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_4f1ca2c478cb5bd191a032ad2adab2e6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::maxCoeff;
    int  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_fa532c3d56805fbdbf7c3f1edcc53c5f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_398580aeedea5572bb9a1d7ae763f533)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_ab808039599455f28fe13c0552a23720)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_a821d8b019f5501d82208b84f0581d16)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::*method_pointer_8b6f9b1e988f5df6b292a9d49235db24)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 > > > class_5eecdbccc3fa5b888b8cf997e21df314("_DenseBase_5eecdbccc3fa5b888b8cf997e21df314", "", boost::python::no_init);
    class_5eecdbccc3fa5b888b8cf997e21df314.def("non_zeros", method_pointer_2c500383a0fe5165891f21c7851b4ecb, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("outer_size", method_pointer_90fbc84d5f4c5a02bb36b363dd7aa2c8, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("inner_size", method_pointer_1933c56952c95362a019d55dd4450fe3, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("resize", method_pointer_0f55ed3a80fc5f0d8ba6a04822a1ac5c, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("resize", method_pointer_9f0289ead39a551cadef9a6f4fe14196, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("transpose_in_place", method_pointer_47812f9dafe95f7eaa0bbcbc993bc301, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("fill", method_pointer_83c436d6954d5c0c9eb15b7c4cae3283, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("set_constant", method_pointer_4a106de93b605d5280e5f44bc0fb354d, boost::python::return_internal_reference<>(), "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("set_constant", autowig::method_decorator_4a106de93b605d5280e5f44bc0fb354d);
    class_5eecdbccc3fa5b888b8cf997e21df314.def("set_lin_spaced", method_pointer_4a03d12f0de45d6ab3057375794537fc, boost::python::return_internal_reference<>(), "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("set_lin_spaced", autowig::method_decorator_4a03d12f0de45d6ab3057375794537fc);
    class_5eecdbccc3fa5b888b8cf997e21df314.def("set_lin_spaced", method_pointer_8e940f72ad78557ea1435f9c77a0d9dd, boost::python::return_internal_reference<>(), "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("set_lin_spaced", autowig::method_decorator_8e940f72ad78557ea1435f9c77a0d9dd);
    class_5eecdbccc3fa5b888b8cf997e21df314.def("set_zero", method_pointer_034e28b41b1b5427823d0ca87241016f, boost::python::return_internal_reference<>(), "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("set_zero", autowig::method_decorator_034e28b41b1b5427823d0ca87241016f);
    class_5eecdbccc3fa5b888b8cf997e21df314.def("set_ones", method_pointer_c24ce34aa9c8562c8e7c51d8ff424c55, boost::python::return_internal_reference<>(), "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("set_ones", autowig::method_decorator_c24ce34aa9c8562c8e7c51d8ff424c55);
    class_5eecdbccc3fa5b888b8cf997e21df314.def("set_random", method_pointer_d151538a4b495b05a5b20235836de90a, boost::python::return_internal_reference<>(), "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("set_random", autowig::method_decorator_d151538a4b495b05a5b20235836de90a);
    class_5eecdbccc3fa5b888b8cf997e21df314.def("is_much_smaller_than", method_pointer_2a9c2d1599cf53afb9b7ace17e75b53c, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("is_approx_to_constant", method_pointer_1bf6ca22cb5953a38fcfb0e4231238ed, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("is_constant", method_pointer_e51915d64b5c59e4a8fd430d2bb02052, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("is_zero", method_pointer_27229765713656c3865d1fa0f2a893a7, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("is_ones", method_pointer_f683d8ad88b9507a91df4dd843b1313f, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("has_na_n", method_pointer_63aa6ccafd9555deaec5709db7b9c07d, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("all_finite", method_pointer_b25fa2542ff7579ca317d0bbb37b6934, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("__imul__", method_pointer_7d23d8a260e155bb8c2a570f9f497cc6, boost::python::return_internal_reference<>(), "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("__imul__", autowig::method_decorator_7d23d8a260e155bb8c2a570f9f497cc6);
    class_5eecdbccc3fa5b888b8cf997e21df314.def("eval", method_pointer_9b0c56ca72bf574f85617e2e13081807, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("sum", method_pointer_2337fd42f3c05bdf86c2ffff56fcd20d, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("mean", method_pointer_c142936db45651bc8a4a86014430c96e, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("trace", method_pointer_fb351ec9ea4d5d28b62f26be3d39bb58, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("prod", method_pointer_0e1ed7921e675b9d840e09e09836bf79, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("min_coeff", method_pointer_ad694090a9425d31a45fdd6eb9716f93, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("max_coeff", method_pointer_4f1ca2c478cb5bd191a032ad2adab2e6, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("value", method_pointer_fa532c3d56805fbdbf7c3f1edcc53c5f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("all", method_pointer_398580aeedea5572bb9a1d7ae763f533, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("any", method_pointer_ab808039599455f28fe13c0552a23720, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("count", method_pointer_a821d8b019f5501d82208b84f0581d16, "");
    class_5eecdbccc3fa5b888b8cf997e21df314.def("reverse_in_place", method_pointer_8b6f9b1e988f5df6b292a9d49235db24, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, 3 > > >();
    }

}