#include "_ieigen.h"


void wrapper_2551651aa95e540b92b414a08a946c01()
{

    std::string name_55ae56b5beac53b1a1dd2ca30e4e707c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".ieigen");
    boost::python::object module_55ae56b5beac53b1a1dd2ca30e4e707c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_55ae56b5beac53b1a1dd2ca30e4e707c.c_str()))));
    boost::python::scope().attr("ieigen") = module_55ae56b5beac53b1a1dd2ca30e4e707c;
    boost::python::scope scope_55ae56b5beac53b1a1dd2ca30e4e707c = module_55ae56b5beac53b1a1dd2ca30e4e707c;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  (*function_pointer_2551651aa95e540b92b414a08a946c01)(class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const &, class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const &, enum ::ieigen::solver_type  const &) = ::ieigen::solve;
    boost::python::def("solve", function_pointer_2551651aa95e540b92b414a08a946c01, "");
}