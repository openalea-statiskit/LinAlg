#include "_ieigen.h"


namespace autowig
{
}


void wrapper_05dae292713359aa825f444ed30019d2()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  (::Eigen::LLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_7ff357e35e6959e5bfb6a209c74c2a1e)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::rcond;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::LLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_340eb5bba1ee599bb2eb77e96c9df673)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  (::Eigen::LLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_12d392a9738d509e8fd321e6f75a9667)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_53dc9f7c1a4150eaba3807c263246b45)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_5cafb72dfac95e98a222ace9a0828cbb)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_1776ec4205b35f60b0db66a189d1015e)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_d893171c7baf517f84c98de98851eda2)() const = &::Eigen::LLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, 1 > > > class_05dae292713359aa825f444ed30019d2("_LLT_05dae292713359aa825f444ed30019d2", "", boost::python::no_init);
    class_05dae292713359aa825f444ed30019d2.def("rcond", method_pointer_7ff357e35e6959e5bfb6a209c74c2a1e, "");
    class_05dae292713359aa825f444ed30019d2.def("matrix_llt", method_pointer_340eb5bba1ee599bb2eb77e96c9df673, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_05dae292713359aa825f444ed30019d2.def("reconstructed_matrix", method_pointer_12d392a9738d509e8fd321e6f75a9667, "");
    class_05dae292713359aa825f444ed30019d2.def("info", method_pointer_53dc9f7c1a4150eaba3807c263246b45, "");
    class_05dae292713359aa825f444ed30019d2.def("adjoint", method_pointer_5cafb72dfac95e98a222ace9a0828cbb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_05dae292713359aa825f444ed30019d2.def("rows", method_pointer_1776ec4205b35f60b0db66a189d1015e, "");
    class_05dae292713359aa825f444ed30019d2.def("cols", method_pointer_d893171c7baf517f84c98de98851eda2, "");

}