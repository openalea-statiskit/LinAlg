#include "_ieigen.h"


namespace autowig
{
    void method_decorator_237b0b1e0be158b0a090e08339b96549(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_58b7730c446a5736a5cb9d93a6c82b4d(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, int  const & param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_b92112694d3d5f9abbc89ccd076c65b3(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, int  const & param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_d545d369452552a698e1950b4f905fad(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_d7a282c789c75506838d3ed2632b167d(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_aa1d25b5fe1b5250af0607c4be0fcb26(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_b3bc8ca46efa58babb463d8961b7881f(class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > & instance, int  const & param_in_0, class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_328c2b43b39b5879931260e7eb8e86a2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_ecdedaf1464c582c9659578ff2b209ed)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_7fd5e781d6175019bca81ea366d3b190)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_7c226f9541bc5e088539b348997b5d3c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_5b4d4146f17f50e7980818c9d5e602ab)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_ee900ea9b91c54bd9742ef9266f20a33)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_65836712c103582482d679f63d1c6ee5)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_4152e5ade580570f834535d8c74a409a)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::fill;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_237b0b1e0be158b0a090e08339b96549)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_58b7730c446a5736a5cb9d93a6c82b4d)(long int , int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_b92112694d3d5f9abbc89ccd076c65b3)(int  const &, int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setLinSpaced;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_d545d369452552a698e1950b4f905fad)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_d7a282c789c75506838d3ed2632b167d)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_aa1d25b5fe1b5250af0607c4be0fcb26)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_dd3a0942d5565dc7a7371614f6ef2438)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_d9be75947b925a9e9684eee79c4f23b4)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_a73223104370533aa94b46698c311d91)(int  const &, int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_aadac7e295ad5e948f7ee023b06bf461)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_855b789111fc5379aca044710dc5db5c)(int  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_7b91db4ee9f853ba82b71502cfa17657)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_617ed94ba44a53c2a93c0ce54acab016)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::allFinite;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_b3bc8ca46efa58babb463d8961b7881f)(int  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::operator*=;
    class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_50e46f7ccb925052846580ec631bc595)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::eval;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_852893088214522393dd63f8fef090ee)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::sum;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_124afbc877e559ea8b989eb86d8b1e5c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::mean;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_56574a9bfd395e5bb97dc08c85b4205e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::trace;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_58f42b60afbc538ca6c2bb45711ed96d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::prod;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_ae8c458d503254b18e4fedf43526a067)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::minCoeff;
    int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_b4768e5a4a9a590d81d88daac8d210f8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::maxCoeff;
    int  const & (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_ace556f8e500585e8d04e1f9a463798c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_6543c87b87975762899ff96d34139b96)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_555bbc684ab05d778218cf36d0b50b58)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_ed003b81febc5ab1aba3d8b22cbc93eb)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::*method_pointer_bf56eca6a05951928d26a9d92f29d2da)() = &::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 > > > class_328c2b43b39b5879931260e7eb8e86a2("_DenseBase_328c2b43b39b5879931260e7eb8e86a2", "", boost::python::no_init);
    class_328c2b43b39b5879931260e7eb8e86a2.def("non_zeros", method_pointer_ecdedaf1464c582c9659578ff2b209ed, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("outer_size", method_pointer_7fd5e781d6175019bca81ea366d3b190, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("inner_size", method_pointer_7c226f9541bc5e088539b348997b5d3c, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("resize", method_pointer_5b4d4146f17f50e7980818c9d5e602ab, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("resize", method_pointer_ee900ea9b91c54bd9742ef9266f20a33, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("transpose_in_place", method_pointer_65836712c103582482d679f63d1c6ee5, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("fill", method_pointer_4152e5ade580570f834535d8c74a409a, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("set_constant", method_pointer_237b0b1e0be158b0a090e08339b96549, boost::python::return_internal_reference<>(), "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("set_constant", autowig::method_decorator_237b0b1e0be158b0a090e08339b96549);
    class_328c2b43b39b5879931260e7eb8e86a2.def("set_lin_spaced", method_pointer_58b7730c446a5736a5cb9d93a6c82b4d, boost::python::return_internal_reference<>(), "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("set_lin_spaced", autowig::method_decorator_58b7730c446a5736a5cb9d93a6c82b4d);
    class_328c2b43b39b5879931260e7eb8e86a2.def("set_lin_spaced", method_pointer_b92112694d3d5f9abbc89ccd076c65b3, boost::python::return_internal_reference<>(), "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("set_lin_spaced", autowig::method_decorator_b92112694d3d5f9abbc89ccd076c65b3);
    class_328c2b43b39b5879931260e7eb8e86a2.def("set_zero", method_pointer_d545d369452552a698e1950b4f905fad, boost::python::return_internal_reference<>(), "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("set_zero", autowig::method_decorator_d545d369452552a698e1950b4f905fad);
    class_328c2b43b39b5879931260e7eb8e86a2.def("set_ones", method_pointer_d7a282c789c75506838d3ed2632b167d, boost::python::return_internal_reference<>(), "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("set_ones", autowig::method_decorator_d7a282c789c75506838d3ed2632b167d);
    class_328c2b43b39b5879931260e7eb8e86a2.def("set_random", method_pointer_aa1d25b5fe1b5250af0607c4be0fcb26, boost::python::return_internal_reference<>(), "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("set_random", autowig::method_decorator_aa1d25b5fe1b5250af0607c4be0fcb26);
    class_328c2b43b39b5879931260e7eb8e86a2.def("is_much_smaller_than", method_pointer_dd3a0942d5565dc7a7371614f6ef2438, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("is_approx_to_constant", method_pointer_d9be75947b925a9e9684eee79c4f23b4, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("is_constant", method_pointer_a73223104370533aa94b46698c311d91, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("is_zero", method_pointer_aadac7e295ad5e948f7ee023b06bf461, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("is_ones", method_pointer_855b789111fc5379aca044710dc5db5c, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("has_na_n", method_pointer_7b91db4ee9f853ba82b71502cfa17657, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("all_finite", method_pointer_617ed94ba44a53c2a93c0ce54acab016, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("__imul__", method_pointer_b3bc8ca46efa58babb463d8961b7881f, boost::python::return_internal_reference<>(), "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("__imul__", autowig::method_decorator_b3bc8ca46efa58babb463d8961b7881f);
    class_328c2b43b39b5879931260e7eb8e86a2.def("eval", method_pointer_50e46f7ccb925052846580ec631bc595, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("sum", method_pointer_852893088214522393dd63f8fef090ee, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("mean", method_pointer_124afbc877e559ea8b989eb86d8b1e5c, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("trace", method_pointer_56574a9bfd395e5bb97dc08c85b4205e, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("prod", method_pointer_58f42b60afbc538ca6c2bb45711ed96d, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("min_coeff", method_pointer_ae8c458d503254b18e4fedf43526a067, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("max_coeff", method_pointer_b4768e5a4a9a590d81d88daac8d210f8, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("value", method_pointer_ace556f8e500585e8d04e1f9a463798c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("all", method_pointer_6543c87b87975762899ff96d34139b96, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("any", method_pointer_555bbc684ab05d778218cf36d0b50b58, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("count", method_pointer_ed003b81febc5ab1aba3d8b22cbc93eb, "");
    class_328c2b43b39b5879931260e7eb8e86a2.def("reverse_in_place", method_pointer_bf56eca6a05951928d26a9d92f29d2da, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, 3 > > >();
    }

}