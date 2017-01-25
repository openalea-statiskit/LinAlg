#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2ab232d0a0d254219c5723aa4c42bdeb(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_c05596e92fce55ac89bf9eca0ecbeca0(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, int  const & param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_6073b78a49fb5bdabe0b09372bbedd9f(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, int  const & param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_bd9d64633a0f505b9118396f3e11cbfc(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_7f0291501de4526dbafdb51eb22b3a09(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_1144db05bdc45bf99a9c80c5952b1653(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_ca234946eb4f5ed4bba24c1be0d4b119(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_0742f22284cc5fb89f4a7d11086762a3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_ac1cac8df82b5bfab5fb2728e8772f11)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_d2eed35ce3ba596a9b0b3d8f6155a0e4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_aed86d9a1df75fd1b5234d5b56dffbf1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_945e78321cff5a8ab29bf73497a81a5b)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_0e2170b607b15380b8baf27f78d003d5)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_97288839ccab5fd29d706eeb13305ef5)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_38db85e3111a504bb7e10a3c057a04a4)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::fill;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_2ab232d0a0d254219c5723aa4c42bdeb)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setConstant;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_c05596e92fce55ac89bf9eca0ecbeca0)(long int , int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_6073b78a49fb5bdabe0b09372bbedd9f)(int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_bd9d64633a0f505b9118396f3e11cbfc)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setZero;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_7f0291501de4526dbafdb51eb22b3a09)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setOnes;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_1144db05bdc45bf99a9c80c5952b1653)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_46820c692b325f7d9b61005b51afd7e7)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_64f9f74163da568aae023da91a17dbb7)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_2faa9c459a5756eb843ddb39e1ef93a0)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_a27becd743925c9cac18bb06de91ff8b)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_090293d850075f808585e295292c8f63)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_08355dced91d5dc3afc10ad99313adf3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_d4be9800c1085d5eb46033e4a2b1d636)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::allFinite;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_ca234946eb4f5ed4bba24c1be0d4b119)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::operator*=;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_9d070d471d2b5aca8923ee77ba206369)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::eval;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_04315e4f4fe85fb89ec82238781a69d1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::sum;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_5d278f9e35985203b53f8c06dc188d58)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::mean;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_d0d6c85696445589841a7a2928cd2b5f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::trace;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_3939dc131c9d5a8490be42faf4f4b556)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::prod;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_52b65037c7e951819459af19df995028)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::minCoeff;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_4b16ecbf0f1a55249d3692ae62fa9946)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::maxCoeff;
    int  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_cd1de8b13d9859acaa73d75f8a001aa9)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_da86045bc6595324a890b546423c9629)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_0d379717828b53d4bc4877c4ead7be9d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_fdb03895ec5850cab69c499634d7f139)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_7dc99bb0151d56c9b580aec6ee40dc18)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 > > > class_0742f22284cc5fb89f4a7d11086762a3("_DenseBase_0742f22284cc5fb89f4a7d11086762a3", "", boost::python::no_init);
    class_0742f22284cc5fb89f4a7d11086762a3.def("non_zeros", method_pointer_ac1cac8df82b5bfab5fb2728e8772f11, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("outer_size", method_pointer_d2eed35ce3ba596a9b0b3d8f6155a0e4, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("inner_size", method_pointer_aed86d9a1df75fd1b5234d5b56dffbf1, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("resize", method_pointer_945e78321cff5a8ab29bf73497a81a5b, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("resize", method_pointer_0e2170b607b15380b8baf27f78d003d5, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("transpose_in_place", method_pointer_97288839ccab5fd29d706eeb13305ef5, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("fill", method_pointer_38db85e3111a504bb7e10a3c057a04a4, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("set_constant", method_pointer_2ab232d0a0d254219c5723aa4c42bdeb, boost::python::return_internal_reference<>(), "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("set_constant", autowig::method_decorator_2ab232d0a0d254219c5723aa4c42bdeb);
    class_0742f22284cc5fb89f4a7d11086762a3.def("set_lin_spaced", method_pointer_c05596e92fce55ac89bf9eca0ecbeca0, boost::python::return_internal_reference<>(), "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("set_lin_spaced", autowig::method_decorator_c05596e92fce55ac89bf9eca0ecbeca0);
    class_0742f22284cc5fb89f4a7d11086762a3.def("set_lin_spaced", method_pointer_6073b78a49fb5bdabe0b09372bbedd9f, boost::python::return_internal_reference<>(), "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("set_lin_spaced", autowig::method_decorator_6073b78a49fb5bdabe0b09372bbedd9f);
    class_0742f22284cc5fb89f4a7d11086762a3.def("set_zero", method_pointer_bd9d64633a0f505b9118396f3e11cbfc, boost::python::return_internal_reference<>(), "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("set_zero", autowig::method_decorator_bd9d64633a0f505b9118396f3e11cbfc);
    class_0742f22284cc5fb89f4a7d11086762a3.def("set_ones", method_pointer_7f0291501de4526dbafdb51eb22b3a09, boost::python::return_internal_reference<>(), "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("set_ones", autowig::method_decorator_7f0291501de4526dbafdb51eb22b3a09);
    class_0742f22284cc5fb89f4a7d11086762a3.def("set_random", method_pointer_1144db05bdc45bf99a9c80c5952b1653, boost::python::return_internal_reference<>(), "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("set_random", autowig::method_decorator_1144db05bdc45bf99a9c80c5952b1653);
    class_0742f22284cc5fb89f4a7d11086762a3.def("is_much_smaller_than", method_pointer_46820c692b325f7d9b61005b51afd7e7, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("is_approx_to_constant", method_pointer_64f9f74163da568aae023da91a17dbb7, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("is_constant", method_pointer_2faa9c459a5756eb843ddb39e1ef93a0, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("is_zero", method_pointer_a27becd743925c9cac18bb06de91ff8b, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("is_ones", method_pointer_090293d850075f808585e295292c8f63, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("has_na_n", method_pointer_08355dced91d5dc3afc10ad99313adf3, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("all_finite", method_pointer_d4be9800c1085d5eb46033e4a2b1d636, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("__imul__", method_pointer_ca234946eb4f5ed4bba24c1be0d4b119, boost::python::return_internal_reference<>(), "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("__imul__", autowig::method_decorator_ca234946eb4f5ed4bba24c1be0d4b119);
    class_0742f22284cc5fb89f4a7d11086762a3.def("eval", method_pointer_9d070d471d2b5aca8923ee77ba206369, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("sum", method_pointer_04315e4f4fe85fb89ec82238781a69d1, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("mean", method_pointer_5d278f9e35985203b53f8c06dc188d58, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("trace", method_pointer_d0d6c85696445589841a7a2928cd2b5f, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("prod", method_pointer_3939dc131c9d5a8490be42faf4f4b556, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("min_coeff", method_pointer_52b65037c7e951819459af19df995028, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("max_coeff", method_pointer_4b16ecbf0f1a55249d3692ae62fa9946, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("value", method_pointer_cd1de8b13d9859acaa73d75f8a001aa9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("all", method_pointer_da86045bc6595324a890b546423c9629, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("any", method_pointer_0d379717828b53d4bc4877c4ead7be9d, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("count", method_pointer_fdb03895ec5850cab69c499634d7f139, "");
    class_0742f22284cc5fb89f4a7d11086762a3.def("reverse_in_place", method_pointer_7dc99bb0151d56c9b580aec6ee40dc18, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 3 > > >();
    }

}