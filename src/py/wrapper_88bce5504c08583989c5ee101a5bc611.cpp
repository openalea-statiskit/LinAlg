#include "_ieigen.h"


namespace autowig
{
}


void wrapper_88bce5504c08583989c5ee101a5bc611()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_f1ec9bfaa9995b738b6741d21fa95c69)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::matrixLU;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_ee613c928bd25e9aa15177bed64b26a2)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::permutationP;
    float  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_cee68e264e955ff4bed6820c5035268c)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::rcond;
    float  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_63b870a9345755e5ad1a58d4dc9e43d2)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::determinant;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_f09e2c261a3854ffab9457af1d6ed0d8)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::reconstructedMatrix;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_5f818dda3ac05ed598ebf284b7f05f59)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::PartialPivLU< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_85b6369336c154ec901523ff059e1687)() const = &::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::cols;
    boost::python::class_< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > > class_88bce5504c08583989c5ee101a5bc611("_PartialPivLU_88bce5504c08583989c5ee101a5bc611", "", boost::python::no_init);
    class_88bce5504c08583989c5ee101a5bc611.def(boost::python::init<  >(""));
    class_88bce5504c08583989c5ee101a5bc611.def(boost::python::init< long int  >(""));
    class_88bce5504c08583989c5ee101a5bc611.def("matrix_lu", method_pointer_f1ec9bfaa9995b738b6741d21fa95c69, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_88bce5504c08583989c5ee101a5bc611.def("permutation_p", method_pointer_ee613c928bd25e9aa15177bed64b26a2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_88bce5504c08583989c5ee101a5bc611.def("rcond", method_pointer_cee68e264e955ff4bed6820c5035268c, "");
    class_88bce5504c08583989c5ee101a5bc611.def("determinant", method_pointer_63b870a9345755e5ad1a58d4dc9e43d2, "");
    class_88bce5504c08583989c5ee101a5bc611.def("reconstructed_matrix", method_pointer_f09e2c261a3854ffab9457af1d6ed0d8, "");
    class_88bce5504c08583989c5ee101a5bc611.def("rows", method_pointer_5f818dda3ac05ed598ebf284b7f05f59, "");
    class_88bce5504c08583989c5ee101a5bc611.def("cols", method_pointer_85b6369336c154ec901523ff059e1687, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > >();
    }

}