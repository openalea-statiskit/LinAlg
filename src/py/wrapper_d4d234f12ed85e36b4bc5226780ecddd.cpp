#include "_ieigen.h"


namespace autowig
{
}


void wrapper_d4d234f12ed85e36b4bc5226780ecddd()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  (::Eigen::LLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_2b2d2b10ad3e563c98052b87fd092c69)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::rcond;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::LLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_75e62430aec5566caa6cfef6ff9d1de3)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  (::Eigen::LLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_c02dce6d44335004910b6d7c39f1c575)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_273f80a951dd558b8dc787105b9a08d7)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_0f2b4b61871f5c9cbaca606ec908fa4e)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_532a4cc5857b53bca82e9f6e952806ea)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_e0d17dd14cb256a98e72f89f968c1829)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > > > class_d4d234f12ed85e36b4bc5226780ecddd("_LLT_d4d234f12ed85e36b4bc5226780ecddd", "", boost::python::no_init);
    class_d4d234f12ed85e36b4bc5226780ecddd.def("rcond", method_pointer_2b2d2b10ad3e563c98052b87fd092c69, "");
    class_d4d234f12ed85e36b4bc5226780ecddd.def("matrix_llt", method_pointer_75e62430aec5566caa6cfef6ff9d1de3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d4d234f12ed85e36b4bc5226780ecddd.def("reconstructed_matrix", method_pointer_c02dce6d44335004910b6d7c39f1c575, "");
    class_d4d234f12ed85e36b4bc5226780ecddd.def("info", method_pointer_273f80a951dd558b8dc787105b9a08d7, "");
    class_d4d234f12ed85e36b4bc5226780ecddd.def("adjoint", method_pointer_0f2b4b61871f5c9cbaca606ec908fa4e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d4d234f12ed85e36b4bc5226780ecddd.def("rows", method_pointer_532a4cc5857b53bca82e9f6e952806ea, "");
    class_d4d234f12ed85e36b4bc5226780ecddd.def("cols", method_pointer_e0d17dd14cb256a98e72f89f968c1829, "");

}