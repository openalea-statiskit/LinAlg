#include "_linalg.h"


namespace autowig
{
}


void wrapper_eda62cceb5ae59fda62d490974dc88c6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_940cc526321f55aca072a70d45536f2d)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::matrixLU;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_c51efb5221ab58a997d4ab1d9e7473d1)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::permutationP;
    double  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_92627bcb7a3e5a91852e2bc895bd96a7)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rcond;
    double  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_9f2338ae478e56a2915cdb00108c4a87)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::determinant;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_ff35f5e0f94b58f3bf94657b02544832)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_35a5a003217552a4b8f709d1c307056e)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_00e65e636a385e63a97f21d24fe73ada)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > > class_eda62cceb5ae59fda62d490974dc88c6("_PartialPivLU_eda62cceb5ae59fda62d490974dc88c6", "", boost::python::no_init);
    class_eda62cceb5ae59fda62d490974dc88c6.def(boost::python::init<  >(""));
    class_eda62cceb5ae59fda62d490974dc88c6.def(boost::python::init< long int  >(""));
    class_eda62cceb5ae59fda62d490974dc88c6.def("matrix_lu", method_pointer_940cc526321f55aca072a70d45536f2d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("permutation_p", method_pointer_c51efb5221ab58a997d4ab1d9e7473d1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("rcond", method_pointer_92627bcb7a3e5a91852e2bc895bd96a7, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("determinant", method_pointer_9f2338ae478e56a2915cdb00108c4a87, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("reconstructed_matrix", method_pointer_ff35f5e0f94b58f3bf94657b02544832, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("rows", method_pointer_35a5a003217552a4b8f709d1c307056e, "");
    class_eda62cceb5ae59fda62d490974dc88c6.def("cols", method_pointer_00e65e636a385e63a97f21d24fe73ada, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > > >();
    }

}