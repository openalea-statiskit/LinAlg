#include "_ieigen.h"


namespace autowig
{
    void method_decorator_0aa6e44e48d95306b0dd224c79566658(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_18bd54ea894e59d6b3c5e4264ec4b34e(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, double  const & param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_d89acdc49ec95b0aa523493337fe5157(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, double  const & param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_bd08e9e7481a5a619d77f89b473929b3(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_75e31bf044d45c5f8ba123e28c9a0a5d(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_0c4dfe4439825c49b90d89226ce3b7b4(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_24625447e5d95fcf9c51f139c7761eab(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_68ac4c43d36c545ea528b1492c97a065()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_5f628a3e540a50f2b8fe113392fb2b6b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_e09087226f105477b7f8e12d927c7335)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_3e89881b151057d69cd1eb5e6c9b91df)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_8b3150952c5c5638857cd5c6f557e58a)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_47da0defd1f5576bac671076e264ec4a)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_9017c80d53275e378a9d34b8c62c98f6)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_603e3184a5fc5b8c856f8f006bd794f4)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::fill;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_0aa6e44e48d95306b0dd224c79566658)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setConstant;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_18bd54ea894e59d6b3c5e4264ec4b34e)(long int , double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_d89acdc49ec95b0aa523493337fe5157)(double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_bd08e9e7481a5a619d77f89b473929b3)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_75e31bf044d45c5f8ba123e28c9a0a5d)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_0c4dfe4439825c49b90d89226ce3b7b4)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_0493b249b8dc5187a940d6850688f1c5)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_ed58b27968b95ca087971560ce493545)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_c4a15e4f855b582ebb61e1ba147379b3)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_9f6d48c668725ff9b0bae3374835c117)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_b2e5cde084555a06bf780afee76e7017)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_2af6b6a9f61450f8af5c985a16a9f121)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_faa0dfb0e6e25d3683f5e6c9e87ae074)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::allFinite;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_24625447e5d95fcf9c51f139c7761eab)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::operator*=;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_db1a8bbe007c5b9eb62f3c972600c780)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::eval;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_48f62fb04a755e27bab78adf303c50b0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::sum;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_f8505e0782055cbf939d0ba7548cced3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::mean;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_d7be925f21835ffeaf9d67bb148c0f93)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::trace;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_007698d3fbd450d79ce178a7fc51728c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::prod;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_5acba90aa36457e9a3a106b2616fa9c7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::minCoeff;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_e1feebad5ebc5f6cabaecb98ace58de3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::maxCoeff;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_0504eb1f6b695240a534709ffb637344)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_6e69a7a50b565424a0360cafca38ffa2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_a8d4e0dc95f7574faef1336dc70d914e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_a902b703e67d5111a3d8d4c3958ec616)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 > > > class_68ac4c43d36c545ea528b1492c97a065("_DenseBase_68ac4c43d36c545ea528b1492c97a065", "", boost::python::no_init);
    class_68ac4c43d36c545ea528b1492c97a065.def("non_zeros", method_pointer_5f628a3e540a50f2b8fe113392fb2b6b, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("outer_size", method_pointer_e09087226f105477b7f8e12d927c7335, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("inner_size", method_pointer_3e89881b151057d69cd1eb5e6c9b91df, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("resize", method_pointer_8b3150952c5c5638857cd5c6f557e58a, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("resize", method_pointer_47da0defd1f5576bac671076e264ec4a, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("transpose_in_place", method_pointer_9017c80d53275e378a9d34b8c62c98f6, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("fill", method_pointer_603e3184a5fc5b8c856f8f006bd794f4, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("set_constant", method_pointer_0aa6e44e48d95306b0dd224c79566658, boost::python::return_internal_reference<>(), "");
    class_68ac4c43d36c545ea528b1492c97a065.def("set_constant", autowig::method_decorator_0aa6e44e48d95306b0dd224c79566658);
    class_68ac4c43d36c545ea528b1492c97a065.def("set_lin_spaced", method_pointer_18bd54ea894e59d6b3c5e4264ec4b34e, boost::python::return_internal_reference<>(), "");
    class_68ac4c43d36c545ea528b1492c97a065.def("set_lin_spaced", autowig::method_decorator_18bd54ea894e59d6b3c5e4264ec4b34e);
    class_68ac4c43d36c545ea528b1492c97a065.def("set_lin_spaced", method_pointer_d89acdc49ec95b0aa523493337fe5157, boost::python::return_internal_reference<>(), "");
    class_68ac4c43d36c545ea528b1492c97a065.def("set_lin_spaced", autowig::method_decorator_d89acdc49ec95b0aa523493337fe5157);
    class_68ac4c43d36c545ea528b1492c97a065.def("set_zero", method_pointer_bd08e9e7481a5a619d77f89b473929b3, boost::python::return_internal_reference<>(), "");
    class_68ac4c43d36c545ea528b1492c97a065.def("set_zero", autowig::method_decorator_bd08e9e7481a5a619d77f89b473929b3);
    class_68ac4c43d36c545ea528b1492c97a065.def("set_ones", method_pointer_75e31bf044d45c5f8ba123e28c9a0a5d, boost::python::return_internal_reference<>(), "");
    class_68ac4c43d36c545ea528b1492c97a065.def("set_ones", autowig::method_decorator_75e31bf044d45c5f8ba123e28c9a0a5d);
    class_68ac4c43d36c545ea528b1492c97a065.def("set_random", method_pointer_0c4dfe4439825c49b90d89226ce3b7b4, boost::python::return_internal_reference<>(), "");
    class_68ac4c43d36c545ea528b1492c97a065.def("set_random", autowig::method_decorator_0c4dfe4439825c49b90d89226ce3b7b4);
    class_68ac4c43d36c545ea528b1492c97a065.def("is_much_smaller_than", method_pointer_0493b249b8dc5187a940d6850688f1c5, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("is_approx_to_constant", method_pointer_ed58b27968b95ca087971560ce493545, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("is_constant", method_pointer_c4a15e4f855b582ebb61e1ba147379b3, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("is_zero", method_pointer_9f6d48c668725ff9b0bae3374835c117, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("is_ones", method_pointer_b2e5cde084555a06bf780afee76e7017, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("has_na_n", method_pointer_2af6b6a9f61450f8af5c985a16a9f121, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("all_finite", method_pointer_faa0dfb0e6e25d3683f5e6c9e87ae074, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("__imul__", method_pointer_24625447e5d95fcf9c51f139c7761eab, boost::python::return_internal_reference<>(), "");
    class_68ac4c43d36c545ea528b1492c97a065.def("__imul__", autowig::method_decorator_24625447e5d95fcf9c51f139c7761eab);
    class_68ac4c43d36c545ea528b1492c97a065.def("eval", method_pointer_db1a8bbe007c5b9eb62f3c972600c780, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68ac4c43d36c545ea528b1492c97a065.def("sum", method_pointer_48f62fb04a755e27bab78adf303c50b0, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("mean", method_pointer_f8505e0782055cbf939d0ba7548cced3, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("trace", method_pointer_d7be925f21835ffeaf9d67bb148c0f93, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("prod", method_pointer_007698d3fbd450d79ce178a7fc51728c, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("min_coeff", method_pointer_5acba90aa36457e9a3a106b2616fa9c7, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("max_coeff", method_pointer_e1feebad5ebc5f6cabaecb98ace58de3, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("all", method_pointer_0504eb1f6b695240a534709ffb637344, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("any", method_pointer_6e69a7a50b565424a0360cafca38ffa2, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("count", method_pointer_a8d4e0dc95f7574faef1336dc70d914e, "");
    class_68ac4c43d36c545ea528b1492c97a065.def("reverse_in_place", method_pointer_a902b703e67d5111a3d8d4c3958ec616, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 3 > > >();
    }

}