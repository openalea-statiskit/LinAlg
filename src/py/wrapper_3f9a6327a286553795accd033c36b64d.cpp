#include "_ieigen.h"


namespace autowig
{
    void method_decorator_a8844803ed085f4e826f7670cba6a1cb(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > & instance, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_0c8d3f37b01d55f2aeec74ac61dcee09(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > & instance, class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_3f9a6327a286553795accd033c36b64d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >::*method_pointer_a8844803ed085f4e826f7670cba6a1cb)(class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >::*method_pointer_0c8d3f37b01d55f2aeec74ac61dcee09)(class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > > > > class_3f9a6327a286553795accd033c36b64d("_JacobiSVD_3f9a6327a286553795accd033c36b64d", "", boost::python::no_init);
    class_3f9a6327a286553795accd033c36b64d.def("compute", method_pointer_a8844803ed085f4e826f7670cba6a1cb, boost::python::return_internal_reference<>(), "");
    class_3f9a6327a286553795accd033c36b64d.def("compute", autowig::method_decorator_a8844803ed085f4e826f7670cba6a1cb);
    class_3f9a6327a286553795accd033c36b64d.def("compute", method_pointer_0c8d3f37b01d55f2aeec74ac61dcee09, boost::python::return_internal_reference<>(), "");
    class_3f9a6327a286553795accd033c36b64d.def("compute", autowig::method_decorator_0c8d3f37b01d55f2aeec74ac61dcee09);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 2 > > > >();
    }

}