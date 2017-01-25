#include "_ieigen.h"


namespace autowig
{
}


void wrapper_dd30d6c3f9495389b93ed82ea28d5b7f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_e1958230fd365da3a292da8a6a4de0e9)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_e80d37ada022579ba64035bbcf7035a3)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::colIndexByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_cd4dd71d74905e19bedb36ae812c4452)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_22cee98cc8705256b9a7789a5fc953b1)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::coeffByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_b30c6ac519535a3eb21e7d4f43c531d3)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_2c744546dba15396abab2ae835158cd1)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_c769a7a2a3585c61a8cedb3b013a497d)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::operator[];
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_ce6969e7fcc35f7c97b818b843bced50)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_8604ab171b845ff7bd8e4da04c186799)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::x;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_da6a13762e5e537483382e2dc216a955)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::y;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_350462b32e7b57d58f880dd4f225708a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::z;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_377f4ee84409546783a5846719c93892)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > > > class_dd30d6c3f9495389b93ed82ea28d5b7f("_DenseCoeffsBase_dd30d6c3f9495389b93ed82ea28d5b7f", "", boost::python::no_init);
    class_dd30d6c3f9495389b93ed82ea28d5b7f.def("row_index_by_outer_inner", method_pointer_e1958230fd365da3a292da8a6a4de0e9, "");
    class_dd30d6c3f9495389b93ed82ea28d5b7f.def("col_index_by_outer_inner", method_pointer_e80d37ada022579ba64035bbcf7035a3, "");
    class_dd30d6c3f9495389b93ed82ea28d5b7f.def("coeff", method_pointer_cd4dd71d74905e19bedb36ae812c4452, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dd30d6c3f9495389b93ed82ea28d5b7f.def("coeff_by_outer_inner", method_pointer_22cee98cc8705256b9a7789a5fc953b1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dd30d6c3f9495389b93ed82ea28d5b7f.def("__call__", method_pointer_b30c6ac519535a3eb21e7d4f43c531d3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dd30d6c3f9495389b93ed82ea28d5b7f.def("coeff", method_pointer_2c744546dba15396abab2ae835158cd1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dd30d6c3f9495389b93ed82ea28d5b7f.def("__getitem__", method_pointer_c769a7a2a3585c61a8cedb3b013a497d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dd30d6c3f9495389b93ed82ea28d5b7f.def("__call__", method_pointer_ce6969e7fcc35f7c97b818b843bced50, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dd30d6c3f9495389b93ed82ea28d5b7f.def("x", method_pointer_8604ab171b845ff7bd8e4da04c186799, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dd30d6c3f9495389b93ed82ea28d5b7f.def("y", method_pointer_da6a13762e5e537483382e2dc216a955, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dd30d6c3f9495389b93ed82ea28d5b7f.def("z", method_pointer_350462b32e7b57d58f880dd4f225708a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dd30d6c3f9495389b93ed82ea28d5b7f.def("w", method_pointer_377f4ee84409546783a5846719c93892, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 1, 0, 2, 1 > > > >();
    }

}