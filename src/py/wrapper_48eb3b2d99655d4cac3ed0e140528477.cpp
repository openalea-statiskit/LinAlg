#include "_ieigen.h"


namespace autowig
{
}


void wrapper_48eb3b2d99655d4cac3ed0e140528477()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_4e809d226ffa52d2851c281a9117478e)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::matrixLU;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_bfe86e6ec15657e3a869352938d74cfb)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::permutationP;
    float  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_b154017ea160538d97228fd1582642e6)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::rcond;
    float  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_8489e1baca445b109431c8e6837600e9)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::determinant;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_1dde2fcf560a51cfa60de74810a7456a)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_649f9bcb747b57069fd8b2cc95338977)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_fd5b26b62cd15693b5feeab313b8dacf)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > > class_48eb3b2d99655d4cac3ed0e140528477("_PartialPivLU_48eb3b2d99655d4cac3ed0e140528477", "", boost::python::no_init);
    class_48eb3b2d99655d4cac3ed0e140528477.def(boost::python::init<  >(""));
    class_48eb3b2d99655d4cac3ed0e140528477.def(boost::python::init< long int  >(""));
    class_48eb3b2d99655d4cac3ed0e140528477.def("matrix_lu", method_pointer_4e809d226ffa52d2851c281a9117478e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_48eb3b2d99655d4cac3ed0e140528477.def("permutation_p", method_pointer_bfe86e6ec15657e3a869352938d74cfb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_48eb3b2d99655d4cac3ed0e140528477.def("rcond", method_pointer_b154017ea160538d97228fd1582642e6, "");
    class_48eb3b2d99655d4cac3ed0e140528477.def("determinant", method_pointer_8489e1baca445b109431c8e6837600e9, "");
    class_48eb3b2d99655d4cac3ed0e140528477.def("reconstructed_matrix", method_pointer_1dde2fcf560a51cfa60de74810a7456a, "");
    class_48eb3b2d99655d4cac3ed0e140528477.def("rows", method_pointer_649f9bcb747b57069fd8b2cc95338977, "");
    class_48eb3b2d99655d4cac3ed0e140528477.def("cols", method_pointer_fd5b26b62cd15693b5feeab313b8dacf, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > >();
    }

}