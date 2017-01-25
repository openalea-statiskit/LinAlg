#include "_ieigen.h"


namespace autowig
{
}


void wrapper_be11d16a6ccb50b0aa5ab5a56a0d00a4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_b363d1530a7050f0bc6c11e79265318c)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_030fd2f79f8556a894d1421d0564f80c)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::colIndexByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_77beace6304e5036b6801c5c1cdcae4e)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_93e6faaf991e5f0ab11ddff9193c77f2)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::coeffByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_88677d3d447e5b88b501fbd11470edb5)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_d059c11417285da4b47085a5bdcc443e)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_bff70fc6dcd555ee9c091a41b9835a42)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::operator[];
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_059f8be874d55cffa43e883ca719bbb5)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_bbb26d155201554a9a34328a7d4784ba)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::x;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_7e3b0f37f7ae594baa8000440efff122)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::y;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_bb38341bdf965524894d77c2a9c64bf9)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::z;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_87ea6ce4f2b954de9a5052c52a2b9070)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > > > class_be11d16a6ccb50b0aa5ab5a56a0d00a4("_DenseCoeffsBase_be11d16a6ccb50b0aa5ab5a56a0d00a4", "", boost::python::no_init);
    class_be11d16a6ccb50b0aa5ab5a56a0d00a4.def("row_index_by_outer_inner", method_pointer_b363d1530a7050f0bc6c11e79265318c, "");
    class_be11d16a6ccb50b0aa5ab5a56a0d00a4.def("col_index_by_outer_inner", method_pointer_030fd2f79f8556a894d1421d0564f80c, "");
    class_be11d16a6ccb50b0aa5ab5a56a0d00a4.def("coeff", method_pointer_77beace6304e5036b6801c5c1cdcae4e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be11d16a6ccb50b0aa5ab5a56a0d00a4.def("coeff_by_outer_inner", method_pointer_93e6faaf991e5f0ab11ddff9193c77f2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be11d16a6ccb50b0aa5ab5a56a0d00a4.def("__call__", method_pointer_88677d3d447e5b88b501fbd11470edb5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be11d16a6ccb50b0aa5ab5a56a0d00a4.def("coeff", method_pointer_d059c11417285da4b47085a5bdcc443e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be11d16a6ccb50b0aa5ab5a56a0d00a4.def("__getitem__", method_pointer_bff70fc6dcd555ee9c091a41b9835a42, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be11d16a6ccb50b0aa5ab5a56a0d00a4.def("__call__", method_pointer_059f8be874d55cffa43e883ca719bbb5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be11d16a6ccb50b0aa5ab5a56a0d00a4.def("x", method_pointer_bbb26d155201554a9a34328a7d4784ba, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be11d16a6ccb50b0aa5ab5a56a0d00a4.def("y", method_pointer_7e3b0f37f7ae594baa8000440efff122, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be11d16a6ccb50b0aa5ab5a56a0d00a4.def("z", method_pointer_bb38341bdf965524894d77c2a9c64bf9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_be11d16a6ccb50b0aa5ab5a56a0d00a4.def("w", method_pointer_87ea6ce4f2b954de9a5052c52a2b9070, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > > >();
    }

}