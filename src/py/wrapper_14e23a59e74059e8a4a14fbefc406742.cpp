#include "_ieigen.h"


namespace autowig
{
}


void wrapper_14e23a59e74059e8a4a14fbefc406742()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_ef4e1566c4c85a8cb5c3efeae28892af)() = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::setZero;
    class ::Eigen::Transpositions< 4, 4, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_b33210efd454513bb463cd41be62462b)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_5d715d56250556208f4d97fdc3c2598f)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_fc89b76172975a9eb6dd01e665e20096)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::isNegative;
    double  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_7364a6907ab05ae68f62b699a5be64aa)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_6c2f9eee35dd5717bc960f30e89bc0a9)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_c556fb65c6cc5fd1b59c27f5560ad5e3)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_56b53142f1545e50ade7245ad992e008)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_76c46a5e0612563abf8a08e4c9f394b7)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_d4cc3e2e463a5693a568347cb9163f6f)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::*method_pointer_c5f88b87b5285b73a42093e231f34bfe)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > > > class_14e23a59e74059e8a4a14fbefc406742("_LDLT_14e23a59e74059e8a4a14fbefc406742", "", boost::python::no_init);
    class_14e23a59e74059e8a4a14fbefc406742.def("set_zero", method_pointer_ef4e1566c4c85a8cb5c3efeae28892af, "");
    class_14e23a59e74059e8a4a14fbefc406742.def("transpositions_p", method_pointer_b33210efd454513bb463cd41be62462b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_14e23a59e74059e8a4a14fbefc406742.def("is_positive", method_pointer_5d715d56250556208f4d97fdc3c2598f, "");
    class_14e23a59e74059e8a4a14fbefc406742.def("is_negative", method_pointer_fc89b76172975a9eb6dd01e665e20096, "");
    class_14e23a59e74059e8a4a14fbefc406742.def("rcond", method_pointer_7364a6907ab05ae68f62b699a5be64aa, "");
    class_14e23a59e74059e8a4a14fbefc406742.def("matrix_ldlt", method_pointer_6c2f9eee35dd5717bc960f30e89bc0a9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_14e23a59e74059e8a4a14fbefc406742.def("reconstructed_matrix", method_pointer_c556fb65c6cc5fd1b59c27f5560ad5e3, "");
    class_14e23a59e74059e8a4a14fbefc406742.def("adjoint", method_pointer_56b53142f1545e50ade7245ad992e008, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_14e23a59e74059e8a4a14fbefc406742.def("rows", method_pointer_76c46a5e0612563abf8a08e4c9f394b7, "");
    class_14e23a59e74059e8a4a14fbefc406742.def("cols", method_pointer_d4cc3e2e463a5693a568347cb9163f6f, "");
    class_14e23a59e74059e8a4a14fbefc406742.def("info", method_pointer_c5f88b87b5285b73a42093e231f34bfe, "");

}