#include "_ieigen.h"


namespace autowig
{
    void method_decorator_92fdac87b983535580cbe0c0c4b0f003(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & instance, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_8b6681c8778f5465889bdd510788456b(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > & instance, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_1ad276e1df57537d99fde283e155646e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_92fdac87b983535580cbe0c0c4b0f003)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::*method_pointer_8b6681c8778f5465889bdd510788456b)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > > > > class_1ad276e1df57537d99fde283e155646e("_JacobiSVD_1ad276e1df57537d99fde283e155646e", "", boost::python::no_init);
    class_1ad276e1df57537d99fde283e155646e.def("compute", method_pointer_92fdac87b983535580cbe0c0c4b0f003, boost::python::return_internal_reference<>(), "");
    class_1ad276e1df57537d99fde283e155646e.def("compute", autowig::method_decorator_92fdac87b983535580cbe0c0c4b0f003);
    class_1ad276e1df57537d99fde283e155646e.def("compute", method_pointer_8b6681c8778f5465889bdd510788456b, boost::python::return_internal_reference<>(), "");
    class_1ad276e1df57537d99fde283e155646e.def("compute", autowig::method_decorator_8b6681c8778f5465889bdd510788456b);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 2 > > > >();
    }

}