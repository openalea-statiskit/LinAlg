#include "_linalg.h"

::statiskit::linalg::Matrix  (*function_pointer_44919ff66aef53608e0cd82064ceedc8)(::statiskit::linalg::Matrix const &, ::statiskit::linalg::Matrix const &, enum ::statiskit::linalg::solver_type const &) = ::statiskit::linalg::solve;


void wrapper_44919ff66aef53608e0cd82064ceedc8(pybind11::module& module)
{

    module.def("solve", function_pointer_44919ff66aef53608e0cd82064ceedc8, "");
}