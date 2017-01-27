#include "_ieigen.h"


namespace autowig
{
}


void wrapper_31e570d7f72557be92cd6b9b0e0a41cd()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_920fc9ea40e8504fa5c5f6a9652d338b)() = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::setZero;
    class ::Eigen::Transpositions< 3, 3, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_72d9ffc965db5535bad00c0698266c13)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_92628670cbc858d98b637d1fde0f0c34)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_3083fef4890b5370a3cd9e6a131dd54c)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::isNegative;
    double  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_fd9607abd69157c4b0c514bac6a524f9)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_a29bbb33a48b511593882abd45e74349)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_d8ee26cd192054a6a17e2a5c8262df58)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_a8732431d3d75e63a5b3e6f634e5ae06)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_3111847df16f5802993ec0c8bbeceec5)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_6326ad05c46054ba81a6adb6c390f985)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_153cfe637f8a52bd9001f5285674ef64)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 1 > > > class_31e570d7f72557be92cd6b9b0e0a41cd("_LDLT_31e570d7f72557be92cd6b9b0e0a41cd", "", boost::python::no_init);
    class_31e570d7f72557be92cd6b9b0e0a41cd.def("set_zero", method_pointer_920fc9ea40e8504fa5c5f6a9652d338b, "");
    class_31e570d7f72557be92cd6b9b0e0a41cd.def("transpositions_p", method_pointer_72d9ffc965db5535bad00c0698266c13, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_31e570d7f72557be92cd6b9b0e0a41cd.def("is_positive", method_pointer_92628670cbc858d98b637d1fde0f0c34, "");
    class_31e570d7f72557be92cd6b9b0e0a41cd.def("is_negative", method_pointer_3083fef4890b5370a3cd9e6a131dd54c, "");
    class_31e570d7f72557be92cd6b9b0e0a41cd.def("rcond", method_pointer_fd9607abd69157c4b0c514bac6a524f9, "");
    class_31e570d7f72557be92cd6b9b0e0a41cd.def("matrix_ldlt", method_pointer_a29bbb33a48b511593882abd45e74349, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_31e570d7f72557be92cd6b9b0e0a41cd.def("reconstructed_matrix", method_pointer_d8ee26cd192054a6a17e2a5c8262df58, "");
    class_31e570d7f72557be92cd6b9b0e0a41cd.def("adjoint", method_pointer_a8732431d3d75e63a5b3e6f634e5ae06, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_31e570d7f72557be92cd6b9b0e0a41cd.def("rows", method_pointer_3111847df16f5802993ec0c8bbeceec5, "");
    class_31e570d7f72557be92cd6b9b0e0a41cd.def("cols", method_pointer_6326ad05c46054ba81a6adb6c390f985, "");
    class_31e570d7f72557be92cd6b9b0e0a41cd.def("info", method_pointer_153cfe637f8a52bd9001f5285674ef64, "");

}