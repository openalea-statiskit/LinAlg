#include "_ieigen.h"


namespace autowig
{
}


void wrapper_6efb4936c1bb5acca9fdc01ff590baf9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_810b8c104e7b547680c757e58999f959)() = &::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::setZero;
    class ::Eigen::Transpositions< 4, 4, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_13f3663a663a5056bc8ca4a6a9d1a421)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_f42b855a18505b5e8373dfc6d6ebac01)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_56516bdd6f7c50f2b793590534ffdd81)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::isNegative;
    double  (::Eigen::LDLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_ff131b4e5dee5daa846c6a4b7a12d171)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::rcond;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::LDLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_a36dbe1acfd35fea821891b987e9ba09)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  (::Eigen::LDLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_f9ed936f2e675f6b9ed4d7cafbb1de0d)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_367aebbddd695d7e89882c9d5c7dfda7)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_53303da2ab1c5400a86ffced023510fd)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_85f8c6d630ff550c95360647c4364f49)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_162f2b6cd4ce5004ad588c8231ba5740)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >, 1 > > > class_6efb4936c1bb5acca9fdc01ff590baf9("_LDLT_6efb4936c1bb5acca9fdc01ff590baf9", "", boost::python::no_init);
    class_6efb4936c1bb5acca9fdc01ff590baf9.def("set_zero", method_pointer_810b8c104e7b547680c757e58999f959, "");
    class_6efb4936c1bb5acca9fdc01ff590baf9.def("transpositions_p", method_pointer_13f3663a663a5056bc8ca4a6a9d1a421, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6efb4936c1bb5acca9fdc01ff590baf9.def("is_positive", method_pointer_f42b855a18505b5e8373dfc6d6ebac01, "");
    class_6efb4936c1bb5acca9fdc01ff590baf9.def("is_negative", method_pointer_56516bdd6f7c50f2b793590534ffdd81, "");
    class_6efb4936c1bb5acca9fdc01ff590baf9.def("rcond", method_pointer_ff131b4e5dee5daa846c6a4b7a12d171, "");
    class_6efb4936c1bb5acca9fdc01ff590baf9.def("matrix_ldlt", method_pointer_a36dbe1acfd35fea821891b987e9ba09, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6efb4936c1bb5acca9fdc01ff590baf9.def("reconstructed_matrix", method_pointer_f9ed936f2e675f6b9ed4d7cafbb1de0d, "");
    class_6efb4936c1bb5acca9fdc01ff590baf9.def("adjoint", method_pointer_367aebbddd695d7e89882c9d5c7dfda7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6efb4936c1bb5acca9fdc01ff590baf9.def("rows", method_pointer_53303da2ab1c5400a86ffced023510fd, "");
    class_6efb4936c1bb5acca9fdc01ff590baf9.def("cols", method_pointer_85f8c6d630ff550c95360647c4364f49, "");
    class_6efb4936c1bb5acca9fdc01ff590baf9.def("info", method_pointer_162f2b6cd4ce5004ad588c8231ba5740, "");

}