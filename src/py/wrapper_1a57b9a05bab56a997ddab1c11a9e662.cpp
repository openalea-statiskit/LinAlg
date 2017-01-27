#include "_ieigen.h"


namespace autowig
{
}


void wrapper_1a57b9a05bab56a997ddab1c11a9e662()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_ada64518d0ec59caac9324f29386b0ed)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_1b504e72d90956c1b68fe3d8d7cb1873)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_de5bc5a187ee574fb69a9951a09478d1)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_d8cc60c091cb5b97b29b27bebc0a48da)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_fa9a135566a15c2cbb4eb19391ae12f9)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_136869be25a654578765536844ae8067)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_0398b3c1e11f505cb2be70bb8daccfb1)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > > > class_1a57b9a05bab56a997ddab1c11a9e662("_LLT_1a57b9a05bab56a997ddab1c11a9e662", "", boost::python::no_init);
    class_1a57b9a05bab56a997ddab1c11a9e662.def("rcond", method_pointer_ada64518d0ec59caac9324f29386b0ed, "");
    class_1a57b9a05bab56a997ddab1c11a9e662.def("matrix_llt", method_pointer_1b504e72d90956c1b68fe3d8d7cb1873, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a57b9a05bab56a997ddab1c11a9e662.def("reconstructed_matrix", method_pointer_de5bc5a187ee574fb69a9951a09478d1, "");
    class_1a57b9a05bab56a997ddab1c11a9e662.def("info", method_pointer_d8cc60c091cb5b97b29b27bebc0a48da, "");
    class_1a57b9a05bab56a997ddab1c11a9e662.def("adjoint", method_pointer_fa9a135566a15c2cbb4eb19391ae12f9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1a57b9a05bab56a997ddab1c11a9e662.def("rows", method_pointer_136869be25a654578765536844ae8067, "");
    class_1a57b9a05bab56a997ddab1c11a9e662.def("cols", method_pointer_0398b3c1e11f505cb2be70bb8daccfb1, "");

}