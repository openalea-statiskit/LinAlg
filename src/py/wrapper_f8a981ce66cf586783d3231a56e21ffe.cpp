#include "_ieigen.h"


namespace autowig
{
}


void wrapper_f8a981ce66cf586783d3231a56e21ffe()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_8ce1fdbb47c55327b9b78177e23da02b)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_583167aace5a52e7938921ec7ba25832)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::matrixLLT;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_d4fd00525d505d05a09f325a2fb10009)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::reconstructedMatrix;
    enum ::Eigen::ComputationInfo  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_fd8ffccdcfbf59c99eafd74ba1142e45)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::info;
    class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >  const & (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_07c99e36751256048cf0b0e3bb3fc1e0)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::adjoint;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_526a2d117e4357a59ef03b0b9d42914f)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::rows;
    long int  (::Eigen::LLT< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_559b840a5b6e5593944838db6715afd4)() const = &::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >::cols;
    boost::python::class_< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 >, autowig::HeldType< class ::Eigen::LLT< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > > > class_f8a981ce66cf586783d3231a56e21ffe("_LLT_f8a981ce66cf586783d3231a56e21ffe", "", boost::python::no_init);
    class_f8a981ce66cf586783d3231a56e21ffe.def("rcond", method_pointer_8ce1fdbb47c55327b9b78177e23da02b, "");
    class_f8a981ce66cf586783d3231a56e21ffe.def("matrix_llt", method_pointer_583167aace5a52e7938921ec7ba25832, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f8a981ce66cf586783d3231a56e21ffe.def("reconstructed_matrix", method_pointer_d4fd00525d505d05a09f325a2fb10009, "");
    class_f8a981ce66cf586783d3231a56e21ffe.def("info", method_pointer_fd8ffccdcfbf59c99eafd74ba1142e45, "");
    class_f8a981ce66cf586783d3231a56e21ffe.def("adjoint", method_pointer_07c99e36751256048cf0b0e3bb3fc1e0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f8a981ce66cf586783d3231a56e21ffe.def("rows", method_pointer_526a2d117e4357a59ef03b0b9d42914f, "");
    class_f8a981ce66cf586783d3231a56e21ffe.def("cols", method_pointer_559b840a5b6e5593944838db6715afd4, "");

}