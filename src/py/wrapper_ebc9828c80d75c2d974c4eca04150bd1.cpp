#include "_linalg.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const volatile * get_pointer<class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const volatile >(class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_ebc9828c80d75c2d974c4eca04150bd1()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_ca268eca22445c44bdfd7c45e5610a5c)() = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::setZero;
    ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::TranspositionType const & (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_d37e6eb6fd7a53bead50af6a59817843)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_de20d4b546e75d2180192fa925e715da)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_24949a43f60d581cac91732c8e144766)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::isNegative;
    ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::RealScalar  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_115f6597b511515385c1d34c7e497b5e)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::rcond;
    ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::MatrixType const & (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_4943c3dcc62b5829b0f69508839cacf5)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::matrixLDLT;
    ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::MatrixType  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_eabe73580856515886dba190b2bc5adc)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > const & (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_f02d576be1cc5516b00e69093b9ef61a)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::adjoint;
    ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Index  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_f034ec7fa4bc55cfb29b07b093f5a08a)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::rows;
    ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::Index  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_0bd184e6963f5362bbed791b177dc88d)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_b403caa2f32055e88dd1ad81d3634e4b)() const = &::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 >, autowig::Held< class ::Eigen::LDLT< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 1 > >::Type > class_ebc9828c80d75c2d974c4eca04150bd1("_LDLT_ebc9828c80d75c2d974c4eca04150bd1", "", boost::python::no_init);
    class_ebc9828c80d75c2d974c4eca04150bd1.def("set_zero", method_pointer_ca268eca22445c44bdfd7c45e5610a5c, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("transpositions_p", method_pointer_d37e6eb6fd7a53bead50af6a59817843, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("is_positive", method_pointer_de20d4b546e75d2180192fa925e715da, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("is_negative", method_pointer_24949a43f60d581cac91732c8e144766, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("rcond", method_pointer_115f6597b511515385c1d34c7e497b5e, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("matrix_ldlt", method_pointer_4943c3dcc62b5829b0f69508839cacf5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("reconstructed_matrix", method_pointer_eabe73580856515886dba190b2bc5adc, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("adjoint", method_pointer_f02d576be1cc5516b00e69093b9ef61a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("rows", method_pointer_f034ec7fa4bc55cfb29b07b093f5a08a, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("cols", method_pointer_0bd184e6963f5362bbed791b177dc88d, "");
    class_ebc9828c80d75c2d974c4eca04150bd1.def("info", method_pointer_b403caa2f32055e88dd1ad81d3634e4b, "");

}