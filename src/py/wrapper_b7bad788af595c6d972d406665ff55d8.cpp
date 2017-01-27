#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e87c0dcd14905582a49ed5231073d7b4(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_1d49e07018205ecd85e78f127c29b629(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, long int  param_in_0, int  const & param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_d46f6c231a245ce6b8f532d9f14331fc(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, int  const & param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_44e6c421c9b15c1c9c1cfc35d225f810(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_f7610dbce21754379df7a18534ef7885(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_c7cb5e5b050b5fa290d00c344ab3f42c(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_4b8d5b9ec9055e1ba05937ad39836d8b(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_b7bad788af595c6d972d406665ff55d8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_5b436cb2d5a75597a777797cd079569b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_bb67d31fd44f5080a249f63cdfc97521)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_d8366d6f86ba5af7959ba593da632f8e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_37252107082d5e5dbf08ac6268542a6e)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_e7d6f0349e645f3f9879b2c51d186525)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_fd48bdab350a5810be477f5a8b6e0a68)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_a759ef24d94557f9a403d43a20159855)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::fill;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_e87c0dcd14905582a49ed5231073d7b4)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setConstant;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_1d49e07018205ecd85e78f127c29b629)(long int , int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_d46f6c231a245ce6b8f532d9f14331fc)(int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_44e6c421c9b15c1c9c1cfc35d225f810)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setZero;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_f7610dbce21754379df7a18534ef7885)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setOnes;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_c7cb5e5b050b5fa290d00c344ab3f42c)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_d333b52396805a33818194eba88b12ca)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_d2414547ffdc59c7b04b7fd83a6f3a76)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_04f76f24546250b6a33e553c5a4e8139)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_6de88a124960518da3c7eb5e93c12824)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_3b24e0cc2bf25907be48e8e95e7d4d0b)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_b4967a6c09225bccb9871cf93e15cb60)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_f54121487adf5ed888d06ce7e5a48add)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::allFinite;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_4b8d5b9ec9055e1ba05937ad39836d8b)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::operator*=;
    class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_2c66be73b72e5287a48d3c75c290de37)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::eval;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_7c99958da4245706a1b38218480f0e5a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::sum;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_71d9bcc036b65265b84a85626ef860b8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::mean;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_48a959fb38135419882d17566f7d827e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::trace;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_69af2f1e39ab56b3b0c93184bc7b825b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::prod;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_fd0b443ee93b5de4beaa2f0b8db0a742)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::minCoeff;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_901c561c08c35c17bbe51563df1f9eab)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::maxCoeff;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_4b827ca8099b5aee95cacbd3a25597cc)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_e78a951dae575fe39111bbb1720be069)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_2c217e430d7a5e689740a91bb7ffd5d1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::*method_pointer_78193026d88359ff97a480b859490d73)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 > > > class_b7bad788af595c6d972d406665ff55d8("_DenseBase_b7bad788af595c6d972d406665ff55d8", "", boost::python::no_init);
    class_b7bad788af595c6d972d406665ff55d8.def("non_zeros", method_pointer_5b436cb2d5a75597a777797cd079569b, "");
    class_b7bad788af595c6d972d406665ff55d8.def("outer_size", method_pointer_bb67d31fd44f5080a249f63cdfc97521, "");
    class_b7bad788af595c6d972d406665ff55d8.def("inner_size", method_pointer_d8366d6f86ba5af7959ba593da632f8e, "");
    class_b7bad788af595c6d972d406665ff55d8.def("resize", method_pointer_37252107082d5e5dbf08ac6268542a6e, "");
    class_b7bad788af595c6d972d406665ff55d8.def("resize", method_pointer_e7d6f0349e645f3f9879b2c51d186525, "");
    class_b7bad788af595c6d972d406665ff55d8.def("transpose_in_place", method_pointer_fd48bdab350a5810be477f5a8b6e0a68, "");
    class_b7bad788af595c6d972d406665ff55d8.def("fill", method_pointer_a759ef24d94557f9a403d43a20159855, "");
    class_b7bad788af595c6d972d406665ff55d8.def("set_constant", method_pointer_e87c0dcd14905582a49ed5231073d7b4, boost::python::return_internal_reference<>(), "");
    class_b7bad788af595c6d972d406665ff55d8.def("set_constant", autowig::method_decorator_e87c0dcd14905582a49ed5231073d7b4);
    class_b7bad788af595c6d972d406665ff55d8.def("set_lin_spaced", method_pointer_1d49e07018205ecd85e78f127c29b629, boost::python::return_internal_reference<>(), "");
    class_b7bad788af595c6d972d406665ff55d8.def("set_lin_spaced", autowig::method_decorator_1d49e07018205ecd85e78f127c29b629);
    class_b7bad788af595c6d972d406665ff55d8.def("set_lin_spaced", method_pointer_d46f6c231a245ce6b8f532d9f14331fc, boost::python::return_internal_reference<>(), "");
    class_b7bad788af595c6d972d406665ff55d8.def("set_lin_spaced", autowig::method_decorator_d46f6c231a245ce6b8f532d9f14331fc);
    class_b7bad788af595c6d972d406665ff55d8.def("set_zero", method_pointer_44e6c421c9b15c1c9c1cfc35d225f810, boost::python::return_internal_reference<>(), "");
    class_b7bad788af595c6d972d406665ff55d8.def("set_zero", autowig::method_decorator_44e6c421c9b15c1c9c1cfc35d225f810);
    class_b7bad788af595c6d972d406665ff55d8.def("set_ones", method_pointer_f7610dbce21754379df7a18534ef7885, boost::python::return_internal_reference<>(), "");
    class_b7bad788af595c6d972d406665ff55d8.def("set_ones", autowig::method_decorator_f7610dbce21754379df7a18534ef7885);
    class_b7bad788af595c6d972d406665ff55d8.def("set_random", method_pointer_c7cb5e5b050b5fa290d00c344ab3f42c, boost::python::return_internal_reference<>(), "");
    class_b7bad788af595c6d972d406665ff55d8.def("set_random", autowig::method_decorator_c7cb5e5b050b5fa290d00c344ab3f42c);
    class_b7bad788af595c6d972d406665ff55d8.def("is_much_smaller_than", method_pointer_d333b52396805a33818194eba88b12ca, "");
    class_b7bad788af595c6d972d406665ff55d8.def("is_approx_to_constant", method_pointer_d2414547ffdc59c7b04b7fd83a6f3a76, "");
    class_b7bad788af595c6d972d406665ff55d8.def("is_constant", method_pointer_04f76f24546250b6a33e553c5a4e8139, "");
    class_b7bad788af595c6d972d406665ff55d8.def("is_zero", method_pointer_6de88a124960518da3c7eb5e93c12824, "");
    class_b7bad788af595c6d972d406665ff55d8.def("is_ones", method_pointer_3b24e0cc2bf25907be48e8e95e7d4d0b, "");
    class_b7bad788af595c6d972d406665ff55d8.def("has_na_n", method_pointer_b4967a6c09225bccb9871cf93e15cb60, "");
    class_b7bad788af595c6d972d406665ff55d8.def("all_finite", method_pointer_f54121487adf5ed888d06ce7e5a48add, "");
    class_b7bad788af595c6d972d406665ff55d8.def("__imul__", method_pointer_4b8d5b9ec9055e1ba05937ad39836d8b, boost::python::return_internal_reference<>(), "");
    class_b7bad788af595c6d972d406665ff55d8.def("__imul__", autowig::method_decorator_4b8d5b9ec9055e1ba05937ad39836d8b);
    class_b7bad788af595c6d972d406665ff55d8.def("eval", method_pointer_2c66be73b72e5287a48d3c75c290de37, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b7bad788af595c6d972d406665ff55d8.def("sum", method_pointer_7c99958da4245706a1b38218480f0e5a, "");
    class_b7bad788af595c6d972d406665ff55d8.def("mean", method_pointer_71d9bcc036b65265b84a85626ef860b8, "");
    class_b7bad788af595c6d972d406665ff55d8.def("trace", method_pointer_48a959fb38135419882d17566f7d827e, "");
    class_b7bad788af595c6d972d406665ff55d8.def("prod", method_pointer_69af2f1e39ab56b3b0c93184bc7b825b, "");
    class_b7bad788af595c6d972d406665ff55d8.def("min_coeff", method_pointer_fd0b443ee93b5de4beaa2f0b8db0a742, "");
    class_b7bad788af595c6d972d406665ff55d8.def("max_coeff", method_pointer_901c561c08c35c17bbe51563df1f9eab, "");
    class_b7bad788af595c6d972d406665ff55d8.def("all", method_pointer_4b827ca8099b5aee95cacbd3a25597cc, "");
    class_b7bad788af595c6d972d406665ff55d8.def("any", method_pointer_e78a951dae575fe39111bbb1720be069, "");
    class_b7bad788af595c6d972d406665ff55d8.def("count", method_pointer_2c217e430d7a5e689740a91bb7ffd5d1, "");
    class_b7bad788af595c6d972d406665ff55d8.def("reverse_in_place", method_pointer_78193026d88359ff97a480b859490d73, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 3 > > >();
    }

}