#include "_ieigen.h"


namespace autowig
{
}


void wrapper_271766ab366659adaf05353fbc95552d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  (::Eigen::LLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_5e049f3b17fb527fbb832dbe83158452)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::rcond;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::LLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_6aec33812c525bf4a32eca1c0e93e0ce)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  (::Eigen::LLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_0e6fb206933053aab69eabbb5b98a030)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_1b2dc4685abc55f6a93846895ac8fbd6)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_16aed961008959168672a139555f4a94)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_367be26c02485b9b9e2131ef39322316)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_3ab06d1acb84520996dc035e989a3968)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > > > class_271766ab366659adaf05353fbc95552d("_LLT_271766ab366659adaf05353fbc95552d", "", boost::python::no_init);
    class_271766ab366659adaf05353fbc95552d.def("rcond", method_pointer_5e049f3b17fb527fbb832dbe83158452, "");
    class_271766ab366659adaf05353fbc95552d.def("matrix_llt", method_pointer_6aec33812c525bf4a32eca1c0e93e0ce, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_271766ab366659adaf05353fbc95552d.def("reconstructed_matrix", method_pointer_0e6fb206933053aab69eabbb5b98a030, "");
    class_271766ab366659adaf05353fbc95552d.def("info", method_pointer_1b2dc4685abc55f6a93846895ac8fbd6, "");
    class_271766ab366659adaf05353fbc95552d.def("adjoint", method_pointer_16aed961008959168672a139555f4a94, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_271766ab366659adaf05353fbc95552d.def("rows", method_pointer_367be26c02485b9b9e2131ef39322316, "");
    class_271766ab366659adaf05353fbc95552d.def("cols", method_pointer_3ab06d1acb84520996dc035e989a3968, "");

}