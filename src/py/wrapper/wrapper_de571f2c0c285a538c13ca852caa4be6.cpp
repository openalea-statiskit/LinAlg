#include "_linalg.h"

::statiskit::linalg::Matrix  (*function_pointer_de571f2c0c285a538c13ca852caa4be6)(::statiskit::linalg::Matrix const &, enum ::statiskit::linalg::solver_type const &) = ::statiskit::linalg::inverse;


void wrapper_de571f2c0c285a538c13ca852caa4be6(pybind11::module& module)
{

    module.def("inverse", function_pointer_de571f2c0c285a538c13ca852caa4be6, "");
}