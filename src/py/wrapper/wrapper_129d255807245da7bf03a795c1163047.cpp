#include "_linalg.h"

::Eigen::Index  (::Eigen::SparseCompressedBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_15d875931b1b52a1b88b3728dedc7ab7)()const= &::Eigen::SparseCompressedBase< class ::Eigen::SparseMatrix< double, 0, int > >::nonZeros;
bool  (::Eigen::SparseCompressedBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_bab85b5ea88f5a6ba92b623322b4fe27)()const= &::Eigen::SparseCompressedBase< class ::Eigen::SparseMatrix< double, 0, int > >::isCompressed;

namespace autowig {
}

void wrapper_129d255807245da7bf03a795c1163047(pybind11::module& module)
{

    pybind11::class_<class ::Eigen::SparseCompressedBase< class ::Eigen::SparseMatrix< double, 0, int > >, autowig::HolderType< class ::Eigen::SparseCompressedBase< class ::Eigen::SparseMatrix< double, 0, int > > >::Type, class ::Eigen::SparseMatrixBase< class ::Eigen::SparseMatrix< double, 0, int > > > class_129d255807245da7bf03a795c1163047(module, "_SparseCompressedBase_129d255807245da7bf03a795c1163047", "");
    class_129d255807245da7bf03a795c1163047.def(pybind11::init< class ::Eigen::SparseCompressedBase< class ::Eigen::SparseMatrix< double, 0, int > > const & >());
    class_129d255807245da7bf03a795c1163047.def("non_zeros", method_pointer_15d875931b1b52a1b88b3728dedc7ab7, "");
    class_129d255807245da7bf03a795c1163047.def("is_compressed", method_pointer_bab85b5ea88f5a6ba92b623322b4fe27, "");

}