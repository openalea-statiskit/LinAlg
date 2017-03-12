#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const volatile * get_pointer<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const volatile >(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b036397122165e73844d0603f6968fb1()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_a471bf37dc9c5fcab46a5544831feb8a)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::rowIndexByOuterInner;
    ::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_f5ad4ecd5f1a5238a4164e9dd33dfeab)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::colIndexByOuterInner;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_dcc0493a7f7d5f418abed3729e6b66de)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::coeff;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_7585aa6d1b8b5b7c9c81d5af26282daa)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::coeffByOuterInner;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_57152b156e4c53f39a1d21cebd0d9fd1)(::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::coeff;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_442ac24560f55d5dbc7678fb4a31d012)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::x;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_785c9f5390fb5ce2bf0741a90f97f7e9)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::y;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_02bd335c2c28545da006d338dd46d390)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::z;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_34726919fa0b5e2cbc1e53fbfa73783b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > >::Type, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > class_b036397122165e73844d0603f6968fb1("_DenseCoeffsBase_b036397122165e73844d0603f6968fb1", "", boost::python::no_init);
    class_b036397122165e73844d0603f6968fb1.def("row_index_by_outer_inner", method_pointer_a471bf37dc9c5fcab46a5544831feb8a, "");
    class_b036397122165e73844d0603f6968fb1.def("col_index_by_outer_inner", method_pointer_f5ad4ecd5f1a5238a4164e9dd33dfeab, "");
    class_b036397122165e73844d0603f6968fb1.def("coeff", method_pointer_dcc0493a7f7d5f418abed3729e6b66de, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("coeff_by_outer_inner", method_pointer_7585aa6d1b8b5b7c9c81d5af26282daa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("coeff", method_pointer_57152b156e4c53f39a1d21cebd0d9fd1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("x", method_pointer_442ac24560f55d5dbc7678fb4a31d012, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("y", method_pointer_785c9f5390fb5ce2bf0741a90f97f7e9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("z", method_pointer_02bd335c2c28545da006d338dd46d390, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b036397122165e73844d0603f6968fb1.def("w", method_pointer_34726919fa0b5e2cbc1e53fbfa73783b, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > >::Type, autowig::Held< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > >::Type, boost::python::objects::make_ptr_instance< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 >, boost::python::objects::pointer_holder< autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > >::Type, class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 0 > > > >();
    }

}