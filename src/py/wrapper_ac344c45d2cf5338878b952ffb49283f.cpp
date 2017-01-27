#include "_ieigen.h"


namespace autowig
{
}


void wrapper_ac344c45d2cf5338878b952ffb49283f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_a1f114bb12625402a3fb8aa75d7db482)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::matrixLU;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_3d918f5b9c9055858c7a4985c415a229)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::permutationP;
    float  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_86d2fd6288ca566b97b1d2a875f72315)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::rcond;
    struct ::std::complex< float >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_3815d5a85ea65542be4d068706dc0bb6)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_10216b145e0d5332a106ef7ef2853ad4)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_83e7827467ea518ab08df69eda7de6e3)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_1af2f4d83bf057669c24133a93dfabb2)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > > class_ac344c45d2cf5338878b952ffb49283f("_PartialPivLU_ac344c45d2cf5338878b952ffb49283f", "", boost::python::no_init);
    class_ac344c45d2cf5338878b952ffb49283f.def(boost::python::init<  >(""));
    class_ac344c45d2cf5338878b952ffb49283f.def(boost::python::init< long int  >(""));
    class_ac344c45d2cf5338878b952ffb49283f.def("matrix_lu", method_pointer_a1f114bb12625402a3fb8aa75d7db482, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ac344c45d2cf5338878b952ffb49283f.def("permutation_p", method_pointer_3d918f5b9c9055858c7a4985c415a229, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ac344c45d2cf5338878b952ffb49283f.def("rcond", method_pointer_86d2fd6288ca566b97b1d2a875f72315, "");
    class_ac344c45d2cf5338878b952ffb49283f.def("determinant", method_pointer_3815d5a85ea65542be4d068706dc0bb6, "");
    class_ac344c45d2cf5338878b952ffb49283f.def("reconstructed_matrix", method_pointer_10216b145e0d5332a106ef7ef2853ad4, "");
    class_ac344c45d2cf5338878b952ffb49283f.def("rows", method_pointer_83e7827467ea518ab08df69eda7de6e3, "");
    class_ac344c45d2cf5338878b952ffb49283f.def("cols", method_pointer_1af2f4d83bf057669c24133a93dfabb2, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > >();
    }

}