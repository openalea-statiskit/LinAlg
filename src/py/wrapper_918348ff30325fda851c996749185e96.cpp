#include "_linalg.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const volatile * get_pointer<class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const volatile >(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_918348ff30325fda851c996749185e96()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::*method_pointer_70527bf5bb695d679efb4042dfead9f6)() const = &::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::innerStride;
    ::Eigen::Index  (::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::*method_pointer_bac68aa52de25e2084710766acf939d4)() const = &::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, autowig::Held< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Type, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > class_918348ff30325fda851c996749185e96("_Matrix_918348ff30325fda851c996749185e96", "", boost::python::no_init);
    class_918348ff30325fda851c996749185e96.def(boost::python::init<  >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const & >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const &, ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >::Scalar const & >(""));
    class_918348ff30325fda851c996749185e96.def(boost::python::init< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_918348ff30325fda851c996749185e96.def("inner_stride", method_pointer_70527bf5bb695d679efb4042dfead9f6, "");
    class_918348ff30325fda851c996749185e96.def("outer_stride", method_pointer_bac68aa52de25e2084710766acf939d4, "");

    if(autowig::Held< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Type, autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type >();
    }

}