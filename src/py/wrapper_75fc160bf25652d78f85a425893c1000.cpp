#include "_ieigen.h"


namespace autowig
{
}


void wrapper_75fc160bf25652d78f85a425893c1000()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_4267bedcb98455fdb0d8467e7b91304f)() = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::setZero;
    class ::Eigen::Transpositions< -1, -1, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_19367c900b0359f8b5a50ead2fa30580)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_f2526d6ac6455f84834b98c60dbf5786)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_500ee4e9ecbd5ea4882f31762a1d80b7)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::isNegative;
    double  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_cfb585fe076d5f01b83cffeebe307805)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_1d7d1c5a98c05089a8296a6fd612343b)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_f28b8a31381c5477ac92d98be46c6506)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_1cbca7b6314e51c8bfac25e0c27bf166)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_f82d660f1c705627b2c79831d3fa7149)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_2f488f20e44656a48f05abfe633d90d5)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_a38d0de050055af4ac65e5402997019b)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > > > class_75fc160bf25652d78f85a425893c1000("_LDLT_75fc160bf25652d78f85a425893c1000", "", boost::python::no_init);
    class_75fc160bf25652d78f85a425893c1000.def("set_zero", method_pointer_4267bedcb98455fdb0d8467e7b91304f, "");
    class_75fc160bf25652d78f85a425893c1000.def("transpositions_p", method_pointer_19367c900b0359f8b5a50ead2fa30580, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_75fc160bf25652d78f85a425893c1000.def("is_positive", method_pointer_f2526d6ac6455f84834b98c60dbf5786, "");
    class_75fc160bf25652d78f85a425893c1000.def("is_negative", method_pointer_500ee4e9ecbd5ea4882f31762a1d80b7, "");
    class_75fc160bf25652d78f85a425893c1000.def("rcond", method_pointer_cfb585fe076d5f01b83cffeebe307805, "");
    class_75fc160bf25652d78f85a425893c1000.def("matrix_ldlt", method_pointer_1d7d1c5a98c05089a8296a6fd612343b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_75fc160bf25652d78f85a425893c1000.def("reconstructed_matrix", method_pointer_f28b8a31381c5477ac92d98be46c6506, "");
    class_75fc160bf25652d78f85a425893c1000.def("adjoint", method_pointer_1cbca7b6314e51c8bfac25e0c27bf166, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_75fc160bf25652d78f85a425893c1000.def("rows", method_pointer_f82d660f1c705627b2c79831d3fa7149, "");
    class_75fc160bf25652d78f85a425893c1000.def("cols", method_pointer_2f488f20e44656a48f05abfe633d90d5, "");
    class_75fc160bf25652d78f85a425893c1000.def("info", method_pointer_a38d0de050055af4ac65e5402997019b, "");

}