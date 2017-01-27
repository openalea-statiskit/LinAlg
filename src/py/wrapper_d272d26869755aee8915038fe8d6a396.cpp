#include "_ieigen.h"


namespace autowig
{
}


void wrapper_d272d26869755aee8915038fe8d6a396()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::class_< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > > class_d272d26869755aee8915038fe8d6a396("_SolverBase_d272d26869755aee8915038fe8d6a396", "", boost::python::no_init);
    class_d272d26869755aee8915038fe8d6a396.def(boost::python::init<  >(""));
    class_d272d26869755aee8915038fe8d6a396.def(boost::python::init< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >  const & >(""));

    if(std::is_class< autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > >();
    }

}