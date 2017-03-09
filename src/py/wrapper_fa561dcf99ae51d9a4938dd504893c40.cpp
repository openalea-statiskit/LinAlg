#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 > const volatile * get_pointer<class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 > const volatile >(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fa561dcf99ae51d9a4938dd504893c40()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_ac202bbbc598528484bb584e8d1f7dd0)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::innerStride;
    ::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_d821348bbe2a5ff1abe7ff8e91020222)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::outerStride;
    ::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_179333e9c7c35e49a7a4b214a93283b0)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::stride;
    ::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_866e5bcf42ab5c8e817fd5cbd83f14d5)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::rowStride;
    ::Eigen::Index  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_e166fc990b045a0fa4425ab35785a1c5)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 >, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 > >::Type, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > > > class_fa561dcf99ae51d9a4938dd504893c40("_DenseCoeffsBase_fa561dcf99ae51d9a4938dd504893c40", "", boost::python::no_init);
    class_fa561dcf99ae51d9a4938dd504893c40.def("inner_stride", method_pointer_ac202bbbc598528484bb584e8d1f7dd0, "");
    class_fa561dcf99ae51d9a4938dd504893c40.def("outer_stride", method_pointer_d821348bbe2a5ff1abe7ff8e91020222, "");
    class_fa561dcf99ae51d9a4938dd504893c40.def("stride", method_pointer_179333e9c7c35e49a7a4b214a93283b0, "");
    class_fa561dcf99ae51d9a4938dd504893c40.def("row_stride", method_pointer_866e5bcf42ab5c8e817fd5cbd83f14d5, "");
    class_fa561dcf99ae51d9a4938dd504893c40.def("col_stride", method_pointer_e166fc990b045a0fa4425ab35785a1c5, "");

    if(autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 3 > >::Type, autowig::Held< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >::Type >();
    }

}