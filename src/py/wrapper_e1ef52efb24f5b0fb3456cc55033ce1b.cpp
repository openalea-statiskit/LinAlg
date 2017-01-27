#include "_ieigen.h"


namespace autowig
{
}


void wrapper_e1ef52efb24f5b0fb3456cc55033ce1b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_0aab10e9e50a5d64bac5fd359a8be5b8)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::matrixLU;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_2fa7401c81b85a3ebaa758017336cda0)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::permutationP;
    double  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_b44034ab123f54e59a1b4d76f6a063e4)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::rcond;
    struct ::std::complex< double >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_4ad7059705b85202bb6bfe596cc60460)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_a957b770ccca5594a45796bc7ced77e0)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_b29597561ebd5f3899397f14d4b67d88)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_0015769eb8375470b8885f2233d31660)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > > class_e1ef52efb24f5b0fb3456cc55033ce1b("_PartialPivLU_e1ef52efb24f5b0fb3456cc55033ce1b", "", boost::python::no_init);
    class_e1ef52efb24f5b0fb3456cc55033ce1b.def(boost::python::init<  >(""));
    class_e1ef52efb24f5b0fb3456cc55033ce1b.def(boost::python::init< long int  >(""));
    class_e1ef52efb24f5b0fb3456cc55033ce1b.def("matrix_lu", method_pointer_0aab10e9e50a5d64bac5fd359a8be5b8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e1ef52efb24f5b0fb3456cc55033ce1b.def("permutation_p", method_pointer_2fa7401c81b85a3ebaa758017336cda0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e1ef52efb24f5b0fb3456cc55033ce1b.def("rcond", method_pointer_b44034ab123f54e59a1b4d76f6a063e4, "");
    class_e1ef52efb24f5b0fb3456cc55033ce1b.def("determinant", method_pointer_4ad7059705b85202bb6bfe596cc60460, "");
    class_e1ef52efb24f5b0fb3456cc55033ce1b.def("reconstructed_matrix", method_pointer_a957b770ccca5594a45796bc7ced77e0, "");
    class_e1ef52efb24f5b0fb3456cc55033ce1b.def("rows", method_pointer_b29597561ebd5f3899397f14d4b67d88, "");
    class_e1ef52efb24f5b0fb3456cc55033ce1b.def("cols", method_pointer_0015769eb8375470b8885f2233d31660, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > >();
    }

}