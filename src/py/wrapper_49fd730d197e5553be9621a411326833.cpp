#include "_ieigen.h"


namespace autowig
{
}


void wrapper_49fd730d197e5553be9621a411326833()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  (::Eigen::LLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_a83d59cd61f2581ba83f60c1756fff9d)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::rcond;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::LLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_e3b3e96c44b25658b3a592cb83376c03)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  (::Eigen::LLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_1180e8dc01325a568d9ecc77a5351df1)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_dec9a447267c5ccfb42d76c985ec61f4)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_122fcf61e832520ab39e9968752172b3)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_8b7d70c52b19599d9af75ef964166d21)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_8f5a65a96fc354f6b0b4219d62813362)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 1 > > > class_49fd730d197e5553be9621a411326833("_LLT_49fd730d197e5553be9621a411326833", "", boost::python::no_init);
    class_49fd730d197e5553be9621a411326833.def("rcond", method_pointer_a83d59cd61f2581ba83f60c1756fff9d, "");
    class_49fd730d197e5553be9621a411326833.def("matrix_llt", method_pointer_e3b3e96c44b25658b3a592cb83376c03, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_49fd730d197e5553be9621a411326833.def("reconstructed_matrix", method_pointer_1180e8dc01325a568d9ecc77a5351df1, "");
    class_49fd730d197e5553be9621a411326833.def("info", method_pointer_dec9a447267c5ccfb42d76c985ec61f4, "");
    class_49fd730d197e5553be9621a411326833.def("adjoint", method_pointer_122fcf61e832520ab39e9968752172b3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_49fd730d197e5553be9621a411326833.def("rows", method_pointer_8b7d70c52b19599d9af75ef964166d21, "");
    class_49fd730d197e5553be9621a411326833.def("cols", method_pointer_8f5a65a96fc354f6b0b4219d62813362, "");

}