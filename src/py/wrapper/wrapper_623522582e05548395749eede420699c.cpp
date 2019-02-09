#include "_linalg.h"

::statiskit::linalg::Vector  (*function_pointer_623522582e05548395749eede420699c)(::statiskit::linalg::Matrix const &, ::statiskit::linalg::Vector const &, enum ::statiskit::linalg::solver_type const &) = ::statiskit::linalg::solve;


void wrapper_623522582e05548395749eede420699c(pybind11::module& module)
{

    module.def("solve", function_pointer_623522582e05548395749eede420699c, "");
}