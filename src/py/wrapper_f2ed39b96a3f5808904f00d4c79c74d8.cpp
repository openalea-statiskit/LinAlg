#include "_ieigen.h"


namespace autowig
{
}


void wrapper_f2ed39b96a3f5808904f00d4c79c74d8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_123658867f8b55b08fe4852427d3f5ed)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_754404b90fe15cb7a937c2a4ca6a3fe4)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_50c7c7cb384b51f39c171dccd0d79777)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_ea3bf2b22497521491ba385adcac24dc)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_2ff49437ce1c5dffbcbd5b4d8be64ebf)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_12cb2a150039542b8d1cbc1d0269d080)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_07ed5990e4195bfc8b66f3d2f0143bad)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > > > class_f2ed39b96a3f5808904f00d4c79c74d8("_LLT_f2ed39b96a3f5808904f00d4c79c74d8", "", boost::python::no_init);
    class_f2ed39b96a3f5808904f00d4c79c74d8.def("rcond", method_pointer_123658867f8b55b08fe4852427d3f5ed, "");
    class_f2ed39b96a3f5808904f00d4c79c74d8.def("matrix_llt", method_pointer_754404b90fe15cb7a937c2a4ca6a3fe4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f2ed39b96a3f5808904f00d4c79c74d8.def("reconstructed_matrix", method_pointer_50c7c7cb384b51f39c171dccd0d79777, "");
    class_f2ed39b96a3f5808904f00d4c79c74d8.def("info", method_pointer_ea3bf2b22497521491ba385adcac24dc, "");
    class_f2ed39b96a3f5808904f00d4c79c74d8.def("adjoint", method_pointer_2ff49437ce1c5dffbcbd5b4d8be64ebf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f2ed39b96a3f5808904f00d4c79c74d8.def("rows", method_pointer_12cb2a150039542b8d1cbc1d0269d080, "");
    class_f2ed39b96a3f5808904f00d4c79c74d8.def("cols", method_pointer_07ed5990e4195bfc8b66f3d2f0143bad, "");

}