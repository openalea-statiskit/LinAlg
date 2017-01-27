#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a715c9367879579dadda03c98b410fb9(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
// TODO     void method_decorator_dc948c7d5a1a5f8f9a97391e8efbd7d3(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, double  const & param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO     void method_decorator_da5419991a8253f4b3e3bbf9cf298d39(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, double  const & param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_5f08d01d9ba6548d8b66a620d0050fd5(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_8c5b6734497d58f08a0d373d6acfe70b(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_5cde8b3e4a4b54c6a1a0ccce97203559(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_61261434c17f56bb878a2a3890f64f7d(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_ef0252b8b5075485bb7edbc5cb2e1fb2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_f45542491e34529eb51b2a437411695c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_f7c25d591bec5c5f8153044cae5a193e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_3269d132ad3c5a33b10b0268b9e3cfcf)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_c8af0ba75b585f23bbe255a75258dc1f)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_eb8e0e4608755f3f812064cf73ca8e2b)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_ea9fce61c22c598892f241ae649b6d5a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_0cbe1d86f3445a46b062d16bde709f09)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::fill;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_a715c9367879579dadda03c98b410fb9)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setConstant;
// TODO // TODO     class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_dc948c7d5a1a5f8f9a97391e8efbd7d3)(long int , double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setLinSpaced;
// TODO // TODO     class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_da5419991a8253f4b3e3bbf9cf298d39)(double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_5f08d01d9ba6548d8b66a620d0050fd5)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setZero;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_8c5b6734497d58f08a0d373d6acfe70b)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setOnes;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_5cde8b3e4a4b54c6a1a0ccce97203559)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_c70912afd1ae50939a01a2341de851aa)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_b9671cab148b5c9c8977285f208763f4)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_95254b65086f58f48065668e0513e8e4)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_6e377947bafe59b1a424530dc7bc8f3a)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_08d26118a0f45247982b70617ad16148)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_1505564050c450d0986b650026755f29)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_a013be12ab155659b2a710aef6b4a5e3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::allFinite;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_61261434c17f56bb878a2a3890f64f7d)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::operator*=;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_331a43013b345d0380a0cf3ded76d52c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::eval;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_6ddd3f4874a851268b6248fb11bcc8d9)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::sum;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_5d97a4f3166252b3a6f721e792b421db)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::mean;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_3eeb9135686655f69f0db6f0055a14c1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::trace;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_e495f8c9629f53bb8bc0164c94edf745)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::prod;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_b12613271f04511ca0c72864a4019c38)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::minCoeff;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_b9f96b77ba1b5f278eeb11d61d5d7afd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::maxCoeff;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_14b96be8a4e3500bbf41d924a748ca43)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_a057775ca80c5c43b2ca7dcfe96f2781)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_8f76ea3cdb275d1d84fc7a3108db31d4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_0992364962ed5b05a950f4e7ba4e879f)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 > > > class_ef0252b8b5075485bb7edbc5cb2e1fb2("_DenseBase_ef0252b8b5075485bb7edbc5cb2e1fb2", "", boost::python::no_init);
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("non_zeros", method_pointer_f45542491e34529eb51b2a437411695c, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("outer_size", method_pointer_f7c25d591bec5c5f8153044cae5a193e, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("inner_size", method_pointer_3269d132ad3c5a33b10b0268b9e3cfcf, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("resize", method_pointer_c8af0ba75b585f23bbe255a75258dc1f, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("resize", method_pointer_eb8e0e4608755f3f812064cf73ca8e2b, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("transpose_in_place", method_pointer_ea9fce61c22c598892f241ae649b6d5a, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("fill", method_pointer_0cbe1d86f3445a46b062d16bde709f09, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("set_constant", method_pointer_a715c9367879579dadda03c98b410fb9, boost::python::return_internal_reference<>(), "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("set_constant", autowig::method_decorator_a715c9367879579dadda03c98b410fb9);
// TODO // TODO     class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("set_lin_spaced", method_pointer_dc948c7d5a1a5f8f9a97391e8efbd7d3, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("set_lin_spaced", autowig::method_decorator_dc948c7d5a1a5f8f9a97391e8efbd7d3);
// TODO // TODO     class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("set_lin_spaced", method_pointer_da5419991a8253f4b3e3bbf9cf298d39, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("set_lin_spaced", autowig::method_decorator_da5419991a8253f4b3e3bbf9cf298d39);
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("set_zero", method_pointer_5f08d01d9ba6548d8b66a620d0050fd5, boost::python::return_internal_reference<>(), "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("set_zero", autowig::method_decorator_5f08d01d9ba6548d8b66a620d0050fd5);
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("set_ones", method_pointer_8c5b6734497d58f08a0d373d6acfe70b, boost::python::return_internal_reference<>(), "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("set_ones", autowig::method_decorator_8c5b6734497d58f08a0d373d6acfe70b);
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("set_random", method_pointer_5cde8b3e4a4b54c6a1a0ccce97203559, boost::python::return_internal_reference<>(), "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("set_random", autowig::method_decorator_5cde8b3e4a4b54c6a1a0ccce97203559);
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("is_much_smaller_than", method_pointer_c70912afd1ae50939a01a2341de851aa, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("is_approx_to_constant", method_pointer_b9671cab148b5c9c8977285f208763f4, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("is_constant", method_pointer_95254b65086f58f48065668e0513e8e4, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("is_zero", method_pointer_6e377947bafe59b1a424530dc7bc8f3a, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("is_ones", method_pointer_08d26118a0f45247982b70617ad16148, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("has_na_n", method_pointer_1505564050c450d0986b650026755f29, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("all_finite", method_pointer_a013be12ab155659b2a710aef6b4a5e3, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("__imul__", method_pointer_61261434c17f56bb878a2a3890f64f7d, boost::python::return_internal_reference<>(), "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("__imul__", autowig::method_decorator_61261434c17f56bb878a2a3890f64f7d);
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("eval", method_pointer_331a43013b345d0380a0cf3ded76d52c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("sum", method_pointer_6ddd3f4874a851268b6248fb11bcc8d9, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("mean", method_pointer_5d97a4f3166252b3a6f721e792b421db, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("trace", method_pointer_3eeb9135686655f69f0db6f0055a14c1, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("prod", method_pointer_e495f8c9629f53bb8bc0164c94edf745, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("min_coeff", method_pointer_b12613271f04511ca0c72864a4019c38, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("max_coeff", method_pointer_b9f96b77ba1b5f278eeb11d61d5d7afd, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("all", method_pointer_14b96be8a4e3500bbf41d924a748ca43, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("any", method_pointer_a057775ca80c5c43b2ca7dcfe96f2781, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("count", method_pointer_8f76ea3cdb275d1d84fc7a3108db31d4, "");
    class_ef0252b8b5075485bb7edbc5cb2e1fb2.def("reverse_in_place", method_pointer_0992364962ed5b05a950f4e7ba4e879f, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 3 > > >();
    }

}