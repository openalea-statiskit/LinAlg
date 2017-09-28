#include "_linalg.h"


void wrapper_84d76c287d805c1588f98afbc1f9cb57()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_fcf05ce9829d59fbac7dfcc9a3fbd7b4 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".linalg");
    boost::python::object module_fcf05ce9829d59fbac7dfcc9a3fbd7b4(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fcf05ce9829d59fbac7dfcc9a3fbd7b4.c_str()))));
    boost::python::scope().attr("linalg") = module_fcf05ce9829d59fbac7dfcc9a3fbd7b4;
    boost::python::scope scope_fcf05ce9829d59fbac7dfcc9a3fbd7b4 = module_fcf05ce9829d59fbac7dfcc9a3fbd7b4;
    boost::python::enum_< enum ::statiskit::linalg::solver_type > enum_84d76c287d805c1588f98afbc1f9cb57("solver_type");
    enum_84d76c287d805c1588f98afbc1f9cb57.value("PARTIAL_PIV_LU", ::statiskit::linalg::partialPivLu);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("FULL_PIV_LU", ::statiskit::linalg::fullPivLu);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("HOUSEHOLDER_QR", ::statiskit::linalg::householderQr);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("COL_PIV_HOUSEHOLDER_QR", ::statiskit::linalg::colPivHouseholderQr);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("FULL_PIV_HOUSEHOLDER_QR", ::statiskit::linalg::fullPivHouseholderQr);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("LLT", ::statiskit::linalg::llt);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("LDLT", ::statiskit::linalg::ldlt);
    enum_84d76c287d805c1588f98afbc1f9cb57.value("JACOBI_SVD", ::statiskit::linalg::jacobiSvd);

}