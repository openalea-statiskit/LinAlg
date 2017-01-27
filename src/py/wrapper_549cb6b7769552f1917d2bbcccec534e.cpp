#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a3f3cd6bb2ed536092f61befb6656526(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
// TODO // TODO     void method_decorator_6afdf5db05255f3f83e4cb93dc3d5c92(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
// TODO // TODO // TODO // TODO     void method_decorator_4bfd67e78a735d1399bb12817db5d25e(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, struct ::std::complex< float >  const & param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_96abed7da58e5867b5ebe52150799b88(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_06ff20ac35565b688f20c15d9352effd(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_e2d9cb0898be5ad285c56506a5f4f781(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_a6e2e8a7ab845b90a36fe2c169e118cf(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_549cb6b7769552f1917d2bbcccec534e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_1f1abd379b2a59049d8bd384671f361d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_b506984838f25516acd7cca0b3bd9496)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_1f3fd84c591e598780a4bfc1f2a3dc37)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_be613af566e4552c970b7184e19e5d13)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_e6a08104451c54cc8c71f6acab4431b5)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_ba6f301096225a0f979681fb2e3eab72)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_06df24aff39153f293da680ab23a0130)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_a3f3cd6bb2ed536092f61befb6656526)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setConstant;
// TODO // TODO // TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_6afdf5db05255f3f83e4cb93dc3d5c92)(long int , struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setLinSpaced;
// TODO // TODO     class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_4bfd67e78a735d1399bb12817db5d25e)(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_96abed7da58e5867b5ebe52150799b88)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_06ff20ac35565b688f20c15d9352effd)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_e2d9cb0898be5ad285c56506a5f4f781)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_f8c90e04d04f51c6b513bde164337da5)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_e31e7dd55e475b97a5f48d7711e31701)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_6bbc32b3509956a49b3f73da8b16c1dc)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_e67591496a2c5ae18935df94c5d86a84)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_9aaeda89b68b53e29ddf77ea8c56934b)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_9aaa49ecc88854b499036c38e13ae9da)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_2a80074aceeb587f9a1c3ef2def925ec)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_a6e2e8a7ab845b90a36fe2c169e118cf)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_f7f8d0ed7ea656e18c52fd277df3956b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::eval;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_eccb1d02b21e5ee294ec4312fbd6b354)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::sum;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_5b9f1dd5653a5837a9b000563de279ff)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::mean;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_f664d3730c785f13af617cb6c26da0c2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::trace;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_b1a56f023b425455b6e5637decca7c2d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::prod;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_ef69632bfdd156a294f5384c686fbe35)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 > > > class_549cb6b7769552f1917d2bbcccec534e("_DenseBase_549cb6b7769552f1917d2bbcccec534e", "", boost::python::no_init);
    class_549cb6b7769552f1917d2bbcccec534e.def("non_zeros", method_pointer_1f1abd379b2a59049d8bd384671f361d, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("outer_size", method_pointer_b506984838f25516acd7cca0b3bd9496, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("inner_size", method_pointer_1f3fd84c591e598780a4bfc1f2a3dc37, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("resize", method_pointer_be613af566e4552c970b7184e19e5d13, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("resize", method_pointer_e6a08104451c54cc8c71f6acab4431b5, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("transpose_in_place", method_pointer_ba6f301096225a0f979681fb2e3eab72, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("fill", method_pointer_06df24aff39153f293da680ab23a0130, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("set_constant", method_pointer_a3f3cd6bb2ed536092f61befb6656526, boost::python::return_internal_reference<>(), "");
    class_549cb6b7769552f1917d2bbcccec534e.def("set_constant", autowig::method_decorator_a3f3cd6bb2ed536092f61befb6656526);
// TODO // TODO     class_549cb6b7769552f1917d2bbcccec534e.def("set_lin_spaced", method_pointer_6afdf5db05255f3f83e4cb93dc3d5c92, boost::python::return_internal_reference<>(), "");
// TODO // TODO     class_549cb6b7769552f1917d2bbcccec534e.def("set_lin_spaced", autowig::method_decorator_6afdf5db05255f3f83e4cb93dc3d5c92);
// TODO     class_549cb6b7769552f1917d2bbcccec534e.def("set_lin_spaced", method_pointer_4bfd67e78a735d1399bb12817db5d25e, boost::python::return_internal_reference<>(), "");
// TODO     class_549cb6b7769552f1917d2bbcccec534e.def("set_lin_spaced", autowig::method_decorator_4bfd67e78a735d1399bb12817db5d25e);
    class_549cb6b7769552f1917d2bbcccec534e.def("set_zero", method_pointer_96abed7da58e5867b5ebe52150799b88, boost::python::return_internal_reference<>(), "");
    class_549cb6b7769552f1917d2bbcccec534e.def("set_zero", autowig::method_decorator_96abed7da58e5867b5ebe52150799b88);
    class_549cb6b7769552f1917d2bbcccec534e.def("set_ones", method_pointer_06ff20ac35565b688f20c15d9352effd, boost::python::return_internal_reference<>(), "");
    class_549cb6b7769552f1917d2bbcccec534e.def("set_ones", autowig::method_decorator_06ff20ac35565b688f20c15d9352effd);
    class_549cb6b7769552f1917d2bbcccec534e.def("set_random", method_pointer_e2d9cb0898be5ad285c56506a5f4f781, boost::python::return_internal_reference<>(), "");
    class_549cb6b7769552f1917d2bbcccec534e.def("set_random", autowig::method_decorator_e2d9cb0898be5ad285c56506a5f4f781);
    class_549cb6b7769552f1917d2bbcccec534e.def("is_much_smaller_than", method_pointer_f8c90e04d04f51c6b513bde164337da5, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("is_approx_to_constant", method_pointer_e31e7dd55e475b97a5f48d7711e31701, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("is_constant", method_pointer_6bbc32b3509956a49b3f73da8b16c1dc, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("is_zero", method_pointer_e67591496a2c5ae18935df94c5d86a84, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("is_ones", method_pointer_9aaeda89b68b53e29ddf77ea8c56934b, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("has_na_n", method_pointer_9aaa49ecc88854b499036c38e13ae9da, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("all_finite", method_pointer_2a80074aceeb587f9a1c3ef2def925ec, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("__imul__", method_pointer_a6e2e8a7ab845b90a36fe2c169e118cf, boost::python::return_internal_reference<>(), "");
    class_549cb6b7769552f1917d2bbcccec534e.def("__imul__", autowig::method_decorator_a6e2e8a7ab845b90a36fe2c169e118cf);
    class_549cb6b7769552f1917d2bbcccec534e.def("eval", method_pointer_f7f8d0ed7ea656e18c52fd277df3956b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_549cb6b7769552f1917d2bbcccec534e.def("sum", method_pointer_eccb1d02b21e5ee294ec4312fbd6b354, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("mean", method_pointer_5b9f1dd5653a5837a9b000563de279ff, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("trace", method_pointer_f664d3730c785f13af617cb6c26da0c2, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("prod", method_pointer_b1a56f023b425455b6e5637decca7c2d, "");
    class_549cb6b7769552f1917d2bbcccec534e.def("reverse_in_place", method_pointer_ef69632bfdd156a294f5384c686fbe35, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 3 > > >();
    }

}