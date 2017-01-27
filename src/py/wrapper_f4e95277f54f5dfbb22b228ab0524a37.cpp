#include "_ieigen.h"


namespace autowig
{
}


void wrapper_f4e95277f54f5dfbb22b228ab0524a37()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  (::Eigen::LLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_8c43c230beb15f8883d62aa15a8c6016)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::rcond;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::LLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_405456a467645efab5f040caedc41b84)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  (::Eigen::LLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_c1980328d5a4556486ea94cffa483cb6)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_14967c720c035756ac489146d29055a5)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_d7590ecdcbac59fe96c9fe3029f0d3ab)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_6bf12f068b275039939defa2aa614bae)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_1d03754d8c10545c9ce6962f3f032852)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > > > class_f4e95277f54f5dfbb22b228ab0524a37("_LLT_f4e95277f54f5dfbb22b228ab0524a37", "", boost::python::no_init);
    class_f4e95277f54f5dfbb22b228ab0524a37.def("rcond", method_pointer_8c43c230beb15f8883d62aa15a8c6016, "");
    class_f4e95277f54f5dfbb22b228ab0524a37.def("matrix_llt", method_pointer_405456a467645efab5f040caedc41b84, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f4e95277f54f5dfbb22b228ab0524a37.def("reconstructed_matrix", method_pointer_c1980328d5a4556486ea94cffa483cb6, "");
    class_f4e95277f54f5dfbb22b228ab0524a37.def("info", method_pointer_14967c720c035756ac489146d29055a5, "");
    class_f4e95277f54f5dfbb22b228ab0524a37.def("adjoint", method_pointer_d7590ecdcbac59fe96c9fe3029f0d3ab, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f4e95277f54f5dfbb22b228ab0524a37.def("rows", method_pointer_6bf12f068b275039939defa2aa614bae, "");
    class_f4e95277f54f5dfbb22b228ab0524a37.def("cols", method_pointer_1d03754d8c10545c9ce6962f3f032852, "");

}