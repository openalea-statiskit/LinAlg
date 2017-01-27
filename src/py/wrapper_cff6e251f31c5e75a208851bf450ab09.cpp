#include "_ieigen.h"


namespace autowig
{
}


void wrapper_cff6e251f31c5e75a208851bf450ab09()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_d18217db0d8c5ffbab56a780d2e3cfcd)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::matrixLU;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_70d7d277fdc95d73803ca2170d2b812b)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::permutationP;
    float  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_762d8523ecd1568c90a5e08ec65c1c48)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::rcond;
    float  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_10aac95ced3250ff85935f5d89b600a5)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::determinant;
    class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_f207d50dfdf659e9b223852909711aac)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_7dd21426420152f0a643c98fc762cd93)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::*method_pointer_ab8a06a286e253ccb1156044efb8e740)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > > class_cff6e251f31c5e75a208851bf450ab09("_PartialPivLU_cff6e251f31c5e75a208851bf450ab09", "", boost::python::no_init);
    class_cff6e251f31c5e75a208851bf450ab09.def(boost::python::init<  >(""));
    class_cff6e251f31c5e75a208851bf450ab09.def(boost::python::init< long int  >(""));
    class_cff6e251f31c5e75a208851bf450ab09.def("matrix_lu", method_pointer_d18217db0d8c5ffbab56a780d2e3cfcd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cff6e251f31c5e75a208851bf450ab09.def("permutation_p", method_pointer_70d7d277fdc95d73803ca2170d2b812b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cff6e251f31c5e75a208851bf450ab09.def("rcond", method_pointer_762d8523ecd1568c90a5e08ec65c1c48, "");
    class_cff6e251f31c5e75a208851bf450ab09.def("determinant", method_pointer_10aac95ced3250ff85935f5d89b600a5, "");
    class_cff6e251f31c5e75a208851bf450ab09.def("reconstructed_matrix", method_pointer_f207d50dfdf659e9b223852909711aac, "");
    class_cff6e251f31c5e75a208851bf450ab09.def("rows", method_pointer_7dd21426420152f0a643c98fc762cd93, "");
    class_cff6e251f31c5e75a208851bf450ab09.def("cols", method_pointer_ab8a06a286e253ccb1156044efb8e740, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 3, 3, 0, 3, 3 > > > > >();
    }

}