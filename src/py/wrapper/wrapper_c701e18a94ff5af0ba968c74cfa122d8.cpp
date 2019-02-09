#include "_linalg.h"

::Eigen::Index  (::Eigen::SparseCompressedBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_903de3fad41354ab90c86f0904bea09c)()const= &::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > >::nonZeros;
bool  (::Eigen::SparseCompressedBase< ::Eigen::SparseVector< double, 0, int > >::*method_pointer_208f230eab755ae296436b921abe316a)()const= &::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > >::isCompressed;

namespace autowig {
}

void wrapper_c701e18a94ff5af0ba968c74cfa122d8(pybind11::module& module)
{

    pybind11::class_<class ::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > >, autowig::HolderType< class ::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > > >::Type, class ::Eigen::SparseMatrixBase< class ::Eigen::SparseVector< double, 0, int > > > class_c701e18a94ff5af0ba968c74cfa122d8(module, "_SparseCompressedBase_c701e18a94ff5af0ba968c74cfa122d8", "");
    class_c701e18a94ff5af0ba968c74cfa122d8.def(pybind11::init< class ::Eigen::SparseCompressedBase< class ::Eigen::SparseVector< double, 0, int > > const & >());
    class_c701e18a94ff5af0ba968c74cfa122d8.def("non_zeros", method_pointer_903de3fad41354ab90c86f0904bea09c, "");
    class_c701e18a94ff5af0ba968c74cfa122d8.def("is_compressed", method_pointer_208f230eab755ae296436b921abe316a, "");

}