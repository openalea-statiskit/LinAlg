#include "_linalg.h"



namespace autowig
{

    void method_decorator_6d3d507259315a5199a95f7cf124c09b(class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > & instance, const class ::Eigen::SparseVector< double, 0, int > & param_out) { instance.derived() = param_out; }
    void method_decorator_daec74e6fc4e59d6ad5557291e9764a7(class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > const & instance, const class ::Eigen::SparseVector< double, 0, int > & param_out) { instance.const_cast_derived() = param_out; }
    void method_decorator_0ab311989cc4525bb9311755b5cec583(class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > & instance, const ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::NonConstRealReturnType  param_out) { instance.real() = param_out; }
    void method_decorator_8453203fff975309af73f0a598221f8f(class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > & instance, const class ::Eigen::SparseVector< double, 0, int > & param_out) { instance.markAsRValue() = param_out; }
    void method_decorator_94f2e181dbfb5e6eae48c27a9e962cfd(class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > & instance, ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::Scalar const & param_in_0, const class ::Eigen::SparseVector< double, 0, int > & param_out) { instance.operator*=(param_in_0) = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > const volatile * get_pointer<class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > const volatile >(class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_04bc95afc11254deb3e5e7033a554bf6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::SparseVector< double, 0, int > const & (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_fb11c33d9e995c5da62a81f069f65c4f)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::derived;
    class ::Eigen::SparseVector< double, 0, int > & (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_6d3d507259315a5199a95f7cf124c09b)() = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::derived;
    class ::Eigen::SparseVector< double, 0, int > & (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_daec74e6fc4e59d6ad5557291e9764a7)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::const_cast_derived;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::ConjugateReturnType  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_9f51a763de735baf89b6eba1feabff2f)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::conjugate;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::RealReturnType  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_96c39903310c559cb29f819e9e910ece)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::real;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::NonConstRealReturnType  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_0ab311989cc4525bb9311755b5cec583)() = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::real;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::Index  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_1e63a407032059098f592e55fd05a6a3)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::rows;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::Index  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_cf2e06fa7dc457b1be95ca974c75e2d6)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::cols;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::Index  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_5d2ec637722955688a09a7ad4f719ac0)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::size;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::Index  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_2aede2799a2a53bc902274d7c146506e)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::nonZeros;
    bool  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_46f47b51f9d252358a5fe5ccb78b4199)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::isVector;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::Index  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_af218330954254e9a77bb655c861d459)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::outerSize;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::Index  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_def9d7b1420652dfaafdc56fc86f3b5e)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::innerSize;
    bool  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_8dc2827a680b53bf89af78932d3e90ad)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::isRValue;
    class ::Eigen::SparseVector< double, 0, int > & (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_8453203fff975309af73f0a598221f8f)() = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::markAsRValue;
    class ::Eigen::SparseVector< double, 0, int > & (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_94f2e181dbfb5e6eae48c27a9e962cfd)(::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::Scalar const &) = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::operator*=;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::RealScalar  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_b14d99326c445bb6a943c9957f4ccc89)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::squaredNorm;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::RealScalar  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_cc68a1c333645ef78434825c9003783b)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::norm;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::RealScalar  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_60d10ce67e6b5ac7ab1bffd50257c1da)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::blueNorm;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_be2b9aeec0955699984281b80100dcb2)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::toDense;
    class ::Eigen::SparseVector< double, 0, int > const (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_9584caf05a205c61a9091da96f9274b7)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::eval;
    ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::Scalar  (::Eigen::SparseMatrixBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_dccbfd55cab2532aaf2502beb19b7575)() const = &::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >::sum;
    struct function_group
    {
        static class ::std::basic_ostream< char, struct ::std::char_traits< char > > & function_bf10469e5599540b8f07b0ca6b47ce08(class ::std::basic_ostream< char, struct ::std::char_traits< char > > & parameter_0, class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > const & parameter_1)
        { return operator<<(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > >, autowig::Held< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > >::Type, boost::python::bases< struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::SparseVector< double, 0, int >, double, double, struct ::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > >, false > > > class_04bc95afc11254deb3e5e7033a554bf6("_SparseMatrixBase_04bc95afc11254deb3e5e7033a554bf6", "", boost::python::no_init);
    class_04bc95afc11254deb3e5e7033a554bf6.def("derived", method_pointer_fb11c33d9e995c5da62a81f069f65c4f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("derived", method_pointer_6d3d507259315a5199a95f7cf124c09b, boost::python::return_internal_reference<>(), "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("derived", autowig::method_decorator_6d3d507259315a5199a95f7cf124c09b);
    class_04bc95afc11254deb3e5e7033a554bf6.def("const_cast_derived", method_pointer_daec74e6fc4e59d6ad5557291e9764a7, boost::python::return_internal_reference<>(), "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("const_cast_derived", autowig::method_decorator_daec74e6fc4e59d6ad5557291e9764a7);
    class_04bc95afc11254deb3e5e7033a554bf6.def("conjugate", method_pointer_9f51a763de735baf89b6eba1feabff2f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("real", method_pointer_96c39903310c559cb29f819e9e910ece, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("real", method_pointer_0ab311989cc4525bb9311755b5cec583, boost::python::return_internal_reference<>(), "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("real", autowig::method_decorator_0ab311989cc4525bb9311755b5cec583);
    class_04bc95afc11254deb3e5e7033a554bf6.def("rows", method_pointer_1e63a407032059098f592e55fd05a6a3, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("cols", method_pointer_cf2e06fa7dc457b1be95ca974c75e2d6, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("__len__", method_pointer_5d2ec637722955688a09a7ad4f719ac0, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("non_zeros", method_pointer_2aede2799a2a53bc902274d7c146506e, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("is_vector", method_pointer_46f47b51f9d252358a5fe5ccb78b4199, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("outer_size", method_pointer_af218330954254e9a77bb655c861d459, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("inner_size", method_pointer_def9d7b1420652dfaafdc56fc86f3b5e, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("is_r_value", method_pointer_8dc2827a680b53bf89af78932d3e90ad, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("mark_as_r_value", method_pointer_8453203fff975309af73f0a598221f8f, boost::python::return_internal_reference<>(), "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("mark_as_r_value", autowig::method_decorator_8453203fff975309af73f0a598221f8f);
    class_04bc95afc11254deb3e5e7033a554bf6.def("__imul__", method_pointer_94f2e181dbfb5e6eae48c27a9e962cfd, boost::python::return_internal_reference<>(), "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("__imul__", autowig::method_decorator_94f2e181dbfb5e6eae48c27a9e962cfd);
    class_04bc95afc11254deb3e5e7033a554bf6.def("squared_norm", method_pointer_b14d99326c445bb6a943c9957f4ccc89, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("norm", method_pointer_cc68a1c333645ef78434825c9003783b, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("blue_norm", method_pointer_60d10ce67e6b5ac7ab1bffd50257c1da, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("to_dense", method_pointer_be2b9aeec0955699984281b80100dcb2, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("eval", method_pointer_9584caf05a205c61a9091da96f9274b7, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("sum", method_pointer_dccbfd55cab2532aaf2502beb19b7575, "");
    class_04bc95afc11254deb3e5e7033a554bf6.def("__lshift__", function_group::function_bf10469e5599540b8f07b0ca6b47ce08, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > >::Type, autowig::Held< struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::SparseVector< double, 0, int >, double, double, struct ::Eigen::EigenBase< class ::Eigen::SparseVector< double, 0, int > >, false > >::Type >();
    }

}