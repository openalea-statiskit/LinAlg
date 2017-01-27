#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6a9c1a50cd0b5007979518e2148429e9(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > & instance, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_723dc3893b6a58128520862afc9ba675(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > & instance, class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_ea892a2d80e95f08885e45448de48a3c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >::*method_pointer_6a9c1a50cd0b5007979518e2148429e9)(class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >::*method_pointer_723dc3893b6a58128520862afc9ba675)(class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > > > > class_ea892a2d80e95f08885e45448de48a3c("_JacobiSVD_ea892a2d80e95f08885e45448de48a3c", "", boost::python::no_init);
    class_ea892a2d80e95f08885e45448de48a3c.def("compute", method_pointer_6a9c1a50cd0b5007979518e2148429e9, boost::python::return_internal_reference<>(), "");
    class_ea892a2d80e95f08885e45448de48a3c.def("compute", autowig::method_decorator_6a9c1a50cd0b5007979518e2148429e9);
    class_ea892a2d80e95f08885e45448de48a3c.def("compute", method_pointer_723dc3893b6a58128520862afc9ba675, boost::python::return_internal_reference<>(), "");
    class_ea892a2d80e95f08885e45448de48a3c.def("compute", autowig::method_decorator_723dc3893b6a58128520862afc9ba675);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 2 > > > >();
    }

}