#include "_linalg.h"

::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::ConstTransposeReturnType  (::Eigen::SolverBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_e1509618541c5a2bbc0ba38cfeac8952)()const= &::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::transpose;
::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::AdjointReturnType  (::Eigen::SolverBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_5739cab4e292538f9ceb5f7cc30d8bd5)()const= &::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::adjoint;

namespace autowig {
}

void wrapper_34b02bad3a7053fab2d42edf508c84f7(pybind11::module& module)
{

    pybind11::class_<class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, autowig::HolderType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::Type, struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > class_34b02bad3a7053fab2d42edf508c84f7(module, "_SolverBase_34b02bad3a7053fab2d42edf508c84f7", "");
    class_34b02bad3a7053fab2d42edf508c84f7.def(pybind11::init<  >());
    class_34b02bad3a7053fab2d42edf508c84f7.def(pybind11::init< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const & >());
    class_34b02bad3a7053fab2d42edf508c84f7.def("transpose", method_pointer_e1509618541c5a2bbc0ba38cfeac8952, "");
    class_34b02bad3a7053fab2d42edf508c84f7.def("adjoint", method_pointer_5739cab4e292538f9ceb5f7cc30d8bd5, "");

}