#include "_ieigen.h"


namespace autowig
{
    void method_decorator_9d1522fdc29159ed9bfc3d1e68b653fb(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_c7979a68dc255ad98ac024bf95b451da(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, double  const & param_in_1, double  const & param_in_2, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_b46745089de25b9d8b24074b62fcb8ec(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, double  const & param_in_0, double  const & param_in_1, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_6b64da5c2dd55557a88514203c8b43a6(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_f3a224084ce156968225234bf458e6d6(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_cb907962358458a19902cb1c1ad7aa0b(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_ac47de4732b75200b054c2b0072fac61(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > & instance, double  const & param_in_0, class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_46500104f29d5af88efc07b4a82911ce()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_d4e2584eb06c5d5ba5d300d3ac5e9a44)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_9b75d861bf4d5ec6a8c82b98ed7fe877)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_9281fe34d34256d2936997571a679bbd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_de2b7877ea5c573984370d0dfde574fc)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_2c82da514ffa59128c8d81a99dace46b)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_4e57f71e55dd5b4c9b8b26cff53c5820)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_84cf0459030b534db6f1497ee46b253b)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::fill;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_9d1522fdc29159ed9bfc3d1e68b653fb)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_c7979a68dc255ad98ac024bf95b451da)(long int , double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_b46745089de25b9d8b24074b62fcb8ec)(double  const &, double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_6b64da5c2dd55557a88514203c8b43a6)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_f3a224084ce156968225234bf458e6d6)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_cb907962358458a19902cb1c1ad7aa0b)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_b5148e62d31f57b6b659b47cc7378587)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_fb70f3388230549db56c48594d1dd7e7)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_ce4eae65ac7a587396887f88f1cb229b)(double  const &, double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_cc0ee847972453589d6675d860855a8b)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_c1382f76cfd35888a2feac12d1332ba7)(double  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_56d2e5dec4535cf993cb9b79b15c132b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_e21aac53b44256ce9099c12d95ec3148)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::allFinite;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_ac47de4732b75200b054c2b0072fac61)(double  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::operator*=;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_7b51fe44b8d552ebad099624b81df61d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::eval;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_ee91b92bd6275e3bb421dcf2948c215b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::sum;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_cd51c4e53cdd5b6fac5ade878a919f60)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::mean;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_166dae8eb27356068f99c7ae7390b827)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::trace;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_af594715a4135e2a93cfacd65fe91439)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::prod;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_ebc1084fb32757f199f2f7a5bac2b99c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::minCoeff;
    double  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_c7e89efafcd4532b90100601a400d6bb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::maxCoeff;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_67b494ca6edd55c8a787601d4bac2286)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_ccd722020980519281c7a40981677548)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_a5b32a4045ee52aa836d56eb62c92855)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::*method_pointer_191ac39b814358cbb9e8ba54b2fbe3de)() = &::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 > > > class_46500104f29d5af88efc07b4a82911ce("_DenseBase_46500104f29d5af88efc07b4a82911ce", "", boost::python::no_init);
    class_46500104f29d5af88efc07b4a82911ce.def("non_zeros", method_pointer_d4e2584eb06c5d5ba5d300d3ac5e9a44, "");
    class_46500104f29d5af88efc07b4a82911ce.def("outer_size", method_pointer_9b75d861bf4d5ec6a8c82b98ed7fe877, "");
    class_46500104f29d5af88efc07b4a82911ce.def("inner_size", method_pointer_9281fe34d34256d2936997571a679bbd, "");
    class_46500104f29d5af88efc07b4a82911ce.def("resize", method_pointer_de2b7877ea5c573984370d0dfde574fc, "");
    class_46500104f29d5af88efc07b4a82911ce.def("resize", method_pointer_2c82da514ffa59128c8d81a99dace46b, "");
    class_46500104f29d5af88efc07b4a82911ce.def("transpose_in_place", method_pointer_4e57f71e55dd5b4c9b8b26cff53c5820, "");
    class_46500104f29d5af88efc07b4a82911ce.def("fill", method_pointer_84cf0459030b534db6f1497ee46b253b, "");
    class_46500104f29d5af88efc07b4a82911ce.def("set_constant", method_pointer_9d1522fdc29159ed9bfc3d1e68b653fb, boost::python::return_internal_reference<>(), "");
    class_46500104f29d5af88efc07b4a82911ce.def("set_constant", autowig::method_decorator_9d1522fdc29159ed9bfc3d1e68b653fb);
    class_46500104f29d5af88efc07b4a82911ce.def("set_lin_spaced", method_pointer_c7979a68dc255ad98ac024bf95b451da, boost::python::return_internal_reference<>(), "");
    class_46500104f29d5af88efc07b4a82911ce.def("set_lin_spaced", autowig::method_decorator_c7979a68dc255ad98ac024bf95b451da);
    class_46500104f29d5af88efc07b4a82911ce.def("set_lin_spaced", method_pointer_b46745089de25b9d8b24074b62fcb8ec, boost::python::return_internal_reference<>(), "");
    class_46500104f29d5af88efc07b4a82911ce.def("set_lin_spaced", autowig::method_decorator_b46745089de25b9d8b24074b62fcb8ec);
    class_46500104f29d5af88efc07b4a82911ce.def("set_zero", method_pointer_6b64da5c2dd55557a88514203c8b43a6, boost::python::return_internal_reference<>(), "");
    class_46500104f29d5af88efc07b4a82911ce.def("set_zero", autowig::method_decorator_6b64da5c2dd55557a88514203c8b43a6);
    class_46500104f29d5af88efc07b4a82911ce.def("set_ones", method_pointer_f3a224084ce156968225234bf458e6d6, boost::python::return_internal_reference<>(), "");
    class_46500104f29d5af88efc07b4a82911ce.def("set_ones", autowig::method_decorator_f3a224084ce156968225234bf458e6d6);
    class_46500104f29d5af88efc07b4a82911ce.def("set_random", method_pointer_cb907962358458a19902cb1c1ad7aa0b, boost::python::return_internal_reference<>(), "");
    class_46500104f29d5af88efc07b4a82911ce.def("set_random", autowig::method_decorator_cb907962358458a19902cb1c1ad7aa0b);
    class_46500104f29d5af88efc07b4a82911ce.def("is_much_smaller_than", method_pointer_b5148e62d31f57b6b659b47cc7378587, "");
    class_46500104f29d5af88efc07b4a82911ce.def("is_approx_to_constant", method_pointer_fb70f3388230549db56c48594d1dd7e7, "");
    class_46500104f29d5af88efc07b4a82911ce.def("is_constant", method_pointer_ce4eae65ac7a587396887f88f1cb229b, "");
    class_46500104f29d5af88efc07b4a82911ce.def("is_zero", method_pointer_cc0ee847972453589d6675d860855a8b, "");
    class_46500104f29d5af88efc07b4a82911ce.def("is_ones", method_pointer_c1382f76cfd35888a2feac12d1332ba7, "");
    class_46500104f29d5af88efc07b4a82911ce.def("has_na_n", method_pointer_56d2e5dec4535cf993cb9b79b15c132b, "");
    class_46500104f29d5af88efc07b4a82911ce.def("all_finite", method_pointer_e21aac53b44256ce9099c12d95ec3148, "");
    class_46500104f29d5af88efc07b4a82911ce.def("__imul__", method_pointer_ac47de4732b75200b054c2b0072fac61, boost::python::return_internal_reference<>(), "");
    class_46500104f29d5af88efc07b4a82911ce.def("__imul__", autowig::method_decorator_ac47de4732b75200b054c2b0072fac61);
    class_46500104f29d5af88efc07b4a82911ce.def("eval", method_pointer_7b51fe44b8d552ebad099624b81df61d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_46500104f29d5af88efc07b4a82911ce.def("sum", method_pointer_ee91b92bd6275e3bb421dcf2948c215b, "");
    class_46500104f29d5af88efc07b4a82911ce.def("mean", method_pointer_cd51c4e53cdd5b6fac5ade878a919f60, "");
    class_46500104f29d5af88efc07b4a82911ce.def("trace", method_pointer_166dae8eb27356068f99c7ae7390b827, "");
    class_46500104f29d5af88efc07b4a82911ce.def("prod", method_pointer_af594715a4135e2a93cfacd65fe91439, "");
    class_46500104f29d5af88efc07b4a82911ce.def("min_coeff", method_pointer_ebc1084fb32757f199f2f7a5bac2b99c, "");
    class_46500104f29d5af88efc07b4a82911ce.def("max_coeff", method_pointer_c7e89efafcd4532b90100601a400d6bb, "");
    class_46500104f29d5af88efc07b4a82911ce.def("all", method_pointer_67b494ca6edd55c8a787601d4bac2286, "");
    class_46500104f29d5af88efc07b4a82911ce.def("any", method_pointer_ccd722020980519281c7a40981677548, "");
    class_46500104f29d5af88efc07b4a82911ce.def("count", method_pointer_a5b32a4045ee52aa836d56eb62c92855, "");
    class_46500104f29d5af88efc07b4a82911ce.def("reverse_in_place", method_pointer_191ac39b814358cbb9e8ba54b2fbe3de, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >, 3 > > >();
    }

}