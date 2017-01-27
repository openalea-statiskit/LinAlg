#include "_ieigen.h"


namespace autowig
{
    void method_decorator_0944a8b71a9f54f297696cdcdf8bd368(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_2b8200fa3f2c5e8b99d12a5e7618a27c(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_550215e9f8a55342af3d2ee233659985()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >::*method_pointer_0944a8b71a9f54f297696cdcdf8bd368)(class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >::*method_pointer_2b8200fa3f2c5e8b99d12a5e7618a27c)(class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > > > > class_550215e9f8a55342af3d2ee233659985("_JacobiSVD_550215e9f8a55342af3d2ee233659985", "", boost::python::no_init);
    class_550215e9f8a55342af3d2ee233659985.def("compute", method_pointer_0944a8b71a9f54f297696cdcdf8bd368, boost::python::return_internal_reference<>(), "");
    class_550215e9f8a55342af3d2ee233659985.def("compute", autowig::method_decorator_0944a8b71a9f54f297696cdcdf8bd368);
    class_550215e9f8a55342af3d2ee233659985.def("compute", method_pointer_2b8200fa3f2c5e8b99d12a5e7618a27c, boost::python::return_internal_reference<>(), "");
    class_550215e9f8a55342af3d2ee233659985.def("compute", autowig::method_decorator_2b8200fa3f2c5e8b99d12a5e7618a27c);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > > > >();
    }

}