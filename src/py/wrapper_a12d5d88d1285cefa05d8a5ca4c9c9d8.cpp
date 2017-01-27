#include "_ieigen.h"


namespace autowig
{
}


void wrapper_a12d5d88d1285cefa05d8a5ca4c9c9d8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::class_< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > > class_a12d5d88d1285cefa05d8a5ca4c9c9d8("_SolverBase_a12d5d88d1285cefa05d8a5ca4c9c9d8", "", boost::python::no_init);
    class_a12d5d88d1285cefa05d8a5ca4c9c9d8.def(boost::python::init<  >(""));
    class_a12d5d88d1285cefa05d8a5ca4c9c9d8.def(boost::python::init< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >  const & >(""));

    if(std::is_class< autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > >();
    }

}