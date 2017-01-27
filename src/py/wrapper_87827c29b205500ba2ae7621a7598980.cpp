#include "_ieigen.h"


void wrapper_87827c29b205500ba2ae7621a7598980()
{

    std::string name_55ae56b5beac53b1a1dd2ca30e4e707c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".ieigen");
    boost::python::object module_55ae56b5beac53b1a1dd2ca30e4e707c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_55ae56b5beac53b1a1dd2ca30e4e707c.c_str()))));
    boost::python::scope().attr("ieigen") = module_55ae56b5beac53b1a1dd2ca30e4e707c;
    boost::python::scope scope_55ae56b5beac53b1a1dd2ca30e4e707c = module_55ae56b5beac53b1a1dd2ca30e4e707c;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  (*function_pointer_87827c29b205500ba2ae7621a7598980)(class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const &, class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const &, enum ::ieigen::solver_type  const &) = ::ieigen::solve;
    boost::python::def("solve", function_pointer_87827c29b205500ba2ae7621a7598980, "");
}