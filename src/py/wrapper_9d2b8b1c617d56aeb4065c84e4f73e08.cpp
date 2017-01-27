#include "_ieigen.h"


namespace autowig
{
}


void wrapper_9d2b8b1c617d56aeb4065c84e4f73e08()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::class_< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > > class_9d2b8b1c617d56aeb4065c84e4f73e08("_SolverBase_9d2b8b1c617d56aeb4065c84e4f73e08", "", boost::python::no_init);
    class_9d2b8b1c617d56aeb4065c84e4f73e08.def(boost::python::init<  >(""));
    class_9d2b8b1c617d56aeb4065c84e4f73e08.def(boost::python::init< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >  const & >(""));

    if(std::is_class< autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > >();
    }

}