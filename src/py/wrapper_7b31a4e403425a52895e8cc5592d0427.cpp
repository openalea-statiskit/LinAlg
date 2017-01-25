#include "_ieigen.h"


namespace autowig
{
    void method_decorator_3df623393fde5b94a98b194b1f43bef9(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_e46bc8ffcd865219abb2b4a85eb26c64(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, int  const & param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_297266fd0f855a24bafbdbc1c81b11a5(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, int  const & param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_c9767e7c34d15d219b6adaaaa7fd7c9d(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_a71ff3b6605a523ea5db13ca30d50ee2(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_4678f9fed658507c8f3b75d809dd1bec(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_d132414395b85a9b9fa2c4162e7b737e(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_7b31a4e403425a52895e8cc5592d0427()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_9c98e8e819fb5ba2ba7a0dfeb0421534)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_bcb1477656745561b61b5315730cd3ad)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_97ecec3d01ef5e4aabbb24959d831d06)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_3f713ac5a6445c728fe991a6bd717939)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_e3aaaefce3fd50988322db6d2efd05fe)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_e19b4e385ee95d9385d60e10b8b9cc4a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_e3ad570058df5eafbe2c6f4cda5648d8)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::fill;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_3df623393fde5b94a98b194b1f43bef9)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_e46bc8ffcd865219abb2b4a85eb26c64)(long int , int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_297266fd0f855a24bafbdbc1c81b11a5)(int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_c9767e7c34d15d219b6adaaaa7fd7c9d)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_a71ff3b6605a523ea5db13ca30d50ee2)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_4678f9fed658507c8f3b75d809dd1bec)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_2a11c68f3bcd5240903deb968c51ee7d)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_5a8dee9a6bf8533db53b08e8b592ce83)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_d3266bc357a257819b6eece77a08619e)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_8505ada0919c5836b25d7f9c5e1ef9f2)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_dd9fdaff0dcc57be8293042c27bad797)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_58c1b8bad1a9569b9ae7d295134ee580)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_2903806825735812ac205b59de3f17f7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::allFinite;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_d132414395b85a9b9fa2c4162e7b737e)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::operator*=;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_4b062c1a78895479a463902b369d77c0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::eval;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_06ecc3f108d55fa2b469f073c36fe9d4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::sum;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_f241d8fa978d569d8646048bac122d51)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::mean;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_03777360e36351f8a56715a1fbbbdabf)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::trace;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_91c75ca490dd582b9d065768139196e3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::prod;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_de1d239c169f5f2493ba6f7a2998b0b1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::minCoeff;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_9990593b83a55fa491bd5a99540ba1bd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::maxCoeff;
    int  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_5f42ad71cc4851b388dd1365fed3a449)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_9c643ce726dc5f4bbd7fa552edc14dd8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_b577cddca81f5ac997e19dc6eecc0318)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_dae9823ee5c85f99aded109956bc2561)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_f4425d5f0c2655caa79cd453f6189e39)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 > > > class_7b31a4e403425a52895e8cc5592d0427("_DenseBase_7b31a4e403425a52895e8cc5592d0427", "", boost::python::no_init);
    class_7b31a4e403425a52895e8cc5592d0427.def("non_zeros", method_pointer_9c98e8e819fb5ba2ba7a0dfeb0421534, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("outer_size", method_pointer_bcb1477656745561b61b5315730cd3ad, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("inner_size", method_pointer_97ecec3d01ef5e4aabbb24959d831d06, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("resize", method_pointer_3f713ac5a6445c728fe991a6bd717939, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("resize", method_pointer_e3aaaefce3fd50988322db6d2efd05fe, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("transpose_in_place", method_pointer_e19b4e385ee95d9385d60e10b8b9cc4a, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("fill", method_pointer_e3ad570058df5eafbe2c6f4cda5648d8, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("set_constant", method_pointer_3df623393fde5b94a98b194b1f43bef9, boost::python::return_internal_reference<>(), "");
    class_7b31a4e403425a52895e8cc5592d0427.def("set_constant", autowig::method_decorator_3df623393fde5b94a98b194b1f43bef9);
    class_7b31a4e403425a52895e8cc5592d0427.def("set_lin_spaced", method_pointer_e46bc8ffcd865219abb2b4a85eb26c64, boost::python::return_internal_reference<>(), "");
    class_7b31a4e403425a52895e8cc5592d0427.def("set_lin_spaced", autowig::method_decorator_e46bc8ffcd865219abb2b4a85eb26c64);
    class_7b31a4e403425a52895e8cc5592d0427.def("set_lin_spaced", method_pointer_297266fd0f855a24bafbdbc1c81b11a5, boost::python::return_internal_reference<>(), "");
    class_7b31a4e403425a52895e8cc5592d0427.def("set_lin_spaced", autowig::method_decorator_297266fd0f855a24bafbdbc1c81b11a5);
    class_7b31a4e403425a52895e8cc5592d0427.def("set_zero", method_pointer_c9767e7c34d15d219b6adaaaa7fd7c9d, boost::python::return_internal_reference<>(), "");
    class_7b31a4e403425a52895e8cc5592d0427.def("set_zero", autowig::method_decorator_c9767e7c34d15d219b6adaaaa7fd7c9d);
    class_7b31a4e403425a52895e8cc5592d0427.def("set_ones", method_pointer_a71ff3b6605a523ea5db13ca30d50ee2, boost::python::return_internal_reference<>(), "");
    class_7b31a4e403425a52895e8cc5592d0427.def("set_ones", autowig::method_decorator_a71ff3b6605a523ea5db13ca30d50ee2);
    class_7b31a4e403425a52895e8cc5592d0427.def("set_random", method_pointer_4678f9fed658507c8f3b75d809dd1bec, boost::python::return_internal_reference<>(), "");
    class_7b31a4e403425a52895e8cc5592d0427.def("set_random", autowig::method_decorator_4678f9fed658507c8f3b75d809dd1bec);
    class_7b31a4e403425a52895e8cc5592d0427.def("is_much_smaller_than", method_pointer_2a11c68f3bcd5240903deb968c51ee7d, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("is_approx_to_constant", method_pointer_5a8dee9a6bf8533db53b08e8b592ce83, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("is_constant", method_pointer_d3266bc357a257819b6eece77a08619e, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("is_zero", method_pointer_8505ada0919c5836b25d7f9c5e1ef9f2, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("is_ones", method_pointer_dd9fdaff0dcc57be8293042c27bad797, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("has_na_n", method_pointer_58c1b8bad1a9569b9ae7d295134ee580, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("all_finite", method_pointer_2903806825735812ac205b59de3f17f7, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("__imul__", method_pointer_d132414395b85a9b9fa2c4162e7b737e, boost::python::return_internal_reference<>(), "");
    class_7b31a4e403425a52895e8cc5592d0427.def("__imul__", autowig::method_decorator_d132414395b85a9b9fa2c4162e7b737e);
    class_7b31a4e403425a52895e8cc5592d0427.def("eval", method_pointer_4b062c1a78895479a463902b369d77c0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7b31a4e403425a52895e8cc5592d0427.def("sum", method_pointer_06ecc3f108d55fa2b469f073c36fe9d4, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("mean", method_pointer_f241d8fa978d569d8646048bac122d51, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("trace", method_pointer_03777360e36351f8a56715a1fbbbdabf, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("prod", method_pointer_91c75ca490dd582b9d065768139196e3, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("min_coeff", method_pointer_de1d239c169f5f2493ba6f7a2998b0b1, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("max_coeff", method_pointer_9990593b83a55fa491bd5a99540ba1bd, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("value", method_pointer_5f42ad71cc4851b388dd1365fed3a449, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7b31a4e403425a52895e8cc5592d0427.def("all", method_pointer_9c643ce726dc5f4bbd7fa552edc14dd8, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("any", method_pointer_b577cddca81f5ac997e19dc6eecc0318, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("count", method_pointer_dae9823ee5c85f99aded109956bc2561, "");
    class_7b31a4e403425a52895e8cc5592d0427.def("reverse_in_place", method_pointer_f4425d5f0c2655caa79cd453f6189e39, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >, 3 > > >();
    }

}