#include "_ieigen.h"


namespace autowig
{
    void method_decorator_5f45e1e1966f5f3da3da705ad50761df(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_a016ac65ce135353abc46ebbc55de45e(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, int  const & param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_cb0cacd4c0fe5a8d8a4f683d317a3d1d(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, int  const & param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_3b0d4f1baeea5f2a98faff4b35b389bd(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_a804c331abf95438910f505b8b92d625(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_89146053d9545c9894ecb17a76fd0f3d(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_b6ab55ae90fe50c2aac5b4d6e7728232(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_190bc2366eda51609d7dbcbc557a17d4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_d388b256b5a9522aba7f29db9707036c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_d6567625a4585b8286f228d38852ade3)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_432cf132c60c55c7aa899968b82db595)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_0df3b5099ef4514fbafdd48c35af5723)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_bcb11e46f9e65520a2db1a473a187edd)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_9b6aab573c6256fc9ef184e2862eed7a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_9731c2558ade50109c3a3de0feed02c9)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::fill;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_5f45e1e1966f5f3da3da705ad50761df)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_a016ac65ce135353abc46ebbc55de45e)(long int , int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_cb0cacd4c0fe5a8d8a4f683d317a3d1d)(int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_3b0d4f1baeea5f2a98faff4b35b389bd)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_a804c331abf95438910f505b8b92d625)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_89146053d9545c9894ecb17a76fd0f3d)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_e35692dbbfd05959ad40121da521e396)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_4e097e8da91c57b7be0f8aa7667e209d)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_cd10797edb4c5eb6bfe3f894ad13eb38)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_a13e664433f3526b9037ed74ad115e92)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_13e7252e84275e8e80ff3041746ae80d)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_a5bbb7aff1ec5f13b2f4365d271d0da8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_50388bb373c55724a06d43870ba2796d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::allFinite;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_b6ab55ae90fe50c2aac5b4d6e7728232)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::operator*=;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_5f13684a71c65037bffd3bfcaf44d734)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::eval;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_9f6c5032774654e490bdf80172e97cfd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::sum;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_58b0bd7cbeac5e2bbe5fe0267c13b8f0)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::mean;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_c4873699542b530f93080b93f39bca7d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::trace;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_d440e9aa9561542591c09f39ac94c976)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::prod;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_d9ae5f5458535dce8d5d23891a9398c7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::minCoeff;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_9e3fd7c7cc745f20b8fb46e1999b72d5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::maxCoeff;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_0889774de85050e9b26f831afc1acdf7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_ea2f37bfd2fa5f7480dee6f538c50ce7)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_8db31089ac5b501783f38c7086fc2801)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::*method_pointer_f015c751329354d88f7d28d951b5e170)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 > > > class_190bc2366eda51609d7dbcbc557a17d4("_DenseBase_190bc2366eda51609d7dbcbc557a17d4", "", boost::python::no_init);
    class_190bc2366eda51609d7dbcbc557a17d4.def("non_zeros", method_pointer_d388b256b5a9522aba7f29db9707036c, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("outer_size", method_pointer_d6567625a4585b8286f228d38852ade3, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("inner_size", method_pointer_432cf132c60c55c7aa899968b82db595, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("resize", method_pointer_0df3b5099ef4514fbafdd48c35af5723, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("resize", method_pointer_bcb11e46f9e65520a2db1a473a187edd, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("transpose_in_place", method_pointer_9b6aab573c6256fc9ef184e2862eed7a, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("fill", method_pointer_9731c2558ade50109c3a3de0feed02c9, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("set_constant", method_pointer_5f45e1e1966f5f3da3da705ad50761df, boost::python::return_internal_reference<>(), "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("set_constant", autowig::method_decorator_5f45e1e1966f5f3da3da705ad50761df);
    class_190bc2366eda51609d7dbcbc557a17d4.def("set_lin_spaced", method_pointer_a016ac65ce135353abc46ebbc55de45e, boost::python::return_internal_reference<>(), "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("set_lin_spaced", autowig::method_decorator_a016ac65ce135353abc46ebbc55de45e);
    class_190bc2366eda51609d7dbcbc557a17d4.def("set_lin_spaced", method_pointer_cb0cacd4c0fe5a8d8a4f683d317a3d1d, boost::python::return_internal_reference<>(), "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("set_lin_spaced", autowig::method_decorator_cb0cacd4c0fe5a8d8a4f683d317a3d1d);
    class_190bc2366eda51609d7dbcbc557a17d4.def("set_zero", method_pointer_3b0d4f1baeea5f2a98faff4b35b389bd, boost::python::return_internal_reference<>(), "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("set_zero", autowig::method_decorator_3b0d4f1baeea5f2a98faff4b35b389bd);
    class_190bc2366eda51609d7dbcbc557a17d4.def("set_ones", method_pointer_a804c331abf95438910f505b8b92d625, boost::python::return_internal_reference<>(), "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("set_ones", autowig::method_decorator_a804c331abf95438910f505b8b92d625);
    class_190bc2366eda51609d7dbcbc557a17d4.def("set_random", method_pointer_89146053d9545c9894ecb17a76fd0f3d, boost::python::return_internal_reference<>(), "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("set_random", autowig::method_decorator_89146053d9545c9894ecb17a76fd0f3d);
    class_190bc2366eda51609d7dbcbc557a17d4.def("is_much_smaller_than", method_pointer_e35692dbbfd05959ad40121da521e396, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("is_approx_to_constant", method_pointer_4e097e8da91c57b7be0f8aa7667e209d, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("is_constant", method_pointer_cd10797edb4c5eb6bfe3f894ad13eb38, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("is_zero", method_pointer_a13e664433f3526b9037ed74ad115e92, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("is_ones", method_pointer_13e7252e84275e8e80ff3041746ae80d, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("has_na_n", method_pointer_a5bbb7aff1ec5f13b2f4365d271d0da8, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("all_finite", method_pointer_50388bb373c55724a06d43870ba2796d, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("__imul__", method_pointer_b6ab55ae90fe50c2aac5b4d6e7728232, boost::python::return_internal_reference<>(), "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("__imul__", autowig::method_decorator_b6ab55ae90fe50c2aac5b4d6e7728232);
    class_190bc2366eda51609d7dbcbc557a17d4.def("eval", method_pointer_5f13684a71c65037bffd3bfcaf44d734, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("sum", method_pointer_9f6c5032774654e490bdf80172e97cfd, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("mean", method_pointer_58b0bd7cbeac5e2bbe5fe0267c13b8f0, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("trace", method_pointer_c4873699542b530f93080b93f39bca7d, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("prod", method_pointer_d440e9aa9561542591c09f39ac94c976, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("min_coeff", method_pointer_d9ae5f5458535dce8d5d23891a9398c7, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("max_coeff", method_pointer_9e3fd7c7cc745f20b8fb46e1999b72d5, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("all", method_pointer_0889774de85050e9b26f831afc1acdf7, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("any", method_pointer_ea2f37bfd2fa5f7480dee6f538c50ce7, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("count", method_pointer_8db31089ac5b501783f38c7086fc2801, "");
    class_190bc2366eda51609d7dbcbc557a17d4.def("reverse_in_place", method_pointer_f015c751329354d88f7d28d951b5e170, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >, 3 > > >();
    }

}