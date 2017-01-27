#include "_ieigen.h"


namespace autowig
{
}


void wrapper_50c0fce0dd125d8c9bde0ab79fd14c7d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_eb73c154226c573eb513e784238a41fa)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_1d6ad74725e55f08a82ec6182639c9c6)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_b32b1987533e55ee901bc4b208755172)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_5a56ccad33055fd68756017da7c916cf)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_f750f762e87d57a6b982e770708433b8)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_8e7789bf00ac554483fe2ac4d194a28e)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_908f905e06a852c0bb72f7949f56ecd4)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > > > class_50c0fce0dd125d8c9bde0ab79fd14c7d("_LLT_50c0fce0dd125d8c9bde0ab79fd14c7d", "", boost::python::no_init);
    class_50c0fce0dd125d8c9bde0ab79fd14c7d.def("rcond", method_pointer_eb73c154226c573eb513e784238a41fa, "");
    class_50c0fce0dd125d8c9bde0ab79fd14c7d.def("matrix_llt", method_pointer_1d6ad74725e55f08a82ec6182639c9c6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_50c0fce0dd125d8c9bde0ab79fd14c7d.def("reconstructed_matrix", method_pointer_b32b1987533e55ee901bc4b208755172, "");
    class_50c0fce0dd125d8c9bde0ab79fd14c7d.def("info", method_pointer_5a56ccad33055fd68756017da7c916cf, "");
    class_50c0fce0dd125d8c9bde0ab79fd14c7d.def("adjoint", method_pointer_f750f762e87d57a6b982e770708433b8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_50c0fce0dd125d8c9bde0ab79fd14c7d.def("rows", method_pointer_8e7789bf00ac554483fe2ac4d194a28e, "");
    class_50c0fce0dd125d8c9bde0ab79fd14c7d.def("cols", method_pointer_908f905e06a852c0bb72f7949f56ecd4, "");

}