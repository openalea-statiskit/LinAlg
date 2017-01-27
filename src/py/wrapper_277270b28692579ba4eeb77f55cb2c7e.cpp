#include "_ieigen.h"


namespace autowig
{
}


void wrapper_277270b28692579ba4eeb77f55cb2c7e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_83f325a35ff05304b1e492de9941dacb)() = &::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::setZero;
    class ::Eigen::Transpositions< -1, -1, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_dd4bb78dde2a5f8287e08e407b18601d)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_8966589984fa50b1a408a6d1b77b4007)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_33f605ea1fa65104b4a03dbdffa0d1b2)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::isNegative;
    float  (::Eigen::LDLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_705e9a96fcb15c5ba5d02e6389682dcc)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::rcond;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_41042e27512d51aba674cbe6d7343c02)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  (::Eigen::LDLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_344602fb4d485fcc8911cd205cf062e7)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_a0a3310c26425122abe8bab677f6b18a)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_3799874dd7ea589483241598a6437b2f)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_227168f2ff1b5ed1b51395fad5dc05ac)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_3f551520f25b522c9e2d1d937defb8de)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 1 > > > class_277270b28692579ba4eeb77f55cb2c7e("_LDLT_277270b28692579ba4eeb77f55cb2c7e", "", boost::python::no_init);
    class_277270b28692579ba4eeb77f55cb2c7e.def("set_zero", method_pointer_83f325a35ff05304b1e492de9941dacb, "");
    class_277270b28692579ba4eeb77f55cb2c7e.def("transpositions_p", method_pointer_dd4bb78dde2a5f8287e08e407b18601d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_277270b28692579ba4eeb77f55cb2c7e.def("is_positive", method_pointer_8966589984fa50b1a408a6d1b77b4007, "");
    class_277270b28692579ba4eeb77f55cb2c7e.def("is_negative", method_pointer_33f605ea1fa65104b4a03dbdffa0d1b2, "");
    class_277270b28692579ba4eeb77f55cb2c7e.def("rcond", method_pointer_705e9a96fcb15c5ba5d02e6389682dcc, "");
    class_277270b28692579ba4eeb77f55cb2c7e.def("matrix_ldlt", method_pointer_41042e27512d51aba674cbe6d7343c02, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_277270b28692579ba4eeb77f55cb2c7e.def("reconstructed_matrix", method_pointer_344602fb4d485fcc8911cd205cf062e7, "");
    class_277270b28692579ba4eeb77f55cb2c7e.def("adjoint", method_pointer_a0a3310c26425122abe8bab677f6b18a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_277270b28692579ba4eeb77f55cb2c7e.def("rows", method_pointer_3799874dd7ea589483241598a6437b2f, "");
    class_277270b28692579ba4eeb77f55cb2c7e.def("cols", method_pointer_227168f2ff1b5ed1b51395fad5dc05ac, "");
    class_277270b28692579ba4eeb77f55cb2c7e.def("info", method_pointer_3f551520f25b522c9e2d1d937defb8de, "");

}