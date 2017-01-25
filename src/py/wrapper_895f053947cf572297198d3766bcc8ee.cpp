#include "_ieigen.h"


namespace autowig
{
    void method_decorator_0b32d8ddcc695682865bc45ce1a15dbc(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_7b55a67435a15d4885d5eb7501673b88(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, long int  param_in_0, int  const & param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_e9755e06d3b25f968460d6b75f54601e(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, int  const & param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_70cbff0e60d2566a9b446841ce97d97e(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_83400ab66f8a52759f9e7aab5ede06de(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_860dd2da924f5507a2e5d8b5e734691c(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_983c9c4dc89355028b9bd9a589cdb1eb(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_895f053947cf572297198d3766bcc8ee()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_f351906522aa5c3b8ac61720b446ffa2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_602d66d57f30551ea0f01f719ca85d6c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_0ac6768a77e15bf2bbc73bdae5590ef9)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_9d74eb92d7db551fad71c3e1406505fb)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_166343fd13115382a33579f5d9c9e656)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_20156b106d40535881864d1adb518770)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_491bcf2d73fd5ce08a92c8449803026f)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::fill;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_0b32d8ddcc695682865bc45ce1a15dbc)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_7b55a67435a15d4885d5eb7501673b88)(long int , int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_e9755e06d3b25f968460d6b75f54601e)(int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_70cbff0e60d2566a9b446841ce97d97e)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_83400ab66f8a52759f9e7aab5ede06de)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_860dd2da924f5507a2e5d8b5e734691c)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_4918244ca70b5adbaa1fede81c830ce9)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_a1d320e9707e5699bc8fbbe5e9751e1d)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_eee140489afe5787862093dbc71cc6f4)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_a335bffcba755c15ae269184b22f375f)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_abd7d056e31e5926b689ba8c96c0e61a)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_29bfb909bc80509885ccb21673629d65)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_565f7c2d42a657ccb57a928dc448b94d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::allFinite;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_983c9c4dc89355028b9bd9a589cdb1eb)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::operator*=;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_74c69120b1ac5ff99b76437f573cb1e6)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::eval;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_34d4e1e5017c5a7692f3af423741bee2)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::sum;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_6eb231ac691d59b68493e6559a83ff96)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::mean;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_709e5366a0d6515090a677061399c9f9)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::trace;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_9146fe15245a530b81c5a0d3ce5035a1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::prod;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_81fba71fa7df5423865dc5b4d2ea89ed)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::minCoeff;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_7c27584845ff5a918b8199c7b8ab8fe4)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::maxCoeff;
    int  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_2b535a1fc92b588d9efbb73dce546156)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_0ef395de269d5e0b801829954d778c8e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_fa6401914e76596d802e566357f86da7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_aceabfbd76eb55209a2f50777e26dad5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_51d7318b8cec5eb69d46e3f36acaf6e5)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 > > > class_895f053947cf572297198d3766bcc8ee("_DenseBase_895f053947cf572297198d3766bcc8ee", "", boost::python::no_init);
    class_895f053947cf572297198d3766bcc8ee.def("non_zeros", method_pointer_f351906522aa5c3b8ac61720b446ffa2, "");
    class_895f053947cf572297198d3766bcc8ee.def("outer_size", method_pointer_602d66d57f30551ea0f01f719ca85d6c, "");
    class_895f053947cf572297198d3766bcc8ee.def("inner_size", method_pointer_0ac6768a77e15bf2bbc73bdae5590ef9, "");
    class_895f053947cf572297198d3766bcc8ee.def("resize", method_pointer_9d74eb92d7db551fad71c3e1406505fb, "");
    class_895f053947cf572297198d3766bcc8ee.def("resize", method_pointer_166343fd13115382a33579f5d9c9e656, "");
    class_895f053947cf572297198d3766bcc8ee.def("transpose_in_place", method_pointer_20156b106d40535881864d1adb518770, "");
    class_895f053947cf572297198d3766bcc8ee.def("fill", method_pointer_491bcf2d73fd5ce08a92c8449803026f, "");
    class_895f053947cf572297198d3766bcc8ee.def("set_constant", method_pointer_0b32d8ddcc695682865bc45ce1a15dbc, boost::python::return_internal_reference<>(), "");
    class_895f053947cf572297198d3766bcc8ee.def("set_constant", autowig::method_decorator_0b32d8ddcc695682865bc45ce1a15dbc);
    class_895f053947cf572297198d3766bcc8ee.def("set_lin_spaced", method_pointer_7b55a67435a15d4885d5eb7501673b88, boost::python::return_internal_reference<>(), "");
    class_895f053947cf572297198d3766bcc8ee.def("set_lin_spaced", autowig::method_decorator_7b55a67435a15d4885d5eb7501673b88);
    class_895f053947cf572297198d3766bcc8ee.def("set_lin_spaced", method_pointer_e9755e06d3b25f968460d6b75f54601e, boost::python::return_internal_reference<>(), "");
    class_895f053947cf572297198d3766bcc8ee.def("set_lin_spaced", autowig::method_decorator_e9755e06d3b25f968460d6b75f54601e);
    class_895f053947cf572297198d3766bcc8ee.def("set_zero", method_pointer_70cbff0e60d2566a9b446841ce97d97e, boost::python::return_internal_reference<>(), "");
    class_895f053947cf572297198d3766bcc8ee.def("set_zero", autowig::method_decorator_70cbff0e60d2566a9b446841ce97d97e);
    class_895f053947cf572297198d3766bcc8ee.def("set_ones", method_pointer_83400ab66f8a52759f9e7aab5ede06de, boost::python::return_internal_reference<>(), "");
    class_895f053947cf572297198d3766bcc8ee.def("set_ones", autowig::method_decorator_83400ab66f8a52759f9e7aab5ede06de);
    class_895f053947cf572297198d3766bcc8ee.def("set_random", method_pointer_860dd2da924f5507a2e5d8b5e734691c, boost::python::return_internal_reference<>(), "");
    class_895f053947cf572297198d3766bcc8ee.def("set_random", autowig::method_decorator_860dd2da924f5507a2e5d8b5e734691c);
    class_895f053947cf572297198d3766bcc8ee.def("is_much_smaller_than", method_pointer_4918244ca70b5adbaa1fede81c830ce9, "");
    class_895f053947cf572297198d3766bcc8ee.def("is_approx_to_constant", method_pointer_a1d320e9707e5699bc8fbbe5e9751e1d, "");
    class_895f053947cf572297198d3766bcc8ee.def("is_constant", method_pointer_eee140489afe5787862093dbc71cc6f4, "");
    class_895f053947cf572297198d3766bcc8ee.def("is_zero", method_pointer_a335bffcba755c15ae269184b22f375f, "");
    class_895f053947cf572297198d3766bcc8ee.def("is_ones", method_pointer_abd7d056e31e5926b689ba8c96c0e61a, "");
    class_895f053947cf572297198d3766bcc8ee.def("has_na_n", method_pointer_29bfb909bc80509885ccb21673629d65, "");
    class_895f053947cf572297198d3766bcc8ee.def("all_finite", method_pointer_565f7c2d42a657ccb57a928dc448b94d, "");
    class_895f053947cf572297198d3766bcc8ee.def("__imul__", method_pointer_983c9c4dc89355028b9bd9a589cdb1eb, boost::python::return_internal_reference<>(), "");
    class_895f053947cf572297198d3766bcc8ee.def("__imul__", autowig::method_decorator_983c9c4dc89355028b9bd9a589cdb1eb);
    class_895f053947cf572297198d3766bcc8ee.def("eval", method_pointer_74c69120b1ac5ff99b76437f573cb1e6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_895f053947cf572297198d3766bcc8ee.def("sum", method_pointer_34d4e1e5017c5a7692f3af423741bee2, "");
    class_895f053947cf572297198d3766bcc8ee.def("mean", method_pointer_6eb231ac691d59b68493e6559a83ff96, "");
    class_895f053947cf572297198d3766bcc8ee.def("trace", method_pointer_709e5366a0d6515090a677061399c9f9, "");
    class_895f053947cf572297198d3766bcc8ee.def("prod", method_pointer_9146fe15245a530b81c5a0d3ce5035a1, "");
    class_895f053947cf572297198d3766bcc8ee.def("min_coeff", method_pointer_81fba71fa7df5423865dc5b4d2ea89ed, "");
    class_895f053947cf572297198d3766bcc8ee.def("max_coeff", method_pointer_7c27584845ff5a918b8199c7b8ab8fe4, "");
    class_895f053947cf572297198d3766bcc8ee.def("value", method_pointer_2b535a1fc92b588d9efbb73dce546156, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_895f053947cf572297198d3766bcc8ee.def("all", method_pointer_0ef395de269d5e0b801829954d778c8e, "");
    class_895f053947cf572297198d3766bcc8ee.def("any", method_pointer_fa6401914e76596d802e566357f86da7, "");
    class_895f053947cf572297198d3766bcc8ee.def("count", method_pointer_aceabfbd76eb55209a2f50777e26dad5, "");
    class_895f053947cf572297198d3766bcc8ee.def("reverse_in_place", method_pointer_51d7318b8cec5eb69d46e3f36acaf6e5, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 3 > > >();
    }

}