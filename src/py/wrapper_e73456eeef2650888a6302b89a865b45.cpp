#include "_ieigen.h"


namespace autowig
{
}


void wrapper_e73456eeef2650888a6302b89a865b45()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_d74172874b585958b5786465251fc61c)() = &::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::setZero;
    class ::Eigen::Transpositions< 2, 2, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_56d61a6953ba5abaaa27553e51547001)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_6e893b1f2c8950dc95584cfd5e9dfdef)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_9f865df3924e5c19995a9ee0397a6de4)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::isNegative;
    double  (::Eigen::LDLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_8f70672be590544ab3fb483189d2faf4)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::rcond;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::LDLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_ea48e1fb0ce851bb97717819ea4f627f)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  (::Eigen::LDLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_db7879bf76765da39263a455a5a3582e)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_bbad78694dea50ea8e0049be48386bf3)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_5c4aaf87622156acba02a5125b91a1d8)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_2200961d3a2256088193ef0cf0f3f89b)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_4a0d60d73969519aa34a62da51071c5a)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 1 > > > class_e73456eeef2650888a6302b89a865b45("_LDLT_e73456eeef2650888a6302b89a865b45", "", boost::python::no_init);
    class_e73456eeef2650888a6302b89a865b45.def("set_zero", method_pointer_d74172874b585958b5786465251fc61c, "");
    class_e73456eeef2650888a6302b89a865b45.def("transpositions_p", method_pointer_56d61a6953ba5abaaa27553e51547001, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e73456eeef2650888a6302b89a865b45.def("is_positive", method_pointer_6e893b1f2c8950dc95584cfd5e9dfdef, "");
    class_e73456eeef2650888a6302b89a865b45.def("is_negative", method_pointer_9f865df3924e5c19995a9ee0397a6de4, "");
    class_e73456eeef2650888a6302b89a865b45.def("rcond", method_pointer_8f70672be590544ab3fb483189d2faf4, "");
    class_e73456eeef2650888a6302b89a865b45.def("matrix_ldlt", method_pointer_ea48e1fb0ce851bb97717819ea4f627f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e73456eeef2650888a6302b89a865b45.def("reconstructed_matrix", method_pointer_db7879bf76765da39263a455a5a3582e, "");
    class_e73456eeef2650888a6302b89a865b45.def("adjoint", method_pointer_bbad78694dea50ea8e0049be48386bf3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e73456eeef2650888a6302b89a865b45.def("rows", method_pointer_5c4aaf87622156acba02a5125b91a1d8, "");
    class_e73456eeef2650888a6302b89a865b45.def("cols", method_pointer_2200961d3a2256088193ef0cf0f3f89b, "");
    class_e73456eeef2650888a6302b89a865b45.def("info", method_pointer_4a0d60d73969519aa34a62da51071c5a, "");

}