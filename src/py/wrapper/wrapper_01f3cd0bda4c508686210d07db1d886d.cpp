#include "_linalg.h"

::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::ConstTransposeReturnType  (::Eigen::SolverBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_d88c673e1f675e38b7493fb3e99841bc)()const= &::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::transpose;
::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::AdjointReturnType  (::Eigen::SolverBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_b11d96b9277a50f2ab806d7c81425b95)()const= &::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::adjoint;

namespace autowig {
}

void wrapper_01f3cd0bda4c508686210d07db1d886d(pybind11::module& module)
{

    pybind11::class_<class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, autowig::HolderType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::Type, struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > class_01f3cd0bda4c508686210d07db1d886d(module, "_SolverBase_01f3cd0bda4c508686210d07db1d886d", "");
    class_01f3cd0bda4c508686210d07db1d886d.def(pybind11::init<  >());
    class_01f3cd0bda4c508686210d07db1d886d.def(pybind11::init< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const & >());
    class_01f3cd0bda4c508686210d07db1d886d.def("transpose", method_pointer_d88c673e1f675e38b7493fb3e99841bc, "");
    class_01f3cd0bda4c508686210d07db1d886d.def("adjoint", method_pointer_b11d96b9277a50f2ab806d7c81425b95, "");

}