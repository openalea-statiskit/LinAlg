#include "_ieigen.h"


namespace autowig
{
}


void wrapper_fc5f71fe320a5e358afa5030c4765caa()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_80ba84958b675ef291418c471b23144f)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_5c20efb4e4ee5c78b010b9e410d59f1c)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::colIndexByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_c088355ac0cb5a6499ef43ef84a716bb)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_665a9fe3f928515ebb4b8d6e4ab30edf)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::coeffByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_1a49e01178585d2488cd74c3906707e5)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_df39e69bb9fe5810bf4fb40fdd7614c0)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_b2ff9e19182b57de97aa6de3ff1b9c29)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::operator[];
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_fc329e29334a565fa7bdad903e1897e0)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_783433d8fe865d9e9399131c4a6fa0fd)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::x;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_cb24b1852a1b5d30ae523b3e8ce38ad2)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::y;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_4d08a3e0761b5391a46be9b665c733ca)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::z;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_1665bb40f014529393dd5bfa628f7378)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > > > class_fc5f71fe320a5e358afa5030c4765caa("_DenseCoeffsBase_fc5f71fe320a5e358afa5030c4765caa", "", boost::python::no_init);
    class_fc5f71fe320a5e358afa5030c4765caa.def("row_index_by_outer_inner", method_pointer_80ba84958b675ef291418c471b23144f, "");
    class_fc5f71fe320a5e358afa5030c4765caa.def("col_index_by_outer_inner", method_pointer_5c20efb4e4ee5c78b010b9e410d59f1c, "");
    class_fc5f71fe320a5e358afa5030c4765caa.def("coeff", method_pointer_c088355ac0cb5a6499ef43ef84a716bb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc5f71fe320a5e358afa5030c4765caa.def("coeff_by_outer_inner", method_pointer_665a9fe3f928515ebb4b8d6e4ab30edf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc5f71fe320a5e358afa5030c4765caa.def("__call__", method_pointer_1a49e01178585d2488cd74c3906707e5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc5f71fe320a5e358afa5030c4765caa.def("coeff", method_pointer_df39e69bb9fe5810bf4fb40fdd7614c0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc5f71fe320a5e358afa5030c4765caa.def("__getitem__", method_pointer_b2ff9e19182b57de97aa6de3ff1b9c29, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc5f71fe320a5e358afa5030c4765caa.def("__call__", method_pointer_fc329e29334a565fa7bdad903e1897e0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc5f71fe320a5e358afa5030c4765caa.def("x", method_pointer_783433d8fe865d9e9399131c4a6fa0fd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc5f71fe320a5e358afa5030c4765caa.def("y", method_pointer_cb24b1852a1b5d30ae523b3e8ce38ad2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc5f71fe320a5e358afa5030c4765caa.def("z", method_pointer_4d08a3e0761b5391a46be9b665c733ca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fc5f71fe320a5e358afa5030c4765caa.def("w", method_pointer_1665bb40f014529393dd5bfa628f7378, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > > >();
    }

}