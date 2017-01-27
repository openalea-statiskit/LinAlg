#include "_ieigen.h"


namespace autowig
{
}


void wrapper_68b5275406765628b7d7a60ef672e48d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_2fb19dd153745970bbf2b4a066b73c27)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_8d1890d4a7d35490b63a9ea25ec59a6b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::colIndexByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_decf9fec6a1c559f967a695b2a32fa8b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_62534c920a4b531c88ccfe97eff76d90)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::coeffByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_5de0bc228bfe5d1d9273905a14f8cfb8)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_304bfa05415b5bd59eef73db3d3e72d1)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::*method_pointer_3bd84e369bdc5b44839261e8cd7eefa3)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > class_68b5275406765628b7d7a60ef672e48d("_DenseCoeffsBase_68b5275406765628b7d7a60ef672e48d", "", boost::python::no_init);
    class_68b5275406765628b7d7a60ef672e48d.def("row_index_by_outer_inner", method_pointer_2fb19dd153745970bbf2b4a066b73c27, "");
    class_68b5275406765628b7d7a60ef672e48d.def("col_index_by_outer_inner", method_pointer_8d1890d4a7d35490b63a9ea25ec59a6b, "");
    class_68b5275406765628b7d7a60ef672e48d.def("coeff", method_pointer_decf9fec6a1c559f967a695b2a32fa8b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68b5275406765628b7d7a60ef672e48d.def("coeff_by_outer_inner", method_pointer_62534c920a4b531c88ccfe97eff76d90, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68b5275406765628b7d7a60ef672e48d.def("__call__", method_pointer_5de0bc228bfe5d1d9273905a14f8cfb8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68b5275406765628b7d7a60ef672e48d.def("coeff", method_pointer_304bfa05415b5bd59eef73db3d3e72d1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_68b5275406765628b7d7a60ef672e48d.def("__call__", method_pointer_3bd84e369bdc5b44839261e8cd7eefa3, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > >();
    }

}