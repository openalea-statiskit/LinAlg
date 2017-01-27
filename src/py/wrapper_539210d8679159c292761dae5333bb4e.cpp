#include "_ieigen.h"


namespace autowig
{
}


void wrapper_539210d8679159c292761dae5333bb4e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_afb88173454957faab046356c1c02b7f)() = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::setZero;
    class ::Eigen::Transpositions< -1, -1, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_b662fccd20845650b6695d1f4b2f9df4)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_953dacb8d57e5273894b25056d9c0523)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_55283af52f4f550e830ee3183b6058ad)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::isNegative;
    float  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_eb7e1ceaceea5a59b3863e6df96f1faa)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_7fedd48e489b52f9aba1855ea138aa4e)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_687a9c5c76485677be22ff27dea2a0f1)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_2f1c2ff51da05009a826c57784853901)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_6cc3efc306b75050bb3395ba3fe431ff)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_bf4c51df621650dabf8b79e5ced13e8c)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_a4455aa6877a5e89ac6215f2d5aa1eba)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > > > class_539210d8679159c292761dae5333bb4e("_LDLT_539210d8679159c292761dae5333bb4e", "", boost::python::no_init);
    class_539210d8679159c292761dae5333bb4e.def("set_zero", method_pointer_afb88173454957faab046356c1c02b7f, "");
    class_539210d8679159c292761dae5333bb4e.def("transpositions_p", method_pointer_b662fccd20845650b6695d1f4b2f9df4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_539210d8679159c292761dae5333bb4e.def("is_positive", method_pointer_953dacb8d57e5273894b25056d9c0523, "");
    class_539210d8679159c292761dae5333bb4e.def("is_negative", method_pointer_55283af52f4f550e830ee3183b6058ad, "");
    class_539210d8679159c292761dae5333bb4e.def("rcond", method_pointer_eb7e1ceaceea5a59b3863e6df96f1faa, "");
    class_539210d8679159c292761dae5333bb4e.def("matrix_ldlt", method_pointer_7fedd48e489b52f9aba1855ea138aa4e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_539210d8679159c292761dae5333bb4e.def("reconstructed_matrix", method_pointer_687a9c5c76485677be22ff27dea2a0f1, "");
    class_539210d8679159c292761dae5333bb4e.def("adjoint", method_pointer_2f1c2ff51da05009a826c57784853901, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_539210d8679159c292761dae5333bb4e.def("rows", method_pointer_6cc3efc306b75050bb3395ba3fe431ff, "");
    class_539210d8679159c292761dae5333bb4e.def("cols", method_pointer_bf4c51df621650dabf8b79e5ced13e8c, "");
    class_539210d8679159c292761dae5333bb4e.def("info", method_pointer_a4455aa6877a5e89ac6215f2d5aa1eba, "");

}