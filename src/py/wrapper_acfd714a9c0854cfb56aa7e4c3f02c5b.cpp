#include "_linalg.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > const volatile * get_pointer<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > const volatile >(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_acfd714a9c0854cfb56aa7e4c3f02c5b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_d028a79fc4a85a5bb118e6fb4fdb4c9f)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::rowIndexByOuterInner;
    ::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_17ce4730af885fc79bc8830ad3ece641)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::colIndexByOuterInner;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_c4cb1e8cf00e551b81b35d3f7fcacfeb)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::coeff;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_d12e71588c0a5e0bb77ab98ebd95a45a)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::coeffByOuterInner;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_42ca7a314ccd5710874a359d59969ad0)(::Eigen::Index ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::coeff;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_7cf441bca0ec558d8d0ca273ae4d2335)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::x;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_a252e18613ce52f0af2dc157a0f3194b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::y;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_4a25e7c718915ecaafc19b0ff6c56404)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::z;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::CoeffReturnType  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_d504b4534126599aa72eeaffbe5d711b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 >, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > >::Type, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > > class_acfd714a9c0854cfb56aa7e4c3f02c5b("_DenseCoeffsBase_acfd714a9c0854cfb56aa7e4c3f02c5b", "", boost::python::no_init);
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("row_index_by_outer_inner", method_pointer_d028a79fc4a85a5bb118e6fb4fdb4c9f, "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("col_index_by_outer_inner", method_pointer_17ce4730af885fc79bc8830ad3ece641, "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("coeff", method_pointer_c4cb1e8cf00e551b81b35d3f7fcacfeb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("coeff_by_outer_inner", method_pointer_d12e71588c0a5e0bb77ab98ebd95a45a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("coeff", method_pointer_42ca7a314ccd5710874a359d59969ad0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("x", method_pointer_7cf441bca0ec558d8d0ca273ae4d2335, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("y", method_pointer_a252e18613ce52f0af2dc157a0f3194b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("z", method_pointer_4a25e7c718915ecaafc19b0ff6c56404, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfd714a9c0854cfb56aa7e4c3f02c5b.def("w", method_pointer_d504b4534126599aa72eeaffbe5d711b, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, 0 > >::Type, autowig::Held< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::Type >();
    }

}