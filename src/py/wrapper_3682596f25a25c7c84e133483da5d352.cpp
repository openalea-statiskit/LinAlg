#include "_ieigen.h"


namespace autowig
{
}


void wrapper_3682596f25a25c7c84e133483da5d352()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_85273d3af25d5e55ababf65474fd3190)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::matrixLU;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_47280a9ded2350af90bf5a7ed720e2a9)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::permutationP;
    double  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_e92ebfdd3b7d531a97b3039498d265ff)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::rcond;
    struct ::std::complex< double >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_513935287cc45562979c21d88174a068)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_f2edcab7b4315b9bab48eb4fc8439ff3)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_ca26103dab885bd89d3769ac31393b30)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_92900e653b835ada91ef151e4bd2c506)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > > > class_3682596f25a25c7c84e133483da5d352("_PartialPivLU_3682596f25a25c7c84e133483da5d352", "", boost::python::no_init);
    class_3682596f25a25c7c84e133483da5d352.def(boost::python::init<  >(""));
    class_3682596f25a25c7c84e133483da5d352.def(boost::python::init< long int  >(""));
    class_3682596f25a25c7c84e133483da5d352.def("matrix_lu", method_pointer_85273d3af25d5e55ababf65474fd3190, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3682596f25a25c7c84e133483da5d352.def("permutation_p", method_pointer_47280a9ded2350af90bf5a7ed720e2a9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3682596f25a25c7c84e133483da5d352.def("rcond", method_pointer_e92ebfdd3b7d531a97b3039498d265ff, "");
    class_3682596f25a25c7c84e133483da5d352.def("determinant", method_pointer_513935287cc45562979c21d88174a068, "");
    class_3682596f25a25c7c84e133483da5d352.def("reconstructed_matrix", method_pointer_f2edcab7b4315b9bab48eb4fc8439ff3, "");
    class_3682596f25a25c7c84e133483da5d352.def("rows", method_pointer_ca26103dab885bd89d3769ac31393b30, "");
    class_3682596f25a25c7c84e133483da5d352.def("cols", method_pointer_92900e653b835ada91ef151e4bd2c506, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > > >();
    }

}