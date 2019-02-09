#include "_linalg.h"


void wrapper_7938de8cab0b5a17a3b11cf47001e2f2(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::linalg::sparse_solver_type > enum_7938de8cab0b5a17a3b11cf47001e2f2(module, "sparse_solver_type");
    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("SIMPLICIAL_LLT", ::statiskit::linalg::simplicialLLT);
    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("SIMPLICIAL_LDLT", ::statiskit::linalg::simplicialLDLT);
    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("SPARSE_LU", ::statiskit::linalg::sparseLU);
    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("SPARSE_QR", ::statiskit::linalg::sparseQR);
    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("CONJUGATE_GRADIENT", ::statiskit::linalg::conjugateGradient);
    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("LEAST_SQUARES_CONJUGATE_GRADIENT", ::statiskit::linalg::leastSquaresConjugateGradient);
    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("BI_CGSTAB", ::statiskit::linalg::biCGSTAB);
    enum_7938de8cab0b5a17a3b11cf47001e2f2.export_values();

}