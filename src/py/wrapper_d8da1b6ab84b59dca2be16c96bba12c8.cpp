#include "_ieigen.h"


namespace autowig
{
}


void wrapper_d8da1b6ab84b59dca2be16c96bba12c8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_d430af5f091a5dfdb337b7abb9539b6e)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::matrixLU;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_f385bb901c9d5c43b79657aaea4ff5c4)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::permutationP;
    double  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_679d8643a39a568ebcf7120a9c7ac16e)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::rcond;
    struct ::std::complex< double >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_48b99a81e60054d88d5291e78f4c1724)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_c104cd77ca4b53a38e690f8373dda24d)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_286c39f10c9f50bb9907808b7aaa4dbd)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_f997e4bf7a005ae58a2e927f2f05612a)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > > class_d8da1b6ab84b59dca2be16c96bba12c8("_PartialPivLU_d8da1b6ab84b59dca2be16c96bba12c8", "", boost::python::no_init);
    class_d8da1b6ab84b59dca2be16c96bba12c8.def(boost::python::init<  >(""));
    class_d8da1b6ab84b59dca2be16c96bba12c8.def(boost::python::init< long int  >(""));
    class_d8da1b6ab84b59dca2be16c96bba12c8.def("matrix_lu", method_pointer_d430af5f091a5dfdb337b7abb9539b6e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d8da1b6ab84b59dca2be16c96bba12c8.def("permutation_p", method_pointer_f385bb901c9d5c43b79657aaea4ff5c4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d8da1b6ab84b59dca2be16c96bba12c8.def("rcond", method_pointer_679d8643a39a568ebcf7120a9c7ac16e, "");
    class_d8da1b6ab84b59dca2be16c96bba12c8.def("determinant", method_pointer_48b99a81e60054d88d5291e78f4c1724, "");
    class_d8da1b6ab84b59dca2be16c96bba12c8.def("reconstructed_matrix", method_pointer_c104cd77ca4b53a38e690f8373dda24d, "");
    class_d8da1b6ab84b59dca2be16c96bba12c8.def("rows", method_pointer_286c39f10c9f50bb9907808b7aaa4dbd, "");
    class_d8da1b6ab84b59dca2be16c96bba12c8.def("cols", method_pointer_f997e4bf7a005ae58a2e927f2f05612a, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > >();
    }

}