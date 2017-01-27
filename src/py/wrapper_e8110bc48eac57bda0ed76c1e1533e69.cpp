#include "_ieigen.h"


namespace autowig
{
}


void wrapper_e8110bc48eac57bda0ed76c1e1533e69()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_b799226a5eb25d51be35738d38f2d6bf)() = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::setZero;
    class ::Eigen::Transpositions< 2, 2, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_8c99e4ef9c5f55bbaa04f43eb88f0eaf)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_bc456d7e17c454d4a12c3a45ff964627)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_4b03f4fa2168543da32f5121aa8fc7a1)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::isNegative;
    float  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_864723a95c9e536fa2b5aadd0a4a3f24)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::rcond;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_641db1ab41405ac2b81f059d14180da3)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_de14bb29782956c69db5f32a1f568235)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_f13b0aba8d5054218774981f7318b751)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_42465675d4c355dbb0b8facde3d9a181)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_2f2c2ec0a7bc5a3ca88a993bdd1e61a2)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_93811d20e5e05f1a867227b7e1870e2a)() const = &::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 1 > > > class_e8110bc48eac57bda0ed76c1e1533e69("_LDLT_e8110bc48eac57bda0ed76c1e1533e69", "", boost::python::no_init);
    class_e8110bc48eac57bda0ed76c1e1533e69.def("set_zero", method_pointer_b799226a5eb25d51be35738d38f2d6bf, "");
    class_e8110bc48eac57bda0ed76c1e1533e69.def("transpositions_p", method_pointer_8c99e4ef9c5f55bbaa04f43eb88f0eaf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e8110bc48eac57bda0ed76c1e1533e69.def("is_positive", method_pointer_bc456d7e17c454d4a12c3a45ff964627, "");
    class_e8110bc48eac57bda0ed76c1e1533e69.def("is_negative", method_pointer_4b03f4fa2168543da32f5121aa8fc7a1, "");
    class_e8110bc48eac57bda0ed76c1e1533e69.def("rcond", method_pointer_864723a95c9e536fa2b5aadd0a4a3f24, "");
    class_e8110bc48eac57bda0ed76c1e1533e69.def("matrix_ldlt", method_pointer_641db1ab41405ac2b81f059d14180da3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e8110bc48eac57bda0ed76c1e1533e69.def("reconstructed_matrix", method_pointer_de14bb29782956c69db5f32a1f568235, "");
    class_e8110bc48eac57bda0ed76c1e1533e69.def("adjoint", method_pointer_f13b0aba8d5054218774981f7318b751, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e8110bc48eac57bda0ed76c1e1533e69.def("rows", method_pointer_42465675d4c355dbb0b8facde3d9a181, "");
    class_e8110bc48eac57bda0ed76c1e1533e69.def("cols", method_pointer_2f2c2ec0a7bc5a3ca88a993bdd1e61a2, "");
    class_e8110bc48eac57bda0ed76c1e1533e69.def("info", method_pointer_93811d20e5e05f1a867227b7e1870e2a, "");

}