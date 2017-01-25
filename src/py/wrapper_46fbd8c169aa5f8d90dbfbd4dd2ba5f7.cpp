#include "_ieigen.h"


namespace autowig
{
    void method_decorator_18a4041a2c6d516491d8d9edf8235a66(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_e0e609827f835690b4c4a7ac6ef90a9d(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_544242922b8c5621a8dc5173ca28cb0f(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, struct ::std::complex< float >  const & param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_ac9d1c8d325b514bbc4338b17cfe0bff(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_f61da6c7535051099215b44d8c50d8b6(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_5494f6c6ac1154d6bdbc2796f6e49760(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_947a34132df95c60914fdf0e7cda9ba3(class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > & instance, struct ::std::complex< float >  const & param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_46fbd8c169aa5f8d90dbfbd4dd2ba5f7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_e5842b76d01550b7814a788fbe57f8f8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_505f5a4bd5b9565b8a3a41e8699f38a7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_172defc497665c5b97c22c4f67305b6d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_50ac35afab6d5e6a832656b1e6b00b6b)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_0d22684d7a625d8eaacb3ca5147b4857)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_bd80cc863e8b5177811b49e560908222)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_938412a8162d5ee3979e57d75bde6414)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::fill;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_18a4041a2c6d516491d8d9edf8235a66)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_e0e609827f835690b4c4a7ac6ef90a9d)(long int , struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_544242922b8c5621a8dc5173ca28cb0f)(struct ::std::complex< float >  const &, struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_ac9d1c8d325b514bbc4338b17cfe0bff)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_f61da6c7535051099215b44d8c50d8b6)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_5494f6c6ac1154d6bdbc2796f6e49760)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_d6fef56bc9e356f2a97b4787d549b0a7)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_b983e9c597355e5ca4b06b7d71796bfd)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_9357167f4d6f56aaa76251f9b59328ea)(struct ::std::complex< float >  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_6c2b63102a3f5bea8f7c74f8730d795b)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_ecceba9db67e5a3c8b1032dd3da2b9d8)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_97fea5422446532b967b4c9c3f20635d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_2001974cac38555c8386c439a1309207)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::allFinite;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_947a34132df95c60914fdf0e7cda9ba3)(struct ::std::complex< float >  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::operator*=;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_5619c9edbe5f56eeaad148fe6537b580)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::eval;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_0c60592740d2500a8a5acb79790d1dbf)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::sum;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_b0d47ee035215fb482409430fdda4f27)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::mean;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_23fe1893e82f54f39bafa3c8468f904d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::trace;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_4c5d994a15955e27ac5175009f87f610)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::prod;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_4017b64c24f650dd85273406a77c1e52)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::minCoeff;
    struct ::std::complex< float >  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_415af1e58f165bd6b2271d78be9d1371)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::maxCoeff;
    struct ::std::complex< float >  const & (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_4028dda1607d569fb2a8857a6e29edc2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_e4a4cbe72b24534cba0caac1a96fea8f)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_4380e2524d9551f3aa70a0b852a4a17e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_237209407e5c560fbfe0f92286329896)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 > >::*method_pointer_5baafddc926152e3ab07da121bfd2b96)() = &::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 > > > class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7("_DenseBase_46fbd8c169aa5f8d90dbfbd4dd2ba5f7", "", boost::python::no_init);
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("non_zeros", method_pointer_e5842b76d01550b7814a788fbe57f8f8, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("outer_size", method_pointer_505f5a4bd5b9565b8a3a41e8699f38a7, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("inner_size", method_pointer_172defc497665c5b97c22c4f67305b6d, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("resize", method_pointer_50ac35afab6d5e6a832656b1e6b00b6b, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("resize", method_pointer_0d22684d7a625d8eaacb3ca5147b4857, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("transpose_in_place", method_pointer_bd80cc863e8b5177811b49e560908222, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("fill", method_pointer_938412a8162d5ee3979e57d75bde6414, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("set_constant", method_pointer_18a4041a2c6d516491d8d9edf8235a66, boost::python::return_internal_reference<>(), "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("set_constant", autowig::method_decorator_18a4041a2c6d516491d8d9edf8235a66);
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("set_lin_spaced", method_pointer_e0e609827f835690b4c4a7ac6ef90a9d, boost::python::return_internal_reference<>(), "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("set_lin_spaced", autowig::method_decorator_e0e609827f835690b4c4a7ac6ef90a9d);
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("set_lin_spaced", method_pointer_544242922b8c5621a8dc5173ca28cb0f, boost::python::return_internal_reference<>(), "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("set_lin_spaced", autowig::method_decorator_544242922b8c5621a8dc5173ca28cb0f);
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("set_zero", method_pointer_ac9d1c8d325b514bbc4338b17cfe0bff, boost::python::return_internal_reference<>(), "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("set_zero", autowig::method_decorator_ac9d1c8d325b514bbc4338b17cfe0bff);
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("set_ones", method_pointer_f61da6c7535051099215b44d8c50d8b6, boost::python::return_internal_reference<>(), "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("set_ones", autowig::method_decorator_f61da6c7535051099215b44d8c50d8b6);
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("set_random", method_pointer_5494f6c6ac1154d6bdbc2796f6e49760, boost::python::return_internal_reference<>(), "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("set_random", autowig::method_decorator_5494f6c6ac1154d6bdbc2796f6e49760);
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("is_much_smaller_than", method_pointer_d6fef56bc9e356f2a97b4787d549b0a7, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("is_approx_to_constant", method_pointer_b983e9c597355e5ca4b06b7d71796bfd, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("is_constant", method_pointer_9357167f4d6f56aaa76251f9b59328ea, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("is_zero", method_pointer_6c2b63102a3f5bea8f7c74f8730d795b, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("is_ones", method_pointer_ecceba9db67e5a3c8b1032dd3da2b9d8, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("has_na_n", method_pointer_97fea5422446532b967b4c9c3f20635d, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("all_finite", method_pointer_2001974cac38555c8386c439a1309207, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("__imul__", method_pointer_947a34132df95c60914fdf0e7cda9ba3, boost::python::return_internal_reference<>(), "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("__imul__", autowig::method_decorator_947a34132df95c60914fdf0e7cda9ba3);
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("eval", method_pointer_5619c9edbe5f56eeaad148fe6537b580, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("sum", method_pointer_0c60592740d2500a8a5acb79790d1dbf, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("mean", method_pointer_b0d47ee035215fb482409430fdda4f27, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("trace", method_pointer_23fe1893e82f54f39bafa3c8468f904d, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("prod", method_pointer_4c5d994a15955e27ac5175009f87f610, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("min_coeff", method_pointer_4017b64c24f650dd85273406a77c1e52, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("max_coeff", method_pointer_415af1e58f165bd6b2271d78be9d1371, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("value", method_pointer_4028dda1607d569fb2a8857a6e29edc2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("all", method_pointer_e4a4cbe72b24534cba0caac1a96fea8f, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("any", method_pointer_4380e2524d9551f3aa70a0b852a4a17e, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("count", method_pointer_237209407e5c560fbfe0f92286329896, "");
    class_46fbd8c169aa5f8d90dbfbd4dd2ba5f7.def("reverse_in_place", method_pointer_5baafddc926152e3ab07da121bfd2b96, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, 3 > > >();
    }

}