#include "_linalg.h"


void wrapper_84d76c287d805c1588f98afbc1f9cb57(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::linalg::solver_type > enum_84d76c287d805c1588f98afbc1f9cb57(module, "solver_type");
    enum_84d76c287d805c1588f98afbc1f9cb57.value("PARTIAL_PIV_LU", ::statiskit::linalg::partialPivLu);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("FULL_PIV_LU", ::statiskit::linalg::fullPivLu);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("HOUSEHOLDER_QR", ::statiskit::linalg::householderQr);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("COL_PIV_HOUSEHOLDER_QR", ::statiskit::linalg::colPivHouseholderQr);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("FULL_PIV_HOUSEHOLDER_QR", ::statiskit::linalg::fullPivHouseholderQr);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("LLT", ::statiskit::linalg::llt);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("LDLT", ::statiskit::linalg::ldlt);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("JACOBI_SVD", ::statiskit::linalg::jacobiSvd);
    enum_84d76c287d805c1588f98afbc1f9cb57.export_values();

}