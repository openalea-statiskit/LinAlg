#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6e5d88a3181f5b3abe0c80c7b28c70c8(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_629bf08f5bdb5b3398f1d423840ff667(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_47e800ee75115282ba8733bfb3848269()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_6e5d88a3181f5b3abe0c80c7b28c70c8)(class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_629bf08f5bdb5b3398f1d423840ff667)(class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > > > > class_47e800ee75115282ba8733bfb3848269("_JacobiSVD_47e800ee75115282ba8733bfb3848269", "", boost::python::no_init);
    class_47e800ee75115282ba8733bfb3848269.def("compute", method_pointer_6e5d88a3181f5b3abe0c80c7b28c70c8, boost::python::return_internal_reference<>(), "");
    class_47e800ee75115282ba8733bfb3848269.def("compute", autowig::method_decorator_6e5d88a3181f5b3abe0c80c7b28c70c8);
    class_47e800ee75115282ba8733bfb3848269.def("compute", method_pointer_629bf08f5bdb5b3398f1d423840ff667, boost::python::return_internal_reference<>(), "");
    class_47e800ee75115282ba8733bfb3848269.def("compute", autowig::method_decorator_629bf08f5bdb5b3398f1d423840ff667);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > > > >();
    }

}