#include "_ieigen.h"


namespace autowig
{
}


void wrapper_5f85f8dbcefb5ec290c7e43153675aef()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_baf94191de5c59a4888327d5e451a07c)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_6f9cc3cee1e356208e4191e4e5118fd2)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_f2cf4e2148af5f69a1c33be2a83a844d)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_400fc7ed637757068fbefac6bdd8f27b)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_62cff60a55ff59daab55932b2162b698)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_3cf49fdc27a35e288c320423e1afd08b)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_920f45960b7657caae8e2b67077892de)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > > > class_5f85f8dbcefb5ec290c7e43153675aef("_LLT_5f85f8dbcefb5ec290c7e43153675aef", "", boost::python::no_init);
    class_5f85f8dbcefb5ec290c7e43153675aef.def("rcond", method_pointer_baf94191de5c59a4888327d5e451a07c, "");
    class_5f85f8dbcefb5ec290c7e43153675aef.def("matrix_llt", method_pointer_6f9cc3cee1e356208e4191e4e5118fd2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5f85f8dbcefb5ec290c7e43153675aef.def("reconstructed_matrix", method_pointer_f2cf4e2148af5f69a1c33be2a83a844d, "");
    class_5f85f8dbcefb5ec290c7e43153675aef.def("info", method_pointer_400fc7ed637757068fbefac6bdd8f27b, "");
    class_5f85f8dbcefb5ec290c7e43153675aef.def("adjoint", method_pointer_62cff60a55ff59daab55932b2162b698, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5f85f8dbcefb5ec290c7e43153675aef.def("rows", method_pointer_3cf49fdc27a35e288c320423e1afd08b, "");
    class_5f85f8dbcefb5ec290c7e43153675aef.def("cols", method_pointer_920f45960b7657caae8e2b67077892de, "");

}