#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 > const volatile * get_pointer<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 > const volatile >(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c30e6623f2325c35baa4f0180f69c681()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_04ad28d1e7f457549a753ba1be6d9aa6)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::innerStride;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_1fc55617a6c8578a99ccc953e8f5ea17)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::outerStride;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_2f0ca5071aa355eaab41de7e2dcb53fe)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::stride;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_82be5b9248b9547db52e69409a177ac5)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::rowStride;
    ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_62bcd94406d85862bee825ac49b52a6e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 >, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 > >::Type, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > > > class_c30e6623f2325c35baa4f0180f69c681("_DenseCoeffsBase_c30e6623f2325c35baa4f0180f69c681", "", boost::python::no_init);
    class_c30e6623f2325c35baa4f0180f69c681.def("inner_stride", method_pointer_04ad28d1e7f457549a753ba1be6d9aa6, "");
    class_c30e6623f2325c35baa4f0180f69c681.def("outer_stride", method_pointer_1fc55617a6c8578a99ccc953e8f5ea17, "");
    class_c30e6623f2325c35baa4f0180f69c681.def("stride", method_pointer_2f0ca5071aa355eaab41de7e2dcb53fe, "");
    class_c30e6623f2325c35baa4f0180f69c681.def("row_stride", method_pointer_82be5b9248b9547db52e69409a177ac5, "");
    class_c30e6623f2325c35baa4f0180f69c681.def("col_stride", method_pointer_62bcd94406d85862bee825ac49b52a6e, "");

    if(autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 3 > >::Type, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >, 1 > >::Type >();
    }

}