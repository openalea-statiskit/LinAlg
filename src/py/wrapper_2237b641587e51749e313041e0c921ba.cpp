#include "_ieigen.h"


namespace autowig
{
}


void wrapper_2237b641587e51749e313041e0c921ba()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::class_< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > > class_2237b641587e51749e313041e0c921ba("_SolverBase_2237b641587e51749e313041e0c921ba", "", boost::python::no_init);
    class_2237b641587e51749e313041e0c921ba.def(boost::python::init<  >(""));
    class_2237b641587e51749e313041e0c921ba.def(boost::python::init< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >  const & >(""));

    if(std::is_class< autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > >();
    }

}