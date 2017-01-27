#include "_ieigen.h"


namespace autowig
{
}


void wrapper_5943ece8a5fe5f40adf13a37ce19bdeb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_d93f43abbbea51259d9b765552ce3270)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::matrixLU;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_a20a8dc2e9e25d9699d501bc6d07e2d6)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::permutationP;
    double  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_929fa3162d265c6fb533a4d29abdaf21)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::rcond;
    struct ::std::complex< double >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_c3469dfcaad95ca4a958de3ef4353694)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_3541b726bd395564b5e81329db9c6789)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_4216463d0863538db8387a1f5eeacc6b)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_01988b4a149f52709caa2aab4b39a404)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > > class_5943ece8a5fe5f40adf13a37ce19bdeb("_PartialPivLU_5943ece8a5fe5f40adf13a37ce19bdeb", "", boost::python::no_init);
    class_5943ece8a5fe5f40adf13a37ce19bdeb.def(boost::python::init<  >(""));
    class_5943ece8a5fe5f40adf13a37ce19bdeb.def(boost::python::init< long int  >(""));
    class_5943ece8a5fe5f40adf13a37ce19bdeb.def("matrix_lu", method_pointer_d93f43abbbea51259d9b765552ce3270, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5943ece8a5fe5f40adf13a37ce19bdeb.def("permutation_p", method_pointer_a20a8dc2e9e25d9699d501bc6d07e2d6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5943ece8a5fe5f40adf13a37ce19bdeb.def("rcond", method_pointer_929fa3162d265c6fb533a4d29abdaf21, "");
    class_5943ece8a5fe5f40adf13a37ce19bdeb.def("determinant", method_pointer_c3469dfcaad95ca4a958de3ef4353694, "");
    class_5943ece8a5fe5f40adf13a37ce19bdeb.def("reconstructed_matrix", method_pointer_3541b726bd395564b5e81329db9c6789, "");
    class_5943ece8a5fe5f40adf13a37ce19bdeb.def("rows", method_pointer_4216463d0863538db8387a1f5eeacc6b, "");
    class_5943ece8a5fe5f40adf13a37ce19bdeb.def("cols", method_pointer_01988b4a149f52709caa2aab4b39a404, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > >();
    }

}