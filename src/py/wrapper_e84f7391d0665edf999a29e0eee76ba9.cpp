#include "_ieigen.h"


void wrapper_e84f7391d0665edf999a29e0eee76ba9()
{

    std::string name_55ae56b5beac53b1a1dd2ca30e4e707c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".ieigen");
    boost::python::object module_55ae56b5beac53b1a1dd2ca30e4e707c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_55ae56b5beac53b1a1dd2ca30e4e707c.c_str()))));
    boost::python::scope().attr("ieigen") = module_55ae56b5beac53b1a1dd2ca30e4e707c;
    boost::python::scope scope_55ae56b5beac53b1a1dd2ca30e4e707c = module_55ae56b5beac53b1a1dd2ca30e4e707c;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  (*function_pointer_e84f7391d0665edf999a29e0eee76ba9)(class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const &, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const &, enum ::ieigen::solver_type  const &) = ::ieigen::solve;
    boost::python::def("solve", function_pointer_e84f7391d0665edf999a29e0eee76ba9, "");
}