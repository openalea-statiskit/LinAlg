#include "_ieigen.h"


void wrapper_ea01ad82d10e545fb90732caaf8a032d()
{

    std::string name_55ae56b5beac53b1a1dd2ca30e4e707c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".ieigen");
    boost::python::object module_55ae56b5beac53b1a1dd2ca30e4e707c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_55ae56b5beac53b1a1dd2ca30e4e707c.c_str()))));
    boost::python::scope().attr("ieigen") = module_55ae56b5beac53b1a1dd2ca30e4e707c;
    boost::python::scope scope_55ae56b5beac53b1a1dd2ca30e4e707c = module_55ae56b5beac53b1a1dd2ca30e4e707c;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  (*function_pointer_ea01ad82d10e545fb90732caaf8a032d)(class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const &, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >  const &, enum ::ieigen::solver_type  const &) = ::ieigen::solve;
    boost::python::def("solve", function_pointer_ea01ad82d10e545fb90732caaf8a032d, "");
}