#include "_linalg.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > > const volatile * get_pointer<class ::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > > const volatile >(class ::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c701e18a94ff5af0ba968c74cfa122d8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::Index  (::Eigen::SparseCompressedBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_903de3fad41354ab90c86f0904bea09c)() const = &::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > >::nonZeros;
    bool  (::Eigen::SparseCompressedBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_208f230eab755ae296436b921abe316a)() const = &::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > >::isCompressed;
    boost::python::class_< class ::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > >, autowig::Held< class ::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > > >::Type, boost::python::bases< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > > > class_c701e18a94ff5af0ba968c74cfa122d8("_SparseCompressedBase_c701e18a94ff5af0ba968c74cfa122d8", "", boost::python::no_init);
    class_c701e18a94ff5af0ba968c74cfa122d8.def(boost::python::init< class ::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > > const & >(""));
    class_c701e18a94ff5af0ba968c74cfa122d8.def("non_zeros", method_pointer_903de3fad41354ab90c86f0904bea09c, "");
    class_c701e18a94ff5af0ba968c74cfa122d8.def("is_compressed", method_pointer_208f230eab755ae296436b921abe316a, "");

    if(autowig::Held< class ::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > > >::Type, autowig::Held< class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > >::Type >();
    }

}