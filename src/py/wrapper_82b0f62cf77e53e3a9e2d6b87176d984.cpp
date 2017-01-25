#include "_ieigen.h"


namespace autowig
{
    void method_decorator_889c327bdeb8512fa2fa69a7f9654121(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_af3193c780ae51e4a2c3d2ad02f08f3c(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, float  const & param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_1603ef04191f50979cb158bdb8735d58(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, float  const & param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_d819cf7337765cedbf399abe7ed88c8d(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_19c4d580826155e0ac0030c048b3ea61(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_3e3be8afd4ed5c2580ff44f42026c49d(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_90c640991789571385003a6796f7ee8e(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_82b0f62cf77e53e3a9e2d6b87176d984()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_180440c0b798510c83277d695abe1670)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_3b6ed588f4e25e40a86a12e627fa2ae9)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_72b2d124f4a15497b23c37181aba232d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_e0a242ce8f1d52e7963439533c82db4d)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_08d9de1bf0d45934baa75da507dcfd5e)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_03f28520888851b98772c11a72b375ad)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_1c975bac89f55ddda24b880e90724eca)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::fill;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_889c327bdeb8512fa2fa69a7f9654121)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setConstant;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_af3193c780ae51e4a2c3d2ad02f08f3c)(long int , float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_1603ef04191f50979cb158bdb8735d58)(float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_d819cf7337765cedbf399abe7ed88c8d)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setZero;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_19c4d580826155e0ac0030c048b3ea61)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setOnes;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_3e3be8afd4ed5c2580ff44f42026c49d)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_c80763ce61e452deb835bb6dd987e1cf)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_e36a9f2014385e8d94199f40cae92562)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_474b6fe92e1e55b8b3b5003da2852b43)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_9f552675d81755e09bb0ce9d915a9ce5)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_63e2ddc5348050df94bd0d886b6e0847)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_1b42179eb14454fbb7a671060f49e33d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_b2bd8af157965ca1b382991d3cc08d4c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::allFinite;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_90c640991789571385003a6796f7ee8e)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::operator*=;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_aba8dd2f590f5ae79c2c8dbe1e2c32f6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::eval;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_2ff86a70661e5e9d962574e67f5d8b49)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::sum;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_426ad060354c5bb2a1dad017cefaa1b5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::mean;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_d47eef58463e585a9e682710bc261d48)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::trace;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_dea9c448125e576ab009589316780836)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::prod;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_481509841f115cdaa66901da99155722)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::minCoeff;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_a550236612d75354898286b9bbd2c3e3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::maxCoeff;
    float  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_a455fabcc7575e7ba328ac33215c5a71)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_f37f4fbe51685bdd9dde9e4f338c6793)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_b25ceaf8d225552488a1b226b65cd1f3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_185c6f9bc1db52f698edb0756b21b000)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_66d696d19f845badaf798d69c4d362c2)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 > > > class_82b0f62cf77e53e3a9e2d6b87176d984("_DenseBase_82b0f62cf77e53e3a9e2d6b87176d984", "", boost::python::no_init);
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("non_zeros", method_pointer_180440c0b798510c83277d695abe1670, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("outer_size", method_pointer_3b6ed588f4e25e40a86a12e627fa2ae9, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("inner_size", method_pointer_72b2d124f4a15497b23c37181aba232d, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("resize", method_pointer_e0a242ce8f1d52e7963439533c82db4d, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("resize", method_pointer_08d9de1bf0d45934baa75da507dcfd5e, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("transpose_in_place", method_pointer_03f28520888851b98772c11a72b375ad, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("fill", method_pointer_1c975bac89f55ddda24b880e90724eca, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("set_constant", method_pointer_889c327bdeb8512fa2fa69a7f9654121, boost::python::return_internal_reference<>(), "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("set_constant", autowig::method_decorator_889c327bdeb8512fa2fa69a7f9654121);
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("set_lin_spaced", method_pointer_af3193c780ae51e4a2c3d2ad02f08f3c, boost::python::return_internal_reference<>(), "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("set_lin_spaced", autowig::method_decorator_af3193c780ae51e4a2c3d2ad02f08f3c);
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("set_lin_spaced", method_pointer_1603ef04191f50979cb158bdb8735d58, boost::python::return_internal_reference<>(), "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("set_lin_spaced", autowig::method_decorator_1603ef04191f50979cb158bdb8735d58);
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("set_zero", method_pointer_d819cf7337765cedbf399abe7ed88c8d, boost::python::return_internal_reference<>(), "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("set_zero", autowig::method_decorator_d819cf7337765cedbf399abe7ed88c8d);
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("set_ones", method_pointer_19c4d580826155e0ac0030c048b3ea61, boost::python::return_internal_reference<>(), "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("set_ones", autowig::method_decorator_19c4d580826155e0ac0030c048b3ea61);
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("set_random", method_pointer_3e3be8afd4ed5c2580ff44f42026c49d, boost::python::return_internal_reference<>(), "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("set_random", autowig::method_decorator_3e3be8afd4ed5c2580ff44f42026c49d);
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("is_much_smaller_than", method_pointer_c80763ce61e452deb835bb6dd987e1cf, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("is_approx_to_constant", method_pointer_e36a9f2014385e8d94199f40cae92562, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("is_constant", method_pointer_474b6fe92e1e55b8b3b5003da2852b43, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("is_zero", method_pointer_9f552675d81755e09bb0ce9d915a9ce5, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("is_ones", method_pointer_63e2ddc5348050df94bd0d886b6e0847, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("has_na_n", method_pointer_1b42179eb14454fbb7a671060f49e33d, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("all_finite", method_pointer_b2bd8af157965ca1b382991d3cc08d4c, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("__imul__", method_pointer_90c640991789571385003a6796f7ee8e, boost::python::return_internal_reference<>(), "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("__imul__", autowig::method_decorator_90c640991789571385003a6796f7ee8e);
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("eval", method_pointer_aba8dd2f590f5ae79c2c8dbe1e2c32f6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("sum", method_pointer_2ff86a70661e5e9d962574e67f5d8b49, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("mean", method_pointer_426ad060354c5bb2a1dad017cefaa1b5, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("trace", method_pointer_d47eef58463e585a9e682710bc261d48, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("prod", method_pointer_dea9c448125e576ab009589316780836, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("min_coeff", method_pointer_481509841f115cdaa66901da99155722, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("max_coeff", method_pointer_a550236612d75354898286b9bbd2c3e3, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("value", method_pointer_a455fabcc7575e7ba328ac33215c5a71, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("all", method_pointer_f37f4fbe51685bdd9dde9e4f338c6793, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("any", method_pointer_b25ceaf8d225552488a1b226b65cd1f3, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("count", method_pointer_185c6f9bc1db52f698edb0756b21b000, "");
    class_82b0f62cf77e53e3a9e2d6b87176d984.def("reverse_in_place", method_pointer_66d696d19f845badaf798d69c4d362c2, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 3 > > >();
    }

}