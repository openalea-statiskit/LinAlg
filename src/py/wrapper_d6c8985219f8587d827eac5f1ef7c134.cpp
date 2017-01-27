#include "_ieigen.h"


namespace autowig
{
}


void wrapper_d6c8985219f8587d827eac5f1ef7c134()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_52739c717be05e34b4be8531a1e31f94)() = &::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::setZero;
    class ::Eigen::Transpositions< 2, 2, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_52ca24edd7f75df39b27ce5367eea798)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_727f0290f2e95097b24fdaba0e0faea0)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_dd20524c3e05518091dcf89635a30a60)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::isNegative;
    float  (::Eigen::LDLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_4e630daab2ff580b9ccb1f89e86af232)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::rcond;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::LDLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_6bad6e1a332854e38865c435015a3e0b)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  (::Eigen::LDLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_f4b4f930ea3153faa6f17f1e1ea27162)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_73ce643111d5503f88206167bb90324c)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_5f4551e5094a5de49d7893348fa0060b)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_66f76d34085a5085979dfdcf09249212)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_cdd39a79b9ec52ff9f079d2aa09c3235)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > > > class_d6c8985219f8587d827eac5f1ef7c134("_LDLT_d6c8985219f8587d827eac5f1ef7c134", "", boost::python::no_init);
    class_d6c8985219f8587d827eac5f1ef7c134.def("set_zero", method_pointer_52739c717be05e34b4be8531a1e31f94, "");
    class_d6c8985219f8587d827eac5f1ef7c134.def("transpositions_p", method_pointer_52ca24edd7f75df39b27ce5367eea798, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d6c8985219f8587d827eac5f1ef7c134.def("is_positive", method_pointer_727f0290f2e95097b24fdaba0e0faea0, "");
    class_d6c8985219f8587d827eac5f1ef7c134.def("is_negative", method_pointer_dd20524c3e05518091dcf89635a30a60, "");
    class_d6c8985219f8587d827eac5f1ef7c134.def("rcond", method_pointer_4e630daab2ff580b9ccb1f89e86af232, "");
    class_d6c8985219f8587d827eac5f1ef7c134.def("matrix_ldlt", method_pointer_6bad6e1a332854e38865c435015a3e0b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d6c8985219f8587d827eac5f1ef7c134.def("reconstructed_matrix", method_pointer_f4b4f930ea3153faa6f17f1e1ea27162, "");
    class_d6c8985219f8587d827eac5f1ef7c134.def("adjoint", method_pointer_73ce643111d5503f88206167bb90324c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d6c8985219f8587d827eac5f1ef7c134.def("rows", method_pointer_5f4551e5094a5de49d7893348fa0060b, "");
    class_d6c8985219f8587d827eac5f1ef7c134.def("cols", method_pointer_66f76d34085a5085979dfdcf09249212, "");
    class_d6c8985219f8587d827eac5f1ef7c134.def("info", method_pointer_cdd39a79b9ec52ff9f079d2aa09c3235, "");

}