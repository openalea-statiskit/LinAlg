#include "_ieigen.h"


namespace autowig
{
}


void wrapper_c471d79468e05003b45ca3b4077cc315()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::class_< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > > class_c471d79468e05003b45ca3b4077cc315("_SolverBase_c471d79468e05003b45ca3b4077cc315", "", boost::python::no_init);
    class_c471d79468e05003b45ca3b4077cc315.def(boost::python::init<  >(""));
    class_c471d79468e05003b45ca3b4077cc315.def(boost::python::init< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >  const & >(""));

    if(std::is_class< autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > >();
    }

}