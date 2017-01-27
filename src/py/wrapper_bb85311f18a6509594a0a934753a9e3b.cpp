#include "_ieigen.h"


namespace autowig
{
}


void wrapper_bb85311f18a6509594a0a934753a9e3b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_0636f226962f5c6aa6d7d508767c0080)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::matrixLU;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_b58d4281fdd75052be663efecc7a350d)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::permutationP;
    double  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_f0df33e396465dceb42e50f6cee29fce)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::rcond;
    double  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_f7db7a68e9545ed29ae5cb78ba6d9dce)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::determinant;
    class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_f801eb78bffb5438b347b3375de4f45e)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_2cf0841fe0b05c44af2bce0f1830bac7)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::*method_pointer_743d395f32f25f1cbda9ab81592b93a9)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > > > class_bb85311f18a6509594a0a934753a9e3b("_PartialPivLU_bb85311f18a6509594a0a934753a9e3b", "", boost::python::no_init);
    class_bb85311f18a6509594a0a934753a9e3b.def(boost::python::init<  >(""));
    class_bb85311f18a6509594a0a934753a9e3b.def(boost::python::init< long int  >(""));
    class_bb85311f18a6509594a0a934753a9e3b.def("matrix_lu", method_pointer_0636f226962f5c6aa6d7d508767c0080, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb85311f18a6509594a0a934753a9e3b.def("permutation_p", method_pointer_b58d4281fdd75052be663efecc7a350d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bb85311f18a6509594a0a934753a9e3b.def("rcond", method_pointer_f0df33e396465dceb42e50f6cee29fce, "");
    class_bb85311f18a6509594a0a934753a9e3b.def("determinant", method_pointer_f7db7a68e9545ed29ae5cb78ba6d9dce, "");
    class_bb85311f18a6509594a0a934753a9e3b.def("reconstructed_matrix", method_pointer_f801eb78bffb5438b347b3375de4f45e, "");
    class_bb85311f18a6509594a0a934753a9e3b.def("rows", method_pointer_2cf0841fe0b05c44af2bce0f1830bac7, "");
    class_bb85311f18a6509594a0a934753a9e3b.def("cols", method_pointer_743d395f32f25f1cbda9ab81592b93a9, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > > >();
    }

}