#include "_ieigen.h"


namespace autowig
{
}


void wrapper_1453c1a6619a529980e960d2c51e4d71()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_d82e6c32ad055b6eb05d208a65e459a8)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::matrixLU;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_04c07f20c3335dc297d9ddf067178c79)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::permutationP;
    double  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_52c83d0a4f525929ac6ee3439315f7a2)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::rcond;
    double  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_8d850993312a5f95a371802a494a66b1)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::determinant;
    class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_a83b465b61ed56d08db41f959828cad6)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_e4adfce94e8c53e3be5262b643979a97)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::*method_pointer_31b045e0389951d6bd3763d773832be2)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > > class_1453c1a6619a529980e960d2c51e4d71("_PartialPivLU_1453c1a6619a529980e960d2c51e4d71", "", boost::python::no_init);
    class_1453c1a6619a529980e960d2c51e4d71.def(boost::python::init<  >(""));
    class_1453c1a6619a529980e960d2c51e4d71.def(boost::python::init< long int  >(""));
    class_1453c1a6619a529980e960d2c51e4d71.def("matrix_lu", method_pointer_d82e6c32ad055b6eb05d208a65e459a8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1453c1a6619a529980e960d2c51e4d71.def("permutation_p", method_pointer_04c07f20c3335dc297d9ddf067178c79, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1453c1a6619a529980e960d2c51e4d71.def("rcond", method_pointer_52c83d0a4f525929ac6ee3439315f7a2, "");
    class_1453c1a6619a529980e960d2c51e4d71.def("determinant", method_pointer_8d850993312a5f95a371802a494a66b1, "");
    class_1453c1a6619a529980e960d2c51e4d71.def("reconstructed_matrix", method_pointer_a83b465b61ed56d08db41f959828cad6, "");
    class_1453c1a6619a529980e960d2c51e4d71.def("rows", method_pointer_e4adfce94e8c53e3be5262b643979a97, "");
    class_1453c1a6619a529980e960d2c51e4d71.def("cols", method_pointer_31b045e0389951d6bd3763d773832be2, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 4, 4, 0, 4, 4 > > > > >();
    }

}