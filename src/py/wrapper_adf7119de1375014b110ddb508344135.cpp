#include "_ieigen.h"


namespace autowig
{
}


void wrapper_adf7119de1375014b110ddb508344135()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_7bc500fd23d45158b1ba4d929f13e9e1)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::matrixLU;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_4deccab3c2795319a695469e2fb658a9)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::permutationP;
    float  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_a4caaf58261d53b3b69c954e7be4a5e1)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::rcond;
    float  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_78af0c80e9fc5709898a2d11c50e38da)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::determinant;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_d2513f2d70ec5ac990ce5fbe4128fb48)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_1e39454730655c1482f4489877840741)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_3656a423924a504db67beeedb889abef)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > > > class_adf7119de1375014b110ddb508344135("_PartialPivLU_adf7119de1375014b110ddb508344135", "", boost::python::no_init);
    class_adf7119de1375014b110ddb508344135.def(boost::python::init<  >(""));
    class_adf7119de1375014b110ddb508344135.def(boost::python::init< long int  >(""));
    class_adf7119de1375014b110ddb508344135.def("matrix_lu", method_pointer_7bc500fd23d45158b1ba4d929f13e9e1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_adf7119de1375014b110ddb508344135.def("permutation_p", method_pointer_4deccab3c2795319a695469e2fb658a9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_adf7119de1375014b110ddb508344135.def("rcond", method_pointer_a4caaf58261d53b3b69c954e7be4a5e1, "");
    class_adf7119de1375014b110ddb508344135.def("determinant", method_pointer_78af0c80e9fc5709898a2d11c50e38da, "");
    class_adf7119de1375014b110ddb508344135.def("reconstructed_matrix", method_pointer_d2513f2d70ec5ac990ce5fbe4128fb48, "");
    class_adf7119de1375014b110ddb508344135.def("rows", method_pointer_1e39454730655c1482f4489877840741, "");
    class_adf7119de1375014b110ddb508344135.def("cols", method_pointer_3656a423924a504db67beeedb889abef, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > > >();
    }

}