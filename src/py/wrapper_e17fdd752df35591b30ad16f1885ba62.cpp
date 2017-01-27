#include "_ieigen.h"


namespace autowig
{
}


void wrapper_e17fdd752df35591b30ad16f1885ba62()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_8353a744589d53fd997bd1a21c24964a)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::matrixLU;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_f3a371ff3f05545e9b87082b15a7e0a5)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::permutationP;
    double  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_9968b1949977573596b5e44873219fc2)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::rcond;
    double  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_3757f2f42b2b530585a0319a3898dd8e)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::determinant;
    class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_d1bf5c3d2a105663a44eca1b0be3d9d7)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_0d59ebc956c15386bcae81380b8b258e)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::*method_pointer_bd2bc72e73a15c7daa36539db452180f)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > > class_e17fdd752df35591b30ad16f1885ba62("_PartialPivLU_e17fdd752df35591b30ad16f1885ba62", "", boost::python::no_init);
    class_e17fdd752df35591b30ad16f1885ba62.def(boost::python::init<  >(""));
    class_e17fdd752df35591b30ad16f1885ba62.def(boost::python::init< long int  >(""));
    class_e17fdd752df35591b30ad16f1885ba62.def("matrix_lu", method_pointer_8353a744589d53fd997bd1a21c24964a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e17fdd752df35591b30ad16f1885ba62.def("permutation_p", method_pointer_f3a371ff3f05545e9b87082b15a7e0a5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e17fdd752df35591b30ad16f1885ba62.def("rcond", method_pointer_9968b1949977573596b5e44873219fc2, "");
    class_e17fdd752df35591b30ad16f1885ba62.def("determinant", method_pointer_3757f2f42b2b530585a0319a3898dd8e, "");
    class_e17fdd752df35591b30ad16f1885ba62.def("reconstructed_matrix", method_pointer_d1bf5c3d2a105663a44eca1b0be3d9d7, "");
    class_e17fdd752df35591b30ad16f1885ba62.def("rows", method_pointer_0d59ebc956c15386bcae81380b8b258e, "");
    class_e17fdd752df35591b30ad16f1885ba62.def("cols", method_pointer_bd2bc72e73a15c7daa36539db452180f, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > >();
    }

}