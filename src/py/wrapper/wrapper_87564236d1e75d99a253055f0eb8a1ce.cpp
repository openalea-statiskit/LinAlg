#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::SparseMatrix< double, 0, int >, double, double, struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >, false > const volatile * get_pointer<struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::SparseMatrix< double, 0, int >, double, double, struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >, false > const volatile >(struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::SparseMatrix< double, 0, int >, double, double, struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >, false > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_87564236d1e75d99a253055f0eb8a1ce()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    std::string name_341671b558cc548b8e47e7bfc1befff8 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".internal");
    boost::python::object module_341671b558cc548b8e47e7bfc1befff8(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_341671b558cc548b8e47e7bfc1befff8.c_str()))));
    boost::python::scope().attr("internal") = module_341671b558cc548b8e47e7bfc1befff8;
    boost::python::scope scope_341671b558cc548b8e47e7bfc1befff8 = module_341671b558cc548b8e47e7bfc1befff8;
    void  (::Eigen::internal::special_scalar_op_base< ::Eigen::SparseMatrix< double, 0, int >, double, double, ::Eigen::EigenBase< ::Eigen::SparseMatrix< double, 0, int > >, false >::*method_pointer_7817f14a8bcb5a31a82f23a1714901a0)() const = &::Eigen::internal::special_scalar_op_base< class ::Eigen::SparseMatrix< double, 0, int >, double, double, struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >, false >::operator*;
    boost::python::class_< struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::SparseMatrix< double, 0, int >, double, double, struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >, false >, autowig::Held< struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::SparseMatrix< double, 0, int >, double, double, struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >, false > >::Type, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > > > > class_87564236d1e75d99a253055f0eb8a1ce("_SpecialScalarOpBase_87564236d1e75d99a253055f0eb8a1ce", "", boost::python::no_init);
    class_87564236d1e75d99a253055f0eb8a1ce.def("__mul__", method_pointer_7817f14a8bcb5a31a82f23a1714901a0, "");

    if(autowig::Held< struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::SparseMatrix< double, 0, int >, double, double, struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >, false > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::Eigen::internal::special_scalar_op_base< class ::Eigen::SparseMatrix< double, 0, int >, double, double, struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >, false > >::Type, autowig::Held< struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > > >::Type >();
    }

}