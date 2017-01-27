#include "_ieigen.h"


void wrapper_c434c4877ed05a5583d6389fae1b6d16()
{

    std::string name_55ae56b5beac53b1a1dd2ca30e4e707c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".ieigen");
    boost::python::object module_55ae56b5beac53b1a1dd2ca30e4e707c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_55ae56b5beac53b1a1dd2ca30e4e707c.c_str()))));
    boost::python::scope().attr("ieigen") = module_55ae56b5beac53b1a1dd2ca30e4e707c;
    boost::python::scope scope_55ae56b5beac53b1a1dd2ca30e4e707c = module_55ae56b5beac53b1a1dd2ca30e4e707c;
    boost::python::enum_< enum ::ieigen::solver_type > enum_c434c4877ed05a5583d6389fae1b6d16("solver_type");

    enum_c434c4877ed05a5583d6389fae1b6d16.value("PARTIAL_PIV_LU", ::ieigen::partialPivLu);

    enum_c434c4877ed05a5583d6389fae1b6d16.value("FULL_PIV_LU", ::ieigen::fullPivLu);

    enum_c434c4877ed05a5583d6389fae1b6d16.value("HOUSEHOLDER_QR", ::ieigen::householderQr);

    enum_c434c4877ed05a5583d6389fae1b6d16.value("COL_PIV_HOUSEHOLDER_QR", ::ieigen::colPivHouseholderQr);

    enum_c434c4877ed05a5583d6389fae1b6d16.value("FULL_PIV_HOUSEHOLDER_QR", ::ieigen::fullPivHouseholderQr);

    enum_c434c4877ed05a5583d6389fae1b6d16.value("LLT", ::ieigen::llt);

    enum_c434c4877ed05a5583d6389fae1b6d16.value("LDLT", ::ieigen::ldlt);

    enum_c434c4877ed05a5583d6389fae1b6d16.value("JACOBI_SVD", ::ieigen::jacobiSvd);

}