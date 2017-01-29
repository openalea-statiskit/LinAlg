#include "_linalg.h"


void wrapper_623522582e05548395749eede420699c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_fcf05ce9829d59fbac7dfcc9a3fbd7b4 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".linalg");
    boost::python::object module_fcf05ce9829d59fbac7dfcc9a3fbd7b4(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fcf05ce9829d59fbac7dfcc9a3fbd7b4.c_str()))));
    boost::python::scope().attr("linalg") = module_fcf05ce9829d59fbac7dfcc9a3fbd7b4;
    boost::python::scope scope_fcf05ce9829d59fbac7dfcc9a3fbd7b4 = module_fcf05ce9829d59fbac7dfcc9a3fbd7b4;
    ::statiskit::linalg::VectorXd  (*function_pointer_623522582e05548395749eede420699c)(::statiskit::linalg::MatrixXd const &, ::statiskit::linalg::VectorXd const &, enum ::statiskit::linalg::solver_type const &) = ::statiskit::linalg::solve;
    boost::python::def("solve", function_pointer_623522582e05548395749eede420699c, "");
}