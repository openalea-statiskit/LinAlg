#include "_ieigen.h"


namespace autowig
{
}


void wrapper_0cc7ee0e505a5ef3b331963718750219()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_61169c91b7c65996b1e68c2abffc71ca)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_2c6c316a53b654c19e9a238a7c4cae1a)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_bf60c005ee53547a9cb468058a992f2b)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_beab498e912e53209dcf8701ef2f09ce)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_fa2d889f33fa54289a38fd60c7635b37)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_b97a917673ce5a77a50cde7489dbca08)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_7b51324346a35c1e8633deca60dba472)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > > > class_0cc7ee0e505a5ef3b331963718750219("_LLT_0cc7ee0e505a5ef3b331963718750219", "", boost::python::no_init);
    class_0cc7ee0e505a5ef3b331963718750219.def("rcond", method_pointer_61169c91b7c65996b1e68c2abffc71ca, "");
    class_0cc7ee0e505a5ef3b331963718750219.def("matrix_llt", method_pointer_2c6c316a53b654c19e9a238a7c4cae1a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0cc7ee0e505a5ef3b331963718750219.def("reconstructed_matrix", method_pointer_bf60c005ee53547a9cb468058a992f2b, "");
    class_0cc7ee0e505a5ef3b331963718750219.def("info", method_pointer_beab498e912e53209dcf8701ef2f09ce, "");
    class_0cc7ee0e505a5ef3b331963718750219.def("adjoint", method_pointer_fa2d889f33fa54289a38fd60c7635b37, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0cc7ee0e505a5ef3b331963718750219.def("rows", method_pointer_b97a917673ce5a77a50cde7489dbca08, "");
    class_0cc7ee0e505a5ef3b331963718750219.def("cols", method_pointer_7b51324346a35c1e8633deca60dba472, "");

}