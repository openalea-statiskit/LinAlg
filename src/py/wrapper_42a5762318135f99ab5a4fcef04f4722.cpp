#include "_ieigen.h"


namespace autowig
{
}


void wrapper_42a5762318135f99ab5a4fcef04f4722()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::class_< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > > class_42a5762318135f99ab5a4fcef04f4722("_SolverBase_42a5762318135f99ab5a4fcef04f4722", "", boost::python::no_init);
    class_42a5762318135f99ab5a4fcef04f4722.def(boost::python::init<  >(""));
    class_42a5762318135f99ab5a4fcef04f4722.def(boost::python::init< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >  const & >(""));

    if(std::is_class< autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > >();
    }

}