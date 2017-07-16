#include "_linalg.h"


void wrapper_7938de8cab0b5a17a3b11cf47001e2f2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_fcf05ce9829d59fbac7dfcc9a3fbd7b4 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".linalg");
    boost::python::object module_fcf05ce9829d59fbac7dfcc9a3fbd7b4(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fcf05ce9829d59fbac7dfcc9a3fbd7b4.c_str()))));
    boost::python::scope().attr("linalg") = module_fcf05ce9829d59fbac7dfcc9a3fbd7b4;
    boost::python::scope scope_fcf05ce9829d59fbac7dfcc9a3fbd7b4 = module_fcf05ce9829d59fbac7dfcc9a3fbd7b4;
    boost::python::enum_< enum ::statiskit::linalg::sparse_solver_type > enum_7938de8cab0b5a17a3b11cf47001e2f2("sparse_solver_type");

    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("SIMPLICIAL_LLT", ::statiskit::linalg::simplicialLLT);

    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("SIMPLICIAL_LDLT", ::statiskit::linalg::simplicialLDLT);

    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("SPARSE_LU", ::statiskit::linalg::sparseLU);

    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("SPARSE_QR", ::statiskit::linalg::sparseQR);

    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("CONJUGATE_GRADIENT", ::statiskit::linalg::conjugateGradient);

    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("LEAST_SQUARES_CONJUGATE_GRADIENT", ::statiskit::linalg::leastSquaresConjugateGradient);

    enum_7938de8cab0b5a17a3b11cf47001e2f2.value("BI_CGSTAB", ::statiskit::linalg::biCGSTAB);

}