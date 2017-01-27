#include "_ieigen.h"


namespace autowig
{
}


void wrapper_5f2237c460405fa2ad85df8b9067cd22()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_25e82f4f2ee857b9af666fc41d82cae3)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::matrixLU;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_b381054702235133b158a5251d8a669e)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::permutationP;
    float  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_5ddb69283c61537a8faa07df73082c26)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::rcond;
    struct ::std::complex< float >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_712ddb25f11d5593b9357f24bbc54062)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_261514e4e3045688b88e5f7ab1c0ee5b)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_d9a1e9a557f55a7eb91d4c0b05f45abb)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_24e1f82ad0905e48b29b2a8b7d0586b4)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > > class_5f2237c460405fa2ad85df8b9067cd22("_PartialPivLU_5f2237c460405fa2ad85df8b9067cd22", "", boost::python::no_init);
    class_5f2237c460405fa2ad85df8b9067cd22.def(boost::python::init<  >(""));
    class_5f2237c460405fa2ad85df8b9067cd22.def(boost::python::init< long int  >(""));
    class_5f2237c460405fa2ad85df8b9067cd22.def("matrix_lu", method_pointer_25e82f4f2ee857b9af666fc41d82cae3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5f2237c460405fa2ad85df8b9067cd22.def("permutation_p", method_pointer_b381054702235133b158a5251d8a669e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5f2237c460405fa2ad85df8b9067cd22.def("rcond", method_pointer_5ddb69283c61537a8faa07df73082c26, "");
    class_5f2237c460405fa2ad85df8b9067cd22.def("determinant", method_pointer_712ddb25f11d5593b9357f24bbc54062, "");
    class_5f2237c460405fa2ad85df8b9067cd22.def("reconstructed_matrix", method_pointer_261514e4e3045688b88e5f7ab1c0ee5b, "");
    class_5f2237c460405fa2ad85df8b9067cd22.def("rows", method_pointer_d9a1e9a557f55a7eb91d4c0b05f45abb, "");
    class_5f2237c460405fa2ad85df8b9067cd22.def("cols", method_pointer_24e1f82ad0905e48b29b2a8b7d0586b4, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > >();
    }

}