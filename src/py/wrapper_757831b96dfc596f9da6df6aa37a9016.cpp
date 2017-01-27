#include "_ieigen.h"


namespace autowig
{
}


void wrapper_757831b96dfc596f9da6df6aa37a9016()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    void  (::Eigen::LDLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_9a510ca3afc358089769d414a7e0b714)() = &::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::setZero;
    class ::Eigen::Transpositions< 3, 3, int >  const & (::Eigen::LDLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_66bffba6050e5da3a19d8e5d0cf746bd)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::transpositionsP;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_054e8d4e85a356dfbd71f5d7220abdbf)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::isPositive;
    bool  (::Eigen::LDLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_fb36bf92acc25a10b5fe3a4a9ab878b4)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::isNegative;
    float  (::Eigen::LDLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_bfa2ba53e4275c9695a53d03d40b9f33)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::rcond;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::LDLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_5720a8d56b815e0fba6ba6218d5dbb4d)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::matrixLDLT;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  (::Eigen::LDLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_b222db6de2d65de0883d55b2fb7e3cc9)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::reconstructedMatrix;
    class ::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >  const & (::Eigen::LDLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_385d96fed3d55ab09d1657cb15baaa85)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::adjoint;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_b9fe2cbf69945531886c31a1cd644907)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::rows;
    long int  (::Eigen::LDLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_b158d56f17945b1f891c8d55f65a5df1)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::cols;
    enum ::Eigen::ComputationInfo  (::Eigen::LDLT< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::*method_pointer_58164fa0b9d95b928293fbe7bc41533c)() const = &::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >::info;
    boost::python::class_< class ::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 >, autowig::HeldType< class ::Eigen::LDLT< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >, 1 > > > class_757831b96dfc596f9da6df6aa37a9016("_LDLT_757831b96dfc596f9da6df6aa37a9016", "", boost::python::no_init);
    class_757831b96dfc596f9da6df6aa37a9016.def("set_zero", method_pointer_9a510ca3afc358089769d414a7e0b714, "");
    class_757831b96dfc596f9da6df6aa37a9016.def("transpositions_p", method_pointer_66bffba6050e5da3a19d8e5d0cf746bd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_757831b96dfc596f9da6df6aa37a9016.def("is_positive", method_pointer_054e8d4e85a356dfbd71f5d7220abdbf, "");
    class_757831b96dfc596f9da6df6aa37a9016.def("is_negative", method_pointer_fb36bf92acc25a10b5fe3a4a9ab878b4, "");
    class_757831b96dfc596f9da6df6aa37a9016.def("rcond", method_pointer_bfa2ba53e4275c9695a53d03d40b9f33, "");
    class_757831b96dfc596f9da6df6aa37a9016.def("matrix_ldlt", method_pointer_5720a8d56b815e0fba6ba6218d5dbb4d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_757831b96dfc596f9da6df6aa37a9016.def("reconstructed_matrix", method_pointer_b222db6de2d65de0883d55b2fb7e3cc9, "");
    class_757831b96dfc596f9da6df6aa37a9016.def("adjoint", method_pointer_385d96fed3d55ab09d1657cb15baaa85, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_757831b96dfc596f9da6df6aa37a9016.def("rows", method_pointer_b9fe2cbf69945531886c31a1cd644907, "");
    class_757831b96dfc596f9da6df6aa37a9016.def("cols", method_pointer_b158d56f17945b1f891c8d55f65a5df1, "");
    class_757831b96dfc596f9da6df6aa37a9016.def("info", method_pointer_58164fa0b9d95b928293fbe7bc41533c, "");

}