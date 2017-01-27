#include "_ieigen.h"


namespace autowig
{
}


void wrapper_6e1c48da931959b899400573cadfd4ee()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_99b2dd211d4952dcb19a2177475e2b13)() = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::setZero;
    class ::Eigen::Transpositions< 3, 3, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_97d9bade376a5ee0a9f6df44905764b5)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_57407c33b4de56cc8b0466eb8cce9a66)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_95e8fcb94bff5da590487ea224225b75)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::isNegative;
    float  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_2d7f7382124a597aa89e49ffaaa7c3d5)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_6b0a2d3049015f27af312a0bdb82d168)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_c7025ebb12455b97965e1ff1c124d77b)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_3d34b772275e54259351c54046b5e273)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_7f0d34a856665748b880e7aec1852f12)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_a65ada77704b5092be9a11e5a044df42)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_aab9ad3b54895fadb43abd929a790515)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >, 1 > > > class_6e1c48da931959b899400573cadfd4ee("_LDLT_6e1c48da931959b899400573cadfd4ee", "", boost::python::no_init);
    class_6e1c48da931959b899400573cadfd4ee.def("set_zero", method_pointer_99b2dd211d4952dcb19a2177475e2b13, "");
    class_6e1c48da931959b899400573cadfd4ee.def("transpositions_p", method_pointer_97d9bade376a5ee0a9f6df44905764b5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6e1c48da931959b899400573cadfd4ee.def("is_positive", method_pointer_57407c33b4de56cc8b0466eb8cce9a66, "");
    class_6e1c48da931959b899400573cadfd4ee.def("is_negative", method_pointer_95e8fcb94bff5da590487ea224225b75, "");
    class_6e1c48da931959b899400573cadfd4ee.def("rcond", method_pointer_2d7f7382124a597aa89e49ffaaa7c3d5, "");
    class_6e1c48da931959b899400573cadfd4ee.def("matrix_ldlt", method_pointer_6b0a2d3049015f27af312a0bdb82d168, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6e1c48da931959b899400573cadfd4ee.def("reconstructed_matrix", method_pointer_c7025ebb12455b97965e1ff1c124d77b, "");
    class_6e1c48da931959b899400573cadfd4ee.def("adjoint", method_pointer_3d34b772275e54259351c54046b5e273, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6e1c48da931959b899400573cadfd4ee.def("rows", method_pointer_7f0d34a856665748b880e7aec1852f12, "");
    class_6e1c48da931959b899400573cadfd4ee.def("cols", method_pointer_a65ada77704b5092be9a11e5a044df42, "");
    class_6e1c48da931959b899400573cadfd4ee.def("info", method_pointer_aab9ad3b54895fadb43abd929a790515, "");

}