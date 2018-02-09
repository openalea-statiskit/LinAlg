#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::SparseCompressedBase< class ::Eigen::SparseMatrix< double, 0, int > > const volatile * get_pointer<class ::Eigen::SparseCompressedBase< class ::Eigen::SparseMatrix< double, 0, int > > const volatile >(class ::Eigen::SparseCompressedBase< class ::Eigen::SparseMatrix< double, 0, int > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_129d255807245da7bf03a795c1163047()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    bool  (::Eigen::SparseCompressedBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_bab85b5ea88f5a6ba92b623322b4fe27)() const = &::Eigen::SparseCompressedBase< class ::Eigen::SparseMatrix< double, 0, int > >::isCompressed;
    ::Eigen::Index  (::Eigen::SparseCompressedBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_15d875931b1b52a1b88b3728dedc7ab7)() const = &::Eigen::SparseCompressedBase< class ::Eigen::SparseMatrix< double, 0, int > >::nonZeros;
    boost::python::class_< class ::Eigen::SparseCompressedBase< class ::Eigen::SparseMatrix< double, 0, int > >, autowig::Held< class ::Eigen::SparseCompressedBase< class ::Eigen::SparseMatrix< double, 0, int > > >::Type > class_129d255807245da7bf03a795c1163047("_SparseCompressedBase_129d255807245da7bf03a795c1163047", "", boost::python::no_init);
    class_129d255807245da7bf03a795c1163047.def("is_compressed", method_pointer_bab85b5ea88f5a6ba92b623322b4fe27, "");
    class_129d255807245da7bf03a795c1163047.def("non_zeros", method_pointer_15d875931b1b52a1b88b3728dedc7ab7, "");

}