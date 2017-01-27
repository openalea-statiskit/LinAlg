#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c780768bdb8b5822ac6fa0e50df76cab(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
// TODO     void method_decorator_5b5487c8efb35d2fb0c724ddfcd7c141(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO     void method_decorator_38435c733f3e57d68df0481b3cc8dd46(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, struct ::std::complex< double >  const & param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_01add1d6d08f5490b5eef5235f7cab22(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_84329a33463b57ccb0eeac4683eb2f91(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_a515eacff5de58d79c392fdd594bb8c4(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_58e4e7aef5a959b4ad22f5ea1cc4aeff(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, struct ::std::complex< double >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_5177989fd77d56b2aa3633ff9455139a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_c0984ca3385f5d76ac58e7f3d18ef138)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_252633a09b395533bc50e9808caaccdb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_eeacc8c5dd075cf986ed57328fc49612)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_9ed4828bff9b59eb89ab06784d5a36a1)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_4f94ddda50485cb9a8089e9a08b04e7f)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_f2cb5e614d0a5fe0ba04d6933cabe40e)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_4c121e1604c75d448c903f66120eaeae)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_c780768bdb8b5822ac6fa0e50df76cab)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setConstant;
// TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_5b5487c8efb35d2fb0c724ddfcd7c141)(long int , struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setLinSpaced;
// TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_38435c733f3e57d68df0481b3cc8dd46)(struct ::std::complex< double >  const &, struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_01add1d6d08f5490b5eef5235f7cab22)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_84329a33463b57ccb0eeac4683eb2f91)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_a515eacff5de58d79c392fdd594bb8c4)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_375939edb0fc53adb56e23ae334bfe36)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_c34c7b7206d5597bb038ccc4057b28f7)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_46c7433fb3d35c3eafc3a19b9a3886e1)(struct ::std::complex< double >  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_60439a43e65652329437e0cd92448a3f)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_b6cd535852ef51e0ba7b61ab8db5894a)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_b1d922c89d2b5df38e9600f36c783a05)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_cf044ba5110951e78a495c47eb5196b8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_58e4e7aef5a959b4ad22f5ea1cc4aeff)(struct ::std::complex< double >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_8a7ee3978c3b59c99aa9f71abd0fd6e4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::eval;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_7b48db9ebb7e5d739a1fe9f09664219c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::sum;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_564f4fbf185d594e96b558ced1d1aa9f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::mean;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_f32c92c64b725229a1b8a7b2a9c4afac)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::trace;
    struct ::std::complex< double >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_93cb206d135e5cc4b42fd8d06fc8194c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::prod;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_d45381a6c6845152a5cb3c139f021ca8)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 > > > class_5177989fd77d56b2aa3633ff9455139a("_DenseBase_5177989fd77d56b2aa3633ff9455139a", "", boost::python::no_init);
    class_5177989fd77d56b2aa3633ff9455139a.def("non_zeros", method_pointer_c0984ca3385f5d76ac58e7f3d18ef138, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("outer_size", method_pointer_252633a09b395533bc50e9808caaccdb, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("inner_size", method_pointer_eeacc8c5dd075cf986ed57328fc49612, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("resize", method_pointer_9ed4828bff9b59eb89ab06784d5a36a1, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("resize", method_pointer_4f94ddda50485cb9a8089e9a08b04e7f, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("transpose_in_place", method_pointer_f2cb5e614d0a5fe0ba04d6933cabe40e, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("fill", method_pointer_4c121e1604c75d448c903f66120eaeae, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("set_constant", method_pointer_c780768bdb8b5822ac6fa0e50df76cab, boost::python::return_internal_reference<>(), "");
    class_5177989fd77d56b2aa3633ff9455139a.def("set_constant", autowig::method_decorator_c780768bdb8b5822ac6fa0e50df76cab);
// TODO // TODO     class_5177989fd77d56b2aa3633ff9455139a.def("set_lin_spaced", method_pointer_5b5487c8efb35d2fb0c724ddfcd7c141, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_5177989fd77d56b2aa3633ff9455139a.def("set_lin_spaced", autowig::method_decorator_5b5487c8efb35d2fb0c724ddfcd7c141);
// TODO // TODO     class_5177989fd77d56b2aa3633ff9455139a.def("set_lin_spaced", method_pointer_38435c733f3e57d68df0481b3cc8dd46, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_5177989fd77d56b2aa3633ff9455139a.def("set_lin_spaced", autowig::method_decorator_38435c733f3e57d68df0481b3cc8dd46);
    class_5177989fd77d56b2aa3633ff9455139a.def("set_zero", method_pointer_01add1d6d08f5490b5eef5235f7cab22, boost::python::return_internal_reference<>(), "");
    class_5177989fd77d56b2aa3633ff9455139a.def("set_zero", autowig::method_decorator_01add1d6d08f5490b5eef5235f7cab22);
    class_5177989fd77d56b2aa3633ff9455139a.def("set_ones", method_pointer_84329a33463b57ccb0eeac4683eb2f91, boost::python::return_internal_reference<>(), "");
    class_5177989fd77d56b2aa3633ff9455139a.def("set_ones", autowig::method_decorator_84329a33463b57ccb0eeac4683eb2f91);
    class_5177989fd77d56b2aa3633ff9455139a.def("set_random", method_pointer_a515eacff5de58d79c392fdd594bb8c4, boost::python::return_internal_reference<>(), "");
    class_5177989fd77d56b2aa3633ff9455139a.def("set_random", autowig::method_decorator_a515eacff5de58d79c392fdd594bb8c4);
    class_5177989fd77d56b2aa3633ff9455139a.def("is_much_smaller_than", method_pointer_375939edb0fc53adb56e23ae334bfe36, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("is_approx_to_constant", method_pointer_c34c7b7206d5597bb038ccc4057b28f7, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("is_constant", method_pointer_46c7433fb3d35c3eafc3a19b9a3886e1, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("is_zero", method_pointer_60439a43e65652329437e0cd92448a3f, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("is_ones", method_pointer_b6cd535852ef51e0ba7b61ab8db5894a, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("has_na_n", method_pointer_b1d922c89d2b5df38e9600f36c783a05, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("all_finite", method_pointer_cf044ba5110951e78a495c47eb5196b8, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("__imul__", method_pointer_58e4e7aef5a959b4ad22f5ea1cc4aeff, boost::python::return_internal_reference<>(), "");
    class_5177989fd77d56b2aa3633ff9455139a.def("__imul__", autowig::method_decorator_58e4e7aef5a959b4ad22f5ea1cc4aeff);
    class_5177989fd77d56b2aa3633ff9455139a.def("eval", method_pointer_8a7ee3978c3b59c99aa9f71abd0fd6e4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5177989fd77d56b2aa3633ff9455139a.def("sum", method_pointer_7b48db9ebb7e5d739a1fe9f09664219c, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("mean", method_pointer_564f4fbf185d594e96b558ced1d1aa9f, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("trace", method_pointer_f32c92c64b725229a1b8a7b2a9c4afac, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("prod", method_pointer_93cb206d135e5cc4b42fd8d06fc8194c, "");
    class_5177989fd77d56b2aa3633ff9455139a.def("reverse_in_place", method_pointer_d45381a6c6845152a5cb3c139f021ca8, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 > > >();
    }

}