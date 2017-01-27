#include "_ieigen.h"


namespace autowig
{
}


void wrapper_0fef5a4101855ef0ae25d8e27268f507()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  (::Eigen::LLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_e25be1f02a0f535182770be0d9e68d9c)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::rcond;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::LLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_081ed72691db590f978a382dfc38e057)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  (::Eigen::LLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_c46e93f1d453599b8027899be3149410)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_7ff703cccf1858c0bd67e5e6ec891395)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_18b11cec1d125421bfe8893df5f93217)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_f5a246b254dd5d8783b964b6b0673bf8)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_cd728e93fa87562e94d07735771c60f1)() const = &::Eigen::LLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > > > class_0fef5a4101855ef0ae25d8e27268f507("_LLT_0fef5a4101855ef0ae25d8e27268f507", "", boost::python::no_init);
    class_0fef5a4101855ef0ae25d8e27268f507.def("rcond", method_pointer_e25be1f02a0f535182770be0d9e68d9c, "");
    class_0fef5a4101855ef0ae25d8e27268f507.def("matrix_llt", method_pointer_081ed72691db590f978a382dfc38e057, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0fef5a4101855ef0ae25d8e27268f507.def("reconstructed_matrix", method_pointer_c46e93f1d453599b8027899be3149410, "");
    class_0fef5a4101855ef0ae25d8e27268f507.def("info", method_pointer_7ff703cccf1858c0bd67e5e6ec891395, "");
    class_0fef5a4101855ef0ae25d8e27268f507.def("adjoint", method_pointer_18b11cec1d125421bfe8893df5f93217, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0fef5a4101855ef0ae25d8e27268f507.def("rows", method_pointer_f5a246b254dd5d8783b964b6b0673bf8, "");
    class_0fef5a4101855ef0ae25d8e27268f507.def("cols", method_pointer_cd728e93fa87562e94d07735771c60f1, "");

}