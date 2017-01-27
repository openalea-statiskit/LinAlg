#include "_ieigen.h"


namespace autowig
{
}


void wrapper_80a6ef06b05a5b18b912daa220439ce7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  (::Eigen::LLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_8d2771bbdad558c2944dd550936972cb)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::rcond;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::LLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_f1024377c09a5bd8bed2883a1ad68cf4)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  (::Eigen::LLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_c06485e29709512abc1d3d77a56818bc)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_14574a6a96475754a5b391110101d4e9)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_047f025ee6645650b5ca7b7b75be6bd8)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_1e35a9d169a45e0db3407518e569a333)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_51eb325945d45abebbf340e5ee2f0859)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > > > class_80a6ef06b05a5b18b912daa220439ce7("_LLT_80a6ef06b05a5b18b912daa220439ce7", "", boost::python::no_init);
    class_80a6ef06b05a5b18b912daa220439ce7.def("rcond", method_pointer_8d2771bbdad558c2944dd550936972cb, "");
    class_80a6ef06b05a5b18b912daa220439ce7.def("matrix_llt", method_pointer_f1024377c09a5bd8bed2883a1ad68cf4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_80a6ef06b05a5b18b912daa220439ce7.def("reconstructed_matrix", method_pointer_c06485e29709512abc1d3d77a56818bc, "");
    class_80a6ef06b05a5b18b912daa220439ce7.def("info", method_pointer_14574a6a96475754a5b391110101d4e9, "");
    class_80a6ef06b05a5b18b912daa220439ce7.def("adjoint", method_pointer_047f025ee6645650b5ca7b7b75be6bd8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_80a6ef06b05a5b18b912daa220439ce7.def("rows", method_pointer_1e35a9d169a45e0db3407518e569a333, "");
    class_80a6ef06b05a5b18b912daa220439ce7.def("cols", method_pointer_51eb325945d45abebbf340e5ee2f0859, "");

}